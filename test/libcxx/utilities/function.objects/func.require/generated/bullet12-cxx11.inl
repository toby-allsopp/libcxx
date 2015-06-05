// -*- C++ -*- //

  {
    typedef typename RawType<MemberFuncRef11>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void() &> (MemberFuncRef11::*FuncType)() &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &,  ReturnTag<void() &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() &&> (MemberFuncRef11::*FuncType)() &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&,  ReturnTag<void() &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &> (MemberFuncRef11::*FuncType)() const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &,  ReturnTag<void() const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &&> (MemberFuncRef11::*FuncType)() const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&,  ReturnTag<void() const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &> (MemberFuncRef11::*FuncType)() volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &,  ReturnTag<void() volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &&> (MemberFuncRef11::*FuncType)() volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&,  ReturnTag<void() volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &> (MemberFuncRef11::*FuncType)() const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &,  ReturnTag<void() const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &&> (MemberFuncRef11::*FuncType)() const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&,  ReturnTag<void() const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, ReturnTag<void(STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, ReturnTag<void(STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, ReturnTag<void(STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, ReturnTag<void(STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, ReturnTag<void(STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, ReturnTag<void(STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, ReturnTag<void(STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, ReturnTag<void(STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, ReturnTag<void(STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, ReturnTag<void(STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, ReturnTag<void(STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, ReturnTag<void(STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, ReturnTag<void(STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, ReturnTag<void(STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, ReturnTag<void(STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, ReturnTag<void(STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, ReturnTag<void(STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, ReturnTag<void(STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, ReturnTag<void(STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, ReturnTag<void(STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, ReturnTag<void(STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, ReturnTag<void(STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, ReturnTag<void(STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, ReturnTag<void(STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, ReturnTag<void(STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, ReturnTag<void(STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 volatile &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<MemberFuncRef11 const volatile &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncRef11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void() &> (MemberFuncRef11::*FuncType)() &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &,  ReturnTag<void() &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() &&> (MemberFuncRef11::*FuncType)() &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&,  ReturnTag<void() &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &> (MemberFuncRef11::*FuncType)() const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &,  ReturnTag<void() const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &&> (MemberFuncRef11::*FuncType)() const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&,  ReturnTag<void() const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &> (MemberFuncRef11::*FuncType)() volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &,  ReturnTag<void() volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &&> (MemberFuncRef11::*FuncType)() volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&,  ReturnTag<void() volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &> (MemberFuncRef11::*FuncType)() const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &,  ReturnTag<void() const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &&> (MemberFuncRef11::*FuncType)() const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&,  ReturnTag<void() const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, ReturnTag<void(STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, ReturnTag<void(STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, ReturnTag<void(STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, ReturnTag<void(STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, ReturnTag<void(STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, ReturnTag<void(STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, ReturnTag<void(STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, ReturnTag<void(STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, ReturnTag<void(STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, ReturnTag<void(STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, ReturnTag<void(STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, ReturnTag<void(STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, ReturnTag<void(STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, ReturnTag<void(STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, ReturnTag<void(STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, ReturnTag<void(STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, ReturnTag<void(STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, ReturnTag<void(STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, ReturnTag<void(STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, ReturnTag<void(STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, ReturnTag<void(STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, ReturnTag<void(STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, ReturnTag<void(STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, ReturnTag<void(STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, ReturnTag<void(STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, ReturnTag<void(STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemberFuncRef11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void() &> (MemberFuncRef11::*FuncType)() &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &,  ReturnTag<void() &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() &&> (MemberFuncRef11::*FuncType)() &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&,  ReturnTag<void() &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &> (MemberFuncRef11::*FuncType)() const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &,  ReturnTag<void() const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &&> (MemberFuncRef11::*FuncType)() const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&,  ReturnTag<void() const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &> (MemberFuncRef11::*FuncType)() volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &,  ReturnTag<void() volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &&> (MemberFuncRef11::*FuncType)() volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&,  ReturnTag<void() volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &> (MemberFuncRef11::*FuncType)() const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &,  ReturnTag<void() const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &&> (MemberFuncRef11::*FuncType)() const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&,  ReturnTag<void() const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, ReturnTag<void(STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, ReturnTag<void(STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, ReturnTag<void(STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, ReturnTag<void(STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, ReturnTag<void(STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, ReturnTag<void(STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, ReturnTag<void(STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, ReturnTag<void(STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, ReturnTag<void(STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, ReturnTag<void(STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, ReturnTag<void(STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, ReturnTag<void(STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, ReturnTag<void(STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, ReturnTag<void(STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, ReturnTag<void(STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, ReturnTag<void(STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, ReturnTag<void(STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, ReturnTag<void(STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, ReturnTag<void(STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, ReturnTag<void(STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, ReturnTag<void(STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, ReturnTag<void(STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, ReturnTag<void(STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, ReturnTag<void(STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, ReturnTag<void(STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, ReturnTag<void(STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > volatile &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&> (MemberFuncRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &&;
      FuncType fn = &MemberFuncRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncRef11 > const volatile &&, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&> >(fn, obj);
    }
  }
  {
    typedef typename RawType<MemberFuncLRef11>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void() &> (MemberFuncLRef11::*FuncType)() &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &,  ReturnTag<void() &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &> (MemberFuncLRef11::*FuncType)() const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &,  ReturnTag<void() const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &> (MemberFuncLRef11::*FuncType)() volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &,  ReturnTag<void() volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &> (MemberFuncLRef11::*FuncType)() const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &,  ReturnTag<void() const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, ReturnTag<void(STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, ReturnTag<void(STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, ReturnTag<void(STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, ReturnTag<void(STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, ReturnTag<void(STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, ReturnTag<void(STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, ReturnTag<void(STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, ReturnTag<void(STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, ReturnTag<void(STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, ReturnTag<void(STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, ReturnTag<void(STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, ReturnTag<void(STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<MemberFuncLRef11 const volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerivedFrom<MemberFuncLRef11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void() &> (MemberFuncLRef11::*FuncType)() &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &,  ReturnTag<void() &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &> (MemberFuncLRef11::*FuncType)() const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &,  ReturnTag<void() const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &> (MemberFuncLRef11::*FuncType)() volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &,  ReturnTag<void() volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &> (MemberFuncLRef11::*FuncType)() const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &,  ReturnTag<void() const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, ReturnTag<void(STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, ReturnTag<void(STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, ReturnTag<void(STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, ReturnTag<void(STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, ReturnTag<void(STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, ReturnTag<void(STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, ReturnTag<void(STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, ReturnTag<void(STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, ReturnTag<void(STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, ReturnTag<void(STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, ReturnTag<void(STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, ReturnTag<void(STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerivedFrom<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
  }
  {
    typedef typename RawType<DerefToProp<MemberFuncLRef11 >>::type RawObj;
    RawObj obj(makeTestType<RawObj>(42));
    
    {
      typedef ReturnTag<void() &> (MemberFuncLRef11::*FuncType)() &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &,  ReturnTag<void() &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const &> (MemberFuncLRef11::*FuncType)() const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &,  ReturnTag<void() const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() volatile &> (MemberFuncLRef11::*FuncType)() volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &,  ReturnTag<void() volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void() const volatile &> (MemberFuncLRef11::*FuncType)() const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &,  ReturnTag<void() const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, ReturnTag<void(STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, ReturnTag<void(STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, ReturnTag<void(STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, ReturnTag<void(STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, ReturnTag<void(STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, ReturnTag<void(STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, ReturnTag<void(STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, ReturnTag<void(STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, ReturnTag<void(STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, ReturnTag<void(STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, ReturnTag<void(STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, ReturnTag<void(STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, ReturnTag<void(STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, ReturnTag<void(STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, ReturnTag<void(STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, ReturnTag<void(STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, STag1 &&, ReturnTag<void(STag1 &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, STag1 const &&, ReturnTag<void(STag1 &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, STag1 volatile &&, ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &, STag1 const volatile &&, ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 &, ReturnTag<void(STag1 &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 &&, ReturnTag<void(STag1 &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 const &, ReturnTag<void(STag1 &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 const &&, ReturnTag<void(STag1 &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 volatile &, ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 volatile &&, ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 const volatile &, ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 &&, STag1 const volatile &&, ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 &&, ReturnTag<void(STag1 const &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 const &&, ReturnTag<void(STag1 const &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 volatile &&, ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &, STag1 const volatile &&, ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 &, ReturnTag<void(STag1 const &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 &&, ReturnTag<void(STag1 const &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 const &, ReturnTag<void(STag1 const &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 const &&, ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 volatile &, ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 volatile &&, ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 const volatile &, ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const &&, STag1 const volatile &&, ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 &&, ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 const &&, ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 volatile &&, ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &, STag1 const volatile &&, ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 &, ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 &&, ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 const &, ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 const &&, ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 volatile &, ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 volatile &&, ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 const volatile &, ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 &&, ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 const &&, ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 volatile &&, ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 &, ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 &&, ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 const &, ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 const &&, ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 volatile &, ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &> >(fn, obj);
    }
    {
      typedef ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> (MemberFuncLRef11::*FuncType)(STag1 const volatile &&, STag1 const volatile &&) const volatile &;
      FuncType fn = &MemberFuncLRef11::Member;
      bullet_one_and_two_assert<DerefToProp<MemberFuncLRef11 > const volatile &, STag1 const volatile &&, STag1 const volatile &&, ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &> >(fn, obj);
    }
  }
