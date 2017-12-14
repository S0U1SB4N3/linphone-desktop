# Install script for directory: /Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/srtp" TYPE FILE MESSAGE_LAZY PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/aes.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/aes_cbc.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/aes_icm.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/alloc.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/auth.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/cipher.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/crypto.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/crypto_kernel.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/crypto_math.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/crypto_types.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/cryptoalg.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/datatypes.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/err.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/gf2_8.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/hmac.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/integers.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/kernel_compat.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/key.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/null_auth.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/null_cipher.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/prng.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/rand_source.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/rdb.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/rdbx.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/sha1.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/stat.h"
    "/Users/S0U1SB4N3/test006/linphone-desktop/submodules/externals/srtp/crypto/include/xfm.h"
    )
endif()

