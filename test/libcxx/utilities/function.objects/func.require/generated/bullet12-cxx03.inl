// -*- C++ -*- //

  {
    typedef typename RawType<MemberFuncValue>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncValue::*FuncType)() ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue &,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncValue::*FuncType)() const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const &,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncValue::*FuncType)() volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue volatile &,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncValue::*FuncType)() const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const volatile &,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1)> (MemberFuncValue::*FuncType)(Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue &, Tag1, ReturnTag<void(Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const> (MemberFuncValue::*FuncType)(Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const &, Tag1, ReturnTag<void(Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue volatile &, Tag1, ReturnTag<void(Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const volatile &, Tag1, ReturnTag<void(Tag1) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1)> (MemberFuncValue::*FuncType)(Tag1, Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const> (MemberFuncValue::*FuncType)(Tag1, Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue volatile &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const volatile &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncValue >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncValue::*FuncType)() ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > &,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncValue::*FuncType)() const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const &,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncValue::*FuncType)() volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > volatile &,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncValue::*FuncType)() const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const volatile &,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1)> (MemberFuncValue::*FuncType)(Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > &, Tag1, ReturnTag<void(Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const> (MemberFuncValue::*FuncType)(Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const &, Tag1, ReturnTag<void(Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > volatile &, Tag1, ReturnTag<void(Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const volatile &, Tag1, ReturnTag<void(Tag1) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1)> (MemberFuncValue::*FuncType)(Tag1, Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const> (MemberFuncValue::*FuncType)(Tag1, Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > volatile &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const volatile &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemberFuncValue >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncValue::*FuncType)() ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > &,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncValue::*FuncType)() const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > const &,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncValue::*FuncType)() volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > volatile &,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncValue::*FuncType)() const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > const volatile &,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1)> (MemberFuncValue::*FuncType)(Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > &, Tag1, ReturnTag<void(Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const> (MemberFuncValue::*FuncType)(Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > const &, Tag1, ReturnTag<void(Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > volatile &, Tag1, ReturnTag<void(Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > const volatile &, Tag1, ReturnTag<void(Tag1) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1)> (MemberFuncValue::*FuncType)(Tag1, Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const> (MemberFuncValue::*FuncType)(Tag1, Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > const &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > volatile &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncValue > const volatile &, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefTo<MemberFuncValue >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncValue::*FuncType)() ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncValue::*FuncType)() const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncValue::*FuncType)() volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncValue::*FuncType)() const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1)> (MemberFuncValue::*FuncType)(Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >, Tag1, ReturnTag<void(Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const> (MemberFuncValue::*FuncType)(Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >, Tag1, ReturnTag<void(Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >, Tag1, ReturnTag<void(Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >, Tag1, ReturnTag<void(Tag1) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1)> (MemberFuncValue::*FuncType)(Tag1, Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const> (MemberFuncValue::*FuncType)(Tag1, Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncValue >, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncValue*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncValue::*FuncType)() ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue*,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncValue::*FuncType)() const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const*,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncValue::*FuncType)() volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue volatile*,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncValue::*FuncType)() const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const volatile*,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1)> (MemberFuncValue::*FuncType)(Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue*, Tag1, ReturnTag<void(Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const> (MemberFuncValue::*FuncType)(Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const*, Tag1, ReturnTag<void(Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue volatile*, Tag1, ReturnTag<void(Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const volatile*, Tag1, ReturnTag<void(Tag1) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1)> (MemberFuncValue::*FuncType)(Tag1, Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const> (MemberFuncValue::*FuncType)(Tag1, Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue volatile*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<MemberFuncValue const volatile*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncValue >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncValue::*FuncType)() ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue >*,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncValue::*FuncType)() const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const*,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncValue::*FuncType)() volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > volatile*,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncValue::*FuncType)() const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const volatile*,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1)> (MemberFuncValue::*FuncType)(Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue >*, Tag1, ReturnTag<void(Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const> (MemberFuncValue::*FuncType)(Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const*, Tag1, ReturnTag<void(Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > volatile*, Tag1, ReturnTag<void(Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const volatile*, Tag1, ReturnTag<void(Tag1) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1)> (MemberFuncValue::*FuncType)(Tag1, Tag1) ;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue >*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const> (MemberFuncValue::*FuncType)(Tag1, Tag1) const;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > volatile*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(Tag1, Tag1) const volatile> (MemberFuncValue::*FuncType)(Tag1, Tag1) const volatile;
      FuncType fn = &MemberFuncValue::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncValue > const volatile*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncRef03>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncRef03::*FuncType)() ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncRef03::*FuncType)() const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncRef03::*FuncType)() volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncRef03::*FuncType)() const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 &, ReturnTag<void(STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 &, ReturnTag<void(STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 &, ReturnTag<void(STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const &, ReturnTag<void(STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const &, ReturnTag<void(STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncRef03 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncRef03::*FuncType)() ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncRef03::*FuncType)() const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncRef03::*FuncType)() volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncRef03::*FuncType)() const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 &, ReturnTag<void(STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 &, ReturnTag<void(STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 &, ReturnTag<void(STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const &, ReturnTag<void(STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const &, ReturnTag<void(STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemberFuncRef03 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncRef03::*FuncType)() ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncRef03::*FuncType)() const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncRef03::*FuncType)() volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncRef03::*FuncType)() const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 &, ReturnTag<void(STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 &, ReturnTag<void(STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 &, ReturnTag<void(STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const &, ReturnTag<void(STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const &, ReturnTag<void(STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef03 > const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefTo<MemberFuncRef03 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncRef03::*FuncType)() ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncRef03::*FuncType)() const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncRef03::*FuncType)() volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncRef03::*FuncType)() const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, ReturnTag<void(STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, ReturnTag<void(STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, ReturnTag<void(STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, ReturnTag<void(STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, ReturnTag<void(STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, ReturnTag<void(STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, ReturnTag<void(STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, ReturnTag<void(STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, ReturnTag<void(STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncRef03 >, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncRef03*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncRef03::*FuncType)() ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncRef03::*FuncType)() const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncRef03::*FuncType)() volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncRef03::*FuncType)() const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 &, ReturnTag<void(STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 &, ReturnTag<void(STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 &, ReturnTag<void(STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 &, ReturnTag<void(STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const &, ReturnTag<void(STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const &, ReturnTag<void(STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const &, ReturnTag<void(STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const &, ReturnTag<void(STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 volatile &, ReturnTag<void(STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 volatile*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<MemberFuncRef03 const volatile*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncRef03 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void()> (MemberFuncRef03::*FuncType)() ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*,  ReturnTag<void()> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const> (MemberFuncRef03::*FuncType)() const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*,  ReturnTag<void() const> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile> (MemberFuncRef03::*FuncType)() volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*,  ReturnTag<void() volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile> (MemberFuncRef03::*FuncType)() const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*,  ReturnTag<void() const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 &, ReturnTag<void(STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 &, ReturnTag<void(STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 &, ReturnTag<void(STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 &, ReturnTag<void(STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const &, ReturnTag<void(STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const &, ReturnTag<void(STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const &, ReturnTag<void(STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const &, ReturnTag<void(STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 volatile &, ReturnTag<void(STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) ;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 >*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > volatile*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> (MemberFuncRef03::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile;
      FuncType fn = &MemberFuncRef03::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef03 > const volatile*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncVA0>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(...)> (MemberFuncVA0::*FuncType)(...) ;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<MemberFuncVA0 &,  ReturnTag<void(...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const> (MemberFuncVA0::*FuncType)(...) const;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<MemberFuncVA0 const &,  ReturnTag<void(...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) volatile> (MemberFuncVA0::*FuncType)(...) volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<MemberFuncVA0 volatile &,  ReturnTag<void(...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const volatile> (MemberFuncVA0::*FuncType)(...) const volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<MemberFuncVA0 const volatile &,  ReturnTag<void(...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncVA0 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(...)> (MemberFuncVA0::*FuncType)(...) ;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA0 > &,  ReturnTag<void(...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const> (MemberFuncVA0::*FuncType)(...) const;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA0 > const &,  ReturnTag<void(...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) volatile> (MemberFuncVA0::*FuncType)(...) volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA0 > volatile &,  ReturnTag<void(...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const volatile> (MemberFuncVA0::*FuncType)(...) const volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA0 > const volatile &,  ReturnTag<void(...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemberFuncVA0 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(...)> (MemberFuncVA0::*FuncType)(...) ;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA0 > &,  ReturnTag<void(...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const> (MemberFuncVA0::*FuncType)(...) const;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA0 > const &,  ReturnTag<void(...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) volatile> (MemberFuncVA0::*FuncType)(...) volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA0 > volatile &,  ReturnTag<void(...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const volatile> (MemberFuncVA0::*FuncType)(...) const volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA0 > const volatile &,  ReturnTag<void(...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefTo<MemberFuncVA0 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(...)> (MemberFuncVA0::*FuncType)(...) ;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA0 >,  ReturnTag<void(...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const> (MemberFuncVA0::*FuncType)(...) const;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA0 >,  ReturnTag<void(...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) volatile> (MemberFuncVA0::*FuncType)(...) volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA0 >,  ReturnTag<void(...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const volatile> (MemberFuncVA0::*FuncType)(...) const volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA0 >,  ReturnTag<void(...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncVA0*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(...)> (MemberFuncVA0::*FuncType)(...) ;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<MemberFuncVA0*,  ReturnTag<void(...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const> (MemberFuncVA0::*FuncType)(...) const;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<MemberFuncVA0 const*,  ReturnTag<void(...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) volatile> (MemberFuncVA0::*FuncType)(...) volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<MemberFuncVA0 volatile*,  ReturnTag<void(...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const volatile> (MemberFuncVA0::*FuncType)(...) const volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<MemberFuncVA0 const volatile*,  ReturnTag<void(...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncVA0 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(...)> (MemberFuncVA0::*FuncType)(...) ;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA0 >*,  ReturnTag<void(...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const> (MemberFuncVA0::*FuncType)(...) const;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA0 > const*,  ReturnTag<void(...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) volatile> (MemberFuncVA0::*FuncType)(...) volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA0 > volatile*,  ReturnTag<void(...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(...) const volatile> (MemberFuncVA0::*FuncType)(...) const volatile;
      FuncType fn = &MemberFuncVA0::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA0 > const volatile*,  ReturnTag<void(...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncVA1>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, ...)> (MemberFuncVA1::*FuncType)(int, ...) ;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<MemberFuncVA1 &, int, ReturnTag<void(int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const> (MemberFuncVA1::*FuncType)(int, ...) const;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<MemberFuncVA1 const &, int, ReturnTag<void(int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) volatile> (MemberFuncVA1::*FuncType)(int, ...) volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<MemberFuncVA1 volatile &, int, ReturnTag<void(int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const volatile> (MemberFuncVA1::*FuncType)(int, ...) const volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<MemberFuncVA1 const volatile &, int, ReturnTag<void(int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncVA1 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, ...)> (MemberFuncVA1::*FuncType)(int, ...) ;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA1 > &, int, ReturnTag<void(int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const> (MemberFuncVA1::*FuncType)(int, ...) const;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA1 > const &, int, ReturnTag<void(int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) volatile> (MemberFuncVA1::*FuncType)(int, ...) volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA1 > volatile &, int, ReturnTag<void(int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const volatile> (MemberFuncVA1::*FuncType)(int, ...) const volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA1 > const volatile &, int, ReturnTag<void(int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemberFuncVA1 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, ...)> (MemberFuncVA1::*FuncType)(int, ...) ;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA1 > &, int, ReturnTag<void(int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const> (MemberFuncVA1::*FuncType)(int, ...) const;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA1 > const &, int, ReturnTag<void(int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) volatile> (MemberFuncVA1::*FuncType)(int, ...) volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA1 > volatile &, int, ReturnTag<void(int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const volatile> (MemberFuncVA1::*FuncType)(int, ...) const volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA1 > const volatile &, int, ReturnTag<void(int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefTo<MemberFuncVA1 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, ...)> (MemberFuncVA1::*FuncType)(int, ...) ;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA1 >, int, ReturnTag<void(int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const> (MemberFuncVA1::*FuncType)(int, ...) const;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA1 >, int, ReturnTag<void(int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) volatile> (MemberFuncVA1::*FuncType)(int, ...) volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA1 >, int, ReturnTag<void(int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const volatile> (MemberFuncVA1::*FuncType)(int, ...) const volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA1 >, int, ReturnTag<void(int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncVA1*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, ...)> (MemberFuncVA1::*FuncType)(int, ...) ;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<MemberFuncVA1*, int, ReturnTag<void(int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const> (MemberFuncVA1::*FuncType)(int, ...) const;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<MemberFuncVA1 const*, int, ReturnTag<void(int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) volatile> (MemberFuncVA1::*FuncType)(int, ...) volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<MemberFuncVA1 volatile*, int, ReturnTag<void(int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const volatile> (MemberFuncVA1::*FuncType)(int, ...) const volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<MemberFuncVA1 const volatile*, int, ReturnTag<void(int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncVA1 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, ...)> (MemberFuncVA1::*FuncType)(int, ...) ;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA1 >*, int, ReturnTag<void(int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const> (MemberFuncVA1::*FuncType)(int, ...) const;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA1 > const*, int, ReturnTag<void(int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) volatile> (MemberFuncVA1::*FuncType)(int, ...) volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA1 > volatile*, int, ReturnTag<void(int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, ...) const volatile> (MemberFuncVA1::*FuncType)(int, ...) const volatile;
      FuncType fn = &MemberFuncVA1::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA1 > const volatile*, int, ReturnTag<void(int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncVA2>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, int, ...)> (MemberFuncVA2::*FuncType)(int, int, ...) ;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<MemberFuncVA2 &, int, int, ReturnTag<void(int, int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const> (MemberFuncVA2::*FuncType)(int, int, ...) const;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<MemberFuncVA2 const &, int, int, ReturnTag<void(int, int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) volatile> (MemberFuncVA2::*FuncType)(int, int, ...) volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<MemberFuncVA2 volatile &, int, int, ReturnTag<void(int, int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const volatile> (MemberFuncVA2::*FuncType)(int, int, ...) const volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<MemberFuncVA2 const volatile &, int, int, ReturnTag<void(int, int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncVA2 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, int, ...)> (MemberFuncVA2::*FuncType)(int, int, ...) ;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA2 > &, int, int, ReturnTag<void(int, int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const> (MemberFuncVA2::*FuncType)(int, int, ...) const;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA2 > const &, int, int, ReturnTag<void(int, int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) volatile> (MemberFuncVA2::*FuncType)(int, int, ...) volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA2 > volatile &, int, int, ReturnTag<void(int, int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const volatile> (MemberFuncVA2::*FuncType)(int, int, ...) const volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA2 > const volatile &, int, int, ReturnTag<void(int, int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemberFuncVA2 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, int, ...)> (MemberFuncVA2::*FuncType)(int, int, ...) ;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA2 > &, int, int, ReturnTag<void(int, int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const> (MemberFuncVA2::*FuncType)(int, int, ...) const;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA2 > const &, int, int, ReturnTag<void(int, int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) volatile> (MemberFuncVA2::*FuncType)(int, int, ...) volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA2 > volatile &, int, int, ReturnTag<void(int, int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const volatile> (MemberFuncVA2::*FuncType)(int, int, ...) const volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncVA2 > const volatile &, int, int, ReturnTag<void(int, int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefTo<MemberFuncVA2 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, int, ...)> (MemberFuncVA2::*FuncType)(int, int, ...) ;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA2 >, int, int, ReturnTag<void(int, int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const> (MemberFuncVA2::*FuncType)(int, int, ...) const;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA2 >, int, int, ReturnTag<void(int, int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) volatile> (MemberFuncVA2::*FuncType)(int, int, ...) volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA2 >, int, int, ReturnTag<void(int, int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const volatile> (MemberFuncVA2::*FuncType)(int, int, ...) const volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerefTo<MemberFuncVA2 >, int, int, ReturnTag<void(int, int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncVA2*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, int, ...)> (MemberFuncVA2::*FuncType)(int, int, ...) ;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<MemberFuncVA2*, int, int, ReturnTag<void(int, int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const> (MemberFuncVA2::*FuncType)(int, int, ...) const;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<MemberFuncVA2 const*, int, int, ReturnTag<void(int, int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) volatile> (MemberFuncVA2::*FuncType)(int, int, ...) volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<MemberFuncVA2 volatile*, int, int, ReturnTag<void(int, int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const volatile> (MemberFuncVA2::*FuncType)(int, int, ...) const volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<MemberFuncVA2 const volatile*, int, int, ReturnTag<void(int, int, ...) const volatile> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncVA2 >*>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void(int, int, ...)> (MemberFuncVA2::*FuncType)(int, int, ...) ;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA2 >*, int, int, ReturnTag<void(int, int, ...)> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const> (MemberFuncVA2::*FuncType)(int, int, ...) const;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA2 > const*, int, int, ReturnTag<void(int, int, ...) const> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) volatile> (MemberFuncVA2::*FuncType)(int, int, ...) volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA2 > volatile*, int, int, ReturnTag<void(int, int, ...) volatile> >(fn, obj);
    }
    {
      typedef ReturnTag<void(int, int, ...) const volatile> (MemberFuncVA2::*FuncType)(int, int, ...) const volatile;
      FuncType fn = &MemberFuncVA2::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncVA2 > const volatile*, int, int, ReturnTag<void(int, int, ...) const volatile> >(fn, obj);
    }
  }
