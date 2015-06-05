// -*- C++ -*- //

  {
    typedef typename RawType<MemObj>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj &, ObjRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj > const &, ObjRet const & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj > volatile &, ObjRet volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj > const volatile &, ObjRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj const*, ObjRet const & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj volatile*, ObjRet volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj const volatile*, ObjRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<MemObj*, ObjRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj > const*, ObjRet const & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj > volatile*, ObjRet volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj > const volatile*, ObjRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj::*FuncData;
      FuncData fn = &MemObj::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj &, ObjCRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjCRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj > const &, ObjCRet const & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj > volatile &, ObjCRet volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj > const volatile &, ObjCRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj const*, ObjCRet const & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj volatile*, ObjCRet volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj const volatile*, ObjCRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<MemObj*, ObjCRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj > const*, ObjCRet const & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj > volatile*, ObjCRet volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj > const volatile*, ObjCRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj &, ObjVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj > const &, ObjVRet const & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj > volatile &, ObjVRet volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj > const volatile &, ObjVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj const*, ObjVRet const & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj volatile*, ObjVRet volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj const volatile*, ObjVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<MemObj*, ObjVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > const*, ObjVRet const & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > volatile*, ObjVRet volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > const volatile*, ObjVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj &, ObjCVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > &, ObjCVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj > const &, ObjCVRet const & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj > volatile &, ObjCVRet volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj > const volatile &, ObjCVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj const*, ObjCVRet const & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj volatile*, ObjCVRet volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj const volatile*, ObjCVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<MemObj*, ObjCVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > const*, ObjCVRet const & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > volatile*, ObjCVRet volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj > const volatile*, ObjCVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj::*FuncData;
      FuncData fn = &MemObj::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj >*, ObjCVRet & >(fn, obj);
    }
  }
