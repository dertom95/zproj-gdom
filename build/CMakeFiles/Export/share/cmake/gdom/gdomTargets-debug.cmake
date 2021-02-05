#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gdom" for configuration "Debug"
set_property(TARGET gdom APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdom PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libgdom.so.0.0.0"
  IMPORTED_SONAME_DEBUG "libgdom.so.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdom )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdom "${_IMPORT_PREFIX}/lib/libgdom.so.0.0.0" )

# Import target "gdom-static" for configuration "Debug"
set_property(TARGET gdom-static APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(gdom-static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "C"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libgdom.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS gdom-static )
list(APPEND _IMPORT_CHECK_FILES_FOR_gdom-static "${_IMPORT_PREFIX}/lib/libgdom.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
