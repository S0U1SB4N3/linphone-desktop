/*
	bellemsrp-tester.hpp
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

#pragma once

#include "belle-msrp/belle-msrp_parser.hpp"
#include <bctoolbox/tester.h>

#include <string>

#ifdef __cplusplus
extern "C" {
#endif

void bellemsrp_tester_init(void(*ftester_printf)(int level, const char *fmt, va_list args));
void bellemsrp_tester_uninit(void);

#ifdef __cplusplus
};
#endif

extern test_suite_t header_properties_test_suite;
extern test_suite_t response_test_suite;
extern test_suite_t request_test_suite;

template<typename T>
T* testProperty(const std::string& input, const std::string& rule) {
	bellemsrp::Parser parser;
	bellemsrp::Element* result = parser.parse(input, rule);
	BC_ASSERT_PTR_NOT_NULL(result);
	if (result != NULL) {
		std::string str = result->toString();
		BC_ASSERT_STRING_EQUAL(str.c_str(), input.c_str());
	}

	T* casted = dynamic_cast<T*>(result);
	BC_ASSERT_PTR_NOT_NULL(casted);
	return casted;
}
