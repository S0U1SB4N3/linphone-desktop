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

#ifndef _LINPHONE_TRANSPORTS_HH
#define _LINPHONE_TRANSPORTS_HH

#include "object.hh"





struct _LinphoneTransports;


namespace linphone {


	/**
	 * @brief Linphone core SIP transport ports. 
	 */
	class Transports: public Object {
	
		public:
			Transports(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneTransports *cPtr() {return (_LinphoneTransports *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Gets the TCP port in the LinphoneTransports object. 
			 */
			LINPHONECXX_PUBLIC int getTcpPort() const;
			
			/**
			 * @brief Sets the TCP port in the LinphoneTransports object. 
			 */
			LINPHONECXX_PUBLIC void setTcpPort(int port);
			
			/**
			 * @brief Gets the DTLS port in the LinphoneTransports object. 
			 */
			LINPHONECXX_PUBLIC int getDtlsPort() const;
			
			/**
			 * @brief Sets the DTLS port in the LinphoneTransports object. 
			 */
			LINPHONECXX_PUBLIC void setDtlsPort(int port);
			
			/**
			 * @brief Gets the TLS port in the LinphoneTransports object. 
			 */
			LINPHONECXX_PUBLIC int getTlsPort() const;
			
			/**
			 * @brief Sets the TLS port in the LinphoneTransports object. 
			 */
			LINPHONECXX_PUBLIC void setTlsPort(int port);
			
			/**
			 * @brief Gets the UDP port in the LinphoneTransports object. 
			 */
			LINPHONECXX_PUBLIC int getUdpPort() const;
			
			/**
			 * @brief Sets the UDP port in the LinphoneTransports object. 
			 */
			LINPHONECXX_PUBLIC void setUdpPort(int port);
			

		
		
		
	};

};

#endif // _LINPHONE_TRANSPORTS_HH
