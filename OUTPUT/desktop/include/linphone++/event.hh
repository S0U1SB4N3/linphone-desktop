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

#ifndef _LINPHONE_EVENT_HH
#define _LINPHONE_EVENT_HH

#include <memory>
#include <string>
#include "core.hh"
#include "enums.hh"
#include "address.hh"
#include "error_info.hh"
#include "content.hh"
#include "object.hh"





struct _LinphoneEvent;


namespace linphone {


	/**
	 * @brief Object representing an event state, which is subcribed or published. 
	 */
	class Event: public Object {
	
		public:
			Event(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneEvent *cPtr() {return (_LinphoneEvent *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Returns back pointer to the LinphoneCore that created this
			 * LinphoneEvent. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Core> getCore() const;
			
			/**
			 * @brief Get subscription direction. 
			 */
			LINPHONECXX_PUBLIC SubscriptionDir getSubscriptionDir();
			
			/**
			 * @brief Get the "from" address of the subscription. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getFrom() const;
			
			/**
			 * @brief Get the name of the event as specified in the event package RFC. 
			 */
			LINPHONECXX_PUBLIC std::string getName() const;
			
			/**
			 * @brief Get publish state. 
			 */
			LINPHONECXX_PUBLIC PublishState getPublishState() const;
			
			/**
			 * @brief Get full details about an error occured. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const ErrorInfo> getErrorInfo() const;
			
			/**
			 * @brief Return reason code (in case of error state reached). 
			 */
			LINPHONECXX_PUBLIC Reason getReason() const;
			
			/**
			 * @brief Get the resource address of the subscription or publish. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getResource() const;
			
			/**
			 * @brief Get subscription state. 
			 */
			LINPHONECXX_PUBLIC SubscriptionState getSubscriptionState() const;
			
			/**
			 * @brief Refresh an outgoing publish keeping the same body. 
			 */
			LINPHONECXX_PUBLIC linphone::Status refreshPublish();
			
			/**
			 * @brief Send a publish created by linphone_core_create_publish(). 
			 */
			LINPHONECXX_PUBLIC linphone::Status sendPublish(const std::shared_ptr<const Content> & body);
			
			/**
			 * @brief Update (refresh) a publish. 
			 */
			LINPHONECXX_PUBLIC linphone::Status updatePublish(const std::shared_ptr<const Content> & body);
			
			/**
			 * @brief Terminate an incoming or outgoing subscription that was previously
			 * acccepted, or a previous publication. 
			 */
			LINPHONECXX_PUBLIC void terminate();
			
			/**
			 * @brief Update (refresh) an outgoing subscription, changing the body. 
			 */
			LINPHONECXX_PUBLIC linphone::Status updateSubscribe(const std::shared_ptr<const Content> & body);
			
			/**
			 * @brief Obtain the value of a given header for an incoming subscription. 
			 */
			LINPHONECXX_PUBLIC std::string getCustomHeader(const std::string & name);
			
			/**
			 * @brief Add a custom header to an outgoing susbscription or publish. 
			 */
			LINPHONECXX_PUBLIC void addCustomHeader(const std::string & name, const std::string & value);
			
			/**
			 * @brief Prevent an event from refreshing its publish. 
			 */
			LINPHONECXX_PUBLIC void pausePublish();
			
			/**
			 * @brief Refresh an outgoing subscription keeping the same body. 
			 */
			LINPHONECXX_PUBLIC linphone::Status refreshSubscribe();
			
			/**
			 * @brief Accept an incoming subcription. 
			 */
			LINPHONECXX_PUBLIC linphone::Status acceptSubscription();
			
			/**
			 * @brief Send a subscription previously created by
			 * linphone_core_create_subscribe(). 
			 */
			LINPHONECXX_PUBLIC linphone::Status sendSubscribe(const std::shared_ptr<const Content> & body);
			
			/**
			 * @brief Deny an incoming subscription with given reason. 
			 */
			LINPHONECXX_PUBLIC linphone::Status denySubscription(Reason reason);
			
			/**
			 * @brief Send a notification. 
			 */
			LINPHONECXX_PUBLIC linphone::Status notify(const std::shared_ptr<const Content> & body);
			

		
		
		
	};

};

#endif // _LINPHONE_EVENT_HH
