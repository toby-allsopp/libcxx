//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <memory>

// unique_ptr

// Test unique_ptr default ctor

#include <memory>

class PrivateDefaultCtor
{
    PrivateDefaultCtor() {}
public:

    PrivateDefaultCtor(PrivateDefaultCtor&) {}
    PrivateDefaultCtor& operator=(PrivateDefaultCtor&) { return *this; }

    void operator()(void*) const {}
};


class ProtectedDefaultCtor
{
protected:
    ProtectedDefaultCtor() {}
public:

    ProtectedDefaultCtor(ProtectedDefaultCtor&) {}
    ProtectedDefaultCtor& operator=(ProtectedDefaultCtor&) { return *this; }

    void operator()(void*) const {}
};


class Deleter
{
public:

    void operator()(void*) const {}
};

int main()
{
  // expected-error@memory:* 4 {{static_assert failed "unique_ptr::deleter_type is not default constructible"}}
  {
    // the default ctor should reject non-default constructible deleters.
    // expected-error@memory:* {{base class 'PrivateDefaultCtor' has private default constructor}}
    std::unique_ptr<int, PrivateDefaultCtor> p1;
    // FIXME: __compressed_pair incorrectly allows calling protected constructors.
    std::unique_ptr<int, ProtectedDefaultCtor> p2;
  }
  {
    // The default ctor should reject reference deleters.
    // expected-error@memory:* {{reference to type 'Deleter' requires an initializer}}
    std::unique_ptr<int, Deleter&> p;
    // expected-error@memory:* {{reference to type 'const Deleter' requires an initializer}}
    std::unique_ptr<int, Deleter const&> p3;
  }
  {
    // the default ctor should reject pointer deleters.
    // expected-error@memory:* {{static_assert failed "unique_ptr constructed with null function pointer deleter}}
    std::unique_ptr<int, void(*)(void*)> p4; // expected-note {{requested here}}
  }
}
