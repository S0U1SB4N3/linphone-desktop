/*
	msrp_grammar.cpp
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

#include "belle-msrp/msrp_grammar.hpp"

const char *msrp_grammar = R"==GRAMMAR==(
msrp-req-or-resp = msrp-request / msrp-response
; make end-line optionnal to avoid ambiguity
; between data and end-line.
msrp-request = req-start headers content-stuff / end-line
msrp-response = resp-start headers end-line

req-start  = pMSRP SP transact-id SP method CRLF
resp-start = pMSRP SP transact-id SP status-code [SP comment] CRLF
comment = utf8text

pMSRP = %x4D.53.52.50 ; MSRP in caps
transact-id = ident
method = mSEND / mREPORT / other-method
mSEND = %x53.45.4e.44 ; SEND in caps
mREPORT = %x52.45.50.4f.52.54; REPORT in caps

other-method = 1*UPALPHA
status-code = 3DIGIT ; any code defined in this document
                    ; or an extension document

MSRP-URI = msrp-scheme "://" authority
   ["/" session-id] ";" transport *( ";" URI-parameter)
                    ; authority as defined in RFC3986

msrp-scheme = "msrp" / "msrps"
session-id = 1*( unreserved / "+" / "=" / "/" )
                    ; unreserved as defined in RFC3986
transport = "tcp" / 1*ALPHANUM
URI-parameter = token ["=" token]

headers = To-Path CRLF From-Path CRLF *( header CRLF )

header  =   Message-ID
    / Success-Report
    / Failure-Report
    / Byte-Range
    / Status

; todo    / ext-header

To-Path = "To-Path:" SP MSRP-URI *( SP MSRP-URI )
From-Path = "From-Path:" SP MSRP-URI *( SP MSRP-URI )
Message-ID = "Message-ID:" SP ident
Success-Report = "Success-Report:" SP ("yes" / "no" )
Failure-Report = "Failure-Report:" SP ("yes" / "no" / "partial" )
Byte-Range = "Byte-Range:" SP range-start "-" range-end "/" total
range-start = 1*DIGIT
range-end   = 1*DIGIT / "*"
total       = 1*DIGIT / "*"

Status = "Status:" SP namespace SP status-code [SP comment]
namespace = 3(DIGIT); "000" for all codes defined in this document.

ident = ALPHANUM  3*31ident-char
ident-char = ALPHANUM / "." / "-" / "+" / "%" / "="

; todo content-stuff = *(Other-Mime-header CRLF) Content-Type 2CRLF data CRLF
content-stuff = Content-Type 2CRLF data

Content-Type = "Content-Type:" SP media-type
media-type = type "/" subtype *( ";" gen-param )
type = token
subtype = token

gen-param = pname [ "=" pval ]
pname = token
pval  = token / quoted-string

token = 1*(%x21 / %x23-27 / %x2A-2B / %x2D-2E
          / %x30-39 / %x41-5A / %x5E-7E)
          ; token is compared case-insensitive

quoted-string = DQUOTE *(qdtext / qd-esc) DQUOTE
qdtext = SP / HTAB / %x21 / %x23-5B / %x5D-7E
           / UTF8-NONASCII
qd-esc = (BACKSLASH BACKSLASH) / (BACKSLASH DQUOTE)
BACKSLASH = "\"
UPALPHA  = %x41-5A
ALPHANUM = ALPHA / DIGIT

; todo
; Other-Mime-header = (Content-ID
;     / Content-Description
;     / Content-Disposition
;     / mime-extension-field)

end-line = "-------" transact-id continuation-flag CRLF
data = *OCTET
continuation-flag = "+" / "$" / "#"

ext-header = hname ":" SP hval CRLF
hname = ALPHA *token
hval = utf8text

utf8text = *(HTAB / %x20-7E / UTF8-NONASCII)

UTF8-NONASCII = %xC0-DF 1UTF8-CONT
             / %xE0-EF 2UTF8-CONT
             / %xF0-F7 3UTF8-CONT
             / %xF8-Fb 4UTF8-CONT
             / %xFC-FD 5UTF8-CONT
UTF8-CONT     = %x80-BF

authority      =  srvr / reg-name
srvr           =  [ [ userinfo "@" ] hostport ]
userinfo       =  user [ ":" password ] "@"
hostport       =  host [ ":" port ]
host           =  hostname / IPv4address / IPv6reference
hostname       =  *( domainlabel "." ) toplabel [ "." ]
reg-name       =  1*( unreserved / escaped / "$" / ","
                  / ";" / ":" / "@" / "&" / "=" / "+" )
domainlabel    =  alphanum / (alphanum *( alphanum / ( *("-") alphanum) ) )
escaped        =  "%" HEXDIG HEXDIG
IPv6reference  =  "[" IPv6address "]"
IPv4address    =  1*3DIGIT "." 1*3DIGIT "." 1*3DIGIT "." 1*3DIGIT
IPv6address    =  hexpart [ ":" IPv4address ]
hexpart        =  hexseq / hexseq "::" [ hexseq ] / "::" [ hexseq ]
hexseq         =  hex4 *( ":" hex4)
hex4           =  1*4HEXDIG
password       =  *( unreserved / escaped /
                  "&" / "=" / "+" / "$" / "," )
port           =  1*DIGIT
toplabel         =  ALPHA / (ALPHA *( alphanum / (*("-") alphanum ) ) )
unreserved  =  alphanum / mark
mark        =  "-" / "_" / "." / "!" / "~" / "*" / "'"
           / "(" / ")"
user             =  1*( unreserved / escaped / user-unreserved )
user-unreserved  =  "&" / "=" / "+" / "$" / "," / ";" / "?" / "/"
)==GRAMMAR==";
