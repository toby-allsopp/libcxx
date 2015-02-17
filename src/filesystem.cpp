#include <experimental/filesystem>

#include <algorithm>

_LIBCPP_BEGIN_NAMESPACE_EXPERIMENTAL_FILESYSTEM

_LIBCPP_CONSTEXPR path::value_type path::preferred_separator;

namespace {
    typedef path::string_type string_type;
    typedef path::value_type value_type;

    _LIBCPP_CONSTEXPR value_type pref_sep = path::preferred_separator;
    _LIBCPP_CONSTEXPR value_type other_sep = '\\';
} // end anonymous namespace


path& path::make_preferred() {
    _VSTD::replace(__pn_.begin(), __pn_.end(), other_sep, pref_sep);
    return *this;
}

_LIBCPP_END_NAMESPACE_EXPERIMENTAL_FILESYSTEM