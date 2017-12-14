# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphoneqt/linphone")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/usr/local/Cellar/qt/5.9.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphoneqt/linphone-tester")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone-tester" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone-tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone-tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone-tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone-tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "/usr/local/Cellar/qt/5.9.1/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone-tester")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/linphone-tester")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/assets/linphone.desktop")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/apps" TYPE FILE MESSAGE_LAZY RENAME "linphone.svg" FILES "/Users/S0U1SB4N3/test006/linphone-desktop/assets/images/linphone_logo.svg")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/linphone" TYPE FILE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/assets/linphonerc-factory")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/linphone/assistant" TYPE FILE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/assets/assistant/use-other-sip-account.rc")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/linphone/assistant" TYPE FILE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/assets/assistant/create-linphone-sip-account.rc")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/linphone/assistant" TYPE FILE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/assets/assistant/use-linphone-sip-account.rc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphoneqt/assets/languages/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphoneqt/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
