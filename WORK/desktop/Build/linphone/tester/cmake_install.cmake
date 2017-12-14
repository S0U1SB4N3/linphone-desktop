# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE MESSAGE_LAZY FILES "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/tester/liblinphone_tester")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/liblinphone_tester" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/liblinphone_tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/linphone/coreapi"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/liblinphone_tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -delete_rpath "/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/liblinphone_tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../Frameworks"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/liblinphone_tester")
    execute_process(COMMAND /usr/bin/install_name_tool
      -add_rpath "@executable_path/../lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/liblinphone_tester")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/liblinphone_tester")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/tester_hosts"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/local_tester_hosts"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/messages.db"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester/sounds" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/ahbahouaismaisbon.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/hello44100.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/hello8000.mkv"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/hello8000_mkv_ref.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/hello8000.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/oldphone.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/ringback.wav"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/sintel_trailer_opus_h264.mkv"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/sintel_trailer_opus_vp8.mkv"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/sintel_trailer_pcmu_h264.mkv"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sounds/vrroom.wav"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester/sipp" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sipp/call_invite_200ok_without_contact_header.xml"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sipp/call_with_audio_mline_before_video_in_sdp.xml"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sipp/call_with_multiple_audio_mline_in_sdp.xml"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sipp/call_with_multiple_video_mline_in_sdp.xml"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sipp/call_with_video_mline_before_audio_in_sdp.xml"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/sipp/sip_update_within_icoming_reinvite_with_no_sdp.xml"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester/certificates/altname" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/altname/agent.pem"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/altname/cafile.pem"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/altname/openssl-altname.cnf"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester/certificates/cn" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/cn/agent.pem"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/cn/cafile.pem"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/cn/openssl-cn.cnf"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester/certificates/client" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/client/cert.pem"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/client/key.pem"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/client/cert2.pem"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/client/key2.pem"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/certificates/client/cert2-signed-by-other-ca.pem"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester/rcfiles" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/account_creator_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/assistant_create.rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/carddav_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/conference_focus_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/empty_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/friends_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/laure_call_logs_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/laure_rc_udp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/laure_tcp_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_early_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_h264_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_nat64_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_quality_reporting_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie2_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_rc_rtcp_xr"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_404_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_default_values_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_https_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_invalid_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_invalid_uri_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_localfile2_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_localfile_android_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_localfile_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_localfile_win10_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_remote_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_sips_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_transient_remote_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_v4proxy_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_zrtp_aes256_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_zrtp_b256_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/marie_zrtp_srtpsuite_aes256_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/michelle_rc_udp"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/multi_account_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_alt_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_as_friend_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_h264_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_nat64_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_rc_rtcp_xr"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_sips_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_tcp_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_tls_client_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_tunnel_verify_server_certificate_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_v4proxy_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_wild_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_zrtp_aes256_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_zrtp_b256_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/pauline_zrtp_srtpsuite_aes256_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/remote_zero_length_params_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/stun_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/upnp_rc"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/rcfiles/zero_length_params_rc"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester/images" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/images/linphone.svg"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/images/nowebcamCIF.jpg"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/images/nowebcamVGA.jpg"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/liblinphone_tester/vcards" TYPE FILE MESSAGE_LAZY FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/vcards/thousand_vcards.vcf"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/linphone/tester/vcards/vcards.vcf"
    )
endif()

