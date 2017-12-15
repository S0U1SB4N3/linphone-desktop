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

#ifndef _LINPHONE_NAT_POLICY_HH
#define _LINPHONE_NAT_POLICY_HH

#include <string>
#include "object.hh"





struct _LinphoneNatPolicy;


namespace linphone {


	/**
	 * @brief Policy to use to pass through NATs/firewalls. 
	 */
	class NatPolicy: public Object {
	
		public:
			NatPolicy(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneNatPolicy *cPtr() {return (_LinphoneNatPolicy *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Tell whether uPnP is enabled. 
			 */
			LINPHONECXX_PUBLIC bool upnpEnabled() const;
			
			/**
			 * @brief Enable uPnP. 
			 */
			LINPHONECXX_PUBLIC void enableUpnp(bool enable);
			
			/**
			 * @brief Tell whether TURN is enabled. 
			 */
			LINPHONECXX_PUBLIC bool turnEnabled() const;
			
			/**
			 * @brief Enable TURN. 
			 */
			LINPHONECXX_PUBLIC void enableTurn(bool enable);
			
			/**
			 * @brief Get the username used to authenticate with the STUN/TURN server. 
			 */
			LINPHONECXX_PUBLIC std::string getStunServerUsername() const;
			
			/**
			 * @brief Set the username used to authenticate with the STUN/TURN server. 
			 */
			LINPHONECXX_PUBLIC void setStunServerUsername(const std::string & username);
			
			/**
			 * @brief Tell whether STUN is enabled. 
			 */
			LINPHONECXX_PUBLIC bool stunEnabled() const;
			
			/**
			 * @brief Enable STUN. 
			 */
			LINPHONECXX_PUBLIC void enableStun(bool enable);
			
			/**
			 * @brief Tell whether ICE is enabled. 
			 */
			LINPHONECXX_PUBLIC bool iceEnabled() const;
			
			/**
			 * @brief Enable ICE. 
			 */
			LINPHONECXX_PUBLIC void enableIce(bool enable);
			
			/**
			 * @brief Get the STUN/TURN server to use with this NAT policy. 
			 */
			LINPHONECXX_PUBLIC std::string getStunServer() const;
			
			/**
			 * @brief Set the STUN/TURN server to use with this NAT policy. 
			 */
			LINPHONECXX_PUBLIC void setStunServer(const std::string & stunServer);
			
			/**
			 * @brief Start a STUN server DNS resolution. 
			 */
			LINPHONECXX_PUBLIC void resolveStunServer();
			
			/**
			 * @brief Clear a NAT policy (deactivate all protocols and unset the STUN server). 
			 */
			LINPHONECXX_PUBLIC void clear();
			

		
		
		
	};

};

#endif // _LINPHONE_NAT_POLICY_HH
