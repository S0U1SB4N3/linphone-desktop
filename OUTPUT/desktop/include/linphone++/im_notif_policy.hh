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

#ifndef _LINPHONE_IM_NOTIF_POLICY_HH
#define _LINPHONE_IM_NOTIF_POLICY_HH

#include "object.hh"





struct _LinphoneImNotifPolicy;


namespace linphone {


	/**
	 * @brief Policy to use to send/receive instant messaging
	 * composing/delivery/display notifications. 
	 */
	class ImNotifPolicy: public Object {
	
		public:
			ImNotifPolicy(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneImNotifPolicy *cPtr() {return (_LinphoneImNotifPolicy *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Tell whether imdn displayed notifications are being notified when
			 * received. 
			 */
			LINPHONECXX_PUBLIC bool getRecvImdnDisplayed() const;
			
			/**
			 * @brief Enable imdn displayed notifications receiving. 
			 */
			LINPHONECXX_PUBLIC void setRecvImdnDisplayed(bool enable);
			
			/**
			 * @brief Tell whether imdn displayed notifications are being sent. 
			 */
			LINPHONECXX_PUBLIC bool getSendImdnDisplayed() const;
			
			/**
			 * @brief Enable imdn displayed notifications sending. 
			 */
			LINPHONECXX_PUBLIC void setSendImdnDisplayed(bool enable);
			
			/**
			 * @brief Tell whether is_composing notifications are being sent. 
			 */
			LINPHONECXX_PUBLIC bool getSendIsComposing() const;
			
			/**
			 * @brief Enable is_composing notifications sending. 
			 */
			LINPHONECXX_PUBLIC void setSendIsComposing(bool enable);
			
			/**
			 * @brief Tell whether imdn delivered notifications are being notified when
			 * received. 
			 */
			LINPHONECXX_PUBLIC bool getRecvImdnDelivered() const;
			
			/**
			 * @brief Enable imdn delivered notifications receiving. 
			 */
			LINPHONECXX_PUBLIC void setRecvImdnDelivered(bool enable);
			
			/**
			 * @brief Tell whether is_composing notifications are being notified when
			 * received. 
			 */
			LINPHONECXX_PUBLIC bool getRecvIsComposing() const;
			
			/**
			 * @brief Enable is_composing notifications receiving. 
			 */
			LINPHONECXX_PUBLIC void setRecvIsComposing(bool enable);
			
			/**
			 * @brief Tell whether imdn delivered notifications are being sent. 
			 */
			LINPHONECXX_PUBLIC bool getSendImdnDelivered() const;
			
			/**
			 * @brief Enable imdn delivered notifications sending. 
			 */
			LINPHONECXX_PUBLIC void setSendImdnDelivered(bool enable);
			
			/**
			 * @brief Clear an IM notif policy (deactivate all receiving and sending of
			 * notifications). 
			 */
			LINPHONECXX_PUBLIC void clear();
			
			/**
			 * @brief Enable all receiving and sending of notifications. 
			 */
			LINPHONECXX_PUBLIC void enableAll();
			

		
		
		
	};

};

#endif // _LINPHONE_IM_NOTIF_POLICY_HH
