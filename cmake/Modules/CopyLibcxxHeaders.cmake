set(LIBCXX_HEADER_PATTERN
  PATTERN "*"
  PATTERN "CMakeLists.txt" EXCLUDE
  PATTERN ".svn" EXCLUDE
  PATTERN "__config_site.in" EXCLUDE
  ${LIBCXX_SUPPORT_HEADER_PATTERN}
  )

file(COPY .
  DESTINATION "${LIBCXX_HEADER_DIR}"
  FILES_MATCHING
  ${LIBCXX_HEADER_PATTERN}
  )

# Only prepend the __config_prefix header to __config if it is non-empty.
if (LIBCXX_NEEDS_SITE_CONFIG)
  file(COPY   ${LIBCXX_BINARY_DIR}/__config_site DESTINATION ${LIBCXX_HEADER_DIR})
  file(RENAME ${LIBCXX_HEADER_DIR}/__config_site ${LIBCXX_HEADER_DIR}/__config)
  file(READ   ${LIBCXX_SOURCE_DIR}/include/__config CONFIG_CONTENTS)
  file(APPEND ${LIBCXX_HEADER_DIR}/__config "${CONFIG_CONTENTS}")
endif()
