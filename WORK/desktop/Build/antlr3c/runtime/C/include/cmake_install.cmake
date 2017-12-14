# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3baserecognizer.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3basetree.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3basetreeadaptor.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3bitset.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3collections.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3commontoken.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3commontree.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3commontreeadaptor.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3commontreenodestream.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3convertutf.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3cyclicdfa.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3debugeventlistener.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3defs.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3encodings.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3errors.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3exception.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3filestream.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3input.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3interfaces.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3intstream.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3lexer.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3memory.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3parser.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3parsetree.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3recognizersharedstate.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3rewritestreams.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3string.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3tokenstream.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/antlr3/runtime/C/include/antlr3treeparser.h"
    )
endif()

