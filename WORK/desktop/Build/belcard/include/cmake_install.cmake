# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/belcard" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_addressing.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_communication.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_general.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_geographical.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_identification.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_params.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_property.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_security.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_calendar.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_explanatory.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_generic.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_organizational.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_parser.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_rfc6474.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/belcard_utils.hpp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/belcard/include/belcard/vcard_grammar.hpp"
    )
endif()

