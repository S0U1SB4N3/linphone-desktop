# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/console

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/console/linphonec")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonec" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonec")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/coreapi"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonec")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonec")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonec")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonec")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonec")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/console/linphonecsh")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonecsh" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonecsh")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/coreapi"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonecsh")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonecsh")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonecsh")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonecsh")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphonecsh")
    endif()
  endif()
endif()
