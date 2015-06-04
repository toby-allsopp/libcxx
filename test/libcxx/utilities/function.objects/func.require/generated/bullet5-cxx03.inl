// -*- C++ -*- //

  {
    typedef ReturnTag<void()> (FuncType)();
    FuncType& fn = FreeFunctionValue;
    FuncType* fnp = FreeFunctionValue;
    bullet_five_assert<FuncType*,  ReturnTag<void()> >(fn);
    bullet_five_assert<FuncType&,  ReturnTag<void()> >(fn);
    bullet_five_assert<FuncType*&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* const&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* volatile&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* const volatile&,  ReturnTag<void()> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&,  ReturnTag<void()> >(fn);
    bullet_five_assert<FuncType*&&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* const&&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* volatile&&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* const volatile&&,  ReturnTag<void()> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(Tag1)> (FuncType)(Tag1);
    FuncType& fn = FreeFunctionValue;
    FuncType* fnp = FreeFunctionValue;
    bullet_five_assert<FuncType*, Tag1, ReturnTag<void(Tag1)> >(fn);
    bullet_five_assert<FuncType&, Tag1, ReturnTag<void(Tag1)> >(fn);
    bullet_five_assert<FuncType*&, Tag1, ReturnTag<void(Tag1)> >(fnp);
    bullet_five_assert<FuncType* const&, Tag1, ReturnTag<void(Tag1)> >(fnp);
    bullet_five_assert<FuncType* volatile&, Tag1, ReturnTag<void(Tag1)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, Tag1, ReturnTag<void(Tag1)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, Tag1, ReturnTag<void(Tag1)> >(fn);
    bullet_five_assert<FuncType*&&, Tag1, ReturnTag<void(Tag1)> >(fnp);
    bullet_five_assert<FuncType* const&&, Tag1, ReturnTag<void(Tag1)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, Tag1, ReturnTag<void(Tag1)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, Tag1, ReturnTag<void(Tag1)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(Tag1, Tag1)> (FuncType)(Tag1, Tag1);
    FuncType& fn = FreeFunctionValue;
    FuncType* fnp = FreeFunctionValue;
    bullet_five_assert<FuncType*, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn);
    bullet_five_assert<FuncType&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn);
    bullet_five_assert<FuncType*&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* const&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* volatile&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn);
    bullet_five_assert<FuncType*&&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* const&&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(Tag1, Tag1, Tag1)> (FuncType)(Tag1, Tag1, Tag1);
    FuncType& fn = FreeFunctionValue;
    FuncType* fnp = FreeFunctionValue;
    bullet_five_assert<FuncType*, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fn);
    bullet_five_assert<FuncType&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fn);
    bullet_five_assert<FuncType*&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* const&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* volatile&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fn);
    bullet_five_assert<FuncType*&&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* const&&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void()> (FuncType)();
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*,  ReturnTag<void()> >(fn);
    bullet_five_assert<FuncType&,  ReturnTag<void()> >(fn);
    bullet_five_assert<FuncType*&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* const&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* volatile&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* const volatile&,  ReturnTag<void()> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&,  ReturnTag<void()> >(fn);
    bullet_five_assert<FuncType*&&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* const&&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* volatile&&,  ReturnTag<void()> >(fnp);
    bullet_five_assert<FuncType* const volatile&&,  ReturnTag<void()> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &)> (FuncType)(STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, ReturnTag<void(STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, ReturnTag<void(STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, ReturnTag<void(STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, ReturnTag<void(STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, ReturnTag<void(STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, ReturnTag<void(STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, ReturnTag<void(STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, ReturnTag<void(STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, ReturnTag<void(STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, ReturnTag<void(STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, ReturnTag<void(STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &)> (FuncType)(STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, ReturnTag<void(STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, ReturnTag<void(STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, ReturnTag<void(STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, ReturnTag<void(STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, ReturnTag<void(STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, ReturnTag<void(STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, ReturnTag<void(STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, ReturnTag<void(STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, ReturnTag<void(STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, ReturnTag<void(STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, ReturnTag<void(STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &)> (FuncType)(STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &)> (FuncType)(STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 &)> (FuncType)(STag1 &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const &)> (FuncType)(STag1 &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 volatile &)> (FuncType)(STag1 &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const volatile &)> (FuncType)(STag1 &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 &)> (FuncType)(STag1 const &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const &)> (FuncType)(STag1 const &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 volatile &)> (FuncType)(STag1 const &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const volatile &)> (FuncType)(STag1 const &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 &)> (FuncType)(STag1 volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const &)> (FuncType)(STag1 volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 volatile &)> (FuncType)(STag1 volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &)> (FuncType)(STag1 volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 &)> (FuncType)(STag1 const volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const &)> (FuncType)(STag1 const volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &)> (FuncType)(STag1 const volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> (FuncType)(STag1 const volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 &, STag1 &)> (FuncType)(STag1 &, STag1 &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 &, STag1 const &)> (FuncType)(STag1 &, STag1 &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> (FuncType)(STag1 &, STag1 &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> (FuncType)(STag1 &, STag1 &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const &, STag1 &)> (FuncType)(STag1 &, STag1 const &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> (FuncType)(STag1 &, STag1 const &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> (FuncType)(STag1 &, STag1 const &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> (FuncType)(STag1 &, STag1 const &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> (FuncType)(STag1 &, STag1 volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> (FuncType)(STag1 &, STag1 volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> (FuncType)(STag1 &, STag1 volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> (FuncType)(STag1 &, STag1 volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> (FuncType)(STag1 &, STag1 const volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> (FuncType)(STag1 &, STag1 const volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> (FuncType)(STag1 &, STag1 const volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> (FuncType)(STag1 &, STag1 const volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 &, STag1 &)> (FuncType)(STag1 const &, STag1 &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> (FuncType)(STag1 const &, STag1 &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> (FuncType)(STag1 const &, STag1 &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> (FuncType)(STag1 const &, STag1 &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> (FuncType)(STag1 const &, STag1 const &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> (FuncType)(STag1 const &, STag1 const &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> (FuncType)(STag1 const &, STag1 const &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> (FuncType)(STag1 const &, STag1 const &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> (FuncType)(STag1 const &, STag1 volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> (FuncType)(STag1 const &, STag1 volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> (FuncType)(STag1 const &, STag1 volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> (FuncType)(STag1 const &, STag1 volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> (FuncType)(STag1 const &, STag1 const volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> (FuncType)(STag1 const &, STag1 const volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> (FuncType)(STag1 const &, STag1 const volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> (FuncType)(STag1 const &, STag1 const volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> (FuncType)(STag1 volatile &, STag1 &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> (FuncType)(STag1 volatile &, STag1 &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> (FuncType)(STag1 volatile &, STag1 &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> (FuncType)(STag1 volatile &, STag1 &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> (FuncType)(STag1 volatile &, STag1 const &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> (FuncType)(STag1 volatile &, STag1 const &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> (FuncType)(STag1 volatile &, STag1 const &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> (FuncType)(STag1 volatile &, STag1 const &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> (FuncType)(STag1 volatile &, STag1 volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> (FuncType)(STag1 volatile &, STag1 volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> (FuncType)(STag1 volatile &, STag1 volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> (FuncType)(STag1 volatile &, STag1 volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> (FuncType)(STag1 volatile &, STag1 const volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> (FuncType)(STag1 volatile &, STag1 const volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> (FuncType)(STag1 volatile &, STag1 const volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> (FuncType)(STag1 volatile &, STag1 const volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> (FuncType)(STag1 const volatile &, STag1 &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> (FuncType)(STag1 const volatile &, STag1 &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> (FuncType)(STag1 const volatile &, STag1 &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> (FuncType)(STag1 const volatile &, STag1 &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> (FuncType)(STag1 const volatile &, STag1 const &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> (FuncType)(STag1 const volatile &, STag1 const &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> (FuncType)(STag1 const volatile &, STag1 const &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> (FuncType)(STag1 const volatile &, STag1 const &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> (FuncType)(STag1 const volatile &, STag1 volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> (FuncType)(STag1 const volatile &, STag1 volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> (FuncType)(STag1 const volatile &, STag1 volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> (FuncType)(STag1 const volatile &, STag1 volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> (FuncType)(STag1 const volatile &, STag1 const volatile &, STag1 &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> (FuncType)(STag1 const volatile &, STag1 const volatile &, STag1 const &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> (FuncType)(STag1 const volatile &, STag1 const volatile &, STag1 volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> (FuncType)(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &);
    FuncType& fn = FreeFunctionRef03;
    FuncType* fnp = FreeFunctionRef03;
    bullet_five_assert<FuncType*, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<FuncType*&&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const&&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(...)> (FuncType)(...);
    FuncType& fn = VAFunctionA0;
    FuncType* fnp = VAFunctionA0;
    bullet_five_assert<FuncType*,  ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType&,  ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&,  ReturnTag<void(...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&,  ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&,  ReturnTag<void(...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, ...)> (FuncType)(int, ...);
    FuncType& fn = VAFunctionA1;
    FuncType* fnp = VAFunctionA1;
    bullet_five_assert<FuncType*, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, ReturnTag<void(int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, ReturnTag<void(int, ...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, int, ...)> (FuncType)(int, int, ...);
    FuncType& fn = VAFunctionA2;
    FuncType* fnp = VAFunctionA2;
    bullet_five_assert<FuncType*, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, int, int, ...)> (FuncType)(int, int, int, ...);
    FuncType& fn = VAFunctionA3;
    FuncType* fnp = VAFunctionA3;
    bullet_five_assert<FuncType*, int, int, int, ReturnTag<void(int, int, int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
#endif
  }
  {
    ValueFunctor fn(makeTestType<ValueFunctor>(42));
    bullet_five_assert<ValueFunctor &, ReturnTag<void()> >(fn);
    bullet_five_assert<ValueFunctor const &, ReturnTag<void() const> >(fn);
    bullet_five_assert<ValueFunctor volatile &, ReturnTag<void() volatile> >(fn);
    bullet_five_assert<ValueFunctor const volatile &, ReturnTag<void() const volatile> >(fn);
    bullet_five_assert<ValueFunctor &,Tag1, ReturnTag<void(Tag1)> >(fn);
    bullet_five_assert<ValueFunctor const &,Tag1, ReturnTag<void(Tag1) const> >(fn);
    bullet_five_assert<ValueFunctor volatile &,Tag1, ReturnTag<void(Tag1) volatile> >(fn);
    bullet_five_assert<ValueFunctor const volatile &,Tag1, ReturnTag<void(Tag1) const volatile> >(fn);
    bullet_five_assert<ValueFunctor &,Tag1, Tag1, ReturnTag<void(Tag1, Tag1)> >(fn);
    bullet_five_assert<ValueFunctor const &,Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const> >(fn);
    bullet_five_assert<ValueFunctor volatile &,Tag1, Tag1, ReturnTag<void(Tag1, Tag1) volatile> >(fn);
    bullet_five_assert<ValueFunctor const volatile &,Tag1, Tag1, ReturnTag<void(Tag1, Tag1) const volatile> >(fn);
    bullet_five_assert<ValueFunctor &,Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1)> >(fn);
    bullet_five_assert<ValueFunctor const &,Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1) const> >(fn);
    bullet_five_assert<ValueFunctor volatile &,Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1) volatile> >(fn);
    bullet_five_assert<ValueFunctor const volatile &,Tag1, Tag1, Tag1, ReturnTag<void(Tag1, Tag1, Tag1) const volatile> >(fn);
  }
  {
    RefFunctor03 fn(makeTestType<RefFunctor03>(42));
    bullet_five_assert<RefFunctor03 &, ReturnTag<void()> >(fn);
    bullet_five_assert<RefFunctor03 const &, ReturnTag<void() const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &, ReturnTag<void() volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &, ReturnTag<void() const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, ReturnTag<void(STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, ReturnTag<void(STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, ReturnTag<void(STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, ReturnTag<void(STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, ReturnTag<void(STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, ReturnTag<void(STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, ReturnTag<void(STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, ReturnTag<void(STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, ReturnTag<void(STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, ReturnTag<void(STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, ReturnTag<void(STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, ReturnTag<void(STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, ReturnTag<void(STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, ReturnTag<void(STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, ReturnTag<void(STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 &, STag1 &, ReturnTag<void(STag1 &, STag1 &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 &, STag1 const &, ReturnTag<void(STag1 &, STag1 &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const &, STag1 &, ReturnTag<void(STag1 &, STag1 const &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const &, STag1 const &, ReturnTag<void(STag1 &, STag1 const &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 &, STag1 &, ReturnTag<void(STag1 const &, STag1 &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 &, STag1 const &, ReturnTag<void(STag1 const &, STag1 &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const &, STag1 &, ReturnTag<void(STag1 const &, STag1 const &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const volatile &, STag1 &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const volatile &, STag1 const &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const volatile &, STag1 volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) const volatile> >(fn);
    bullet_five_assert<RefFunctor03 &,STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)> >(fn);
    bullet_five_assert<RefFunctor03 const &,STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) const> >(fn);
    bullet_five_assert<RefFunctor03 volatile &,STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) volatile> >(fn);
    bullet_five_assert<RefFunctor03 const volatile &,STag1 const volatile &, STag1 const volatile &, STag1 const volatile &, ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) const volatile> >(fn);
  }
  {
    FunctorVA0 fn(makeTestType<FunctorVA0>(42));
    bullet_five_assert<FunctorVA0 &, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FunctorVA0 const &, ReturnTag<void(...) const> >(fn);
    bullet_five_assert<FunctorVA0 volatile &, ReturnTag<void(...) volatile> >(fn);
    bullet_five_assert<FunctorVA0 const volatile &, ReturnTag<void(...) const volatile> >(fn);
  }
  {
    FunctorVA1 fn(makeTestType<FunctorVA1>(42));
    bullet_five_assert<FunctorVA1 &,int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FunctorVA1 const &,int, ReturnTag<void(int, ...) const> >(fn);
    bullet_five_assert<FunctorVA1 volatile &,int, ReturnTag<void(int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA1 const volatile &,int, ReturnTag<void(int, ...) const volatile> >(fn);
  }
  {
    FunctorVA2 fn(makeTestType<FunctorVA2>(42));
    bullet_five_assert<FunctorVA2 &,int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FunctorVA2 const &,int, int, ReturnTag<void(int, int, ...) const> >(fn);
    bullet_five_assert<FunctorVA2 volatile &,int, int, ReturnTag<void(int, int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA2 const volatile &,int, int, ReturnTag<void(int, int, ...) const volatile> >(fn);
  }
  {
    FunctorVA3 fn(makeTestType<FunctorVA3>(42));
    bullet_five_assert<FunctorVA3 &,int, int, int, ReturnTag<void(int, int, int, ...)> >(fn);
    bullet_five_assert<FunctorVA3 const &,int, int, int, ReturnTag<void(int, int, int, ...) const> >(fn);
    bullet_five_assert<FunctorVA3 volatile &,int, int, int, ReturnTag<void(int, int, int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA3 const volatile &,int, int, int, ReturnTag<void(int, int, int, ...) const volatile> >(fn);
  }
  {
    typedef ReturnTag<void(...)> (FuncType)(...);
    FuncType& fn = VAFunctionA0;
    FuncType* fnp = VAFunctionA0;
    bullet_five_assert<FuncType*,  ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType&,  ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&,  ReturnTag<void(...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&,  ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&,  ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&,  ReturnTag<void(...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(...)> (FuncType)(...);
    FuncType& fn = VAFunctionA0;
    FuncType* fnp = VAFunctionA0;
    bullet_five_assert<FuncType*, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType&, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, ReturnTag<void(...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&&, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, ReturnTag<void(...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(...)> (FuncType)(...);
    FuncType& fn = VAFunctionA0;
    FuncType* fnp = VAFunctionA0;
    bullet_five_assert<FuncType*, int, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType&, int, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, ReturnTag<void(...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, ReturnTag<void(...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(...)> (FuncType)(...);
    FuncType& fn = VAFunctionA0;
    FuncType* fnp = VAFunctionA0;
    bullet_five_assert<FuncType*, int, int, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType&, int, int, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, int, ReturnTag<void(...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, int, ReturnTag<void(...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, int, ReturnTag<void(...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, ...)> (FuncType)(int, ...);
    FuncType& fn = VAFunctionA1;
    FuncType* fnp = VAFunctionA1;
    bullet_five_assert<FuncType*, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, ReturnTag<void(int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, ReturnTag<void(int, ...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, ...)> (FuncType)(int, ...);
    FuncType& fn = VAFunctionA1;
    FuncType* fnp = VAFunctionA1;
    bullet_five_assert<FuncType*, int, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, ReturnTag<void(int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, ReturnTag<void(int, ...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, ...)> (FuncType)(int, ...);
    FuncType& fn = VAFunctionA1;
    FuncType* fnp = VAFunctionA1;
    bullet_five_assert<FuncType*, int, int, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, int, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, int, ReturnTag<void(int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, int, ReturnTag<void(int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, int, ReturnTag<void(int, ...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, int, ...)> (FuncType)(int, int, ...);
    FuncType& fn = VAFunctionA2;
    FuncType* fnp = VAFunctionA2;
    bullet_five_assert<FuncType*, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, ReturnTag<void(int, int, ...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, int, ...)> (FuncType)(int, int, ...);
    FuncType& fn = VAFunctionA2;
    FuncType* fnp = VAFunctionA2;
    bullet_five_assert<FuncType*, int, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, int, ReturnTag<void(int, int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, int, ReturnTag<void(int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, int, ReturnTag<void(int, int, ...)> >(fnp);
#endif
  }
  {
    typedef ReturnTag<void(int, int, int, ...)> (FuncType)(int, int, int, ...);
    FuncType& fn = VAFunctionA3;
    FuncType* fnp = VAFunctionA3;
    bullet_five_assert<FuncType*, int, int, int, ReturnTag<void(int, int, int, ...)> >(fn);
    bullet_five_assert<FuncType&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
#if TEST_STD_VER >= 11
    bullet_five_assert<FuncType&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fn);
    bullet_five_assert<FuncType*&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* volatile&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
    bullet_five_assert<FuncType* const volatile&&, int, int, int, ReturnTag<void(int, int, int, ...)> >(fnp);
#endif
  }
  {
    FunctorVA0 fn(makeTestType<FunctorVA0>(42));
    bullet_five_assert<FunctorVA0 &, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FunctorVA0 &,int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FunctorVA0 &,int, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FunctorVA0 &,int, int, int, ReturnTag<void(...)> >(fn);
    bullet_five_assert<FunctorVA0 const &, ReturnTag<void(...) const> >(fn);
    bullet_five_assert<FunctorVA0 const &,int, ReturnTag<void(...) const> >(fn);
    bullet_five_assert<FunctorVA0 const &,int, int, ReturnTag<void(...) const> >(fn);
    bullet_five_assert<FunctorVA0 const &,int, int, int, ReturnTag<void(...) const> >(fn);
    bullet_five_assert<FunctorVA0 volatile &, ReturnTag<void(...) volatile> >(fn);
    bullet_five_assert<FunctorVA0 volatile &,int, ReturnTag<void(...) volatile> >(fn);
    bullet_five_assert<FunctorVA0 volatile &,int, int, ReturnTag<void(...) volatile> >(fn);
    bullet_five_assert<FunctorVA0 volatile &,int, int, int, ReturnTag<void(...) volatile> >(fn);
    bullet_five_assert<FunctorVA0 const volatile &, ReturnTag<void(...) const volatile> >(fn);
    bullet_five_assert<FunctorVA0 const volatile &,int, ReturnTag<void(...) const volatile> >(fn);
    bullet_five_assert<FunctorVA0 const volatile &,int, int, ReturnTag<void(...) const volatile> >(fn);
    bullet_five_assert<FunctorVA0 const volatile &,int, int, int, ReturnTag<void(...) const volatile> >(fn);
  }
  {
    FunctorVA1 fn(makeTestType<FunctorVA1>(42));
    bullet_five_assert<FunctorVA1 &,int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FunctorVA1 &,int, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FunctorVA1 &,int, int, int, ReturnTag<void(int, ...)> >(fn);
    bullet_five_assert<FunctorVA1 const &,int, ReturnTag<void(int, ...) const> >(fn);
    bullet_five_assert<FunctorVA1 const &,int, int, ReturnTag<void(int, ...) const> >(fn);
    bullet_five_assert<FunctorVA1 const &,int, int, int, ReturnTag<void(int, ...) const> >(fn);
    bullet_five_assert<FunctorVA1 volatile &,int, ReturnTag<void(int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA1 volatile &,int, int, ReturnTag<void(int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA1 volatile &,int, int, int, ReturnTag<void(int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA1 const volatile &,int, ReturnTag<void(int, ...) const volatile> >(fn);
    bullet_five_assert<FunctorVA1 const volatile &,int, int, ReturnTag<void(int, ...) const volatile> >(fn);
    bullet_five_assert<FunctorVA1 const volatile &,int, int, int, ReturnTag<void(int, ...) const volatile> >(fn);
  }
  {
    FunctorVA2 fn(makeTestType<FunctorVA2>(42));
    bullet_five_assert<FunctorVA2 &,int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FunctorVA2 &,int, int, int, ReturnTag<void(int, int, ...)> >(fn);
    bullet_five_assert<FunctorVA2 const &,int, int, ReturnTag<void(int, int, ...) const> >(fn);
    bullet_five_assert<FunctorVA2 const &,int, int, int, ReturnTag<void(int, int, ...) const> >(fn);
    bullet_five_assert<FunctorVA2 volatile &,int, int, ReturnTag<void(int, int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA2 volatile &,int, int, int, ReturnTag<void(int, int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA2 const volatile &,int, int, ReturnTag<void(int, int, ...) const volatile> >(fn);
    bullet_five_assert<FunctorVA2 const volatile &,int, int, int, ReturnTag<void(int, int, ...) const volatile> >(fn);
  }
  {
    FunctorVA3 fn(makeTestType<FunctorVA3>(42));
    bullet_five_assert<FunctorVA3 &,int, int, int, ReturnTag<void(int, int, int, ...)> >(fn);
    bullet_five_assert<FunctorVA3 const &,int, int, int, ReturnTag<void(int, int, int, ...) const> >(fn);
    bullet_five_assert<FunctorVA3 volatile &,int, int, int, ReturnTag<void(int, int, int, ...) volatile> >(fn);
    bullet_five_assert<FunctorVA3 const volatile &,int, int, int, ReturnTag<void(int, int, int, ...) const volatile> >(fn);
  }
