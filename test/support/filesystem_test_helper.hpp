#ifndef FILESYSTEM_TEST_HELPER_HPP
#define FILESYSTEM_TEST_HELPER_HPP

#include <experimental/filesystem>
#include <cassert>
#include <cstdio> // for tempnam
#include <string>

#ifndef LIBCXX_FILESYSTEM_STATIC_TEST_ROOT
#error LIBCXX_FILESYSTEM_STATIC_TEST_ROOT must be defined
#endif

#ifndef LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT
#error LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT must be defined
#endif

#ifndef LIBCXX_FILESYSTEM_DYNAMIC_TEST_HELPER
#error LIBCXX_FILESYSTEM_DYNAMIC_TEST_HELPER must be defined
#endif

namespace fs = std::experimental::filesystem;

// static test helpers

inline fs::path static_test_env_path()
{
    static const fs::path env_path = LIBCXX_FILESYSTEM_STATIC_TEST_ROOT;
    return env_path;
}

inline fs::path make_static_env_path(fs::path const& p)
{
    return static_test_env_path() / p;
}

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
    cmd += "\"";
    cmd += raw_cmd;
    cmd += "\"";
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

#endif /* FILESYSTEM_TEST_HELPER_HPP */