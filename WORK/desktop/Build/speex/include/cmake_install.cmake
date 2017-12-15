# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/speex" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_bits.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_buffer.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_callbacks.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_echo.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_header.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_jitter.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_preprocess.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_resampler.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_stereo.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/speex/include/speex/speex_types.h"
    )
endif()

