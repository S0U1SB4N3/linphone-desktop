#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "bellesip" for configuration "Release"
set_property(TARGET bellesip APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(bellesip PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libbellesip.0.dylib"
  IMPORTED_SONAME_RELEASE "@rpath/libbellesip.0.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS bellesip )
list(APPEND _IMPORT_CHECK_FILES_FOR_bellesip "${_IMPORT_PREFIX}/lib/libbellesip.0.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
