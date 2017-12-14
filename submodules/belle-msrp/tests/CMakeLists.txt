############################################################################
# CMakeLists.txt
# Copyright (C) 2015  Belledonne Communications, Grenoble France
#
############################################################################
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
#
############################################################################

if(ENABLE_SHARED)
	set(BELMSRP_LIBRARIES_FOR_TESTER belmsrp)
else()
	set(BELMSRP_LIBRARIES_FOR_TESTER belmsrp-static)
endif()

set(HEADER_FILES_CXX bellemsrp-tester.hpp)
set(SOURCE_FILES_CXX
	bellemsrp-header_test.cpp
	bellemsrp-header_test.cpp
	bellemsrp-response_test.cpp
	bellemsrp-request_test.cpp
	bellemsrp-tester.cpp
)

apply_compile_flags(SOURCE_FILES_CXX "CPP" "CXX")

add_executable(belmsrp_tester ${SOURCE_FILES_CXX} ${HEADER_FILES_CXX})
set_target_properties(belmsrp_tester PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(belmsrp_tester PUBLIC ${BCTOOLBOX_TESTER_INCLUDE_DIRS})
target_link_libraries(belmsrp_tester ${BELMSRP_LIBRARIES_FOR_TESTER} ${BCTOOLBOX_TESTER_LIBRARIES})

if(APPLE)
	set_target_properties(belmsrp_tester PROPERTIES LINK_FLAGS "-stdlib=libc++")
endif()
if(NOT IOS)
	install(TARGETS belmsrp_tester
		RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
		LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
		ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
		PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
	)
endif()
