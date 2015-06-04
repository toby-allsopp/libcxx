// -*- C++ -*- //

  {
    typedef typename RawType<MemObj11>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 &&, ObjRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjRet && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const &, ObjRet const & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const &&, ObjRet const && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > volatile &, ObjRet volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > volatile &&, ObjRet volatile && >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const volatile &, ObjRet const volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const volatile &&, ObjRet const volatile && >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 const*, ObjRet const & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 const*, ObjRet const & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 volatile*, ObjRet volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 volatile*, ObjRet volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 const volatile*, ObjRet const volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11 const volatile*, ObjRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<MemObj11*, ObjRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const*, ObjRet const & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const*, ObjRet const & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > volatile*, ObjRet volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > volatile*, ObjRet volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const volatile*, ObjRet const volatile & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const volatile*, ObjRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
    {
      typedef ObjRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::Obj;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 &&, ObjCRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCRet && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const &, ObjCRet const & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const &&, ObjCRet const && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > volatile &, ObjCRet volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > volatile &&, ObjCRet volatile && >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const volatile &, ObjCRet const volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const volatile &&, ObjCRet const volatile && >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 const*, ObjCRet const & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 const*, ObjCRet const & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 volatile*, ObjCRet volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 volatile*, ObjCRet volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 const volatile*, ObjCRet const volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11 const volatile*, ObjCRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<MemObj11*, ObjCRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const*, ObjCRet const & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const*, ObjCRet const & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > volatile*, ObjCRet volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > volatile*, ObjCRet volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const volatile*, ObjCRet const volatile & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const volatile*, ObjCRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
    {
      typedef ObjCRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjC;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 &&, ObjVRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjVRet && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const &, ObjVRet const & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const &&, ObjVRet const && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > volatile &, ObjVRet volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > volatile &&, ObjVRet volatile && >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const volatile &, ObjVRet const volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const volatile &&, ObjVRet const volatile && >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 const*, ObjVRet const & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 const*, ObjVRet const & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 volatile*, ObjVRet volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 volatile*, ObjVRet volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 const volatile*, ObjVRet const volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11 const volatile*, ObjVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<MemObj11*, ObjVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const*, ObjVRet const & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const*, ObjVRet const & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > volatile*, ObjVRet volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > volatile*, ObjVRet volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const volatile*, ObjVRet const volatile & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const volatile*, ObjVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
    {
      typedef ObjVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 &&, ObjCVRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemObj11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > &&, ObjCVRet && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const &, ObjCVRet const & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const &&, ObjCVRet const && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > volatile &, ObjCVRet volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > volatile &&, ObjCVRet volatile && >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const volatile &, ObjCVRet const volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerefToProp<MemObj11 > const volatile &&, ObjCVRet const volatile && >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 const*, ObjCVRet const & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 const*, ObjCVRet const & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 volatile*, ObjCVRet volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 volatile*, ObjCVRet volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 const volatile*, ObjCVRet const volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11 const volatile*, ObjCVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemObj11*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<MemObj11*, ObjCVRet & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const*, ObjCVRet const & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const*, ObjCVRet const & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > volatile*, ObjCVRet volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > volatile*, ObjCVRet volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const volatile*, ObjCVRet const volatile & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 > const volatile*, ObjCVRet const volatile & >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemObj11 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
    {
      typedef ObjCVRet MemObj11::*FuncData;
      FuncData fn = &MemObj11::ObjCV;
      bullet_three_and_four_assert<DerivedFrom<MemObj11 >*, ObjCVRet & >(fn, obj);
    }
  }
