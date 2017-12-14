/*
	belle-msrp.cpp
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

#include "belle-msrp/belle-msrp.hpp"

static const char *CRLF = "\r\n";

namespace bellemsrp {

	namespace Scheme {
		std::string toString(Enum e) {
			switch (e) {
				case msrps:
					return "msrps";
				case msrp:
				default:
					return "msrp";
			}
		}

		Enum fromString(const std::string& s) {
			if (s == "msrps") {
				return msrps;
			} else {
				return msrp;
			}
		}
	}

	namespace Report {
		std::string toString(Enum e) {
			switch (e) {
				case yes: return "yes";
				case no: return "no";
				case partial: return "partial";
				case undef:
				default:
					return "";
			}
		}
		Enum fromString(const std::string& s) {
			if (s == "yes") return yes;
			if (s == "no") return no;
			if (s == "partial") return partial;
			return undef;
		}
	}

	std::string URI::toString() const {
		std::stringstream s;
		s << Scheme::toString(scheme) << "://" << authority->toString();
		if (!sessionID.empty()) {
			s << '/' << sessionID;
		}
		s << ';' << transport;
		for (auto p: parameters) {
			s << ';' << p->toString();
		}
		return s.str();
	}

	std::string Path::toString() const {
		std::stringstream s;
		s << (direction == To ? "To" : "From") << "-Path:";
		for (size_t i=0; i<uris.size(); i++) {
			s << ' ' << uris[i]->toString();
		}
		return s.str();
	}

	std::string Status::toString() const {
		if (code < 0) return "";
		std::stringstream s;
		if (!namespac.empty()) {
			s << namespac << ' ';
		}
		s << code;
		if (!comment.empty()) {
			s << ' ' << comment;
		}
		s << CRLF;
		return s.str();
	}

	std::string ByteRange::toString() const {
		if (total < 0) return "";
		std::stringstream s;
		s << "Byte-Range: " << start << '-';
		if (end < INT_MAX) {
			s << end;
		} else {
			s << '*';
		}
		s << '/';
		if (total < INT_MAX) {
			s << total;
		} else {
			s << '*';
		}
		s << CRLF;
		return s.str();
	}

	std::string Headers::toString() const {
		std::stringstream s;
		s << to->toString() << CRLF;
		s << from->toString() << CRLF;
		if (!messageID.empty()) {
			s << "Message-ID: " << messageID << CRLF;
		}
		if (successReport != Report::undef) {
			s << "Success-Report: " << Report::toString(successReport) << CRLF;
		}
		if (failureReport != Report::undef) {
			s << "Failure-Report: " << Report::toString(failureReport) << CRLF;
		}
		s << byteRange.toString();
		s << status.toString();
		if (!extHeader.empty()) {
			s << extHeader << CRLF;
		}
		return s.str();
	}

	std::string Content::toString() const {
		if (data.empty()) return "";
		std::stringstream s;
		s << "Content-Type: " << type << CRLF << CRLF;
		s << data;
		return s.str();
	}

	std::string Content::splitEndLineFromData(std::string tID) {
		std::string tmp = "-------" + tID;
		std::string::size_type idx = data.find(tmp);
		assert((idx != std::string::npos) && "end-line should be present in data");
		std::string endline = data.substr(idx);
		data = data.substr(0, idx);
		return endline;
	}

	std::string Request::toString() const {
		std::stringstream s;
		s << "MSRP " << transactionID << ' ' << method << CRLF;
		s << headers->toString();
		if (content) {
			s << content->toString();
		}
		s << endLine;
		return s.str();
	}

	std::string Response::toString() const {
		std::stringstream s;
		s << "MSRP " << transactionID << ' ' << status.toString();
		s << headers->toString();
		s << endLine;
		return s.str();
	}

}
