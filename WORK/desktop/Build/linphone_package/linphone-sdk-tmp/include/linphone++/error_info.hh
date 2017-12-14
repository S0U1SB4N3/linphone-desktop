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

#ifndef _LINPHONE_ERROR_INFO_HH
#define _LINPHONE_ERROR_INFO_HH

#include <string>
#include <memory>
#include "enums.hh"
#include "object.hh"





struct _LinphoneErrorInfo;


namespace linphone {


	/**
	 * @brief Object representing full details about a signaling error or status. 
	 */
	class ErrorInfo: public Object {
	
		public:
			ErrorInfo(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneErrorInfo *cPtr() {return (_LinphoneErrorInfo *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get protocol from the error info. 
			 */
			LINPHONECXX_PUBLIC std::string getProtocol() const;
			
			/**
			 * @brief Assign protocol name to a LinphoneErrorInfo object. 
			 */
			LINPHONECXX_PUBLIC void setProtocol(const std::string & proto);
			
			/**
			 * @brief Get the status code from the low level protocol (ex a SIP status code). 
			 */
			LINPHONECXX_PUBLIC int getProtocolCode() const;
			
			/**
			 * @brief Assign protocol code to a LinphoneErrorInfo object. 
			 */
			LINPHONECXX_PUBLIC void setProtocolCode(int code);
			
			/**
			 * @brief Provides additional information regarding the failure. 
			 */
			LINPHONECXX_PUBLIC std::string getWarnings() const;
			
			/**
			 * @brief Assign warnings to a LinphoneErrorInfo object. 
			 */
			LINPHONECXX_PUBLIC void setWarnings(const std::string & warnings);
			
			/**
			 * @brief Get pointer to chained LinphoneErrorInfo set in sub_ei. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ErrorInfo> getSubErrorInfo() const;
			
			/**
			 * @brief Set the sub_ei in LinphoneErrorInfo to another LinphoneErrorInfo. 
			 */
			LINPHONECXX_PUBLIC void setSubErrorInfo(const std::shared_ptr<ErrorInfo> & appendedEi);
			
			/**
			 * @brief Get reason code from the error info. 
			 */
			LINPHONECXX_PUBLIC Reason getReason() const;
			
			/**
			 * @brief Assign reason LinphoneReason to a LinphoneErrorInfo object. 
			 */
			LINPHONECXX_PUBLIC void setReason(Reason reason);
			
			/**
			 * @brief Get textual phrase from the error info. 
			 */
			LINPHONECXX_PUBLIC std::string getPhrase() const;
			
			/**
			 * @brief Assign phrase to a LinphoneErrorInfo object. 
			 */
			LINPHONECXX_PUBLIC void setPhrase(const std::string & phrase);
			
			/**
			 * @brief Assign information to a LinphoneErrorInfo object. 
			 */
			LINPHONECXX_PUBLIC void set(const std::string & protocol, Reason reason, int code, const std::string & statusString, const std::string & warning);
			

		
		
		
	};

};

#endif // _LINPHONE_ERROR_INFO_HH
