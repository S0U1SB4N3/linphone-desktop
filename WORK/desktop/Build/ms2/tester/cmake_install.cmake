# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/ms2/tester/mediastreamer2_tester")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mediastreamer2_tester" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mediastreamer2_tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/ms2/src"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mediastreamer2_tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mediastreamer2_tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mediastreamer2_tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mediastreamer2_tester")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/mediastreamer2_tester")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mediastreamer2_tester/sounds" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/arpeggio_8000_mono.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/bird_44100_stereo.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/chimes_48000_stereo.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/hello8000.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/hello8000-1s.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/hello16000.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/hello16000-1s.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/hello_opus.mka"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/hello_pcmu.mka"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/laserrocket_16000_mono.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/nylon_48000_mono.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/owl_44100_mono.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/piano_8000_stereo.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/punch_16000_stereo.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/sintel_trailer_opus_h264.mkv"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/sintel_trailer_opus_vp8.mkv"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/sounds/sintel_trailer_pcmu_h264.mkv"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/mediastreamer2_tester/scenarios" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/congestion/video-160-120-0f20c60.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/congestion/audio-80-75-0c60.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/congestion/audio-80-75-0f35c95f120.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/congestion/video-160-0-0a5f30.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/congestion/video-160-90-0a5c30.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/pcmu_8k_no_jitter.pcap"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/rtp-60late-500total.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/firstvalid.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/opus-edge-congestion20_60_40.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/h264_one_nalu_per_frame.pcap"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/poor_jitter_quality_22_filter.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/rtp-120late-1000total.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/rtp-240late-2000total.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/h264_missing_pps_in_second_i_frame.pcap"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/rtp-534late-24loss-7000total.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/secondvalid.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/opus-poor-quality.pcapng"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/mediastreamer2/tester/scenarios/poor_jitter_quality_22.pcapng"
    )
endif()

