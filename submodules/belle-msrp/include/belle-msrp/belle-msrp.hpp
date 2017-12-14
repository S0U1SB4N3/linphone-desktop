/*
  belle-msrp.hpp
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

#ifndef BELLE_MSRP_HPP
#define BELLE_MSRP_HPP

#if defined(_MSC_VER)
#define BELLEMSRP_PUBLIC  __declspec(dllexport)
#else
#define BELLEMSRP_PUBLIC
#endif

#include <string>
#include <vector>
#include <sstream>
#include <climits>
#include <cstring>
#include <cassert>

namespace bellemsrp {

	namespace Scheme {
		enum Enum { msrp = 0, msrps };

		std::string toString(Enum e);
		Enum fromString(const std::string& s);
	}

	namespace Report {
		enum Enum { undef = 0, yes, no, partial };

		std::string toString(Enum e);
		Enum fromString(const std::string& s);
	}

	struct Element {
		virtual ~Element() {}
		virtual std::string toString() const = 0;
	};

	struct Token : public Element {
		std::string value;

		std::string toString() const { return value; }
	};

	struct URIParameter : public Element {
		Token* token;

		std::string toString() const { return token->toString(); }
	};

	struct Authority : public Element {
		std::string srvr;
		std::string regName;

		std::string toString() const { return srvr.empty() ? regName : srvr; }
	};

	struct URI : public Element {
		Scheme::Enum scheme;
		Authority* authority;
		std::string transport;
		std::string sessionID;
		std::vector<URIParameter*> parameters;

		std::string toString() const;
	};

	struct Path: public Element {
		enum Dir { To, From } direction;
		std::vector<URI*> uris;

		Path(Dir d) : direction (d) {}

		std::string toString() const;
	};

	struct Status {
		std::string namespac;
		int code;
		std::string comment;

		Status() : namespac(""), code(-1), comment("") {}

		std::string toString() const;
	};

	struct ByteRange {
		int start, end, total;

		ByteRange() : start(-1), end(-1), total(-1) {}

		std::string toString() const;
	};

	struct Headers : public Element {
		Path* from;
		Path* to;
		std::string messageID;
		Report::Enum successReport;
		Report::Enum failureReport;
		ByteRange byteRange;
		Status status;
		std::string extHeader;

		Headers() :
			from(nullptr),
			to(nullptr),
			messageID(""),
			successReport(Report::undef),
			failureReport(Report::undef),
			byteRange(),
			status(),
			extHeader("") {}

		std::string toString() const;
	};

	struct Content : public Element {
		std::string type;
		std::string data;

		std::string toString() const;
		std::string splitEndLineFromData(std::string tID);
	};

	struct Message : public Element {
		std::string transactionID;
		Headers* headers;
		std::string endLine;
	};

	struct Request : public Message {
		std::string method;
		Content* content;

		std::string toString() const;
	};

	struct Response : public Message {
		Status status;

		std::string toString() const;
	};

}

#endif /* BELLE_MSRP_HPP */
