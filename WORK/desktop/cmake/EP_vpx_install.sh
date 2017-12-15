#!/bin/sh

if [ -n "" ]
then
	export AS="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc"
else
	if [ -n "" ]
	then
		export AS=""
	fi
fi
export CC="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc"
export CXX="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++"
export OBJC="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc"
export LD="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ld"
export AR="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ar"
export RANLIB="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ranlib"
export STRIP="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/strip"
export NM="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/nm"
export CC_NO_LAUNCHER="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc"
export CXX_NO_LAUNCHER="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++"
export OBJC_NO_LAUNCHER="/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc"

ASFLAGS=" "
CPPFLAGS="  -w"
CFLAGS=" "
CXXFLAGS=" "
OBJCFLAGS=" "
LDFLAGS=" "

export PATH="$PATH:/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/cmake/programs"
export PKG_CONFIG="/usr/local/bin/pkg-config"
export PKG_CONFIG_PATH="/Users/S0U1SB4N3/test006/linphone-desktop/OUTPUT/desktop/lib/pkgconfig/::/usr/lib/pkgconfig/:/usr/lib/x86_64-linux-gnu/pkgconfig/:/usr/share/pkgconfig/:/usr/local/lib/pkgconfig/:/opt/local/lib/pkgconfig/"
export PKG_CONFIG_LIBDIR=""

cd "/Users/S0U1SB4N3/test006/linphone-desktop/WORK/desktop/Build/vpx"
make V=0  install 
