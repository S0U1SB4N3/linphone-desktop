/*
	belcard-tester.cpp
	Copyright (C) 2015  Belledonne Communications SARL

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "bellemsrp-tester.hpp"
#include <bctoolbox/logging.h>

static void log_handler(int lev, const char *fmt, va_list args) {
#ifdef _WIN32
	vfprintf(lev == BCTBX_LOG_ERROR ? stderr : stdout, fmt, args);
	fprintf(lev == BCTBX_LOG_ERROR ? stderr : stdout, "\n");
#else
	va_list cap;
	va_copy(cap,args);
	/* Otherwise, we must use stdio to avoid log formatting (for autocompletion etc.) */
	vfprintf(lev == BCTBX_LOG_ERROR ? stderr : stdout, fmt, cap);
	fprintf(lev == BCTBX_LOG_ERROR ? stderr : stdout, "\n");
	va_end(cap);
#endif
}

void bellemsrp_tester_init(void(*ftester_printf)(int level, const char *fmt, va_list args)) {
	if (ftester_printf == NULL) ftester_printf = log_handler;
	bc_tester_init(ftester_printf, BCTBX_LOG_MESSAGE, BCTBX_LOG_ERROR, NULL);

	bc_tester_add_suite(&header_properties_test_suite);
	bc_tester_add_suite(&response_test_suite);
	bc_tester_add_suite(&request_test_suite);
}

void bellemsrp_tester_uninit(void) {
	bc_tester_uninit();
}


int main(int argc, char *argv[]) {
	int i;
	int ret;

	bellemsrp_tester_init(NULL);

#ifndef _WIN32   /*this hack doesn't work for argv[0]="c:\blablab\"*/
	// this allows to launch liblinphone_tester from outside of tester directory
	if (strstr(argv[0], ".libs")) {
		int prefix_length = strstr(argv[0], ".libs") - argv[0] + 1;
		char prefix[512];
		sprintf(prefix, "%s%.*s", argv[0][0] == '/' ? "" : "./", prefix_length, argv[0]);
		// printf("Resource prefix set to %s\n", prefix);
		bc_tester_set_resource_dir_prefix(prefix);
		bc_tester_set_writable_dir_prefix(prefix);
	}
#endif

	for(i = 1; i < argc; ++i) {
		int ret = bc_tester_parse_args(argc, argv, i);
		if (ret > 0) {
			i += ret - 1;
			continue;
		} else if (ret < 0) {
			bc_tester_helper(argv[0], "");
		}
		return ret;
	}

	ret = bc_tester_start(argv[0]);
	bellemsrp_tester_uninit();
	return ret;
}

