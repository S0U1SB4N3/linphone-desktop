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

#ifndef _LINPHONE_CALL_LOG_HH
#define _LINPHONE_CALL_LOG_HH

#include <memory>
#include <string>
#include "enums.hh"
#include "address.hh"
#include "error_info.hh"
#include "object.hh"





struct _LinphoneCallLog;


namespace linphone {


	/**
	 * @brief Structure representing a call log. 
	 */
	class CallLog: public Object {
	
		public:
			CallLog(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneCallLog *cPtr() {return (_LinphoneCallLog *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get the status of the call. 
			 */
			LINPHONECXX_PUBLIC CallStatus getStatus();
			
			/**
			 * @brief Get the destination address (ie to) of the call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> getToAddress();
			
			/**
			 * @brief Get the origin address (ie from) of the call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> getFromAddress();
			
			/**
			 * @brief Get the remote address (that is from or to depending on call direction). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> getRemoteAddress();
			
			/**
			 * @brief Get the call ID used by the call. 
			 */
			LINPHONECXX_PUBLIC std::string getCallId() const;
			
			/**
			 * @brief Get the persistent reference key associated to the call log. 
			 */
			LINPHONECXX_PUBLIC std::string getRefKey() const;
			
			/**
			 * @brief Associate a persistent reference key to the call log. 
			 */
			LINPHONECXX_PUBLIC void setRefKey(const std::string & refkey);
			
			/**
			 * @brief Get the duration of the call since connected. 
			 */
			LINPHONECXX_PUBLIC int getDuration();
			
			/**
			 * @brief Tell whether video was enabled at the end of the call or not. 
			 */
			LINPHONECXX_PUBLIC bool videoEnabled();
			
			/**
			 * @brief When the call was failed, return an object describing the failure. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const ErrorInfo> getErrorInfo();
			
			/**
			 * @brief Get the overall quality indication of the call. 
			 */
			LINPHONECXX_PUBLIC float getQuality();
			
			/**
			 * @brief Get the start date of the call. 
			 */
			LINPHONECXX_PUBLIC time_t getStartDate();
			
			/**
			 * @brief Get the direction of the call. 
			 */
			LINPHONECXX_PUBLIC CallDir getDir();
			
			/**
			 * @brief Get a human readable string describing the call. 
			 */
			LINPHONECXX_PUBLIC std::string toStr();
			
			/**
			 * @brief Tells whether that call was a call to a conference server. 
			 */
			LINPHONECXX_PUBLIC bool wasConference();
			

		
		
		
	};

};

#endif // _LINPHONE_CALL_LOG_HH
