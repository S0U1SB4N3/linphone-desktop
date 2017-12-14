/*
	bellemsrp-response_test.cpp
	Copyright (C) 2015-2016  Belledonne Communications SARL

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

static void testOkResponse() {
	const char* input = "MSRP d93kswow 200 OK\r\n"
		"To-Path: msrp://alicepc.example.com:7777/iau39soe2843z;tcp\r\n"
		"From-Path: msrp://bob.example.com:8888/9di4eae923wzd;tcp\r\n"
		"-------d93kswow$\r\n";

	auto* response = testProperty<bellemsrp::Response>(input, "msrp-response");
	BC_ASSERT_PTR_NOT_NULL(response);
	if (response != NULL) {
		BC_ASSERT_STRING_EQUAL(response->transactionID.c_str(), "d93kswow");
		BC_ASSERT_EQUAL(response->status.code, 200, int, "%d");
	}
}

static test_t tests[] = {
	TEST_NO_TAG("OK response", testOkResponse),
};

test_suite_t response_test_suite = {
	"Response",
	NULL,
	NULL,
	NULL,
	NULL,
	sizeof(tests) / sizeof(tests[0]),
	tests
};
