#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "belr" for configuration "Release"
set_property(TARGET belr APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(belr PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libbelr.1.dylib"
  IMPORTED_SONAME_RELEASE "@rpath/libbelr.1.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS belr )
list(APPEND _IMPORT_CHECK_FILES_FOR_belr "${_IMPORT_PREFIX}/lib/libbelr.1.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
