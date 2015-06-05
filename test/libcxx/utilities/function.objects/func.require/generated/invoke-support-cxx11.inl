// -*- C++ -*- //

ReturnTag<void()>
FreeFunctionRef11() {
  return ReturnTag<void()>(42);
}
ReturnTag<void(STag1 &)>
FreeFunctionRef11(STag1 & a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 &)>(42, GetValue(a1));
}
ReturnTag<void(STag1 &&)>
FreeFunctionRef11(STag1 && a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 &&)>(42, GetValue(a1));
}
ReturnTag<void(STag1 const &)>
FreeFunctionRef11(STag1 const & a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 const &)>(42, GetValue(a1));
}
ReturnTag<void(STag1 const &&)>
FreeFunctionRef11(STag1 const && a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 const &&)>(42, GetValue(a1));
}
ReturnTag<void(STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 volatile &)>(42, GetValue(a1));
}
ReturnTag<void(STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 volatile &&)>(42, GetValue(a1));
}
ReturnTag<void(STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 const volatile &)>(42, GetValue(a1));
}
ReturnTag<void(STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1) {
  assert(GetValue(a1) == 1);
  return ReturnTag<void(STag1 const volatile &&)>(42, GetValue(a1));
}
ReturnTag<void(STag1 &, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2));
}
ReturnTag<void(STag1 &, STag1 &, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 & a1, STag1 const volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &, STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 && a1, STag1 const volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 &&, STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const & a1, STag1 const volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &, STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const && a1, STag1 const volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const &&, STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile & a1, STag1 const volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &, STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 volatile && a1, STag1 const volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile & a1, STag1 const volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile & a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2, STag1 & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2, STag1 && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 const &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2, STag1 const & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 const &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 const &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2, STag1 const && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 const &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2, STag1 volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2, STag1 volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 const volatile &)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2, STag1 const volatile & a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 const volatile &)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 const volatile &&)>
FreeFunctionRef11(STag1 const volatile && a1, STag1 const volatile && a2, STag1 const volatile && a3) {
  assert(GetValue(a1) == 1);
  assert(GetValue(a2) == 2);
  assert(GetValue(a3) == 3);
  return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&, STag1 const volatile &&)>(42, GetValue(a1), GetValue(a2), GetValue(a3));
}
class MemberFuncRef11 {
    int id;
    MemberFuncRef11(MemberFuncRef11 const&);
    MemberFuncRef11& operator=(MemberFuncRef11 const&);

public:
    explicit MemberFuncRef11(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void() &>
    Member() & {
      return ReturnTag<void() &>(this->value());
    }

    ReturnTag<void() &&>
    Member() && {
      return ReturnTag<void() &&>(this->value());
    }

    ReturnTag<void() const &>
    Member() const & {
      return ReturnTag<void() const &>(this->value());
    }

    ReturnTag<void() const &&>
    Member() const && {
      return ReturnTag<void() const &&>(this->value());
    }

    ReturnTag<void() volatile &>
    Member() volatile & {
      return ReturnTag<void() volatile &>(this->value());
    }

    ReturnTag<void() volatile &&>
    Member() volatile && {
      return ReturnTag<void() volatile &&>(this->value());
    }

    ReturnTag<void() const volatile &>
    Member() const volatile & {
      return ReturnTag<void() const volatile &>(this->value());
    }

    ReturnTag<void() const volatile &&>
    Member() const volatile && {
      return ReturnTag<void() const volatile &&>(this->value());
    }

    ReturnTag<void(STag1 &) &>
    Member(STag1 & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) &&>
    Member(STag1 & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const &>
    Member(STag1 & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const &&>
    Member(STag1 & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) volatile &>
    Member(STag1 & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) volatile &&>
    Member(STag1 & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const volatile &>
    Member(STag1 & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const volatile &&>
    Member(STag1 & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) &>
    Member(STag1 && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) &&>
    Member(STag1 && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const &>
    Member(STag1 && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const &&>
    Member(STag1 && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) volatile &>
    Member(STag1 && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) volatile &&>
    Member(STag1 && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const volatile &>
    Member(STag1 && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const volatile &&>
    Member(STag1 && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) &>
    Member(STag1 const & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) &&>
    Member(STag1 const & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const &>
    Member(STag1 const & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const &&>
    Member(STag1 const & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) volatile &>
    Member(STag1 const & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) volatile &&>
    Member(STag1 const & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const volatile &>
    Member(STag1 const & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const volatile &&>
    Member(STag1 const & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) &>
    Member(STag1 const && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) &&>
    Member(STag1 const && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const &>
    Member(STag1 const && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const &&>
    Member(STag1 const && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) volatile &>
    Member(STag1 const && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) volatile &&>
    Member(STag1 const && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const volatile &>
    Member(STag1 const && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const volatile &&>
    Member(STag1 const && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) &>
    Member(STag1 volatile & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) &&>
    Member(STag1 volatile & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const &>
    Member(STag1 volatile & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const &&>
    Member(STag1 volatile & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) volatile &>
    Member(STag1 volatile & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) volatile &&>
    Member(STag1 volatile & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const volatile &>
    Member(STag1 volatile & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const volatile &&>
    Member(STag1 volatile & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) &>
    Member(STag1 volatile && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) &&>
    Member(STag1 volatile && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const &>
    Member(STag1 volatile && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const &&>
    Member(STag1 volatile && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) volatile &>
    Member(STag1 volatile && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) volatile &&>
    Member(STag1 volatile && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const volatile &>
    Member(STag1 volatile && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const volatile &&>
    Member(STag1 volatile && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) &>
    Member(STag1 const volatile & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) &&>
    Member(STag1 const volatile & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const &>
    Member(STag1 const volatile & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const &&>
    Member(STag1 const volatile & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) volatile &>
    Member(STag1 const volatile & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) volatile &&>
    Member(STag1 const volatile & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const volatile &>
    Member(STag1 const volatile & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const volatile &&>
    Member(STag1 const volatile & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) &>
    Member(STag1 const volatile && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) &&>
    Member(STag1 const volatile && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const &>
    Member(STag1 const volatile && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const &&>
    Member(STag1 const volatile && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) volatile &>
    Member(STag1 const volatile && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) volatile &&>
    Member(STag1 const volatile && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const volatile &>
    Member(STag1 const volatile && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const volatile &&>
    Member(STag1 const volatile && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &, STag1 &) &>
    Member(STag1 & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) &&>
    Member(STag1 & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const &>
    Member(STag1 & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const &&>
    Member(STag1 & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) volatile &>
    Member(STag1 & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) volatile &&>
    Member(STag1 & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const volatile &>
    Member(STag1 & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const volatile &&>
    Member(STag1 & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) &>
    Member(STag1 & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) &&>
    Member(STag1 & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const &>
    Member(STag1 & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const &&>
    Member(STag1 & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) volatile &>
    Member(STag1 & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) volatile &&>
    Member(STag1 & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const volatile &>
    Member(STag1 & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const volatile &&>
    Member(STag1 & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) &>
    Member(STag1 & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) &&>
    Member(STag1 & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const &>
    Member(STag1 & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const &&>
    Member(STag1 & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) volatile &>
    Member(STag1 & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) volatile &&>
    Member(STag1 & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const volatile &>
    Member(STag1 & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const volatile &&>
    Member(STag1 & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) &>
    Member(STag1 & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) &&>
    Member(STag1 & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const &>
    Member(STag1 & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const &&>
    Member(STag1 & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) volatile &>
    Member(STag1 & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) volatile &&>
    Member(STag1 & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const volatile &>
    Member(STag1 & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const volatile &&>
    Member(STag1 & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) &>
    Member(STag1 & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) &&>
    Member(STag1 & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const &>
    Member(STag1 & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const &&>
    Member(STag1 & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) volatile &>
    Member(STag1 & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) volatile &&>
    Member(STag1 & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const volatile &>
    Member(STag1 & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&>
    Member(STag1 & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) &>
    Member(STag1 & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) &&>
    Member(STag1 & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const &>
    Member(STag1 & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const &&>
    Member(STag1 & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) volatile &>
    Member(STag1 & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&>
    Member(STag1 & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &>
    Member(STag1 & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&>
    Member(STag1 & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) &>
    Member(STag1 & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) &&>
    Member(STag1 & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const &>
    Member(STag1 & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const &&>
    Member(STag1 & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) volatile &>
    Member(STag1 & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&>
    Member(STag1 & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &>
    Member(STag1 & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&>
    Member(STag1 & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) &>
    Member(STag1 & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) &&>
    Member(STag1 & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const &>
    Member(STag1 & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const &&>
    Member(STag1 & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &>
    Member(STag1 & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&>
    Member(STag1 & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &>
    Member(STag1 & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&>
    Member(STag1 & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) &>
    Member(STag1 && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) &&>
    Member(STag1 && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const &>
    Member(STag1 && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const &&>
    Member(STag1 && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) volatile &>
    Member(STag1 && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) volatile &&>
    Member(STag1 && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const volatile &>
    Member(STag1 && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const volatile &&>
    Member(STag1 && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) &>
    Member(STag1 && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) &&>
    Member(STag1 && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const &>
    Member(STag1 && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const &&>
    Member(STag1 && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) volatile &>
    Member(STag1 && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) volatile &&>
    Member(STag1 && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const volatile &>
    Member(STag1 && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const volatile &&>
    Member(STag1 && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) &>
    Member(STag1 && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) &&>
    Member(STag1 && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const &>
    Member(STag1 && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const &&>
    Member(STag1 && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) volatile &>
    Member(STag1 && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) volatile &&>
    Member(STag1 && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const volatile &>
    Member(STag1 && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const volatile &&>
    Member(STag1 && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) &>
    Member(STag1 && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) &&>
    Member(STag1 && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const &>
    Member(STag1 && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const &&>
    Member(STag1 && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) volatile &>
    Member(STag1 && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) volatile &&>
    Member(STag1 && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const volatile &>
    Member(STag1 && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&>
    Member(STag1 && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) &>
    Member(STag1 && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) &&>
    Member(STag1 && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const &>
    Member(STag1 && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const &&>
    Member(STag1 && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) volatile &>
    Member(STag1 && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&>
    Member(STag1 && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &>
    Member(STag1 && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&>
    Member(STag1 && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) &>
    Member(STag1 && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) &&>
    Member(STag1 && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const &>
    Member(STag1 && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const &&>
    Member(STag1 && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &>
    Member(STag1 && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&>
    Member(STag1 && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &>
    Member(STag1 && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&>
    Member(STag1 && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) &>
    Member(STag1 && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) &&>
    Member(STag1 && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const &>
    Member(STag1 && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const &&>
    Member(STag1 && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &>
    Member(STag1 && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&>
    Member(STag1 && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &>
    Member(STag1 && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&>
    Member(STag1 && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) &>
    Member(STag1 && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) &&>
    Member(STag1 && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const &>
    Member(STag1 && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&>
    Member(STag1 && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &>
    Member(STag1 && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&>
    Member(STag1 && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &>
    Member(STag1 && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&>
    Member(STag1 && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) &>
    Member(STag1 const & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) &&>
    Member(STag1 const & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const &>
    Member(STag1 const & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const &&>
    Member(STag1 const & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) volatile &>
    Member(STag1 const & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) volatile &&>
    Member(STag1 const & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const volatile &>
    Member(STag1 const & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const volatile &&>
    Member(STag1 const & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) &>
    Member(STag1 const & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) &&>
    Member(STag1 const & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const &>
    Member(STag1 const & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const &&>
    Member(STag1 const & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) volatile &>
    Member(STag1 const & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) volatile &&>
    Member(STag1 const & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const volatile &>
    Member(STag1 const & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const volatile &&>
    Member(STag1 const & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) &>
    Member(STag1 const & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) &&>
    Member(STag1 const & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const &>
    Member(STag1 const & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const &&>
    Member(STag1 const & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) volatile &>
    Member(STag1 const & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) volatile &&>
    Member(STag1 const & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const volatile &>
    Member(STag1 const & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const volatile &&>
    Member(STag1 const & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) &>
    Member(STag1 const & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) &&>
    Member(STag1 const & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const &>
    Member(STag1 const & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const &&>
    Member(STag1 const & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) volatile &>
    Member(STag1 const & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) volatile &&>
    Member(STag1 const & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const volatile &>
    Member(STag1 const & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&>
    Member(STag1 const & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) &>
    Member(STag1 const & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) &&>
    Member(STag1 const & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const &>
    Member(STag1 const & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const &&>
    Member(STag1 const & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) volatile &>
    Member(STag1 const & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&>
    Member(STag1 const & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &>
    Member(STag1 const & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&>
    Member(STag1 const & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) &>
    Member(STag1 const & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) &&>
    Member(STag1 const & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const &>
    Member(STag1 const & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const &&>
    Member(STag1 const & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &>
    Member(STag1 const & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&>
    Member(STag1 const & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &>
    Member(STag1 const & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&>
    Member(STag1 const & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) &>
    Member(STag1 const & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) &&>
    Member(STag1 const & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const &>
    Member(STag1 const & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const &&>
    Member(STag1 const & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &>
    Member(STag1 const & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&>
    Member(STag1 const & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &>
    Member(STag1 const & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&>
    Member(STag1 const & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) &>
    Member(STag1 const & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) &&>
    Member(STag1 const & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const &>
    Member(STag1 const & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&>
    Member(STag1 const & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &>
    Member(STag1 const & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&>
    Member(STag1 const & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &>
    Member(STag1 const & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&>
    Member(STag1 const & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) &>
    Member(STag1 const && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) &&>
    Member(STag1 const && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const &>
    Member(STag1 const && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const &&>
    Member(STag1 const && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) volatile &>
    Member(STag1 const && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) volatile &&>
    Member(STag1 const && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const volatile &>
    Member(STag1 const && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const volatile &&>
    Member(STag1 const && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) &>
    Member(STag1 const && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) &&>
    Member(STag1 const && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const &>
    Member(STag1 const && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const &&>
    Member(STag1 const && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) volatile &>
    Member(STag1 const && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) volatile &&>
    Member(STag1 const && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const volatile &>
    Member(STag1 const && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&>
    Member(STag1 const && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) &>
    Member(STag1 const && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) &&>
    Member(STag1 const && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const &>
    Member(STag1 const && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const &&>
    Member(STag1 const && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) volatile &>
    Member(STag1 const && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) volatile &&>
    Member(STag1 const && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const volatile &>
    Member(STag1 const && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&>
    Member(STag1 const && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) &>
    Member(STag1 const && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) &&>
    Member(STag1 const && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const &>
    Member(STag1 const && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const &&>
    Member(STag1 const && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) volatile &>
    Member(STag1 const && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&>
    Member(STag1 const && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &>
    Member(STag1 const && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&>
    Member(STag1 const && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) &>
    Member(STag1 const && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) &&>
    Member(STag1 const && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const &>
    Member(STag1 const && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const &&>
    Member(STag1 const && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &>
    Member(STag1 const && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&>
    Member(STag1 const && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &>
    Member(STag1 const && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&>
    Member(STag1 const && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) &>
    Member(STag1 const && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) &&>
    Member(STag1 const && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const &>
    Member(STag1 const && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&>
    Member(STag1 const && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &>
    Member(STag1 const && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&>
    Member(STag1 const && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &>
    Member(STag1 const && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&>
    Member(STag1 const && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) &>
    Member(STag1 const && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) &&>
    Member(STag1 const && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const &>
    Member(STag1 const && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&>
    Member(STag1 const && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &>
    Member(STag1 const && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&>
    Member(STag1 const && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &>
    Member(STag1 const && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&>
    Member(STag1 const && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) &>
    Member(STag1 const && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&>
    Member(STag1 const && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &>
    Member(STag1 const && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&>
    Member(STag1 const && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &>
    Member(STag1 const && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&>
    Member(STag1 const && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &>
    Member(STag1 const && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&>
    Member(STag1 const && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) &>
    Member(STag1 volatile & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) &&>
    Member(STag1 volatile & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const &>
    Member(STag1 volatile & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const &&>
    Member(STag1 volatile & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) volatile &>
    Member(STag1 volatile & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) volatile &&>
    Member(STag1 volatile & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const volatile &>
    Member(STag1 volatile & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&>
    Member(STag1 volatile & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) &>
    Member(STag1 volatile & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) &&>
    Member(STag1 volatile & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const &>
    Member(STag1 volatile & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const &&>
    Member(STag1 volatile & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) volatile &>
    Member(STag1 volatile & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&>
    Member(STag1 volatile & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &>
    Member(STag1 volatile & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&>
    Member(STag1 volatile & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) &>
    Member(STag1 volatile & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) &&>
    Member(STag1 volatile & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const &>
    Member(STag1 volatile & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const &&>
    Member(STag1 volatile & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) volatile &>
    Member(STag1 volatile & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&>
    Member(STag1 volatile & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &>
    Member(STag1 volatile & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&>
    Member(STag1 volatile & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) &>
    Member(STag1 volatile & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) &&>
    Member(STag1 volatile & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const &>
    Member(STag1 volatile & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const &&>
    Member(STag1 volatile & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &>
    Member(STag1 volatile & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&>
    Member(STag1 volatile & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &>
    Member(STag1 volatile & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&>
    Member(STag1 volatile & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) &>
    Member(STag1 volatile & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) &&>
    Member(STag1 volatile & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const &>
    Member(STag1 volatile & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&>
    Member(STag1 volatile & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &>
    Member(STag1 volatile & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&>
    Member(STag1 volatile & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &>
    Member(STag1 volatile & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&>
    Member(STag1 volatile & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) &>
    Member(STag1 volatile & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&>
    Member(STag1 volatile & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &>
    Member(STag1 volatile & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&>
    Member(STag1 volatile & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &>
    Member(STag1 volatile & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&>
    Member(STag1 volatile & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &>
    Member(STag1 volatile & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&>
    Member(STag1 volatile & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) &>
    Member(STag1 volatile & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&>
    Member(STag1 volatile & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &>
    Member(STag1 volatile & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&>
    Member(STag1 volatile & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &>
    Member(STag1 volatile & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&>
    Member(STag1 volatile & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &>
    Member(STag1 volatile & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&>
    Member(STag1 volatile & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &>
    Member(STag1 volatile & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&>
    Member(STag1 volatile & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &>
    Member(STag1 volatile & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&>
    Member(STag1 volatile & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &>
    Member(STag1 volatile & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&>
    Member(STag1 volatile & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &>
    Member(STag1 volatile & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&>
    Member(STag1 volatile & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) &>
    Member(STag1 volatile && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) &&>
    Member(STag1 volatile && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const &>
    Member(STag1 volatile && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const &&>
    Member(STag1 volatile && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) volatile &>
    Member(STag1 volatile && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&>
    Member(STag1 volatile && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &>
    Member(STag1 volatile && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&>
    Member(STag1 volatile && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) &>
    Member(STag1 volatile && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) &&>
    Member(STag1 volatile && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const &>
    Member(STag1 volatile && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const &&>
    Member(STag1 volatile && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &>
    Member(STag1 volatile && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&>
    Member(STag1 volatile && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &>
    Member(STag1 volatile && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&>
    Member(STag1 volatile && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) &>
    Member(STag1 volatile && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) &&>
    Member(STag1 volatile && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const &>
    Member(STag1 volatile && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const &&>
    Member(STag1 volatile && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &>
    Member(STag1 volatile && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&>
    Member(STag1 volatile && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &>
    Member(STag1 volatile && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&>
    Member(STag1 volatile && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) &>
    Member(STag1 volatile && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) &&>
    Member(STag1 volatile && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const &>
    Member(STag1 volatile && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&>
    Member(STag1 volatile && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &>
    Member(STag1 volatile && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&>
    Member(STag1 volatile && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &>
    Member(STag1 volatile && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&>
    Member(STag1 volatile && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) &>
    Member(STag1 volatile && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&>
    Member(STag1 volatile && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &>
    Member(STag1 volatile && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&>
    Member(STag1 volatile && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &>
    Member(STag1 volatile && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&>
    Member(STag1 volatile && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &>
    Member(STag1 volatile && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&>
    Member(STag1 volatile && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &>
    Member(STag1 volatile && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&>
    Member(STag1 volatile && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &>
    Member(STag1 volatile && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&>
    Member(STag1 volatile && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &>
    Member(STag1 volatile && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&>
    Member(STag1 volatile && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &>
    Member(STag1 volatile && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&>
    Member(STag1 volatile && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &>
    Member(STag1 volatile && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&>
    Member(STag1 volatile && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &>
    Member(STag1 volatile && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&>
    Member(STag1 volatile && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &>
    Member(STag1 volatile && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&>
    Member(STag1 volatile && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &>
    Member(STag1 volatile && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&>
    Member(STag1 volatile && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &>
    Member(STag1 volatile && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&>
    Member(STag1 volatile && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &>
    Member(STag1 volatile && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&>
    Member(STag1 volatile && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &>
    Member(STag1 volatile && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&>
    Member(STag1 volatile && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &>
    Member(STag1 volatile && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&>
    Member(STag1 volatile && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) &>
    Member(STag1 const volatile & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) &&>
    Member(STag1 const volatile & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const &>
    Member(STag1 const volatile & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const &&>
    Member(STag1 const volatile & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) volatile &>
    Member(STag1 const volatile & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&>
    Member(STag1 const volatile & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &>
    Member(STag1 const volatile & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&>
    Member(STag1 const volatile & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) &>
    Member(STag1 const volatile & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) &&>
    Member(STag1 const volatile & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const &>
    Member(STag1 const volatile & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const &&>
    Member(STag1 const volatile & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &>
    Member(STag1 const volatile & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&>
    Member(STag1 const volatile & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &>
    Member(STag1 const volatile & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&>
    Member(STag1 const volatile & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) &>
    Member(STag1 const volatile & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) &&>
    Member(STag1 const volatile & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const &>
    Member(STag1 const volatile & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const &&>
    Member(STag1 const volatile & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &>
    Member(STag1 const volatile & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&>
    Member(STag1 const volatile & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &>
    Member(STag1 const volatile & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&>
    Member(STag1 const volatile & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) &>
    Member(STag1 const volatile & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) &&>
    Member(STag1 const volatile & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const &>
    Member(STag1 const volatile & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&>
    Member(STag1 const volatile & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &>
    Member(STag1 const volatile & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&>
    Member(STag1 const volatile & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &>
    Member(STag1 const volatile & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&>
    Member(STag1 const volatile & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) &>
    Member(STag1 const volatile & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&>
    Member(STag1 const volatile & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &>
    Member(STag1 const volatile & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&>
    Member(STag1 const volatile & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &>
    Member(STag1 const volatile & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&>
    Member(STag1 const volatile & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &>
    Member(STag1 const volatile & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&>
    Member(STag1 const volatile & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &>
    Member(STag1 const volatile & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&>
    Member(STag1 const volatile & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &>
    Member(STag1 const volatile & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&>
    Member(STag1 const volatile & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &>
    Member(STag1 const volatile & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&>
    Member(STag1 const volatile & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &>
    Member(STag1 const volatile & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&>
    Member(STag1 const volatile & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) &>
    Member(STag1 const volatile && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) &&>
    Member(STag1 const volatile && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const &>
    Member(STag1 const volatile && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const &&>
    Member(STag1 const volatile && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &>
    Member(STag1 const volatile && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&>
    Member(STag1 const volatile && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &>
    Member(STag1 const volatile && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&>
    Member(STag1 const volatile && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) &>
    Member(STag1 const volatile && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) &&>
    Member(STag1 const volatile && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const &>
    Member(STag1 const volatile && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&>
    Member(STag1 const volatile && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &>
    Member(STag1 const volatile && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&>
    Member(STag1 const volatile && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &>
    Member(STag1 const volatile && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&>
    Member(STag1 const volatile && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) &>
    Member(STag1 const volatile && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) &&>
    Member(STag1 const volatile && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const &>
    Member(STag1 const volatile && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&>
    Member(STag1 const volatile && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &>
    Member(STag1 const volatile && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&>
    Member(STag1 const volatile && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &>
    Member(STag1 const volatile && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&>
    Member(STag1 const volatile && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) &>
    Member(STag1 const volatile && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&>
    Member(STag1 const volatile && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &>
    Member(STag1 const volatile && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&>
    Member(STag1 const volatile && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &>
    Member(STag1 const volatile && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&>
    Member(STag1 const volatile && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &>
    Member(STag1 const volatile && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&>
    Member(STag1 const volatile && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &>
    Member(STag1 const volatile && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&>
    Member(STag1 const volatile && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &>
    Member(STag1 const volatile && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&>
    Member(STag1 const volatile && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &>
    Member(STag1 const volatile && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&>
    Member(STag1 const volatile && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &>
    Member(STag1 const volatile && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&>
    Member(STag1 const volatile && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &>
    Member(STag1 const volatile && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&>
    Member(STag1 const volatile && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &>
    Member(STag1 const volatile && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&>
    Member(STag1 const volatile && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &>
    Member(STag1 const volatile && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&>
    Member(STag1 const volatile && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &>
    Member(STag1 const volatile && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&>
    Member(STag1 const volatile && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }
    // AUTO GENERATED END //
};

class MemberFuncLRef11 {
    int id;
    MemberFuncLRef11(MemberFuncLRef11 const&);
    MemberFuncLRef11& operator=(MemberFuncLRef11 const&);

public:
    explicit MemberFuncLRef11(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void() &>
    Member() & {
      return ReturnTag<void() &>(this->value());
    }

    ReturnTag<void() const &>
    Member() const & {
      return ReturnTag<void() const &>(this->value());
    }

    ReturnTag<void() volatile &>
    Member() volatile & {
      return ReturnTag<void() volatile &>(this->value());
    }

    ReturnTag<void() const volatile &>
    Member() const volatile & {
      return ReturnTag<void() const volatile &>(this->value());
    }

    ReturnTag<void(STag1 &) &>
    Member(STag1 & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const &>
    Member(STag1 & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) volatile &>
    Member(STag1 & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const volatile &>
    Member(STag1 & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) &>
    Member(STag1 && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const &>
    Member(STag1 && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) volatile &>
    Member(STag1 && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const volatile &>
    Member(STag1 && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) &>
    Member(STag1 const & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const &>
    Member(STag1 const & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) volatile &>
    Member(STag1 const & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const volatile &>
    Member(STag1 const & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) &>
    Member(STag1 const && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const &>
    Member(STag1 const && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) volatile &>
    Member(STag1 const && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const volatile &>
    Member(STag1 const && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) &>
    Member(STag1 volatile & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const &>
    Member(STag1 volatile & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) volatile &>
    Member(STag1 volatile & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const volatile &>
    Member(STag1 volatile & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) &>
    Member(STag1 volatile && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const &>
    Member(STag1 volatile && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) volatile &>
    Member(STag1 volatile && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const volatile &>
    Member(STag1 volatile && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) &>
    Member(STag1 const volatile & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const &>
    Member(STag1 const volatile & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) volatile &>
    Member(STag1 const volatile & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const volatile &>
    Member(STag1 const volatile & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) &>
    Member(STag1 const volatile && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const &>
    Member(STag1 const volatile && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) volatile &>
    Member(STag1 const volatile && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const volatile &>
    Member(STag1 const volatile && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &, STag1 &) &>
    Member(STag1 & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const &>
    Member(STag1 & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) volatile &>
    Member(STag1 & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const volatile &>
    Member(STag1 & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) &>
    Member(STag1 & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const &>
    Member(STag1 & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) volatile &>
    Member(STag1 & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const volatile &>
    Member(STag1 & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) &>
    Member(STag1 & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const &>
    Member(STag1 & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) volatile &>
    Member(STag1 & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const volatile &>
    Member(STag1 & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) &>
    Member(STag1 & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const &>
    Member(STag1 & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) volatile &>
    Member(STag1 & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const volatile &>
    Member(STag1 & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) &>
    Member(STag1 & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const &>
    Member(STag1 & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) volatile &>
    Member(STag1 & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const volatile &>
    Member(STag1 & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) &>
    Member(STag1 & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const &>
    Member(STag1 & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) volatile &>
    Member(STag1 & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &>
    Member(STag1 & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) &>
    Member(STag1 & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const &>
    Member(STag1 & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) volatile &>
    Member(STag1 & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &>
    Member(STag1 & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) &>
    Member(STag1 & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const &>
    Member(STag1 & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &>
    Member(STag1 & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &>
    Member(STag1 & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) &>
    Member(STag1 && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const &>
    Member(STag1 && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) volatile &>
    Member(STag1 && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const volatile &>
    Member(STag1 && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) &>
    Member(STag1 && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const &>
    Member(STag1 && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) volatile &>
    Member(STag1 && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const volatile &>
    Member(STag1 && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) &>
    Member(STag1 && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const &>
    Member(STag1 && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) volatile &>
    Member(STag1 && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const volatile &>
    Member(STag1 && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) &>
    Member(STag1 && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const &>
    Member(STag1 && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) volatile &>
    Member(STag1 && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const volatile &>
    Member(STag1 && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) &>
    Member(STag1 && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const &>
    Member(STag1 && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) volatile &>
    Member(STag1 && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &>
    Member(STag1 && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) &>
    Member(STag1 && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const &>
    Member(STag1 && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &>
    Member(STag1 && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &>
    Member(STag1 && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) &>
    Member(STag1 && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const &>
    Member(STag1 && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &>
    Member(STag1 && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &>
    Member(STag1 && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) &>
    Member(STag1 && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const &>
    Member(STag1 && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &>
    Member(STag1 && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &>
    Member(STag1 && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) &>
    Member(STag1 const & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const &>
    Member(STag1 const & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) volatile &>
    Member(STag1 const & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const volatile &>
    Member(STag1 const & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) &>
    Member(STag1 const & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const &>
    Member(STag1 const & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) volatile &>
    Member(STag1 const & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const volatile &>
    Member(STag1 const & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) &>
    Member(STag1 const & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const &>
    Member(STag1 const & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) volatile &>
    Member(STag1 const & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const volatile &>
    Member(STag1 const & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) &>
    Member(STag1 const & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const &>
    Member(STag1 const & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) volatile &>
    Member(STag1 const & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const volatile &>
    Member(STag1 const & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) &>
    Member(STag1 const & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const &>
    Member(STag1 const & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) volatile &>
    Member(STag1 const & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &>
    Member(STag1 const & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) &>
    Member(STag1 const & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const &>
    Member(STag1 const & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &>
    Member(STag1 const & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &>
    Member(STag1 const & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) &>
    Member(STag1 const & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const &>
    Member(STag1 const & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &>
    Member(STag1 const & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &>
    Member(STag1 const & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) &>
    Member(STag1 const & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const &>
    Member(STag1 const & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &>
    Member(STag1 const & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &>
    Member(STag1 const & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) &>
    Member(STag1 const && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const &>
    Member(STag1 const && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) volatile &>
    Member(STag1 const && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const volatile &>
    Member(STag1 const && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) &>
    Member(STag1 const && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const &>
    Member(STag1 const && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) volatile &>
    Member(STag1 const && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const volatile &>
    Member(STag1 const && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) &>
    Member(STag1 const && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const &>
    Member(STag1 const && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) volatile &>
    Member(STag1 const && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const volatile &>
    Member(STag1 const && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) &>
    Member(STag1 const && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const &>
    Member(STag1 const && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) volatile &>
    Member(STag1 const && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &>
    Member(STag1 const && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) &>
    Member(STag1 const && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const &>
    Member(STag1 const && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &>
    Member(STag1 const && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &>
    Member(STag1 const && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) &>
    Member(STag1 const && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const &>
    Member(STag1 const && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &>
    Member(STag1 const && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &>
    Member(STag1 const && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) &>
    Member(STag1 const && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const &>
    Member(STag1 const && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &>
    Member(STag1 const && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &>
    Member(STag1 const && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) &>
    Member(STag1 const && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &>
    Member(STag1 const && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &>
    Member(STag1 const && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &>
    Member(STag1 const && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) &>
    Member(STag1 volatile & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const &>
    Member(STag1 volatile & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) volatile &>
    Member(STag1 volatile & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const volatile &>
    Member(STag1 volatile & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) &>
    Member(STag1 volatile & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const &>
    Member(STag1 volatile & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) volatile &>
    Member(STag1 volatile & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &>
    Member(STag1 volatile & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) &>
    Member(STag1 volatile & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const &>
    Member(STag1 volatile & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) volatile &>
    Member(STag1 volatile & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &>
    Member(STag1 volatile & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) &>
    Member(STag1 volatile & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const &>
    Member(STag1 volatile & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &>
    Member(STag1 volatile & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &>
    Member(STag1 volatile & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) &>
    Member(STag1 volatile & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const &>
    Member(STag1 volatile & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &>
    Member(STag1 volatile & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &>
    Member(STag1 volatile & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) &>
    Member(STag1 volatile & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &>
    Member(STag1 volatile & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &>
    Member(STag1 volatile & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &>
    Member(STag1 volatile & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) &>
    Member(STag1 volatile & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &>
    Member(STag1 volatile & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &>
    Member(STag1 volatile & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &>
    Member(STag1 volatile & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &>
    Member(STag1 volatile & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &>
    Member(STag1 volatile & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &>
    Member(STag1 volatile & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &>
    Member(STag1 volatile & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) &>
    Member(STag1 volatile && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const &>
    Member(STag1 volatile && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) volatile &>
    Member(STag1 volatile && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &>
    Member(STag1 volatile && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) &>
    Member(STag1 volatile && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const &>
    Member(STag1 volatile && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &>
    Member(STag1 volatile && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &>
    Member(STag1 volatile && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) &>
    Member(STag1 volatile && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const &>
    Member(STag1 volatile && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &>
    Member(STag1 volatile && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &>
    Member(STag1 volatile && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) &>
    Member(STag1 volatile && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const &>
    Member(STag1 volatile && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &>
    Member(STag1 volatile && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &>
    Member(STag1 volatile && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) &>
    Member(STag1 volatile && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &>
    Member(STag1 volatile && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &>
    Member(STag1 volatile && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &>
    Member(STag1 volatile && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &>
    Member(STag1 volatile && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &>
    Member(STag1 volatile && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &>
    Member(STag1 volatile && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &>
    Member(STag1 volatile && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &>
    Member(STag1 volatile && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &>
    Member(STag1 volatile && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &>
    Member(STag1 volatile && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &>
    Member(STag1 volatile && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &>
    Member(STag1 volatile && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &>
    Member(STag1 volatile && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &>
    Member(STag1 volatile && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &>
    Member(STag1 volatile && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) &>
    Member(STag1 const volatile & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const &>
    Member(STag1 const volatile & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) volatile &>
    Member(STag1 const volatile & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &>
    Member(STag1 const volatile & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) &>
    Member(STag1 const volatile & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const &>
    Member(STag1 const volatile & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &>
    Member(STag1 const volatile & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &>
    Member(STag1 const volatile & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) &>
    Member(STag1 const volatile & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const &>
    Member(STag1 const volatile & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &>
    Member(STag1 const volatile & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &>
    Member(STag1 const volatile & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) &>
    Member(STag1 const volatile & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const &>
    Member(STag1 const volatile & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &>
    Member(STag1 const volatile & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &>
    Member(STag1 const volatile & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) &>
    Member(STag1 const volatile & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &>
    Member(STag1 const volatile & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &>
    Member(STag1 const volatile & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &>
    Member(STag1 const volatile & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &>
    Member(STag1 const volatile & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &>
    Member(STag1 const volatile & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &>
    Member(STag1 const volatile & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &>
    Member(STag1 const volatile & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &>
    Member(STag1 const volatile & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &>
    Member(STag1 const volatile & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) &>
    Member(STag1 const volatile && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const &>
    Member(STag1 const volatile && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &>
    Member(STag1 const volatile && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &>
    Member(STag1 const volatile && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) &>
    Member(STag1 const volatile && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const &>
    Member(STag1 const volatile && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &>
    Member(STag1 const volatile && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &>
    Member(STag1 const volatile && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) &>
    Member(STag1 const volatile && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const &>
    Member(STag1 const volatile && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &>
    Member(STag1 const volatile && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &>
    Member(STag1 const volatile && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) &>
    Member(STag1 const volatile && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &>
    Member(STag1 const volatile && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &>
    Member(STag1 const volatile && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &>
    Member(STag1 const volatile && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &>
    Member(STag1 const volatile && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &>
    Member(STag1 const volatile && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &>
    Member(STag1 const volatile && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &>
    Member(STag1 const volatile && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &>
    Member(STag1 const volatile && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &>
    Member(STag1 const volatile && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &>
    Member(STag1 const volatile && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &>
    Member(STag1 const volatile && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &>
    Member(STag1 const volatile && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &>
    Member(STag1 const volatile && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }
    // AUTO GENERATED END //
};

class RefFunctor11 {
    int id;
    RefFunctor11(RefFunctor11 const&);
    RefFunctor11& operator=(RefFunctor11 const&);

public:
    explicit RefFunctor11(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void() &>
    operator()() & {
      return ReturnTag<void() &>(this->value());
    }

    ReturnTag<void() &&>
    operator()() && {
      return ReturnTag<void() &&>(this->value());
    }

    ReturnTag<void() const &>
    operator()() const & {
      return ReturnTag<void() const &>(this->value());
    }

    ReturnTag<void() const &&>
    operator()() const && {
      return ReturnTag<void() const &&>(this->value());
    }

    ReturnTag<void() volatile &>
    operator()() volatile & {
      return ReturnTag<void() volatile &>(this->value());
    }

    ReturnTag<void() volatile &&>
    operator()() volatile && {
      return ReturnTag<void() volatile &&>(this->value());
    }

    ReturnTag<void() const volatile &>
    operator()() const volatile & {
      return ReturnTag<void() const volatile &>(this->value());
    }

    ReturnTag<void() const volatile &&>
    operator()() const volatile && {
      return ReturnTag<void() const volatile &&>(this->value());
    }

    ReturnTag<void(STag1 &) &>
    operator()(STag1 & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) &&>
    operator()(STag1 & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const &>
    operator()(STag1 & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const &&>
    operator()(STag1 & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) volatile &>
    operator()(STag1 & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) volatile &&>
    operator()(STag1 & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const volatile &>
    operator()(STag1 & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const volatile &&>
    operator()(STag1 & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) &>
    operator()(STag1 && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) &&>
    operator()(STag1 && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const &>
    operator()(STag1 && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const &&>
    operator()(STag1 && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) volatile &>
    operator()(STag1 && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) volatile &&>
    operator()(STag1 && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const volatile &>
    operator()(STag1 && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const volatile &&>
    operator()(STag1 && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) &>
    operator()(STag1 const & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) &&>
    operator()(STag1 const & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const &>
    operator()(STag1 const & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const &&>
    operator()(STag1 const & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) volatile &>
    operator()(STag1 const & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) volatile &&>
    operator()(STag1 const & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const volatile &>
    operator()(STag1 const & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const volatile &&>
    operator()(STag1 const & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) &>
    operator()(STag1 const && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) &&>
    operator()(STag1 const && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const &>
    operator()(STag1 const && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const &&>
    operator()(STag1 const && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) volatile &>
    operator()(STag1 const && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) volatile &&>
    operator()(STag1 const && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const volatile &>
    operator()(STag1 const && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const volatile &&>
    operator()(STag1 const && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) &>
    operator()(STag1 volatile & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) &&>
    operator()(STag1 volatile & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const &>
    operator()(STag1 volatile & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const &&>
    operator()(STag1 volatile & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) volatile &>
    operator()(STag1 volatile & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) volatile &&>
    operator()(STag1 volatile & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const volatile &>
    operator()(STag1 volatile & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const volatile &&>
    operator()(STag1 volatile & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) &>
    operator()(STag1 volatile && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) &&>
    operator()(STag1 volatile && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const &>
    operator()(STag1 volatile && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const &&>
    operator()(STag1 volatile && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) volatile &>
    operator()(STag1 volatile && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) volatile &&>
    operator()(STag1 volatile && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const volatile &>
    operator()(STag1 volatile && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const volatile &&>
    operator()(STag1 volatile && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) &>
    operator()(STag1 const volatile & a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) &&>
    operator()(STag1 const volatile & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const &>
    operator()(STag1 const volatile & a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const &&>
    operator()(STag1 const volatile & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) volatile &>
    operator()(STag1 const volatile & a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) volatile &&>
    operator()(STag1 const volatile & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const volatile &>
    operator()(STag1 const volatile & a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const volatile &&>
    operator()(STag1 const volatile & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) &>
    operator()(STag1 const volatile && a1) & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) &&>
    operator()(STag1 const volatile && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const &>
    operator()(STag1 const volatile && a1) const & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const &&>
    operator()(STag1 const volatile && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) volatile &>
    operator()(STag1 const volatile && a1) volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) volatile &&>
    operator()(STag1 const volatile && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const volatile &>
    operator()(STag1 const volatile && a1) const volatile & {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const volatile &&>
    operator()(STag1 const volatile && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &, STag1 &) &>
    operator()(STag1 & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) &&>
    operator()(STag1 & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const &>
    operator()(STag1 & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const &&>
    operator()(STag1 & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) volatile &>
    operator()(STag1 & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) volatile &&>
    operator()(STag1 & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const volatile &>
    operator()(STag1 & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const volatile &&>
    operator()(STag1 & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) &>
    operator()(STag1 & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) &&>
    operator()(STag1 & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const &>
    operator()(STag1 & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const &&>
    operator()(STag1 & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) volatile &>
    operator()(STag1 & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) volatile &&>
    operator()(STag1 & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const volatile &>
    operator()(STag1 & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const volatile &&>
    operator()(STag1 & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) &>
    operator()(STag1 & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) &&>
    operator()(STag1 & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const &>
    operator()(STag1 & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const &&>
    operator()(STag1 & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) volatile &>
    operator()(STag1 & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) volatile &&>
    operator()(STag1 & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const volatile &>
    operator()(STag1 & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const volatile &&>
    operator()(STag1 & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) &>
    operator()(STag1 & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) &&>
    operator()(STag1 & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const &>
    operator()(STag1 & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const &&>
    operator()(STag1 & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) volatile &>
    operator()(STag1 & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) volatile &&>
    operator()(STag1 & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const volatile &>
    operator()(STag1 & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const volatile &&>
    operator()(STag1 & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) &>
    operator()(STag1 & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) &&>
    operator()(STag1 & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const &>
    operator()(STag1 & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const &&>
    operator()(STag1 & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) volatile &>
    operator()(STag1 & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) volatile &&>
    operator()(STag1 & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const volatile &>
    operator()(STag1 & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&>
    operator()(STag1 & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) &>
    operator()(STag1 & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) &&>
    operator()(STag1 & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const &>
    operator()(STag1 & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const &&>
    operator()(STag1 & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) volatile &>
    operator()(STag1 & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&>
    operator()(STag1 & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &>
    operator()(STag1 & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&>
    operator()(STag1 & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) &>
    operator()(STag1 & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) &&>
    operator()(STag1 & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const &>
    operator()(STag1 & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const &&>
    operator()(STag1 & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) volatile &>
    operator()(STag1 & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&>
    operator()(STag1 & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &>
    operator()(STag1 & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&>
    operator()(STag1 & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) &>
    operator()(STag1 & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) &&>
    operator()(STag1 & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const &>
    operator()(STag1 & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const &&>
    operator()(STag1 & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &>
    operator()(STag1 & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&>
    operator()(STag1 & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &>
    operator()(STag1 & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&>
    operator()(STag1 & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) &>
    operator()(STag1 && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) &&>
    operator()(STag1 && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const &>
    operator()(STag1 && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const &&>
    operator()(STag1 && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) volatile &>
    operator()(STag1 && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) volatile &&>
    operator()(STag1 && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const volatile &>
    operator()(STag1 && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const volatile &&>
    operator()(STag1 && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) &>
    operator()(STag1 && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) &&>
    operator()(STag1 && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const &>
    operator()(STag1 && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const &&>
    operator()(STag1 && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) volatile &>
    operator()(STag1 && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) volatile &&>
    operator()(STag1 && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const volatile &>
    operator()(STag1 && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const volatile &&>
    operator()(STag1 && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) &>
    operator()(STag1 && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) &&>
    operator()(STag1 && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const &>
    operator()(STag1 && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const &&>
    operator()(STag1 && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) volatile &>
    operator()(STag1 && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) volatile &&>
    operator()(STag1 && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const volatile &>
    operator()(STag1 && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const volatile &&>
    operator()(STag1 && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) &>
    operator()(STag1 && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) &&>
    operator()(STag1 && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const &>
    operator()(STag1 && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const &&>
    operator()(STag1 && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) volatile &>
    operator()(STag1 && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) volatile &&>
    operator()(STag1 && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const volatile &>
    operator()(STag1 && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&>
    operator()(STag1 && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) &>
    operator()(STag1 && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) &&>
    operator()(STag1 && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const &>
    operator()(STag1 && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const &&>
    operator()(STag1 && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) volatile &>
    operator()(STag1 && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&>
    operator()(STag1 && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &>
    operator()(STag1 && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&>
    operator()(STag1 && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) &>
    operator()(STag1 && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) &&>
    operator()(STag1 && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const &>
    operator()(STag1 && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const &&>
    operator()(STag1 && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &>
    operator()(STag1 && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&>
    operator()(STag1 && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &>
    operator()(STag1 && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&>
    operator()(STag1 && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) &>
    operator()(STag1 && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) &&>
    operator()(STag1 && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const &>
    operator()(STag1 && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const &&>
    operator()(STag1 && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &>
    operator()(STag1 && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&>
    operator()(STag1 && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &>
    operator()(STag1 && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&>
    operator()(STag1 && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) &>
    operator()(STag1 && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) &&>
    operator()(STag1 && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const &>
    operator()(STag1 && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&>
    operator()(STag1 && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &>
    operator()(STag1 && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&>
    operator()(STag1 && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &>
    operator()(STag1 && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&>
    operator()(STag1 && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) &>
    operator()(STag1 const & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) &&>
    operator()(STag1 const & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const &>
    operator()(STag1 const & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const &&>
    operator()(STag1 const & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) volatile &>
    operator()(STag1 const & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) volatile &&>
    operator()(STag1 const & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const volatile &>
    operator()(STag1 const & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const volatile &&>
    operator()(STag1 const & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) &>
    operator()(STag1 const & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) &&>
    operator()(STag1 const & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const &>
    operator()(STag1 const & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const &&>
    operator()(STag1 const & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) volatile &>
    operator()(STag1 const & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) volatile &&>
    operator()(STag1 const & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const volatile &>
    operator()(STag1 const & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const volatile &&>
    operator()(STag1 const & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) &>
    operator()(STag1 const & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) &&>
    operator()(STag1 const & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const &>
    operator()(STag1 const & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const &&>
    operator()(STag1 const & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) volatile &>
    operator()(STag1 const & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) volatile &&>
    operator()(STag1 const & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const volatile &>
    operator()(STag1 const & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const volatile &&>
    operator()(STag1 const & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) &>
    operator()(STag1 const & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) &&>
    operator()(STag1 const & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const &>
    operator()(STag1 const & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const &&>
    operator()(STag1 const & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) volatile &>
    operator()(STag1 const & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) volatile &&>
    operator()(STag1 const & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const volatile &>
    operator()(STag1 const & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&>
    operator()(STag1 const & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) &>
    operator()(STag1 const & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) &&>
    operator()(STag1 const & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const &>
    operator()(STag1 const & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const &&>
    operator()(STag1 const & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) volatile &>
    operator()(STag1 const & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&>
    operator()(STag1 const & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &>
    operator()(STag1 const & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&>
    operator()(STag1 const & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) &>
    operator()(STag1 const & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) &&>
    operator()(STag1 const & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const &>
    operator()(STag1 const & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const &&>
    operator()(STag1 const & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &>
    operator()(STag1 const & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&>
    operator()(STag1 const & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &>
    operator()(STag1 const & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&>
    operator()(STag1 const & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) &>
    operator()(STag1 const & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) &&>
    operator()(STag1 const & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const &>
    operator()(STag1 const & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const &&>
    operator()(STag1 const & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &>
    operator()(STag1 const & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&>
    operator()(STag1 const & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &>
    operator()(STag1 const & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&>
    operator()(STag1 const & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) &>
    operator()(STag1 const & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) &&>
    operator()(STag1 const & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const &>
    operator()(STag1 const & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&>
    operator()(STag1 const & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &>
    operator()(STag1 const & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&>
    operator()(STag1 const & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &>
    operator()(STag1 const & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&>
    operator()(STag1 const & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) &>
    operator()(STag1 const && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) &&>
    operator()(STag1 const && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const &>
    operator()(STag1 const && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const &&>
    operator()(STag1 const && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) volatile &>
    operator()(STag1 const && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) volatile &&>
    operator()(STag1 const && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const volatile &>
    operator()(STag1 const && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const volatile &&>
    operator()(STag1 const && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) &>
    operator()(STag1 const && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) &&>
    operator()(STag1 const && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const &>
    operator()(STag1 const && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const &&>
    operator()(STag1 const && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) volatile &>
    operator()(STag1 const && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) volatile &&>
    operator()(STag1 const && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const volatile &>
    operator()(STag1 const && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&>
    operator()(STag1 const && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) &>
    operator()(STag1 const && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) &&>
    operator()(STag1 const && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const &>
    operator()(STag1 const && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const &&>
    operator()(STag1 const && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) volatile &>
    operator()(STag1 const && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) volatile &&>
    operator()(STag1 const && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const volatile &>
    operator()(STag1 const && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&>
    operator()(STag1 const && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) &>
    operator()(STag1 const && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) &&>
    operator()(STag1 const && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const &>
    operator()(STag1 const && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const &&>
    operator()(STag1 const && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) volatile &>
    operator()(STag1 const && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&>
    operator()(STag1 const && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &>
    operator()(STag1 const && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&>
    operator()(STag1 const && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) &>
    operator()(STag1 const && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) &&>
    operator()(STag1 const && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const &>
    operator()(STag1 const && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const &&>
    operator()(STag1 const && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &>
    operator()(STag1 const && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&>
    operator()(STag1 const && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &>
    operator()(STag1 const && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&>
    operator()(STag1 const && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) &>
    operator()(STag1 const && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) &&>
    operator()(STag1 const && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const &>
    operator()(STag1 const && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&>
    operator()(STag1 const && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &>
    operator()(STag1 const && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&>
    operator()(STag1 const && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &>
    operator()(STag1 const && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&>
    operator()(STag1 const && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) &>
    operator()(STag1 const && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) &&>
    operator()(STag1 const && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const &>
    operator()(STag1 const && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&>
    operator()(STag1 const && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &>
    operator()(STag1 const && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&>
    operator()(STag1 const && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &>
    operator()(STag1 const && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&>
    operator()(STag1 const && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) &>
    operator()(STag1 const && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&>
    operator()(STag1 const && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &>
    operator()(STag1 const && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&>
    operator()(STag1 const && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &>
    operator()(STag1 const && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&>
    operator()(STag1 const && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &>
    operator()(STag1 const && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&>
    operator()(STag1 const && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) &>
    operator()(STag1 volatile & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) &&>
    operator()(STag1 volatile & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const &>
    operator()(STag1 volatile & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const &&>
    operator()(STag1 volatile & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) volatile &>
    operator()(STag1 volatile & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) volatile &&>
    operator()(STag1 volatile & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const volatile &>
    operator()(STag1 volatile & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&>
    operator()(STag1 volatile & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) &>
    operator()(STag1 volatile & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) &&>
    operator()(STag1 volatile & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const &>
    operator()(STag1 volatile & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const &&>
    operator()(STag1 volatile & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) volatile &>
    operator()(STag1 volatile & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&>
    operator()(STag1 volatile & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &>
    operator()(STag1 volatile & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&>
    operator()(STag1 volatile & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) &>
    operator()(STag1 volatile & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) &&>
    operator()(STag1 volatile & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const &>
    operator()(STag1 volatile & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const &&>
    operator()(STag1 volatile & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) volatile &>
    operator()(STag1 volatile & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&>
    operator()(STag1 volatile & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &>
    operator()(STag1 volatile & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&>
    operator()(STag1 volatile & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) &>
    operator()(STag1 volatile & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) &&>
    operator()(STag1 volatile & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const &>
    operator()(STag1 volatile & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const &&>
    operator()(STag1 volatile & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &>
    operator()(STag1 volatile & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&>
    operator()(STag1 volatile & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &>
    operator()(STag1 volatile & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&>
    operator()(STag1 volatile & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) &>
    operator()(STag1 volatile & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) &&>
    operator()(STag1 volatile & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const &>
    operator()(STag1 volatile & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&>
    operator()(STag1 volatile & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &>
    operator()(STag1 volatile & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&>
    operator()(STag1 volatile & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &>
    operator()(STag1 volatile & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&>
    operator()(STag1 volatile & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) &>
    operator()(STag1 volatile & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&>
    operator()(STag1 volatile & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &>
    operator()(STag1 volatile & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&>
    operator()(STag1 volatile & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &>
    operator()(STag1 volatile & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&>
    operator()(STag1 volatile & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &>
    operator()(STag1 volatile & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&>
    operator()(STag1 volatile & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) &>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) &>
    operator()(STag1 volatile && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) &&>
    operator()(STag1 volatile && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const &>
    operator()(STag1 volatile && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const &&>
    operator()(STag1 volatile && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) volatile &>
    operator()(STag1 volatile && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&>
    operator()(STag1 volatile && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &>
    operator()(STag1 volatile && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&>
    operator()(STag1 volatile && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) &>
    operator()(STag1 volatile && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) &&>
    operator()(STag1 volatile && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const &>
    operator()(STag1 volatile && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const &&>
    operator()(STag1 volatile && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &>
    operator()(STag1 volatile && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&>
    operator()(STag1 volatile && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &>
    operator()(STag1 volatile && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&>
    operator()(STag1 volatile && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) &>
    operator()(STag1 volatile && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) &&>
    operator()(STag1 volatile && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const &>
    operator()(STag1 volatile && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const &&>
    operator()(STag1 volatile && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &>
    operator()(STag1 volatile && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&>
    operator()(STag1 volatile && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &>
    operator()(STag1 volatile && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&>
    operator()(STag1 volatile && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) &>
    operator()(STag1 volatile && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) &&>
    operator()(STag1 volatile && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const &>
    operator()(STag1 volatile && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&>
    operator()(STag1 volatile && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &>
    operator()(STag1 volatile && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&>
    operator()(STag1 volatile && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &>
    operator()(STag1 volatile && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&>
    operator()(STag1 volatile && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) &>
    operator()(STag1 volatile && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&>
    operator()(STag1 volatile && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &>
    operator()(STag1 volatile && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&>
    operator()(STag1 volatile && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &>
    operator()(STag1 volatile && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&>
    operator()(STag1 volatile && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &>
    operator()(STag1 volatile && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&>
    operator()(STag1 volatile && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &>
    operator()(STag1 volatile && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&>
    operator()(STag1 volatile && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &>
    operator()(STag1 volatile && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&>
    operator()(STag1 volatile && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &>
    operator()(STag1 volatile && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&>
    operator()(STag1 volatile && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &>
    operator()(STag1 volatile && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&>
    operator()(STag1 volatile && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) &>
    operator()(STag1 const volatile & a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) &&>
    operator()(STag1 const volatile & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const &>
    operator()(STag1 const volatile & a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const &&>
    operator()(STag1 const volatile & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) volatile &>
    operator()(STag1 const volatile & a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&>
    operator()(STag1 const volatile & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &>
    operator()(STag1 const volatile & a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) &>
    operator()(STag1 const volatile & a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) &&>
    operator()(STag1 const volatile & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const &>
    operator()(STag1 const volatile & a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const &&>
    operator()(STag1 const volatile & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &>
    operator()(STag1 const volatile & a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&>
    operator()(STag1 const volatile & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &>
    operator()(STag1 const volatile & a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) &>
    operator()(STag1 const volatile & a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) &&>
    operator()(STag1 const volatile & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const &>
    operator()(STag1 const volatile & a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const &&>
    operator()(STag1 const volatile & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &>
    operator()(STag1 const volatile & a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&>
    operator()(STag1 const volatile & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &>
    operator()(STag1 const volatile & a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) &>
    operator()(STag1 const volatile & a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) &&>
    operator()(STag1 const volatile & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const &>
    operator()(STag1 const volatile & a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&>
    operator()(STag1 const volatile & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &>
    operator()(STag1 const volatile & a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&>
    operator()(STag1 const volatile & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &>
    operator()(STag1 const volatile & a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) &>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) &>
    operator()(STag1 const volatile && a1, STag1 & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) &&>
    operator()(STag1 const volatile && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const &>
    operator()(STag1 const volatile && a1, STag1 & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const &&>
    operator()(STag1 const volatile && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &>
    operator()(STag1 const volatile && a1, STag1 & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&>
    operator()(STag1 const volatile && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &>
    operator()(STag1 const volatile && a1, STag1 & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) &>
    operator()(STag1 const volatile && a1, STag1 && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) &&>
    operator()(STag1 const volatile && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const &>
    operator()(STag1 const volatile && a1, STag1 && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&>
    operator()(STag1 const volatile && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &>
    operator()(STag1 const volatile && a1, STag1 && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&>
    operator()(STag1 const volatile && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &>
    operator()(STag1 const volatile && a1, STag1 && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) &>
    operator()(STag1 const volatile && a1, STag1 const & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) &&>
    operator()(STag1 const volatile && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const &>
    operator()(STag1 const volatile && a1, STag1 const & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&>
    operator()(STag1 const volatile && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &>
    operator()(STag1 const volatile && a1, STag1 const & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&>
    operator()(STag1 const volatile && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &>
    operator()(STag1 const volatile && a1, STag1 const & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) &>
    operator()(STag1 const volatile && a1, STag1 const && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&>
    operator()(STag1 const volatile && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &>
    operator()(STag1 const volatile && a1, STag1 const && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&>
    operator()(STag1 const volatile && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &>
    operator()(STag1 const volatile && a1, STag1 const && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&>
    operator()(STag1 const volatile && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &>
    operator()(STag1 const volatile && a1, STag1 const && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) const & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) const volatile & {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }
    // AUTO GENERATED END //
};

class RRefFunctor11 {
    int id;
    RRefFunctor11(RRefFunctor11 const&);
    RRefFunctor11& operator=(RRefFunctor11 const&);

public:
    explicit RRefFunctor11(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void() &&>
    operator()() && {
      return ReturnTag<void() &&>(this->value());
    }

    ReturnTag<void() const &&>
    operator()() const && {
      return ReturnTag<void() const &&>(this->value());
    }

    ReturnTag<void() volatile &&>
    operator()() volatile && {
      return ReturnTag<void() volatile &&>(this->value());
    }

    ReturnTag<void() const volatile &&>
    operator()() const volatile && {
      return ReturnTag<void() const volatile &&>(this->value());
    }

    ReturnTag<void(STag1 &) &&>
    operator()(STag1 & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const &&>
    operator()(STag1 & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) volatile &&>
    operator()(STag1 & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &) const volatile &&>
    operator()(STag1 & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) &&>
    operator()(STag1 && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const &&>
    operator()(STag1 && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) volatile &&>
    operator()(STag1 && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &&) const volatile &&>
    operator()(STag1 && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) &&>
    operator()(STag1 const & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const &&>
    operator()(STag1 const & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) volatile &&>
    operator()(STag1 const & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &) const volatile &&>
    operator()(STag1 const & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) &&>
    operator()(STag1 const && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const &&>
    operator()(STag1 const && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) volatile &&>
    operator()(STag1 const && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const &&) const volatile &&>
    operator()(STag1 const && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) &&>
    operator()(STag1 volatile & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const &&>
    operator()(STag1 volatile & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) volatile &&>
    operator()(STag1 volatile & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &) const volatile &&>
    operator()(STag1 volatile & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) &&>
    operator()(STag1 volatile && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const &&>
    operator()(STag1 volatile && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) volatile &&>
    operator()(STag1 volatile && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 volatile &&) const volatile &&>
    operator()(STag1 volatile && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) &&>
    operator()(STag1 const volatile & a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const &&>
    operator()(STag1 const volatile & a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) volatile &&>
    operator()(STag1 const volatile & a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &) const volatile &&>
    operator()(STag1 const volatile & a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) &&>
    operator()(STag1 const volatile && a1) && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const &&>
    operator()(STag1 const volatile && a1) const && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) volatile &&>
    operator()(STag1 const volatile && a1) volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 const volatile &&) const volatile &&>
    operator()(STag1 const volatile && a1) const volatile && {
      assert(GetValue(a1) == 1);
      return ReturnTag<void(STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1));
    }

    ReturnTag<void(STag1 &, STag1 &) &&>
    operator()(STag1 & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const &&>
    operator()(STag1 & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) volatile &&>
    operator()(STag1 & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &) const volatile &&>
    operator()(STag1 & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) &&>
    operator()(STag1 & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const &&>
    operator()(STag1 & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) volatile &&>
    operator()(STag1 & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 &&) const volatile &&>
    operator()(STag1 & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) &&>
    operator()(STag1 & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const &&>
    operator()(STag1 & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) volatile &&>
    operator()(STag1 & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &) const volatile &&>
    operator()(STag1 & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) &&>
    operator()(STag1 & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const &&>
    operator()(STag1 & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) volatile &&>
    operator()(STag1 & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const &&) const volatile &&>
    operator()(STag1 & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) &&>
    operator()(STag1 & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const &&>
    operator()(STag1 & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) volatile &&>
    operator()(STag1 & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&>
    operator()(STag1 & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) &&>
    operator()(STag1 & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const &&>
    operator()(STag1 & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&>
    operator()(STag1 & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&>
    operator()(STag1 & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) &&>
    operator()(STag1 & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const &&>
    operator()(STag1 & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&>
    operator()(STag1 & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&>
    operator()(STag1 & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) &&>
    operator()(STag1 & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const &&>
    operator()(STag1 & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&>
    operator()(STag1 & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&>
    operator()(STag1 & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) &&>
    operator()(STag1 && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const &&>
    operator()(STag1 && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) volatile &&>
    operator()(STag1 && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &) const volatile &&>
    operator()(STag1 && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) &&>
    operator()(STag1 && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const &&>
    operator()(STag1 && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) volatile &&>
    operator()(STag1 && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 &&) const volatile &&>
    operator()(STag1 && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) &&>
    operator()(STag1 && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const &&>
    operator()(STag1 && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) volatile &&>
    operator()(STag1 && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &) const volatile &&>
    operator()(STag1 && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) &&>
    operator()(STag1 && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const &&>
    operator()(STag1 && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) volatile &&>
    operator()(STag1 && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&>
    operator()(STag1 && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) &&>
    operator()(STag1 && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const &&>
    operator()(STag1 && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&>
    operator()(STag1 && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&>
    operator()(STag1 && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) &&>
    operator()(STag1 && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const &&>
    operator()(STag1 && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&>
    operator()(STag1 && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&>
    operator()(STag1 && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) &&>
    operator()(STag1 && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const &&>
    operator()(STag1 && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&>
    operator()(STag1 && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&>
    operator()(STag1 && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) &&>
    operator()(STag1 && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&>
    operator()(STag1 && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&>
    operator()(STag1 && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&>
    operator()(STag1 && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) &&>
    operator()(STag1 const & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const &&>
    operator()(STag1 const & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) volatile &&>
    operator()(STag1 const & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &) const volatile &&>
    operator()(STag1 const & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) &&>
    operator()(STag1 const & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const &&>
    operator()(STag1 const & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) volatile &&>
    operator()(STag1 const & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 &&) const volatile &&>
    operator()(STag1 const & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) &&>
    operator()(STag1 const & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const &&>
    operator()(STag1 const & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) volatile &&>
    operator()(STag1 const & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &) const volatile &&>
    operator()(STag1 const & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) &&>
    operator()(STag1 const & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const &&>
    operator()(STag1 const & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) volatile &&>
    operator()(STag1 const & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&>
    operator()(STag1 const & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) &&>
    operator()(STag1 const & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const &&>
    operator()(STag1 const & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&>
    operator()(STag1 const & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&>
    operator()(STag1 const & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) &&>
    operator()(STag1 const & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const &&>
    operator()(STag1 const & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&>
    operator()(STag1 const & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&>
    operator()(STag1 const & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) &&>
    operator()(STag1 const & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const &&>
    operator()(STag1 const & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&>
    operator()(STag1 const & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&>
    operator()(STag1 const & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) &&>
    operator()(STag1 const & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&>
    operator()(STag1 const & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&>
    operator()(STag1 const & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&>
    operator()(STag1 const & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) &&>
    operator()(STag1 const && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const &&>
    operator()(STag1 const && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) volatile &&>
    operator()(STag1 const && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &) const volatile &&>
    operator()(STag1 const && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) &&>
    operator()(STag1 const && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const &&>
    operator()(STag1 const && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) volatile &&>
    operator()(STag1 const && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&>
    operator()(STag1 const && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) &&>
    operator()(STag1 const && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const &&>
    operator()(STag1 const && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) volatile &&>
    operator()(STag1 const && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&>
    operator()(STag1 const && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) &&>
    operator()(STag1 const && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const &&>
    operator()(STag1 const && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&>
    operator()(STag1 const && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&>
    operator()(STag1 const && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) &&>
    operator()(STag1 const && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const &&>
    operator()(STag1 const && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&>
    operator()(STag1 const && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&>
    operator()(STag1 const && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) &&>
    operator()(STag1 const && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&>
    operator()(STag1 const && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&>
    operator()(STag1 const && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&>
    operator()(STag1 const && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) &&>
    operator()(STag1 const && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&>
    operator()(STag1 const && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&>
    operator()(STag1 const && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&>
    operator()(STag1 const && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&>
    operator()(STag1 const && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&>
    operator()(STag1 const && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&>
    operator()(STag1 const && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&>
    operator()(STag1 const && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) &&>
    operator()(STag1 volatile & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const &&>
    operator()(STag1 volatile & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) volatile &&>
    operator()(STag1 volatile & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&>
    operator()(STag1 volatile & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) &&>
    operator()(STag1 volatile & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const &&>
    operator()(STag1 volatile & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&>
    operator()(STag1 volatile & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&>
    operator()(STag1 volatile & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) &&>
    operator()(STag1 volatile & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const &&>
    operator()(STag1 volatile & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&>
    operator()(STag1 volatile & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&>
    operator()(STag1 volatile & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) &&>
    operator()(STag1 volatile & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const &&>
    operator()(STag1 volatile & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&>
    operator()(STag1 volatile & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&>
    operator()(STag1 volatile & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) &&>
    operator()(STag1 volatile & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&>
    operator()(STag1 volatile & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&>
    operator()(STag1 volatile & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&>
    operator()(STag1 volatile & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&>
    operator()(STag1 volatile & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&>
    operator()(STag1 volatile & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&>
    operator()(STag1 volatile & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&>
    operator()(STag1 volatile & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&>
    operator()(STag1 volatile & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&>
    operator()(STag1 volatile & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) &&>
    operator()(STag1 volatile && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const &&>
    operator()(STag1 volatile && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&>
    operator()(STag1 volatile && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&>
    operator()(STag1 volatile && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) &&>
    operator()(STag1 volatile && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const &&>
    operator()(STag1 volatile && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&>
    operator()(STag1 volatile && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&>
    operator()(STag1 volatile && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) &&>
    operator()(STag1 volatile && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const &&>
    operator()(STag1 volatile && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&>
    operator()(STag1 volatile && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&>
    operator()(STag1 volatile && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) &&>
    operator()(STag1 volatile && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&>
    operator()(STag1 volatile && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&>
    operator()(STag1 volatile && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&>
    operator()(STag1 volatile && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&>
    operator()(STag1 volatile && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&>
    operator()(STag1 volatile && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&>
    operator()(STag1 volatile && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&>
    operator()(STag1 volatile && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&>
    operator()(STag1 volatile && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&>
    operator()(STag1 volatile && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&>
    operator()(STag1 volatile && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&>
    operator()(STag1 volatile && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&>
    operator()(STag1 volatile && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&>
    operator()(STag1 volatile && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 volatile &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) &&>
    operator()(STag1 const volatile & a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const &&>
    operator()(STag1 const volatile & a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&>
    operator()(STag1 const volatile & a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) &&>
    operator()(STag1 const volatile & a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const &&>
    operator()(STag1 const volatile & a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&>
    operator()(STag1 const volatile & a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) &&>
    operator()(STag1 const volatile & a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const &&>
    operator()(STag1 const volatile & a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&>
    operator()(STag1 const volatile & a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) &&>
    operator()(STag1 const volatile & a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&>
    operator()(STag1 const volatile & a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&>
    operator()(STag1 const volatile & a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&>
    operator()(STag1 const volatile & a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) &&>
    operator()(STag1 const volatile && a1, STag1 & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const &&>
    operator()(STag1 const volatile && a1, STag1 & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&>
    operator()(STag1 const volatile && a1, STag1 & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) &&>
    operator()(STag1 const volatile && a1, STag1 && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&>
    operator()(STag1 const volatile && a1, STag1 && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&>
    operator()(STag1 const volatile && a1, STag1 && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) &&>
    operator()(STag1 const volatile && a1, STag1 const & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&>
    operator()(STag1 const volatile && a1, STag1 const & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&>
    operator()(STag1 const volatile && a1, STag1 const & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 const & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&>
    operator()(STag1 const volatile && a1, STag1 const && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&>
    operator()(STag1 const volatile && a1, STag1 const && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&>
    operator()(STag1 const volatile && a1, STag1 const && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 const && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 const volatile & a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) const && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }

    ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&>
    operator()(STag1 const volatile && a1, STag1 const volatile && a2) const volatile && {
      assert(GetValue(a1) == 1);
      assert(GetValue(a2) == 2);
      return ReturnTag<void(STag1 const volatile &&, STag1 const volatile &&) const volatile &&>(this->value(), GetValue(a1), GetValue(a2));
    }
    // AUTO GENERATED END //
};

class VAFunctor11 {
    int id;
    VAFunctor11(VAFunctor11 const&);
    VAFunctor11& operator=(VAFunctor11 const&);

public:
    explicit VAFunctor11(int xid) : id(xid) {}

    int value() const volatile { return id; }

    // AUTO GENERATED START //

    ReturnTag<void(...) &>
    operator()(...) & {
      return ReturnTag<void(...) &>(this->value());
    }

    ReturnTag<void(...) &&>
    operator()(...) && {
      return ReturnTag<void(...) &&>(this->value());
    }

    ReturnTag<void(...) const &>
    operator()(...) const & {
      return ReturnTag<void(...) const &>(this->value());
    }

    ReturnTag<void(...) const &&>
    operator()(...) const && {
      return ReturnTag<void(...) const &&>(this->value());
    }

    ReturnTag<void(...) volatile &>
    operator()(...) volatile & {
      return ReturnTag<void(...) volatile &>(this->value());
    }

    ReturnTag<void(...) volatile &&>
    operator()(...) volatile && {
      return ReturnTag<void(...) volatile &&>(this->value());
    }

    ReturnTag<void(...) const volatile &>
    operator()(...) const volatile & {
      return ReturnTag<void(...) const volatile &>(this->value());
    }

    ReturnTag<void(...) const volatile &&>
    operator()(...) const volatile && {
      return ReturnTag<void(...) const volatile &&>(this->value());
    }
    // AUTO GENERATED END //
};

