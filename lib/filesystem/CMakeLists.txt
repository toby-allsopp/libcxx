file(GLOB FILESYSTEM_SOURCES ../../src/filesystem/*.cpp)

add_library(cxx_filesystem STATIC
    ${FILESYSTEM_SOURCES}
  )

set_target_properties(cxx_filesystem
  PROPERTIES
    OUTPUT_NAME "c++filesystem"
    VERSION "1.0"
  )

install(TARGETS cxx_filesystem
  ARCHIVE DESTINATION lib${LIBCXX_LIBDIR_SUFFIX}
  )