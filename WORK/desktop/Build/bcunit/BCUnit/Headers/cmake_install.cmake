# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/BCUnit" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers/CUError.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers/BCUnit_intl.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers/MyMem.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers/TestDB.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers/TestRun.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers/Util.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers/Basic.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/bcunit/BCUnit/Headers/Automated.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/bcunit/BCUnit/Headers/BCUnit.h"
    )
endif()

