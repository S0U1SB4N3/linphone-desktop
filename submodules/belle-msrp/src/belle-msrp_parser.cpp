/*
	belle-msrp_parser.cpp
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

#include "belle-msrp/belle-msrp_parser.hpp"
#include "belle-msrp/belle-msrp.hpp"
#include "belle-msrp/msrp_grammar.hpp"

#include <belr/parser-impl.cc>

#include <cstring>
#include <cstdlib>
#include <cassert>

namespace bellemsrp {

	Parser::Parser() {
		_grammar = _grammar_builder.createFromAbnf((const char*)msrp_grammar, make_shared<belr::CoreRules>());
	}

	Parser::~Parser() {
	}

#define LAMBDA_1(type1) (std::function<type1()>) [] () -> type1
#define LAMBDA_VOID_2(type1, type2) (std::function<void(type1, type2)>) [] (type1 arg1, type2 arg2)

	Element* Parser::_parse(const string &input, const string &rule) {
		belr::Parser<Element*> parser(_grammar);

		/* Path */ {
			parser.setHandler(
				"To-Path", LAMBDA_1(Path*) { return new Path(Path::To); }
			)->setCollector(
				"MSRP-URI", LAMBDA_VOID_2(Path*, URI*) { arg1->uris.push_back(arg2); }
			);
		}

		/* From-Path */ {
			parser.setHandler(
				"From-Path", LAMBDA_1(Path*) { return new Path(Path::From); }
			)->setCollector(
				"MSRP-URI", LAMBDA_VOID_2(Path*, URI*) { arg1->uris.push_back(arg2); }
			);
		}

		/* MSRP-URI */ {
			parser.setHandler(
				"MSRP-URI", LAMBDA_1(URI*) { return new URI(); }
			)->setCollector(
				"msrp-scheme", LAMBDA_VOID_2(URI*, const std::string&) { arg1->scheme = Scheme::fromString(arg2); }
			)->setCollector(
				"authority", LAMBDA_VOID_2(URI*, Authority*) { arg1->authority = arg2; }
			)->setCollector(
				"transport", LAMBDA_VOID_2(URI*, const std::string&) { arg1->transport = arg2; }
			)->setCollector(
				"session-id", LAMBDA_VOID_2(URI*, const std::string&) { arg1->sessionID = arg2; }
			);
		}

		/* authority */ {
			parser.setHandler(
				"authority", LAMBDA_1(Authority*) { return new Authority(); }
			)->setCollector(
				"srvr", LAMBDA_VOID_2(Authority*, const std::string&) { arg1->srvr = arg2; }
			)->setCollector(
				"reg-name", LAMBDA_VOID_2(Authority*, const std::string&) { arg1->regName = arg2; }
			);
		}

		/* headers */ {
			parser.setHandler(
				"headers", LAMBDA_1(Headers*) { return new Headers(); }
			)->setCollector(
				"From-Path", LAMBDA_VOID_2(Headers*, Path*) { arg1->from = arg2; }
			)->setCollector(
				"To-Path", LAMBDA_VOID_2(Headers*, Path*) { arg1->to = arg2; }
			)->setCollector(
				"ident", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->messageID = arg2; }
			)->setCollector(
				"Success-Report", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->successReport = Report::fromString(arg2); }
			)->setCollector(
				"Failure-Report", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->failureReport = Report::fromString(arg2); }
			)->setCollector(
				"range-start", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->byteRange.start = atoi(arg2.c_str()); }
			)->setCollector(
				"range-end", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->byteRange.end = (arg2 == "*") ? INT_MAX : atoi(arg2.c_str()); }
			)->setCollector(
				"total", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->byteRange.total = (arg2 == "*") ? INT_MAX : atoi(arg2.c_str()); }
			)->setCollector(
				"namespace", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->status.namespac = arg2; }
			)->setCollector(
				"status-code", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->status.code = atoi(arg2.c_str()); }
			)->setCollector(
				"comment", LAMBDA_VOID_2(Headers*, const std::string&) { arg1->status.comment = arg2; }
			);
		}

		/* content */ {
			parser.setHandler(
				"content-stuff", LAMBDA_1(Content*) { return new Content(); }
			)->setCollector(
				"media-type", LAMBDA_VOID_2(Content*, const std::string&) { arg1->type = arg2; }
			)->setCollector(
				"data", LAMBDA_VOID_2(Content*, const std::string&) { arg1->data = arg2; }
			);
		}

		/* msrp-response */ {
			parser.setHandler(
				"msrp-response", LAMBDA_1(Response*) { return new Response(); }
			)->setCollector(
				"transact-id", LAMBDA_VOID_2(Response*, const std::string&) { arg1->transactionID = arg2; }
			)->setCollector(
				"headers", LAMBDA_VOID_2(Response*, Headers*) { arg1->headers = arg2; }
			)->setCollector(
				"end-line", LAMBDA_VOID_2(Response*, const std::string&) { arg1->endLine = strdup(arg2.c_str()); }
			)->setCollector(
				"comment", LAMBDA_VOID_2(Response*, const std::string&) { arg1->status.comment = arg2; }
			)->setCollector(
				"status-code", LAMBDA_VOID_2(Response*, const std::string&) { arg1->status.code = atoi(arg2.c_str()); }
			);
		}

		/* msrp-request */ {
			parser.setHandler(
				"msrp-request", LAMBDA_1(Request*) { return new Request(); }
			)->setCollector(
				"transact-id", LAMBDA_VOID_2(Request*, const std::string&) { arg1->transactionID = arg2; }
			)->setCollector(
				"headers", LAMBDA_VOID_2(Request*, Headers*) { arg1->headers = arg2; }
			)->setCollector(
				"content-stuff", LAMBDA_VOID_2(Request*, Content*) {
					arg1->content = arg2;
					arg1->endLine = arg1->content->splitEndLineFromData(arg1->transactionID);
				}
			)->setCollector(
				"end-line", LAMBDA_VOID_2(Request*, const std::string&) {
					assert(arg1->content == NULL && "content and end-line are mutually exclusive");
					arg1->endLine = strdup(arg2.c_str());
				}
			)->setCollector(
				"method", LAMBDA_VOID_2(Request*, const std::string&) { arg1->method = arg2; }
			);
		}

		size_t parsedSize = 0;
		Element* ret = parser.parseInput(rule, input, &parsedSize);

		if (ret == NULL) {
			std::cerr << "Could'nt parse input using rule |" << rule << "| (parsedSize=" << parsedSize << ')' << std::endl;
			if (parsedSize == std::string::npos) {
				parsedSize = 0;
			}

			std::string green = input.substr(0, parsedSize);
			std::string red = input.substr(parsedSize);
			size_t idx = 0;
			while((idx = green.find("\r\n")) != std::string::npos) {
				green.replace(idx, 1, "⏎");
			}
			while((idx = red.find("\r\n")) != std::string::npos) {
				red.replace(idx, 1, "⏎");
			}
			printf("%c[%d;%dm", 27, 1, 32);
			printf("%s", green.c_str());
			printf("%c[%d;%dm", 27, 1, 31);
			printf("%s", red.c_str());
			printf("%c[%dm", 27, 0);
		}

		return ret;
	}

	Element* Parser::parse(const string &input) {
		return _parse(input, "msrp-req-or-resp");
	}

	Element* Parser::parse(const string &input, const string &rule) {
		return _parse(input, rule);
	}

}
