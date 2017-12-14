# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/bv16/libbv16.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libbv16.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libbv16.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libbv16.dylib")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libbv16.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libbv16.dylib")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/bv16-floatingpoint/bv16" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bv16/bitpack.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bv16/bv16.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bv16/bv16cnst.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bv16/bv16externs.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bv16/bv16strct.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bv16/g192.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bv16/postfilt.h"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/bv16-floatingpoint/bvcommon" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bvcommon/bvcommon.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bvcommon/typedef.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/bv16-floatingpoint/bvcommon/utility.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/bv16/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
