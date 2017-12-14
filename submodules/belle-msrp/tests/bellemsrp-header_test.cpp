/*
	bellemsrp-header_test.cpp
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

static void testToPath() {
	auto* toPath = testProperty<bellemsrp::Path>("To-Path: msrp://bob.example.com:8888/9di4eae923wzd;tcp", "To-Path");
	BC_ASSERT_EQUAL(toPath->uris.size(), 1, int, "%d");
	BC_ASSERT_EQUAL(toPath->uris[0]->scheme, bellemsrp::Scheme::msrp, int, "%d");
}

static void testFromPath() {
	auto* fromPath = testProperty<bellemsrp::Path>("From-Path: msrps://bob.example.com:8888/9di4eae923wzd;tcp", "From-Path");
	BC_ASSERT_EQUAL(fromPath->uris.size(), 1, int, "%d");
	BC_ASSERT_EQUAL(fromPath->uris[0]->scheme, bellemsrp::Scheme::msrps, int, "%d");
}

static test_t tests[] = {
	TEST_NO_TAG("To-Path", testToPath),
	TEST_NO_TAG("From-Path", testFromPath),
};

test_suite_t header_properties_test_suite = {
	"Header",
	NULL,
	NULL,
	NULL,
	NULL,
	sizeof(tests) / sizeof(tests[0]),
	tests
};
