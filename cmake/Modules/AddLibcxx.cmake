include(ExternalProject)
include(LibcxxUtils)

function(set_target_output_directories target output_dir)
  # For RUNTIME_OUTPUT_DIRECTORY variable, Multi-configuration generators
  # append a per-configuration subdirectory to the specified directory.
  # To avoid the appended folder, the configuration specific variable must be
  # set 'RUNTIME_OUTPUT_DIRECTORY_${CONF}':
  # RUNTIME_OUTPUT_DIRECTORY_DEBUG, RUNTIME_OUTPUT_DIRECTORY_RELEASE, ...
  if(CMAKE_CONFIGURATION_TYPES)
    foreach(build_mode ${CMAKE_CONFIGURATION_TYPES})
      string(TOUPPER "${build_mode}" CONFIG_SUFFIX)
      set_target_properties("${target}" PROPERTIES
          "ARCHIVE_OUTPUT_DIRECTORY_${CONFIG_SUFFIX}" ${output_dir}
          "LIBRARY_OUTPUT_DIRECTORY_${CONFIG_SUFFIX}" ${output_dir}
          "RUNTIME_OUTPUT_DIRECTORY_${CONFIG_SUFFIX}" ${output_dir})
    endforeach()
  else()
    set_target_properties("${target}" PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY ${output_dir}
        LIBRARY_OUTPUT_DIRECTORY ${output_dir}
        RUNTIME_OUTPUT_DIRECTORY ${output_dir})
  endif()
endfunction()

# Tries to add an "object library" target for a given list of OSs and/or
# architectures with name "<name>.<arch>" for non-Darwin platforms if
# architecture can be targeted, and "<name>.<os>" for Darwin platforms.
# add_compiler_rt_object_libraries(<name>
#                                  OS <os names>
#                                  ARCHS <architectures>
#                                  SOURCES <source files>
#                                  CFLAGS <compile flags>
#                                  DEFS <compile definitions>)
function(add_compiler_rt_object_libraries name)
  cmake_parse_arguments(LIB "" "" "OS;ARCHS;SOURCES;CFLAGS;DEFS" ${ARGN})
  set(libnames)
  if(APPLE)
    foreach(os ${LIB_OS})
      set(libname "${name}.${os}")
      set(libnames ${libnames} ${libname})
      set(extra_cflags_${libname} ${DARWIN_${os}_CFLAGS})
      list_intersect(LIB_ARCHS_${libname} DARWIN_${os}_ARCHS LIB_ARCHS)
    endforeach()
  else()
    foreach(arch ${LIB_ARCHS})
      set(libname "${name}.${arch}")
      set(libnames ${libnames} ${libname})
      set(extra_cflags_${libname} ${TARGET_${arch}_CFLAGS})
      if(NOT CAN_TARGET_${arch})
        message(FATAL_ERROR "Architecture ${arch} can't be targeted")
        return()
      endif()
    endforeach()
  endif()

  foreach(libname ${libnames})
    add_library(${libname} OBJECT ${LIB_SOURCES})
    set_target_compile_flags(${libname}
      ${CMAKE_CXX_FLAGS} ${extra_cflags_${libname}} ${LIB_CFLAGS})
    set_property(TARGET ${libname} APPEND PROPERTY
      COMPILE_DEFINITIONS ${LIB_DEFS})
    set_target_properties(${libname} PROPERTIES FOLDER "Compiler-RT Libraries")
    if(APPLE)
      set_target_properties(${libname} PROPERTIES
        OSX_ARCHITECTURES "${LIB_ARCHS_${libname}}")
    endif()
  endforeach()
endfunction()

# Takes a list of object library targets, and a suffix and appends the proper
# TARGET_OBJECTS string to the output variable.
# format_object_libs(<output> <suffix> ...)
macro(format_object_libs output suffix)
  foreach(lib ${ARGN})
    list(APPEND ${output} $<TARGET_OBJECTS:${lib}.${suffix}>)
  endforeach()
endmacro()

# Adds static or shared runtime for a list of architectures and operating
# systems and puts it in the proper directory in the build and install trees.
# add_compiler_rt_runtime(<name>
#                         {STATIC|SHARED}
#                         ARCHS <architectures>
#                         OS <os list>
#                         SOURCES <source files>
#                         CFLAGS <compile flags>
#                         LINKFLAGS <linker flags>
#                         DEFS <compile definitions>
#                         LINK_LIBS <linked libraries> (only for shared library)
#                         OBJECT_LIBS <object libraries to use as sources>
#                         PARENT_TARGET <convenience parent target>)
function(add_libcxx_runtime name type)
  if(NOT type MATCHES "^(STATIC|SHARED)$")
    message(FATAL_ERROR "type argument must be STATIC or SHARED")
    return()
  endif()
  cmake_parse_arguments(LIB
    ""
    "PARENT_TARGET"
    "OS;ARCHS;SOURCES;CFLAGS;LINKFLAGS;DEFS;LINK_LIBS;OBJECT_LIBS"
    ${ARGN})
  set(libnames)
  if(APPLE)
    foreach(os ${LIB_OS})
      if(type STREQUAL "STATIC")
        set(libname "${name}_${os}")
      else()
        set(libname "${name}_${os}_dynamic")
        set(extra_linkflags_${libname} ${DARWIN_${os}_LINKFLAGS} ${LIB_LINKFLAGS})
      endif()
      list_intersect(LIB_ARCHS_${libname} DARWIN_${os}_ARCHS LIB_ARCHS)
      if(LIB_ARCHS_${libname})
        list(APPEND libnames ${libname})
        set(extra_cflags_${libname} ${DARWIN_${os}_CFLAGS} ${LIB_CFLAGS})
        set(output_name_${libname} ${libname}${LIBCXX_OS_SUFFIX})
        set(sources_${libname} ${LIB_SOURCES})
        format_object_libs(sources_${libname} ${os} ${LIB_OBJECT_LIBS})
      endif()
    endforeach()
  else()
    foreach(arch ${LIB_ARCHS})
      if(NOT CAN_TARGET_${arch})
        message(FATAL_ERROR "Architecture ${arch} can't be targeted")
        return()
      endif()
      if(type STREQUAL "STATIC")
        set(libname "${name}-${arch}")
        set(output_name_${libname} ${libname}${LIBCXX_OS_SUFFIX})
      else()
        set(libname "${name}-dynamic-${arch}")
        set(extra_cflags_${libname} ${TARGET_${arch}_CFLAGS} ${LIB_CFLAGS})
        set(extra_linkflags_${libname} ${TARGET_${arch}_LINKFLAGS} ${LIB_LINKFLAGS})
        if(WIN32)
          set(output_name_${libname} ${name}_dynamic-${arch}${LIBCXX_OS_SUFFIX})
        else()
          set(output_name_${libname} ${name}-${arch}${LIBCXX_OS_SUFFIX})
        endif()
      endif()
      set(sources_${libname} ${LIB_SOURCES})
      format_object_libs(sources_${libname} ${arch} ${LIB_OBJECT_LIBS})
      set(libnames ${libnames} ${libname})
      set(extra_cflags_${libname} ${TARGET_${arch}_CFLAGS} ${LIB_CFLAGS})
    endforeach()
  endif()

  if(NOT libnames)
    return()
  endif()

  if(LIB_PARENT_TARGET)
    # If the parent targets aren't created we should create them
    if(NOT TARGET ${LIB_PARENT_TARGET})
      add_custom_target(${LIB_PARENT_TARGET})
    endif()
    if(NOT TARGET install-${LIB_PARENT_TARGET})
      # The parent install target specifies the parent component to scrape up
      # anything not installed by the individual install targets, and to handle
      # installation when running the multi-configuration generators.
      add_custom_target(install-${LIB_PARENT_TARGET}
                        DEPENDS ${LIB_PARENT_TARGET}
                        COMMAND "${CMAKE_COMMAND}"
                                -DCMAKE_INSTALL_COMPONENT=${LIB_PARENT_TARGET}
                                -P "${CMAKE_BINARY_DIR}/cmake_install.cmake")
      set_target_properties(install-${LIB_PARENT_TARGET} PROPERTIES
                            FOLDER "Compiler-RT Misc")
    endif()
  endif()

  foreach(libname ${libnames})
    # If you are using a multi-configuration generator we don't generate
    # per-library install rules, so we fall back to the parent target COMPONENT
    if(CMAKE_CONFIGURATION_TYPES AND LIB_PARENT_TARGET)
      set(COMPONENT_OPTION COMPONENT ${LIB_PARENT_TARGET})
    else()
      set(COMPONENT_OPTION COMPONENT ${libname})
    endif()

    add_library(${libname} ${type} ${sources_${libname}})
    set_target_compile_flags(${libname} ${extra_cflags_${libname}})
    set_target_link_flags(${libname} ${extra_linkflags_${libname}})
    set_property(TARGET ${libname} APPEND PROPERTY
                COMPILE_DEFINITIONS ${LIB_DEFS})
    set_target_output_directories(${libname} ${LIBCXX_LIBRARY_OUTPUT_DIR})
    set_target_properties(${libname} PROPERTIES
        OUTPUT_NAME ${output_name_${libname}})
    set_target_properties(${libname} PROPERTIES FOLDER "Compiler-RT Runtime")
    if(LIB_LINK_LIBS AND ${type} STREQUAL "SHARED")
      target_link_libraries(${libname} ${LIB_LINK_LIBS})
    endif()
    install(TARGETS ${libname}
      ARCHIVE DESTINATION ${LIBCXX_LIBRARY_INSTALL_DIR}
              ${COMPONENT_OPTION}
      LIBRARY DESTINATION ${LIBCXX_LIBRARY_INSTALL_DIR}
              ${COMPONENT_OPTION}
      RUNTIME DESTINATION ${LIBCXX_LIBRARY_INSTALL_DIR}
              ${COMPONENT_OPTION})

    # We only want to generate per-library install targets if you aren't using
    # an IDE because the extra targets get cluttered in IDEs.
    if(NOT CMAKE_CONFIGURATION_TYPES)
      add_custom_target(install-${libname}
                        DEPENDS ${libname}
                        COMMAND "${CMAKE_COMMAND}"
                                -DCMAKE_INSTALL_COMPONENT=${libname}
                                -P "${CMAKE_BINARY_DIR}/cmake_install.cmake")
      # If you have a parent target specified, we bind the new install target
      # to the parent install target.
      if(LIB_PARENT_TARGET)
        add_dependencies(install-${LIB_PARENT_TARGET} install-${libname})
      endif()
    endif()
    if(APPLE)
      set_target_properties(${libname} PROPERTIES
      OSX_ARCHITECTURES "${LIB_ARCHS_${libname}}")
    endif()

  endforeach()
  if(LIB_PARENT_TARGET)
    add_dependencies(${LIB_PARENT_TARGET} ${libnames})
  endif()
endfunction()

# Builds custom version of libc++ and installs it in <prefix>.
# Can be used to build sanitized versions of libc++ for running unit tests.
# add_custom_libcxx(<name> <prefix>
#                   DEPS <list of build deps>
#                   CFLAGS <list of compile flags>)
macro(add_custom_libcxx name prefix)
  if(NOT COMPILER_RT_HAS_LIBCXX_SOURCES)
    message(FATAL_ERROR "libcxx not found!")
  endif()

  cmake_parse_arguments(LIBCXX "" "" "DEPS;CFLAGS" ${ARGN})
  foreach(flag ${LIBCXX_CFLAGS})
    set(flagstr "${flagstr} ${flag}")
  endforeach()
  set(LIBCXX_CFLAGS ${flagstr})

  if(NOT COMPILER_RT_STANDALONE_BUILD)
    list(APPEND LIBCXX_DEPS clang)
  endif()

  ExternalProject_Add(${name}
    PREFIX ${prefix}
    SOURCE_DIR ${COMPILER_RT_LIBCXX_PATH}
    CMAKE_ARGS -DCMAKE_MAKE_PROGRAM:STRING=${CMAKE_MAKE_PROGRAM}
               -DCMAKE_C_COMPILER=${COMPILER_RT_TEST_COMPILER}
               -DCMAKE_CXX_COMPILER=${COMPILER_RT_TEST_CXX_COMPILER}
               -DCMAKE_C_FLAGS=${LIBCXX_CFLAGS}
               -DCMAKE_CXX_FLAGS=${LIBCXX_CFLAGS}
               -DCMAKE_BUILD_TYPE=Release
               -DCMAKE_INSTALL_PREFIX:PATH=<INSTALL_DIR>
               -DLLVM_PATH=${LLVM_MAIN_SRC_DIR}
    LOG_BUILD 1
    LOG_CONFIGURE 1
    LOG_INSTALL 1
    )
  set_target_properties(${name} PROPERTIES EXCLUDE_FROM_ALL TRUE)

  ExternalProject_Add_Step(${name} force-reconfigure
    DEPENDERS configure
    ALWAYS 1
    )

  ExternalProject_Add_Step(${name} clobber
    COMMAND ${CMAKE_COMMAND} -E remove_directory <BINARY_DIR>
    COMMAND ${CMAKE_COMMAND} -E make_directory <BINARY_DIR>
    COMMENT "Clobberring ${name} build directory..."
    DEPENDERS configure
    DEPENDS ${LIBCXX_DEPS}
    )
endmacro()
