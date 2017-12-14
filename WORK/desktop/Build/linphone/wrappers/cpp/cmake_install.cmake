# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/wrappers/cpp

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/wrappers/cpp/liblinphone++.9.dylib"
    "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/wrappers/cpp/liblinphone++.dylib"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblinphone++.9.dylib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liblinphone++.dylib"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop/lib"
        "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/coreapi"
        "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -add_rpath "@executable_path/../Frameworks"
        "${file}")
      execute_process(COMMAND /usr/bin/install_name_tool
        -add_rpath "@executable_path/../lib"
        "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/linphone++" TYPE FILE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/wrappers/cpp/object.hh")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/wrappers/cpp/include/linphone++")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/LinphoneCxx/cmake/LinphoneCxxTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/LinphoneCxx/cmake/LinphoneCxxTargets.cmake"
         "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/wrappers/cpp/CMakeFiles/Export/share/LinphoneCxx/cmake/LinphoneCxxTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/LinphoneCxx/cmake/LinphoneCxxTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/LinphoneCxx/cmake/LinphoneCxxTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/LinphoneCxx/cmake" TYPE FILE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/wrappers/cpp/CMakeFiles/Export/share/LinphoneCxx/cmake/LinphoneCxxTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/LinphoneCxx/cmake" TYPE FILE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/wrappers/cpp/CMakeFiles/Export/share/LinphoneCxx/cmake/LinphoneCxxTargets-release.cmake")
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/LinphoneCxx/cmake" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/wrappers/cpp/LinphoneCxxConfig.cmake"
    "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/wrappers/cpp/LinphoneCxxVersion.cmake"
    )
endif()

