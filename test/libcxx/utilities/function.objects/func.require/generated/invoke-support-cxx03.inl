// -*- C++ -*- //

ReturnTag<void()>
FreeFunctionValue() {
  return ReturnTag<void()>(42);
}
ReturnTag<void(Tag1)>
FreeFunctionValue(Tag1 a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(Tag1)>(42, GetValue(a1));
}
ReturnTag<void(Tag1, Tag1)>
FreeFunctionValue(Tag1 a1, Tag1 a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(Tag1, Tag1)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(Tag1, Tag1, Tag1)>
FreeFunctionValue(Tag1 a1, Tag1 a2, Tag1 a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(Tag1, Tag1, Tag1)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void()>
FreeFunctionRef03() {
  return ReturnTag<void()>(42);
}
ReturnTag<void(STag1 &)>
FreeFunctionRef03(STag1 & a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 &)>(42, GetValue(a1));
}
ReturnTag<void(STag1 const &)>
FreeFunctionRef03(STag1 const & a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 const &)>(42, GetValue(a1));
}
ReturnTag<void(STag1 volatile &)>
FreeFunctionRef03(STag1 volatile & a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 volatile &)>(42, GetValue(a1));
}
ReturnTag<void(STag1 const volatile &)>
FreeFunctionRef03(STag1 const volatile & a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 const volatile &)>(42, GetValue(a1));
}
ReturnTag<void(STag1 &, STag1 &)>
FreeFunctionRef03(STag1 & a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 const &)>
FreeFunctionRef03(STag1 & a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 const volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 &)>
FreeFunctionRef03(STag1 const & a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 const &)>
FreeFunctionRef03(STag1 const & a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 const &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 const &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 &, STag1 &)>
FreeFunctionRef03(STag1 & a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 const &)>
FreeFunctionRef03(STag1 & a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 &)>
FreeFunctionRef03(STag1 & a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 const &)>
FreeFunctionRef03(STag1 & a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)>
FreeFunctionRef03(STag1 & a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)>
FreeFunctionRef03(STag1 & a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)>
FreeFunctionRef03(STag1 & a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)>
FreeFunctionRef03(STag1 & a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 &)>
FreeFunctionRef03(STag1 const & a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 const &)>
FreeFunctionRef03(STag1 const & a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 &)>
FreeFunctionRef03(STag1 const & a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)>
FreeFunctionRef03(STag1 const & a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)>
FreeFunctionRef03(STag1 const & a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)>
FreeFunctionRef03(STag1 const & a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)>
FreeFunctionRef03(STag1 const & a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)>
FreeFunctionRef03(STag1 const & a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef03(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(...)>
VAFunctionA0(...) {
  return ReturnTag<void(...)>(42);
}
ReturnTag<void(int, ...)>
VAFunctionA1(int a1, ...) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(int, ...)>(42, GetValue(a1));
}
ReturnTag<void(int, int, ...)>
VAFunctionA2(int a1, int a2, ...) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(int, int, ...)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(int, int, int, ...)>
VAFunctionA3(int a1, int a2, int a3, ...) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(int, int, int, ...)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
class MemberFuncValue {
    int id;
    MemberFuncValue(MemberFuncValue const&);
    MemberFuncValue& operator=(MemberFuncValue const&);

public:
    explicit MemberFuncValue(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void()>
    Member() {
      return ReturnTag<void()>(this->value());
    }

    ReturnTag<void() const>
    Member() const {
      return ReturnTag<void() const>(this->value());
    }

    ReturnTag<void() volatile>
    Member() volatile {
      return ReturnTag<void() volatile>(this->value());
    }

    ReturnTag<void() const volatile>
    Member() const volatile {
      return ReturnTag<void() const volatile>(this->value());
    }

    ReturnTag<void(Tag1)>
    Member(Tag1 a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(Tag1)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(Tag1) const>
    Member(Tag1 a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(Tag1) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(Tag1) volatile>
    Member(Tag1 a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(Tag1) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(Tag1) const volatile>
    Member(Tag1 a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(Tag1) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(Tag1, Tag1)>
    Member(Tag1 a1, Tag1 a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(Tag1, Tag1)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(Tag1, Tag1) const>
    Member(Tag1 a1, Tag1 a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(Tag1, Tag1) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(Tag1, Tag1) volatile>
    Member(Tag1 a1, Tag1 a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(Tag1, Tag1) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(Tag1, Tag1) const volatile>
    Member(Tag1 a1, Tag1 a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(Tag1, Tag1) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }
    // AUTO GENERATED END //
};

class MemberFuncRef03 {
    int id;
    MemberFuncRef03(MemberFuncRef03 const&);
    MemberFuncRef03& operator=(MemberFuncRef03 const&);

public:
    explicit MemberFuncRef03(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void()>
    Member() {
      return ReturnTag<void()>(this->value());
    }

    ReturnTag<void() const>
    Member() const {
      return ReturnTag<void() const>(this->value());
    }

    ReturnTag<void() volatile>
    Member() volatile {
      return ReturnTag<void() volatile>(this->value());
    }

    ReturnTag<void() const volatile>
    Member() const volatile {
      return ReturnTag<void() const volatile>(this->value());
    }

    ReturnTag<void(STag1 &)>
    Member(STag1 & a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const>
    Member(STag1 & a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) volatile>
    Member(STag1 & a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const volatile>
    Member(STag1 & a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &)>
    Member(STag1 const & a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const>
    Member(STag1 const & a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) volatile>
    Member(STag1 const & a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const volatile>
    Member(STag1 const & a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &)>
    Member(STag1 volatile & a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const>
    Member(STag1 volatile & a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) volatile>
    Member(STag1 volatile & a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const volatile>
    Member(STag1 volatile & a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &)>
    Member(STag1 const volatile & a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const>
    Member(STag1 const volatile & a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) volatile>
    Member(STag1 const volatile & a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const volatile>
    Member(STag1 const volatile & a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &, STag1 &)>
    Member(STag1 & a1, STag1 & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const>
    Member(STag1 & a1, STag1 & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) volatile>
    Member(STag1 & a1, STag1 & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const volatile>
    Member(STag1 & a1, STag1 & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &)>
    Member(STag1 & a1, STag1 const & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const>
    Member(STag1 & a1, STag1 const & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) volatile>
    Member(STag1 & a1, STag1 const & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const volatile>
    Member(STag1 & a1, STag1 const & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &)>
    Member(STag1 & a1, STag1 volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const>
    Member(STag1 & a1, STag1 volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) volatile>
    Member(STag1 & a1, STag1 volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const volatile>
    Member(STag1 & a1, STag1 volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &)>
    Member(STag1 & a1, STag1 const volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const>
    Member(STag1 & a1, STag1 const volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) volatile>
    Member(STag1 & a1, STag1 const volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const volatile>
    Member(STag1 & a1, STag1 const volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &)>
    Member(STag1 const & a1, STag1 & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const>
    Member(STag1 const & a1, STag1 & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) volatile>
    Member(STag1 const & a1, STag1 & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const volatile>
    Member(STag1 const & a1, STag1 & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &)>
    Member(STag1 const & a1, STag1 const & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const>
    Member(STag1 const & a1, STag1 const & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) volatile>
    Member(STag1 const & a1, STag1 const & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const volatile>
    Member(STag1 const & a1, STag1 const & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &)>
    Member(STag1 const & a1, STag1 volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const>
    Member(STag1 const & a1, STag1 volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) volatile>
    Member(STag1 const & a1, STag1 volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const volatile>
    Member(STag1 const & a1, STag1 volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &)>
    Member(STag1 const & a1, STag1 const volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const>
    Member(STag1 const & a1, STag1 const volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) volatile>
    Member(STag1 const & a1, STag1 const volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile>
    Member(STag1 const & a1, STag1 const volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &)>
    Member(STag1 volatile & a1, STag1 & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const>
    Member(STag1 volatile & a1, STag1 & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) volatile>
    Member(STag1 volatile & a1, STag1 & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const volatile>
    Member(STag1 volatile & a1, STag1 & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &)>
    Member(STag1 volatile & a1, STag1 const & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const>
    Member(STag1 volatile & a1, STag1 const & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) volatile>
    Member(STag1 volatile & a1, STag1 const & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const volatile>
    Member(STag1 volatile & a1, STag1 const & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &)>
    Member(STag1 volatile & a1, STag1 volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const>
    Member(STag1 volatile & a1, STag1 volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile>
    Member(STag1 volatile & a1, STag1 volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile>
    Member(STag1 volatile & a1, STag1 volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &)>
    Member(STag1 volatile & a1, STag1 const volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const>
    Member(STag1 volatile & a1, STag1 const volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile>
    Member(STag1 volatile & a1, STag1 const volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile>
    Member(STag1 volatile & a1, STag1 const volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &)>
    Member(STag1 const volatile & a1, STag1 & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const>
    Member(STag1 const volatile & a1, STag1 & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) volatile>
    Member(STag1 const volatile & a1, STag1 & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const volatile>
    Member(STag1 const volatile & a1, STag1 & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &)>
    Member(STag1 const volatile & a1, STag1 const & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const>
    Member(STag1 const volatile & a1, STag1 const & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) volatile>
    Member(STag1 const volatile & a1, STag1 const & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile>
    Member(STag1 const volatile & a1, STag1 const & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &)>
    Member(STag1 const volatile & a1, STag1 volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const>
    Member(STag1 const volatile & a1, STag1 volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile>
    Member(STag1 const volatile & a1, STag1 volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile>
    Member(STag1 const volatile & a1, STag1 volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &)>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }
    // AUTO GENERATED END //
};

class MemberFuncVA0 {
    int id;
    MemberFuncVA0(MemberFuncVA0 const&);
    MemberFuncVA0& operator=(MemberFuncVA0 const&);

public:
    explicit MemberFuncVA0(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void(...)>
    Member(...) {
      return ReturnTag<void(...)>(this->value());
    }

    ReturnTag<void(...) const>
    Member(...) const {
      return ReturnTag<void(...) const>(this->value());
    }

    ReturnTag<void(...) volatile>
    Member(...) volatile {
      return ReturnTag<void(...) volatile>(this->value());
    }

    ReturnTag<void(...) const volatile>
    Member(...) const volatile {
      return ReturnTag<void(...) const volatile>(this->value());
    }
    // AUTO GENERATED END //
};

class MemberFuncVA1 {
    int id;
    MemberFuncVA1(MemberFuncVA1 const&);
    MemberFuncVA1& operator=(MemberFuncVA1 const&);

public:
    explicit MemberFuncVA1(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void(int, ...)>
    Member(int a1, ...) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(int, ...)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(int, ...) const>
    Member(int a1, ...) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(int, ...) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(int, ...) volatile>
    Member(int a1, ...) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(int, ...) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(int, ...) const volatile>
    Member(int a1, ...) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(int, ...) const volatile>(this->value(), GetValue(a1));
    }
    // AUTO GENERATED END //
};

class MemberFuncVA2 {
    int id;
    MemberFuncVA2(MemberFuncVA2 const&);
    MemberFuncVA2& operator=(MemberFuncVA2 const&);

public:
    explicit MemberFuncVA2(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void(int, int, ...)>
    Member(int a1, int a2, ...) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(int, int, ...)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(int, int, ...) const>
    Member(int a1, int a2, ...) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(int, int, ...) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(int, int, ...) volatile>
    Member(int a1, int a2, ...) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(int, int, ...) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(int, int, ...) const volatile>
    Member(int a1, int a2, ...) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(int, int, ...) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }
    // AUTO GENERATED END //
};

class ValueFunctor {
    int id;
    ValueFunctor(ValueFunctor const&);
    ValueFunctor& operator=(ValueFunctor const&);

public:
    explicit ValueFunctor(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void()>
    operator()() {
      return ReturnTag<void()>(this->value());
    }

    ReturnTag<void() const>
    operator()() const {
      return ReturnTag<void() const>(this->value());
    }

    ReturnTag<void() volatile>
    operator()() volatile {
      return ReturnTag<void() volatile>(this->value());
    }

    ReturnTag<void() const volatile>
    operator()() const volatile {
      return ReturnTag<void() const volatile>(this->value());
    }

    ReturnTag<void(Tag1)>
    operator()(Tag1 a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(Tag1)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(Tag1) const>
    operator()(Tag1 a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(Tag1) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(Tag1) volatile>
    operator()(Tag1 a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(Tag1) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(Tag1) const volatile>
    operator()(Tag1 a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(Tag1) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(Tag1, Tag1)>
    operator()(Tag1 a1, Tag1 a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(Tag1, Tag1)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(Tag1, Tag1) const>
    operator()(Tag1 a1, Tag1 a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(Tag1, Tag1) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(Tag1, Tag1) volatile>
    operator()(Tag1 a1, Tag1 a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(Tag1, Tag1) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(Tag1, Tag1) const volatile>
    operator()(Tag1 a1, Tag1 a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(Tag1, Tag1) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(Tag1, Tag1, Tag1)>
    operator()(Tag1 a1, Tag1 a2, Tag1 a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(Tag1, Tag1, Tag1)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(Tag1, Tag1, Tag1) const>
    operator()(Tag1 a1, Tag1 a2, Tag1 a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(Tag1, Tag1, Tag1) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(Tag1, Tag1, Tag1) volatile>
    operator()(Tag1 a1, Tag1 a2, Tag1 a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(Tag1, Tag1, Tag1) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(Tag1, Tag1, Tag1) const volatile>
    operator()(Tag1 a1, Tag1 a2, Tag1 a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(Tag1, Tag1, Tag1) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }
    // AUTO GENERATED END //
};

class RefFunctor03 {
    int id;
    RefFunctor03(RefFunctor03 const&);
    RefFunctor03& operator=(RefFunctor03 const&);

public:
    explicit RefFunctor03(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void()>
    operator()() {
      return ReturnTag<void()>(this->value());
    }

    ReturnTag<void() const>
    operator()() const {
      return ReturnTag<void() const>(this->value());
    }

    ReturnTag<void() volatile>
    operator()() volatile {
      return ReturnTag<void() volatile>(this->value());
    }

    ReturnTag<void() const volatile>
    operator()() const volatile {
      return ReturnTag<void() const volatile>(this->value());
    }

    ReturnTag<void(STag1 &)>
    operator()(STag1 & a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const>
    operator()(STag1 & a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) volatile>
    operator()(STag1 & a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const volatile>
    operator()(STag1 & a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &)>
    operator()(STag1 const & a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const>
    operator()(STag1 const & a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) volatile>
    operator()(STag1 const & a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const volatile>
    operator()(STag1 const & a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &)>
    operator()(STag1 volatile & a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const>
    operator()(STag1 volatile & a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) volatile>
    operator()(STag1 volatile & a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const volatile>
    operator()(STag1 volatile & a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &)>
    operator()(STag1 const volatile & a1) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const>
    operator()(STag1 const volatile & a1) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) volatile>
    operator()(STag1 const volatile & a1) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const volatile>
    operator()(STag1 const volatile & a1) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &, STag1 &)>
    operator()(STag1 & a1, STag1 & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const>
    operator()(STag1 & a1, STag1 & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) volatile>
    operator()(STag1 & a1, STag1 & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const volatile>
    operator()(STag1 & a1, STag1 & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &)>
    operator()(STag1 & a1, STag1 const & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const>
    operator()(STag1 & a1, STag1 const & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) volatile>
    operator()(STag1 & a1, STag1 const & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const volatile>
    operator()(STag1 & a1, STag1 const & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &)>
    operator()(STag1 & a1, STag1 volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const>
    operator()(STag1 & a1, STag1 volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) volatile>
    operator()(STag1 & a1, STag1 volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const volatile>
    operator()(STag1 & a1, STag1 volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &)>
    operator()(STag1 & a1, STag1 const volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const>
    operator()(STag1 & a1, STag1 const volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) volatile>
    operator()(STag1 & a1, STag1 const volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const volatile>
    operator()(STag1 & a1, STag1 const volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &)>
    operator()(STag1 const & a1, STag1 & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const>
    operator()(STag1 const & a1, STag1 & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) volatile>
    operator()(STag1 const & a1, STag1 & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const volatile>
    operator()(STag1 const & a1, STag1 & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &)>
    operator()(STag1 const & a1, STag1 const & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const>
    operator()(STag1 const & a1, STag1 const & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) volatile>
    operator()(STag1 const & a1, STag1 const & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const volatile>
    operator()(STag1 const & a1, STag1 const & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &)>
    operator()(STag1 const & a1, STag1 volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const>
    operator()(STag1 const & a1, STag1 volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) volatile>
    operator()(STag1 const & a1, STag1 volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const volatile>
    operator()(STag1 const & a1, STag1 volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &)>
    operator()(STag1 const & a1, STag1 const volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const>
    operator()(STag1 const & a1, STag1 const volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &)>
    operator()(STag1 volatile & a1, STag1 & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const>
    operator()(STag1 volatile & a1, STag1 & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) volatile>
    operator()(STag1 volatile & a1, STag1 & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const volatile>
    operator()(STag1 volatile & a1, STag1 & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &)>
    operator()(STag1 volatile & a1, STag1 const & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const>
    operator()(STag1 volatile & a1, STag1 const & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) volatile>
    operator()(STag1 volatile & a1, STag1 const & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const volatile>
    operator()(STag1 volatile & a1, STag1 const & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &)>
    operator()(STag1 volatile & a1, STag1 volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const>
    operator()(STag1 volatile & a1, STag1 volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &)>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &)>
    operator()(STag1 const volatile & a1, STag1 & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const>
    operator()(STag1 const volatile & a1, STag1 & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) volatile>
    operator()(STag1 const volatile & a1, STag1 & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const volatile>
    operator()(STag1 const volatile & a1, STag1 & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &)>
    operator()(STag1 const volatile & a1, STag1 const & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const>
    operator()(STag1 const volatile & a1, STag1 const & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &)>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &)>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 &)>
    operator()(STag1 & a1, STag1 & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 &) const>
    operator()(STag1 & a1, STag1 & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 &) volatile>
    operator()(STag1 & a1, STag1 & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 &) const volatile>
    operator()(STag1 & a1, STag1 & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 const &)>
    operator()(STag1 & a1, STag1 & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 const &) const>
    operator()(STag1 & a1, STag1 & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 const &) volatile>
    operator()(STag1 & a1, STag1 & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 const &) const volatile>
    operator()(STag1 & a1, STag1 & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)>
    operator()(STag1 & a1, STag1 & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) const>
    operator()(STag1 & a1, STag1 & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) volatile>
    operator()(STag1 & a1, STag1 & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) const volatile>
    operator()(STag1 & a1, STag1 & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)>
    operator()(STag1 & a1, STag1 & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) const>
    operator()(STag1 & a1, STag1 & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) volatile>
    operator()(STag1 & a1, STag1 & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) const volatile>
    operator()(STag1 & a1, STag1 & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 &)>
    operator()(STag1 & a1, STag1 const & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 &) const>
    operator()(STag1 & a1, STag1 const & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 &) volatile>
    operator()(STag1 & a1, STag1 const & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 &) const volatile>
    operator()(STag1 & a1, STag1 const & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 const &)>
    operator()(STag1 & a1, STag1 const & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 const &) const>
    operator()(STag1 & a1, STag1 const & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 const &) volatile>
    operator()(STag1 & a1, STag1 const & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 const &) const volatile>
    operator()(STag1 & a1, STag1 const & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)>
    operator()(STag1 & a1, STag1 const & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) const>
    operator()(STag1 & a1, STag1 const & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) volatile>
    operator()(STag1 & a1, STag1 const & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) const volatile>
    operator()(STag1 & a1, STag1 const & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)>
    operator()(STag1 & a1, STag1 const & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) const>
    operator()(STag1 & a1, STag1 const & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) volatile>
    operator()(STag1 & a1, STag1 const & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) const volatile>
    operator()(STag1 & a1, STag1 const & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) const>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) volatile>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) const volatile>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) const>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) volatile>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) const volatile>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) const>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) volatile>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) const volatile>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) const>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) volatile>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 & a1, STag1 volatile & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) const>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) volatile>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) const volatile>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) const>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) volatile>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) const volatile>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) const>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) volatile>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) const volatile>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) const>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) volatile>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 & a1, STag1 const volatile & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 &)>
    operator()(STag1 const & a1, STag1 & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 &) const>
    operator()(STag1 const & a1, STag1 & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 &) volatile>
    operator()(STag1 const & a1, STag1 & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 &) const volatile>
    operator()(STag1 const & a1, STag1 & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 const &)>
    operator()(STag1 const & a1, STag1 & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 const &) const>
    operator()(STag1 const & a1, STag1 & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 const &) volatile>
    operator()(STag1 const & a1, STag1 & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 const &) const volatile>
    operator()(STag1 const & a1, STag1 & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)>
    operator()(STag1 const & a1, STag1 & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) const>
    operator()(STag1 const & a1, STag1 & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) volatile>
    operator()(STag1 const & a1, STag1 & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) const volatile>
    operator()(STag1 const & a1, STag1 & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)>
    operator()(STag1 const & a1, STag1 & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) const>
    operator()(STag1 const & a1, STag1 & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) volatile>
    operator()(STag1 const & a1, STag1 & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) const volatile>
    operator()(STag1 const & a1, STag1 & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 &)>
    operator()(STag1 const & a1, STag1 const & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 &) const>
    operator()(STag1 const & a1, STag1 const & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 &) volatile>
    operator()(STag1 const & a1, STag1 const & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 &) const volatile>
    operator()(STag1 const & a1, STag1 const & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)>
    operator()(STag1 const & a1, STag1 const & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) const>
    operator()(STag1 const & a1, STag1 const & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) volatile>
    operator()(STag1 const & a1, STag1 const & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) const volatile>
    operator()(STag1 const & a1, STag1 const & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)>
    operator()(STag1 const & a1, STag1 const & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) const>
    operator()(STag1 const & a1, STag1 const & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) volatile>
    operator()(STag1 const & a1, STag1 const & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) const volatile>
    operator()(STag1 const & a1, STag1 const & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)>
    operator()(STag1 const & a1, STag1 const & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) const>
    operator()(STag1 const & a1, STag1 const & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) volatile>
    operator()(STag1 const & a1, STag1 const & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) const volatile>
    operator()(STag1 const & a1, STag1 const & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) const>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) volatile>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) const volatile>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) const>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) volatile>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) const volatile>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) const>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) volatile>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) const volatile>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) const>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) volatile>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 const & a1, STag1 volatile & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) const>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) const volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) const>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) const volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) const>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) const volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) const>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 const & a1, STag1 const volatile & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) const>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) volatile>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) const volatile>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) const>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) volatile>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) const volatile>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) const>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) const>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) const>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) volatile>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) const volatile>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) const>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) volatile>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) const volatile>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) const>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) const>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 const & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) const>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) const volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) const>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) const volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) const>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) const>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) const>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) const volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) const>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) const volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) const>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) const>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) const>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) volatile>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) const volatile>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) const>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) volatile>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) const volatile>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) const>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) const>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) const>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) const>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) const>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) const>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) const>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) const volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) const>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) const volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) const>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) const>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) const>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) const>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) const>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) const>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) const volatile>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }
    // AUTO GENERATED END //
};

class FunctorVA0 {
    int id;
    FunctorVA0(FunctorVA0 const&);
    FunctorVA0& operator=(FunctorVA0 const&);

public:
    explicit FunctorVA0(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void(...)>
    operator()(...) {
      return ReturnTag<void(...)>(this->value());
    }

    ReturnTag<void(...) const>
    operator()(...) const {
      return ReturnTag<void(...) const>(this->value());
    }

    ReturnTag<void(...) volatile>
    operator()(...) volatile {
      return ReturnTag<void(...) volatile>(this->value());
    }

    ReturnTag<void(...) const volatile>
    operator()(...) const volatile {
      return ReturnTag<void(...) const volatile>(this->value());
    }
    // AUTO GENERATED END //
};

class FunctorVA1 {
    int id;
    FunctorVA1(FunctorVA1 const&);
    FunctorVA1& operator=(FunctorVA1 const&);

public:
    explicit FunctorVA1(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void(int, ...)>
    operator()(int a1, ...) {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(int, ...)>(this->value(), GetValue(a1));
    }

    ReturnTag<void(int, ...) const>
    operator()(int a1, ...) const {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(int, ...) const>(this->value(), GetValue(a1));
    }

    ReturnTag<void(int, ...) volatile>
    operator()(int a1, ...) volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(int, ...) volatile>(this->value(), GetValue(a1));
    }

    ReturnTag<void(int, ...) const volatile>
    operator()(int a1, ...) const volatile {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(int, ...) const volatile>(this->value(), GetValue(a1));
    }
    // AUTO GENERATED END //
};

class FunctorVA2 {
    int id;
    FunctorVA2(FunctorVA2 const&);
    FunctorVA2& operator=(FunctorVA2 const&);

public:
    explicit FunctorVA2(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void(int, int, ...)>
    operator()(int a1, int a2, ...) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(int, int, ...)>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(int, int, ...) const>
    operator()(int a1, int a2, ...) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(int, int, ...) const>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(int, int, ...) volatile>
    operator()(int a1, int a2, ...) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(int, int, ...) volatile>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(int, int, ...) const volatile>
    operator()(int a1, int a2, ...) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(int, int, ...) const volatile>(this->value(), GetValue(a1), GetValue(a2));
    }
    // AUTO GENERATED END //
};

class FunctorVA3 {
    int id;
    FunctorVA3(FunctorVA3 const&);
    FunctorVA3& operator=(FunctorVA3 const&);

public:
    explicit FunctorVA3(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void(int, int, int, ...)>
    operator()(int a1, int a2, int a3, ...) {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(int, int, int, ...)>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(int, int, int, ...) const>
    operator()(int a1, int a2, int a3, ...) const {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(int, int, int, ...) const>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(int, int, int, ...) volatile>
    operator()(int a1, int a2, int a3, ...) volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(int, int, int, ...) volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }

    ReturnTag<void(int, int, int, ...) const volatile>
    operator()(int a1, int a2, int a3, ...) const volatile {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      assert(GetValue(a3) == 3);
      return ReturnTag<void(int, int, int, ...) const volatile>(this->value(), GetValue(a1), GetValue(a2), GetValue(a3));
    }
    // AUTO GENERATED END //
};

