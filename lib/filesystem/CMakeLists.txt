file(GLOB FILESYSTEM_SOURCES ../../src/filesystem/*.cpp)

add_library(cxx_filesystem STATIC
    ${FILESYSTEM_SOURCES}
  )

split_list(LIBCXX_COMPILE_FLAGS)
split_list(LIBCXX_LINK_FLAGS)

set_target_properties(cxx_filesystem
  PROPERTIES
    COMPILE_FLAGS "${LIBCXX_COMPILE_FLAGS}"
    LINK_FLAGS "${LIBCXX_LINK_FLAGS}"
    OUTPUT_NAME "c++filesystem"
    VERSION "1.0"
  )

install(TARGETS cxx_filesystem
  ARCHIVE DESTINATION lib${LIBCXX_LIBDIR_SUFFIX}
  )