#ifndef FILESYSTEM_TEST_HELPER_HPP
#define FILESYSTEM_TEST_HELPER_HPP

#include <experimental/filesystem>
#include <cassert>
#include <cstdio> // for tempnam
#include <string>
#include <iostream>

namespace fs = std::experimental::filesystem;

// static test helpers

#ifndef LIBCXX_FILESYSTEM_STATIC_TEST_ROOT
#warning "STATIC TESTS DISABLED"
#else // LIBCXX_FILESYSTEM_STATIC_TEST_ROOT

inline fs::path static_test_env_path()
{
    static const fs::path env_path = LIBCXX_FILESYSTEM_STATIC_TEST_ROOT;
    return env_path;
}

inline fs::path make_static_env_path(fs::path const& p)
{
    return static_test_env_path() / p;
}

namespace StaticEnv {

inline fs::path makePath(fs::path const& p) {
    return static_test_env_path() / p;
}

static const fs::path EnvRoot = LIBCXX_FILESYSTEM_STATIC_TEST_ROOT;

static const fs::path TestFileList[] = {
        makePath("empty_file"),
        makePath("non_empty_file"),
        makePath("dir1/file1"),
        makePath("dir1/file2")
};
const std::size_t TestFileListSize = sizeof(TestFileList) / sizeof(fs::path);

static const fs::path TestDirList[] = {
        makePath("dir1"),
        makePath("dir1/dir2"),
        makePath("dir1/dir2/dir3")
};
const std::size_t TestDirListSize = sizeof(TestDirList) / sizeof(fs::path);

static const fs::path File          = TestFileList[0];
static const fs::path Dir           = TestDirList[0];
static const fs::path SymlinkToFile = makePath("symlink_to_empty_file");
static const fs::path DNE           = makePath("DNE");

} // namespace StaticEnv

#endif // LIBCXX_FILESYSTEM_STATIC_TEST_ROOT


#ifndef LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT
#warning LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT must be defined
#else // LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT

#ifndef LIBCXX_FILESYSTEM_DYNAMIC_TEST_HELPER
#error LIBCXX_FILESYSTEM_DYNAMIC_TEST_HELPER must be defined
#endif
// dynamic test helpers

inline fs::path test_env_path()
{
    static const fs::path env_path = LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT;
    return env_path;
}

inline fs::path random_env_path()
{
    // assert that tmpdir is not set.
    char* tmpdir = std::getenv("TMPDIR");
    assert(!tmpdir);
    char* s = ::tempnam(test_env_path().c_str(), "test.");
    fs::path p(s);
    std::free(s);
    return p;
}

inline std::string
fs_make_cmd(std::string const& cmd_name, std::string const& arg)
{
    std::string cmd = cmd_name + "('" + arg + "')";
    return cmd;
}

inline std::string
fs_make_cmd(std::string const& cmd_name,std::string const& arg1, std::string const& arg2)
{
    std::string cmd = cmd_name + "('";
    cmd += arg1 + "', '";
    cmd += arg2 + "')";
    return cmd;
}

inline std::string
fs_make_cmd(std::string const& cmd_name, std::string const& arg1, std::size_t const& arg2)
{
    std::string cmd = cmd_name + "('";
    cmd += arg1 + "', ";
    cmd += std::to_string(arg2) + ")";
    return cmd;
}

inline void fs_helper_run(std::string const& raw_cmd) {
    // check that the fs test root in the enviroment matches what we were 
    // compiled with.
    char* fs_root = std::getenv("LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT");
    assert(fs_root);
    assert(std::string(fs_root) == LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT);

    std::string cmd = LIBCXX_FILESYSTEM_DYNAMIC_TEST_HELPER;
    cmd += " \"";
    cmd += raw_cmd;
    cmd += "\"";
    //std::cout << "Running: " << cmd << std::endl;
    int ret = std::system(cmd.c_str());
    assert(ret == 0);
}

struct scoped_test_env
{
    scoped_test_env()
      : test_root(random_env_path())
    {
        fs_helper_run(fs_make_cmd("init", test_root));
    }

    scoped_test_env(scoped_test_env const &) = delete;
    scoped_test_env & operator=(scoped_test_env const &) = delete;

    ~scoped_test_env()
    {
        fs_helper_run(fs_make_cmd("clean", test_root));
    }

    fs::path make_env_path(fs::path const & p)
    {
        return test_root / p;
    }

    std::string sanitize_path(std::string const & raw)
    {
        if (raw.substr(0, test_root.native().size()) == test_root) {
            return raw;
        } else {
            return test_root / fs::path(raw);
        }
    }

    void create_file(std::string filename, std::size_t size = 0)
    {
        filename = sanitize_path(filename);
        fs_helper_run(fs_make_cmd("create_file", filename, size));
    }

    void create_dir(std::string filename)
    {
        filename = sanitize_path(filename);
        fs_helper_run(fs_make_cmd("create_dir", filename));
    }

    void create_symlink(std::string source, std::string to)
    {
        source = sanitize_path(source);
        to = sanitize_path(to);
        fs_helper_run(fs_make_cmd("create_symlink", source, to));
    }

    void create_hardlink(std::string source, std::string to)
    {
        source = sanitize_path(source);
        to = sanitize_path(to);
        fs_helper_run(fs_make_cmd("create_hardlink", source, to));
    }

    void create_fifo(std::string file)
    {
        file = sanitize_path(file);
        fs_helper_run(fs_make_cmd("create_fifo", file));
    }

    void create_socket(std::string file)
    {
        file = sanitize_path(file);
        fs_helper_run(fs_make_cmd("create_socket", file));
    }

    fs::path const test_root;
};

#endif // LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT

// Misc test types


#define CONCAT2(LHS, RHS) LHS##RHS
#define CONCAT(LHS, RHS) CONCAT2(LHS, RHS)
#define MKSTR(Str) {Str, CONCAT(L, Str), CONCAT(u, Str), CONCAT(U, Str)}

struct MultiStringType {
  const char* s;
  const wchar_t* w;
  const char16_t* u16;
  const char32_t* u32;

  operator const char* () const { return s; }
  operator const wchar_t* () const { return w; }
  operator const char16_t* () const { return u16; }
  operator const char32_t* () const { return u32; }
};

const MultiStringType PathList[] = {
        MKSTR(""),
        MKSTR(" "),
        MKSTR("//"),
        MKSTR("."),
        MKSTR(".."),
        MKSTR("foo"),
        MKSTR("/"),
        MKSTR("/foo"),
        MKSTR("foo/"),
        MKSTR("/foo/"),
        MKSTR("foo/bar"),
        MKSTR("/foo/bar"),
        MKSTR("//net"),
        MKSTR("//net/foo"),
        MKSTR("///foo///"),
        MKSTR("///foo///bar"),
        MKSTR("/."),
        MKSTR("./"),
        MKSTR("/.."),
        MKSTR("../"),
        MKSTR("foo/."),
        MKSTR("foo/.."),
        MKSTR("foo/./"),
        MKSTR("foo/./bar"),
        MKSTR("foo/../"),
        MKSTR("foo/../bar"),
        MKSTR("c:"),
        MKSTR("c:/"),
        MKSTR("c:foo"),
        MKSTR("c:/foo"),
        MKSTR("c:foo/"),
        MKSTR("c:/foo/"),
        MKSTR("c:/foo/bar"),
        MKSTR("prn:"),
        MKSTR("c:\\"),
        MKSTR("c:\\foo"),
        MKSTR("c:foo\\"),
        MKSTR("c:\\foo\\"),
        MKSTR("c:\\foo/"),
        MKSTR("c:/foo\\bar"),
        MKSTR("//"),
        MKSTR("/finally/we/need/one/really/really/really/really/really/really/really/long/string")
};
const unsigned PathListSize = sizeof(PathList) / sizeof(MultiStringType);

template <class Iter>
Iter IterEnd(Iter B) {
  using VT = typename std::iterator_traits<Iter>::value_type;
  for (; *B != VT{}; ++B)
    ;
  return B;
}

template <class CharT>
const CharT* StrEnd(CharT const* P) {
    return IterEnd(P);
}

template <class CharT>
std::size_t StrLen(CharT const* P) {
    return StrEnd(P) - P;
}

// Testing the allocation behavior of the code_cvt functions requires
// *knowing* that the allocation was not done by "path::__str_".
// This hack forces path to allocate enough memory.
inline void PathReserve(fs::path& p, std::size_t N) {
  auto const& native_ref = p.native();
  const_cast<std::string&>(native_ref).reserve(N);
}


template <class Iter1, class Iter2>
bool checkCollectionsEqual(
    Iter1 start1, Iter1 const end1
  , Iter2 start2, Iter2 const end2
  )
{
    while (start1 != end1 && start2 != end2) {
        if (*start1 != *start2) {
            return false;
        }
        ++start1; ++start2;
    }
    return (start1 == end1 && start2 == end2);
}

#endif /* FILESYSTEM_TEST_HELPER_HPP */