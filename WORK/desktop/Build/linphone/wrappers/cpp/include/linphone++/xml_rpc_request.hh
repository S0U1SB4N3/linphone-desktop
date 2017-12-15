/*
Copyright (C) 2017 Belledonne Communications SARL

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef _LINPHONE_XML_RPC_REQUEST_HH
#define _LINPHONE_XML_RPC_REQUEST_HH

#include <string>
#include "enums.hh"
#include "xml_rpc_request_listener.hh"
#include "object.hh"





struct _LinphoneXmlRpcRequest;


namespace linphone {


	/**
	 * @brief The LinphoneXmlRpcRequest object representing a XML-RPC request to be
	 * sent. 
	 */
	class XmlRpcRequest: public ListenableObject {
	
		public:
			XmlRpcRequest(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneXmlRpcRequest *cPtr() {return (_LinphoneXmlRpcRequest *)mPrivPtr;}
			
			LINPHONECXX_PUBLIC void setListener(const std::shared_ptr<XmlRpcRequestListener> &listener);

	
		public:
			
		
			/**
			 * @brief Get the status of the XML-RPC request. 
			 */
			LINPHONECXX_PUBLIC XmlRpcStatus getStatus() const;
			
			/**
			 * @brief Get the response to an XML-RPC request sent with
			 * linphone_xml_rpc_session_send_request() and returning an integer response. 
			 */
			LINPHONECXX_PUBLIC int getIntResponse() const;
			
			/**
			 * @brief Get the response to an XML-RPC request sent with
			 * linphone_xml_rpc_session_send_request() and returning a string response. 
			 */
			LINPHONECXX_PUBLIC std::string getStringResponse() const;
			
			/**
			 * @brief Get the content of the XML-RPC request. 
			 */
			LINPHONECXX_PUBLIC std::string getContent() const;
			
			/**
			 * @brief Add a string argument to an XML-RPC request. 
			 */
			LINPHONECXX_PUBLIC void addStringArg(const std::string & value);
			
			/**
			 * @brief Add an integer argument to an XML-RPC request. 
			 */
			LINPHONECXX_PUBLIC void addIntArg(int value);
			

		
		
		
	};

};

#endif // _LINPHONE_XML_RPC_REQUEST_HH
