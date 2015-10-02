if (NOT LIBCXX_INSTALL_SUPPORT_HEADERS)
  set(LIBCXX_SUPPORT_HEADER_PATTERN PATTERN "support" EXCLUDE)
endif()

set(LIBCXX_HEADER_PATTERN
  PATTERN "*"
  PATTERN "CMakeLists.txt" EXCLUDE
  PATTERN ".svn" EXCLUDE
  PATTERN "__config_site.in" EXCLUDE
  ${LIBCXX_SUPPORT_HEADER_PATTERN}
  )

# The headers should be copied to the build directory every time libc++ is built.
# Because the CMake file(...) commands only run at configuration time we use
# a cmake script that we can run during every build.
add_custom_target(libcxx-copy-headers ALL
  COMMAND
  ${CMAKE_COMMAND}
  -DLIBCXX_HEADER_DIR=${LIBCXX_HEADER_DIR}
  -DLIBCXX_BINARY_DIR=${LIBCXX_BINARY_DIR}
  -DLIBCXX_SOURCE_DIR=${LIBCXX_SOURCE_DIR}
  -DLIBCXX_NEEDS_SITE_CONFIG=${LIBCXX_NEEDS_SITE_CONFIG}
  -P ${LIBCXX_SOURCE_DIR}/cmake/Modules/CopyLibcxxHeaders.cmake
  WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})


if (LIBCXX_INSTALL_HEADERS)
  install(DIRECTORY .
    DESTINATION include/c++/v1
    COMPONENT libcxx
    FILES_MATCHING
    ${LIBCXX_HEADER_PATTERN}
    PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ
  )
endif()
