EXTRA_DIST=

if BUILD_TESTS

noinst_PROGRAMS=bellemsrp-tester
bellemsrp_tester_SOURCES=bellemsrp-tester.cpp bellemsrp-tester.hpp common/bc_tester_utils.c common/bc_tester_utils.h \
	bellemsrp-header_test.cpp \
	bellemsrp-request_test.cpp \
	bellemsrp-response_test.cpp

bellemsrp_tester_LDADD=$(top_builddir)/src/libbellemsrp.la -lbelr $(CUNIT_LIBS)

bellemsrp_tester_CFLAGS=\
	-DBC_CONFIG_FILE=\"config.h\" \
	$(CUNIT_CFLAGS)

bellemsrp_tester_AM_CPPFLAGS=-I$(top_srcdir)/include \
        -I$(top_srcdir)/tester \
        -I$(top_srcdir)/tester/common

endif # BUILD_TESTS

AM_CPPFLAGS=-I$(top_srcdir)/include
