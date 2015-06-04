#!/usr/bin/python
""" generate_invoke_test.py - Generate the test types and assertions used
to test std::__invoke. This script creates test and support headers under
the generated/ directory that are included inline in the invoke tests.

NOTE: This script is not used as part of the test.
"""
from itertools import product as Product
import os

################################################################################
#                        TEST UTILITYS
################################################################################

class QT(object):
    """QT - A Bitmask represeting CV-Ref qualifiers."""
    NONE = 0
    CONST = 1
    VOLATILE = 2
    CV = CONST | VOLATILE
    LREF = 4
    RREF = 8

    @staticmethod
    def asString(Q):
        Parts = []
        if Q & QT.CONST:    Parts += ["const"]
        if Q & QT.VOLATILE: Parts += ["volatile"]
        if Q & QT.LREF:     Parts += ['&']
        if Q & QT.RREF:     Parts += ['&&']
        return (' '.join(Parts)).strip()


class QualType(object):
    """QualType - A class represeting C++ type and its CV-Ref qualifiers."""
    def __init__(self, Type, Quals=QT.NONE):
        self.Type = Type
        self.Quals = Quals
        assert isinstance(Type, str) and isinstance(Quals, int)
        assert Type != '...' or Quals == QT.NONE
        assert not ((self.Quals & QT.LREF) and (self.Quals & QT.RREF))

    def asString(self):
        return (self.Type + ' ' + QT.asString(self.Quals)).strip()

    def __repr__(self):
        return self.asString()

    def getQuals(self):
        return self.Quals

    def addQuals(self, RHS):
        self.Quals = self.Quals | RHS;

    def removeQuals(self, RHS):
        self.Quals = self.Quals & ~RHS

    def getQualsDeep(self):
        return self.Quals

    def addQualsDeep(self, RHS):
        self.Quals = self.Quals | RHS;

    def removeQualsDeep(self, RHS):
        self.Quals = self.Quals & ~RHS

    def isRef(self):
        return (self.Quals & (QT.LREF | QT.RREF))

    def isPointer(self):
        return False


class PointerType(QualType):
    def __init__(self, Type, Quals=QT.NONE, DeepQuals=QT.NONE):
        super(PointerType, self).__init__(Type, Quals)
        self.DeepQuals = DeepQuals

    def getQualsDeep(self):
        return self.DeepQuals

    def addQualsDeep(self, RHS):
        assert (RHS & (QT.LREF | QT.RREF)) == QT.NONE
        self.DeepQuals = self.DeepQuals | RHS

    def removeQualsDeep(self, RHS):
        assert (RHS & (QT.LREF | QT.RREF)) == Q
        self.DeepQuals = self.DeepQuals & ~RHS

    def isPointer(self):
        return True

    def asString(self):
        Str = (self.Type + ' ' + QT.asString(self.DeepQuals)).strip()
        Str += ('* ' + QT.asString(self.Quals)).strip()
        return Str

    def __repr__(self):
        return self.asString()


class TypeList(object):
    """ TypeList - A class representing a list of C++ types. This class is used
        to represent the parameter types accepted by a function.
    """
    def __init__(self, Types):
        assert isinstance(Types, list) or isinstance(Types, tuple)
        self.Types = list(Types)

    def asTypeListString(self):
        return ', '.join(str(T) for T in self.Types)

    def asParamListString(self):
        Params = []
        for Idx in range(0, len(self.Types)):
            if self.Types[Idx].Type == '...':
                Params += ['...']
                assert Idx == len(self.Types) - 1
                break
            Params += ["%s a%d" % (self.Types[Idx], Idx + 1)]
        return ', '.join(Params)

    def getNamedParams(self):
        """ getNamedParams - Return a list of (Idx, ParamType, ParamName)
            that enumerates all of the parameters that can have names.
            (ie not '...'). The ParamName is the name given to that parameter
            in the function declarator.
        """
        NamedParams = []
        Idx = 1
        for P in self.Types:
            if P.Type == '...':
                break
            NamedParams += [(Idx, P, 'a%d' % Idx)]
            Idx += 1
        return NamedParams

    def __len__(self):
        return len(self.Types)

class FT:
    """FT - An enumeration represeting the different kinds of callable C++
        types.
    """
    Free = 1,
    Object = 2,
    MemberFunc = 3,
    MemberData = 4

class FunctionType(object):
    """FunctionType - A class represeting a C++ function type. FunctionType
        stores the type information for a given functor and is used to declare
        and define the type itself.
    """
    def __init__(self, FuncType, Name, Params, Quals=QT.NONE, Class='', ReturnType=None):
        self.FuncType = FuncType
        self.Name = Name
        self.Params = Params
        self.Class = Class
        self.Quals = Quals
        self.ReturnType = ReturnType if ReturnType is not None else self.makeReturnType()

    def makeReturnType(self):
        """ makeReturnType - Compute the return type of a function based on
            the functions parameters and qualifiers. The return type is an
            instance of "ReturnTag<T>" where T represents the call signature of
            the function without the return type. See ReturnTag<T> in
            invoke_support.hpp for more information.
        """
        assert self.FuncType != FT.MemberData
        FNType = "void(%s) %s" % (self.Params.asTypeListString(),
                                  QT.asString(self.Quals))
        return "ReturnTag<%s>" % FNType.strip()

    def getDeclarator(self):
        """getDeclarator - Return the function declarator without the
            return type.
        """
        return ("%s(%s) %s" % (self.Name, self.Params.asParamListString(),
                              QT.asString(self.Quals))).strip()

    def getBody(self):
        """getBody - Create the body of a test function. The body asserts that
        each call parameter has the expected value (p1=1, p2=2, pi=i ect). When
        creating the body for a member function assert that "this" has the
        expected value (42).
        Construct and return the ReturnTag from the sum of "this" (or 42) and
        every parameter.
        """
        Statements = []
        NamedParams = self.Params.getNamedParams()
        for Idx, PType, PName in NamedParams:
            Statements += ['assert(GetValue(%s) == %d);' % (PName, Idx)]
        FirstParam = '42' if self.FuncType == FT.Free else 'this->value()'
        RetValStr = ', '.join(([FirstParam] +
                               ['GetValue(%s)' % N for _,_,N in NamedParams]))
        Statements += [
            'return %s(%s);' % (self.ReturnType, RetValStr)
        ]
        return Statements

    def getDefinition(self, Indent=0):
        """getDefinition - Create and return a string represeting the
        definition of the function."""
        FunctionStr = """
{Indent}{FunctionReturn}
{Indent}{FunctionSignature} {{
{FunctionBody}
{Indent}}}"""
        StrData = ""
        IndentStr = Indent*' '
        Prefix = IndentStr + '  '
        FuncBodyStr = '\n'.join([Prefix + Ln.strip() for Ln in self.getBody()])
        return FunctionStr.format(
            Indent=IndentStr,
            FunctionReturn=self.ReturnType,
            FunctionSignature=self.getDeclarator(),
            FunctionBody=FuncBodyStr)


class FunctionGroup(object):
    """ FunctionGroup - A group of functions that all share the same
        function type and identifier.
    """
    def __init__(self, FuncList):
        self.FuncList = list(FuncList)
        assert len(FuncList) > 0
        F = FuncList[0]
        self.FuncType = F.FuncType
        self.ID = F.Name if self.FuncType == FT.Free else F.Class

    def __len__(self):
        return len(self.FuncList)

    def asString(self):
        if self.FuncType == FT.Free:
              return ''.join([F.getDefinition() for F in self.FuncList])
        else: return self.getClassDefinition()

    def getClassDefinition(self):
        """getClassDefinition - Print the definition of a specified class that
        contains a set of functions. The generated class meets the requirements
        of a Test Type (see invoke_support.hpp)."""
        FmtStr = """
class {ClassName} {{
    int id;
    {ClassName}({ClassName} const&);
    {ClassName}& operator=({ClassName} const&);

public:
    explicit {ClassName}(int xid) : id(xid) {{}}

    int value() const volatile {{ return id; }}

    // AUTO GENERATED START //
{Functions}
    // AUTO GENERATED END //
}};
"""
        StrData = '\n'.join([F.getDefinition(Indent=4) for F in self.FuncList])
        return FmtStr.format(ClassName=self.ID, Functions=StrData)


def generateParamListsForTypes(Types, QualList):
    """ generateParamListsForTypes - Generate the cartesian product of
        TypeList * QualList.
    """
    def makeQualList(T, QL):
        return [QualType(T, Q) for Q in QL]
    ProductList = Product(*[makeQualList(IT, QualList) for IT in Types])
    return [TypeList(TL) for TL in ProductList]

def generateParamListsForType(Type, QualList, MaxArity=1):
    """ generateParamListsForType - For each N between 1 and MaxArity inclusive
        create a list, "TypeList", containing N Types. For each resulting
        "TypeList" compute the cartesian product of TypeList * Quals. Return
        the union of the products.
    Ex: generateParamListsForType(int, [QT.NONE, QT.CONST], 2) ->
        [(int), (int const),
        (int, int), (int const, int), (int, int const)
    """
    QualParamList = []
    for Idx in range(0,  MaxArity + 1):
        NewTL = Idx*[Type]
        QualParamList += generateParamListsForTypes(NewTL, QualList)
    return QualParamList

def buildFunctions(FunctionTypeList):
    """ buildFunctions - Build the FunctionType and FunctionGroups from the
        tuples specified in Functions03 and Functions11 and return a list of
        FunctionGroups.
    """
    NewList = []
    for Funcs in FunctionTypeList:
        # Split the input tuple into named parts.
        if len(Funcs) == 5: # ReturnType omitted.
            FType, Class, Name, SigList, Quals = Funcs
            ReturnType = None
        else: # ReturnType specified.
            FType, Class, Name, SigList, Quals, ReturnType = Funcs
        # Generate all CV-ref qualified variants for all signatures.
        # This should not be used on free functions.
        FuncSigs = []
        for S, Q in Product(SigList, Quals):
            FuncSigs += [FunctionType(FType, Name, S, Q, Class, ReturnType)]
        # Group the generated functions into a FunctionGroup.
        NewList += [FunctionGroup(FuncSigs)]
    return NewList

################################################################################
#                          TEST LISTS
################################################################################

# Sets of qualifiers
NoQuals       = [QT.NONE]
RefQuals      = [QT.LREF]
RefQuals11    = [QT.LREF, QT.RREF]
CVQuals       = [QT.NONE, QT.CONST, QT.VOLATILE, QT.CV]
CVRefQuals    = [LHS | RHS for LHS, RHS in Product(CVQuals, RefQuals)  ]
CVRefQuals11  = [LHS | RHS for LHS, RHS in Product(CVQuals, RefQuals11)]
CVRRefQuals11 = [LHS | RHS for LHS, RHS in Product(CVQuals, [QT.RREF]) ]
MemObjQuals   = CVQuals
MemObjQuals11 = [LHS | RHS for LHS, RHS in Product(CVQuals, [QT.NONE, QT.RREF]) ]

# Sets of call signatures for a type, cv-qual list and arity.
# (ex. ValueSignaturesA2 = [(Tag1), (Tag1, Tag1)])
# NOTE: STag1 is a "strict" tag. It cannot be copied or moved.
ValueSignaturesA2    = generateParamListsForType('Tag1', NoQuals, 2)
ValueSignaturesA3    = generateParamListsForType('Tag1', NoQuals, 3)
RefSignaturesA2      = generateParamListsForType('STag1', CVRefQuals, 2)
RefSignaturesA3      = generateParamListsForType('STag1', CVRefQuals, 3)
RefSignatures11A2    = generateParamListsForType('STag1', CVRefQuals11, 2)
RefSignatures11A3    = generateParamListsForType('STag1', CVRefQuals11, 3)
IntSignaturesA2      = generateParamListsForType('int', NoQuals, 2)
IntSignaturesA3      = generateParamListsForType('int', NoQuals, 3)
VASignaturesA0       = generateParamListsForTypes(['...'], NoQuals)
VASignaturesA1       = generateParamListsForTypes(['int', '...'], NoQuals)
VASignaturesA2       = generateParamListsForTypes(['int', 'int', '...'], NoQuals)
VASignaturesA3       = generateParamListsForTypes(['int', 'int', 'int', '...'], NoQuals)
MemObjSignatures     = [TypeList([])]

# List of automatically generated function types. For each generated function
# overload test that it can be called via __invoke.
Functions03 = buildFunctions([
    # (Function Type)   (Class Name)         (Function Name)        (Signature List)    (Func Qualifiers)
    (FT.Free,           '',                 'FreeFunctionValue',    ValueSignaturesA3,  NoQuals),
    (FT.Free,           '',                 'FreeFunctionRef03',    RefSignaturesA3,    NoQuals),
    (FT.Free,           '',                 'VAFunctionA0',         VASignaturesA0,     NoQuals),
    (FT.Free,           '',                 'VAFunctionA1',         VASignaturesA1,     NoQuals),
    (FT.Free,           '',                 'VAFunctionA2',         VASignaturesA2,     NoQuals),
    (FT.Free,           '',                 'VAFunctionA3',         VASignaturesA3,     NoQuals),
    (FT.MemberFunc,     'MemberFuncValue',  'Member',               ValueSignaturesA2,  CVQuals),
    (FT.MemberFunc,     'MemberFuncRef03',  'Member',               RefSignaturesA2,    CVQuals),
    (FT.MemberFunc,     'MemberFuncVA0',    'Member',               VASignaturesA0,     CVQuals),
    (FT.MemberFunc,     'MemberFuncVA1',    'Member',               VASignaturesA1,     CVQuals),
    (FT.MemberFunc,     'MemberFuncVA2',    'Member',               VASignaturesA2,     CVQuals),
    (FT.Object,         'ValueFunctor',     'operator()',           ValueSignaturesA3,  CVQuals),
    (FT.Object,         'RefFunctor03',     'operator()',           RefSignaturesA3,    CVQuals),
    (FT.Object,         'FunctorVA0',       'operator()',           VASignaturesA0,     CVQuals),
    (FT.Object,         'FunctorVA1',       'operator()',           VASignaturesA1,     CVQuals),
    (FT.Object,         'FunctorVA2',       'operator()',           VASignaturesA2,     CVQuals),
    (FT.Object,         'FunctorVA3',       'operator()',           VASignaturesA3,     CVQuals),
])
Functions11 = buildFunctions([
    # (Function Type)   (Class Name)         (Function Name)        (Signature List)   (Func Qualifiers)
    (FT.Free,           '',                  'FreeFunctionRef11',   RefSignatures11A3, NoQuals),
    (FT.MemberFunc,     'MemberFuncRef11',   'Member',              RefSignatures11A2, CVRefQuals11),
    (FT.MemberFunc,     'MemberFuncLRef11',  'Member',              RefSignatures11A2, CVRefQuals),
    (FT.Object,         'RefFunctor11',      'operator()',          RefSignatures11A2, CVRefQuals11),
    (FT.Object,         'RRefFunctor11',     'operator()',          RefSignatures11A2, CVRRefQuals11),
    (FT.Object,         'VAFunctor11',       'operator()',          VASignaturesA0,    CVRefQuals11)
])
GeneratedFunctions03 = list(Functions03)
GeneratedFunctions11 = list(Functions11)

# List of functions that exist in invoke_support.hpp and need to be tested.
Functions03 = Functions03 + buildFunctions([
    # (Function Type) (Class)   (Name)   (Signature List)  (Func Quals) (Return Type)
    (FT.MemberData,   'MemObj', 'Obj',   MemObjSignatures, MemObjQuals, 'ObjRet'),
    (FT.MemberData,   'MemObj', 'ObjC',  MemObjSignatures, MemObjQuals, 'ObjCRet'),
    (FT.MemberData,   'MemObj', 'ObjV',  MemObjSignatures, MemObjQuals, 'ObjVRet'),
    (FT.MemberData,   'MemObj', 'ObjCV', MemObjSignatures, MemObjQuals, 'ObjCVRet'),
])
Functions11 = Functions11 + buildFunctions([
    # (Function Type) (Class)   (Name)     (Signature List)  (Func Quals)   (Return Type)
    (FT.MemberData,   'MemObj11', 'Obj',   MemObjSignatures, MemObjQuals11, 'ObjRet'),
    (FT.MemberData,   'MemObj11', 'ObjC',  MemObjSignatures, MemObjQuals11, 'ObjCRet'),
    (FT.MemberData,   'MemObj11', 'ObjV',  MemObjSignatures, MemObjQuals11, 'ObjVRet'),
    (FT.MemberData,   'MemObj11', 'ObjCV', MemObjSignatures, MemObjQuals11, 'ObjCVRet'),
    # (Function Type) (Class)             (Name)         (Signature List)  (Func Quals)
    (FT.Object,       'FunctorForward11', 'operator()',  RefSignatures11A3, CVRefQuals11)
])

IDMap = {Ovl.ID: Ovl for Ovl in Functions03 + Functions11}

# Generate tests that call each function in a function group with an additional
# set of arguments.
Bullet5ExtraTests = [
#   (FunctionGroup)         (list(TypeList))
    (IDMap['VAFunctionA0'], IntSignaturesA3),
    (IDMap['VAFunctionA1'], [S for S in IntSignaturesA3 if len(S) >= 1]),
    (IDMap['VAFunctionA2'], [S for S in IntSignaturesA3 if len(S) >= 2]),
    (IDMap['VAFunctionA3'], [S for S in IntSignaturesA3 if len(S) >= 3]),
    (IDMap['FunctorVA0'],   IntSignaturesA3),
    (IDMap['FunctorVA1'],   [S for S in IntSignaturesA3 if len(S) >= 1]),
    (IDMap['FunctorVA2'],   [S for S in IntSignaturesA3 if len(S) >= 2]),
    (IDMap['FunctorVA3'],   [S for S in IntSignaturesA3 if len(S) >= 3])
]
Bullet5ExtraTests11 = [
    (IDMap['VAFunctor11'], IntSignaturesA3)
]

################################################################################
#                            TEST GENERATION
################################################################################

def makeTestSubs(Func, CallParams=None, ObjType=None, PropCV=False, PropRef=False):
    """makeTestSubs - Create a dict containing format string subsitutions.
       The map contains all the keys needed to generate the invoke test
       assertions.
    """
    CallParams = CallParams if CallParams else Func.Params
    if len(CallParams) > 0 and CallParams.Types[-1].Type == '...':
        CallParams = TypeList(CallParams.Types[:-1])
    if ObjType is not None:
        if isinstance(ObjType, PointerType):
            ObjType = PointerType(ObjType.Type, ObjType.Quals, ObjType.DeepQuals)
        elif isinstance(ObjType, QualType):
            ObjType = QualType(ObjType.Type, ObjType.Quals)
        else: assert False
        if PropCV:
            OldQuals = ObjType.getQualsDeep() & QT.CV
            NewQuals = OldQuals | (Func.Quals & QT.CV)
            ObjType.addQualsDeep(NewQuals)
        if PropRef and not ObjType.isPointer():
            ObjType.addQuals(Func.Quals & (QT.LREF | QT.RREF))
            assert not ((ObjType.getQuals() & QT.LREF) and (ObjType.getQuals() & QT.RREF))
        if PropRef and not ObjType.isRef() and not ObjType.isPointer():
            ObjType.addQuals(QT.LREF)
    else:
        ObjType = QualType('BAD TYPE AAA!!')
    if Func.FuncType == FT.MemberData:
        ReturnType = Func.ReturnType
        QualReturnType = QualType(ReturnType)
        if PropCV:
            QualReturnType.addQuals(Func.Quals & QT.CV)
        if PropRef and not ObjType.isPointer():
            QualReturnType.addQuals(Func.Quals & (QT.LREF | QT.RREF))
        if not QualReturnType.isRef():
            QualReturnType.addQuals(QT.LREF)
    else:
        ReturnType = ('void(%s) %s' % (Func.Params.asTypeListString(),
                                   QT.asString(Func.Quals))).strip()
        ReturnType = 'ReturnTag<%s>' % ReturnType
        QualReturnType = ReturnType
    return {
        'ReturnType': Func.ReturnType,
        'Name': Func.Name,
        'Class': Func.Class,
        'ObjType': ObjType.asString(),
        'FuncQuals': QT.asString(Func.Quals),
        'FuncParams':Func.Params.asTypeListString(),
        'FuncParamsComma':',' if Func.Params else '',
        'CallParams':CallParams.asTypeListString(),
        'CallParamsComma':',' if CallParams else '',
        'QualReturnType': QualReturnType,
    }

def formatBullet5Test(CallParamList):
    """ formatBullet5Test - format a list of bullet 5 tests.
    """
    FFAssertFmt = """
  {{
    typedef {ReturnType} (FuncType)({FuncParams});
    FuncType& fn = {Name};
    FuncType* fnp = {Name};
    bullet_five_assert<FuncType*, {CallParams}{CallParamsComma} {ReturnType} >(fn);
    bullet_five_assert<FuncType&, {CallParams}{CallParamsComma} {ReturnType} >(fn);
    bullet_five_assert<FuncType*&, {CallParams}{CallParamsComma} {ReturnType} >(fnp);
    bullet_five_assert<FuncType* const&, {CallParams}{CallParamsComma} {ReturnType} >(fnp);
    bullet_five_assert<FuncType* volatile&, {CallParams}{CallParamsComma} {ReturnType} >(fnp);
    bullet_five_assert<FuncType* const volatile&, {CallParams}{CallParamsComma} {ReturnType} >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, {CallParams}{CallParamsComma} {ReturnType} >(fn);
    bullet_five_assert<FuncType*&&, {CallParams}{CallParamsComma} {ReturnType} >(fnp);
    bullet_five_assert<FuncType* const&&, {CallParams}{CallParamsComma} {ReturnType} >(fnp);
    bullet_five_assert<FuncType* volatile&&, {CallParams}{CallParamsComma} {ReturnType} >(fnp);
    bullet_five_assert<FuncType* const volatile&&, {CallParams}{CallParamsComma} {ReturnType} >(fnp);
#endif
  }}"""
    FTAssertFmt = "    bullet_five_assert<{ObjType},{CallParams}{CallParamsComma} {ReturnType} >(fn);"
    FTTestScopeFmt = """
  {{
    {Class} fn(makeTestType<{Class}>(42));
{Assertions}
  }}"""
    F0, _ = CallParamList[0]
    FuncType = F0.FuncType
    Class = F0.Class
    if FuncType == FT.Free:
        return ''.join([FFAssertFmt.format(
            **makeTestSubs(F, CP)) for F, CP in CallParamList])
    elif FuncType == FT.Object:
        Asserts = [FTAssertFmt.format(
            **makeTestSubs(F, CP, ObjType=QualType(F.Class),
                           PropCV=True, PropRef=True))
            for F, CP in CallParamList]
        return FTTestScopeFmt.format(
            Class=Class, Assertions='\n'.join(Asserts))
    assert False

def formatBullet12Test(Funcs, Object, PropCV=True, PropRef=True):
    """ formatBullet12Test - format a list of bullet 1 and 2 tests
    """
    AssertFmt = """
    {{
      typedef {ReturnType} ({Class}::*FuncType)({FuncParams}) {FuncQuals};
      FuncType fn = &{Class}::{Name};
      bullet_one_and_two_assert<{ObjType}, {CallParams}{CallParamsComma} {ReturnType} >(fn, obj);
    }}"""
    ScopeFmt = """
  {{
    typedef typename RawType<{ObjType}>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    {Asserts}
  }}"""
    if not isinstance(Object, QualType):
        Object = QualType(Object)
    Asserts = [AssertFmt.format(
        **makeTestSubs(F, ObjType=Object,
                   PropCV=PropCV, PropRef=PropRef)) for F in Funcs]
    return ScopeFmt.format(ObjType=Object, Asserts=''.join(Asserts))


def formatBullet34Test(Funcs, Object, PropCV=False, PropRef=True):
    """ formatBullet12Test - format a list of bullet 1 and 2 tests
    """
    AssertFmt = """
    {{
      typedef {ReturnType} {Class}::*FuncData;
      FuncData fn = &{Class}::{Name};
      bullet_three_and_four_assert<{ObjType}, {QualReturnType} >(fn, obj);
    }}"""
    ScopeFmt = """
  {{
    typedef typename RawType<{ObjType}>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    {Asserts}
  }}"""
    if not isinstance(Object, QualType):
        Object = QualType(Object)
    Asserts = [AssertFmt.format(
        **makeTestSubs(F, ObjType=Object,
                   PropCV=PropCV, PropRef=PropRef)) for F in Funcs]
    return ScopeFmt.format(ObjType=Object.asString(),
                           Asserts=''.join(Asserts))

def main():
    def writeCXXFile(FileName, Data):
        with open(FileName, 'w') as f:
            f.write('// -*- C++ -*- //\n%s\n' % Data)
    ############################################################################
    # Write Support Headers
    ############################################################################
    writeCXXFile('invoke-support-cxx03.inl',
                 ''.join([F.asString() for F in GeneratedFunctions03]))
    writeCXXFile('invoke-support-cxx11.inl',
                 ''.join([F.asString() for F in GeneratedFunctions11]))
    ############################################################################
    # Write bullet 1 and 2 tests
    ############################################################################
    def writeBullet12Tests(FuncList, Std):
        Scopes = []
        for FunctionOverloads in FuncList:
            if FunctionOverloads.FuncType != FT.MemberFunc:
                continue
            Funcs = FunctionOverloads.FuncList
            Class = Funcs[0].Class
            Scopes += formatBullet12Test(Funcs, Class)
            Scopes += formatBullet12Test(Funcs, "DerivedFrom<%s >" % Class)
            Scopes += formatBullet12Test(Funcs, "DerefToProp<%s >" % Class)
            # TODO: Fix this
            #Scopes += formatBullet12Test(Funcs, PointerType(Class),
            #                             PropCV=True, PropRef=True)
            # Test CallableObject types that provide operator*() and  do not
            # propagate their top level CV-Ref qualifiers.
            if Std == 3:
                # Test CallObject = DerefTo<Base>
                Scopes += formatBullet12Test(Funcs, "DerefTo<%s >" % Class,
                                             PropCV=False, PropRef=False)
                # Test CallObject = Base*
                Scopes += formatBullet12Test(Funcs, PointerType(Class))
                # Test CallObject = Derived*
                Scopes += formatBullet12Test(Funcs, PointerType("DerivedFrom<%s >" % Class))
        return ''.join(Scopes)
    writeCXXFile('bullet12-cxx03.inl', writeBullet12Tests(Functions03, 3))
    writeCXXFile('bullet12-cxx11.inl', writeBullet12Tests(Functions11, 11))
    ############################################################################
    # Write Bullet 3 and 4 Tests
    ############################################################################
    def writeBullet34Tests(FuncList, Std):
        Scopes = []
        for FunctionOverloads in FuncList:
            if FunctionOverloads.FuncType != FT.MemberData:
                continue
            Funcs = FunctionOverloads.FuncList
            Class = Funcs[0].Class
            Scopes += formatBullet34Test(Funcs, Class)
            Scopes += formatBullet34Test(Funcs, "DerivedFrom<%s >" % Class)
            Scopes += formatBullet34Test(Funcs, "DerefToProp<%s >" % Class,
                                         PropCV=False, PropRef=True)
            Scopes += formatBullet34Test(Funcs, "DerefToProp<%s >" % Class,
                                         PropCV=True, PropRef=True)
            # Test CallObject = DerefTo<Base>
            #Scopes += formatBullet34Test(Funcs, "DerefTo<%s >" % Class,
            #                             PropCV=False, PropRef=False)
            # Test CallObject = Base*
            Scopes += formatBullet34Test(
                Funcs, PointerType(Class),
                PropCV=True, PropRef=True)
            Scopes += formatBullet34Test(
                Funcs, PointerType(Class),
                PropCV=False, PropRef=True)
            # Test CallObject = Derived*
            Obj = "DerivedFrom<%s >" % Class
            Scopes += formatBullet34Test(
                Funcs, PointerType(Obj),
                PropCV=True, PropRef=True)
            Scopes += formatBullet34Test(
                Funcs, PointerType(Obj),
                PropCV=False, PropRef=False)
        return ''.join(Scopes)
    writeCXXFile('bullet34-cxx03.inl', writeBullet34Tests(Functions03, 3))
    writeCXXFile('bullet34-cxx11.inl', writeBullet34Tests(Functions11, 11))
    ############################################################################
    # Write Bullet  5 Tests
    ############################################################################
    def writeBullet5Tests(OverloadSets, Extras):
        StrData = ""
        for Ovl in OverloadSets:
            if Ovl.FuncType != FT.Free and Ovl.FuncType != FT.Object:
                continue
            CallParamList = [(F, F.Params) for F in Ovl.FuncList]
            StrData += formatBullet5Test(CallParamList)
        for FuncGroup, CallParams in Extras:
            CallParamsList = []
            for Func in FuncGroup.FuncList:
                CallParamsList += [(Func, CP) for CP in CallParams]
            StrData += formatBullet5Test(CallParamsList)
        return StrData
    writeCXXFile('bullet5-cxx03.inl', writeBullet5Tests(Functions03, Bullet5ExtraTests))
    writeCXXFile('bullet5-cxx11.inl', writeBullet5Tests(Functions11, Bullet5ExtraTests11))

if __name__ == '__main__':
    mydir = os.path.dirname(__file__)
    os.chdir(mydir)
    main()
