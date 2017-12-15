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

#ifndef _LINPHONE_TUNNEL_HH
#define _LINPHONE_TUNNEL_HH

#include <list>
#include <string>
#include "enums.hh"
#include "object.hh"





struct _LinphoneTunnel;


namespace linphone {


	/**
	 * @brief Linphone tunnel object. 
	 */
	class Tunnel: public Object {
	
		public:
			Tunnel(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneTunnel *cPtr() {return (_LinphoneTunnel *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Check whether tunnel is set to transport SIP packets. 
			 */
			LINPHONECXX_PUBLIC bool sipEnabled() const;
			
			/**
			 * @brief Set whether SIP packets must be directly sent to a UA or pass through
			 * the tunnel. 
			 */
			LINPHONECXX_PUBLIC void enableSip(bool enable);
			
			/**
			 * @brief Get the dual tunnel client mode. 
			 */
			LINPHONECXX_PUBLIC bool dualModeEnabled() const;
			
			/**
			 * @brief Sets whether or not to use the dual tunnel client mode. 
			 */
			LINPHONECXX_PUBLIC void enableDualMode(bool dualModeEnabled);
			
			/**
			 * @brief Returns whether the tunnel is activated. 
			 */
			LINPHONECXX_PUBLIC bool getActivated() const;
			
			/**
			 * @brief Get the tunnel mode. 
			 */
			LINPHONECXX_PUBLIC TunnelMode getMode() const;
			
			/**
			 * @brief Set the tunnel mode. 
			 */
			LINPHONECXX_PUBLIC void setMode(TunnelMode mode);
			
			/**
			 * @brief Force reconnection to the tunnel server. 
			 */
			LINPHONECXX_PUBLIC void reconnect();
			
			/**
			 * @brief Remove all tunnel server addresses previously entered with
			 * linphone_tunnel_add_server() 
			 */
			LINPHONECXX_PUBLIC void cleanServers();
			
			/**
			 * @brief Check whether the tunnel is connected. 
			 */
			LINPHONECXX_PUBLIC bool connected() const;
			
			/**
			 * @brief Set authentication info for the http proxy. 
			 */
			LINPHONECXX_PUBLIC void setHttpProxyAuthInfo(const std::string & username, const std::string & passwd);
			
			/**
			 * @brief Set an optional http proxy to go through when connecting to tunnel
			 * server. 
			 */
			LINPHONECXX_PUBLIC void setHttpProxy(const std::string & host, int port, const std::string & username, const std::string & passwd);
			

		
		
		
	};

};

#endif // _LINPHONE_TUNNEL_HH
