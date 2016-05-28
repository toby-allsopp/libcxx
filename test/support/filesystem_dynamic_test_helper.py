
import sys
import os
import stat
import subprocess
import shutil
import socket

# Ensure that this is being run on a specific platform
assert sys.platform.startswith('linux') or sys.platform.startswith('darwin') or\
    sys.platform.startswith('cygwin')


def env_path():
    ep = os.environ.get('LIBCXX_FILESYSTEM_DYNAMIC_TEST_ROOT')
    assert ep is not None
    ep = os.path.realpath(ep)
    assert os.path.isdir(ep)
    return ep

env_path_global = env_path()

# Make sure we don't try and write outside of env_path.
# All paths used should be sanitized
def sanitize(p):
    p = os.path.realpath(p)
    if os.path.commonprefix([env_path_global, p]):
        return p
    assert False

"""
Some of the tests restrict permissions to induce failures.
Before we delete the test enviroment, we have to walk it and re-raise the
permissions.
"""
def clean_recursive(root_p):
    if not os.path.islink(root_p):
        os.chmod(root_p, 0o777)
    for ent in os.listdir(root_p):
        p = os.path.join(root_p, ent)
        if os.path.islink(p):
            os.remove(p)
        elif os.path.isdir(p):
            clean_recursive(p)
            os.rmdir(p)
        else:
            os.remove(p)

"""
Nothing in pythons os module seems to work for recursive deletion.
Symlinks don't get removed the first time. Sometimes we have to make a second
pass to actually delete the directory.
"""
def remove_all(root_p):
    root_p = sanitize(root_p)
    remove_all_impl_1(root_p)
    if os.path.exists(root_p):
        remove_all_impl_2(root_p)


def init(root_p):
    root_p = sanitize(root_p)
    assert not os.path.exists(root_p)
    os.makedirs(root_p)


def clean(root_p):
    root_p = sanitize(root_p)
    clean_recursive(root_p)
    os.rmdir(root_p)


def create_file(fname, size):
    with open(sanitize(fname), 'w') as f:
        for c in ['a'] * size:
            f.write(c)


def create_dir(dname, mode=0o777):
    os.mkdir(sanitize(dname), mode)


def create_symlink(source, link):
    os.symlink(sanitize(source), sanitize(link))


def create_hardlink(source, link):
    os.link(sanitize(source), sanitize(link))


def create_fifo(source, mode=0o666):
    os.mkfifo(sanitize(source), mode)


def create_socket(source):
    mode = 0600|stat.S_IFSOCK
    os.mknod(sanitize(source), mode)


if __name__ == '__main__':
    command = " ".join(sys.argv[1:])
    eval(command)
    sys.exit(0)
