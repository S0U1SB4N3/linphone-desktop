/*
	bellemsrp-request_test.cpp
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

static void testHeaders() {
	const char* input =
		"To-Path: msrp://bob.example.com:8888/9di4eae923wzd;tcp\r\n" \
		"From-Path: msrp://alicepc.example.com:7777/iau39soe2843z;tcp\r\n" \
		"Message-ID: 12339sdqwer\r\n" \
		"Byte-Range: 1-16/16\r\n";

	auto* headers = testProperty<bellemsrp::Headers>(input, "headers");
	BC_ASSERT_PTR_NOT_NULL(headers);
	if (headers != NULL) {
		BC_ASSERT_PTR_NOT_NULL(headers->to);
		BC_ASSERT_PTR_NOT_NULL(headers->from);
		BC_ASSERT_STRING_EQUAL(headers->messageID.c_str(), "12339sdqwer");
		BC_ASSERT_EQUAL(headers->byteRange.start, 1, int, "%d");
		BC_ASSERT_EQUAL(headers->byteRange.end, 16, int, "%d");
		BC_ASSERT_EQUAL(headers->byteRange.total, 16, int, "%d");
	}
}

static void testContentStuff() {
	const char* input =
		"Content-Type: text/plain\r\n" \
		"\r\n" \
		"Hi, I'm Alice!\r\n" \
		"-------d93kswow$\r\n";


	auto* content = testProperty<bellemsrp::Content>(input, "content-stuff");
	BC_ASSERT_PTR_NOT_NULL(content);
	if (content != NULL) {
		BC_ASSERT_STRING_EQUAL(content->type.c_str(), "text/plain");
		// data contains both data and endLine
		BC_ASSERT_STRING_EQUAL(content->data.c_str(), "Hi, I'm Alice!\r\n" "-------d93kswow$\r\n");
	}
}

static void testRequestSend() {
	const char* input =
		"MSRP d93kswow SEND\r\n" \
		"To-Path: msrp://bob.example.com:8888/9di4eae923wzd;tcp\r\n" \
		"From-Path: msrp://alicepc.example.com:7777/iau39soe2843z;tcp\r\n" \
		"Message-ID: 12339sdqwer\r\n" \
		"Byte-Range: 1-16/16\r\n" \
		"Content-Type: text/plain\r\n" \
		"\r\n" \
		"Hi, I'm Alice!\r\n" \
		"-------d93kswow$\r\n";

	auto* request = testProperty<bellemsrp::Request>(input, "msrp-request");
	BC_ASSERT_PTR_NOT_NULL(request);
	if (request != NULL) {
		BC_ASSERT_STRING_EQUAL(request->transactionID.c_str(), "d93kswow");
		BC_ASSERT_STRING_EQUAL(request->method.c_str(), "SEND");
		BC_ASSERT_PTR_NOT_NULL(request->headers);
		if (request->headers != NULL) {
			BC_ASSERT_STRING_EQUAL(request->headers->messageID.c_str(), "12339sdqwer");
			BC_ASSERT_EQUAL(request->headers->byteRange.start, 1, int, "%d");
			BC_ASSERT_EQUAL(request->headers->byteRange.end, 16, int, "%d");
			BC_ASSERT_EQUAL(request->headers->byteRange.total, 16, int, "%d");
		}
		BC_ASSERT_STRING_EQUAL(request->endLine.c_str(), "-------d93kswow$\r\n");
	}
}

static test_t tests[] = {
	TEST_NO_TAG("headers", testHeaders),
	TEST_NO_TAG("content-stuff", testContentStuff),
	TEST_NO_TAG("Send request", testRequestSend),
};

test_suite_t request_test_suite = {
	"Request",
	NULL,
	NULL,
	NULL,
	NULL,
	sizeof(tests) / sizeof(tests[0]),
	tests
};
