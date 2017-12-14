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

#ifndef _LINPHONE_ADDRESS_HH
#define _LINPHONE_ADDRESS_HH

#include <string>
#include <memory>
#include "enums.hh"
#include "object.hh"





struct _LinphoneAddress;


namespace linphone {


	/**
	 * @brief Object that represents a SIP address. 
	 */
	class Address: public Object {
	
		public:
			Address(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneAddress *cPtr() {return (_LinphoneAddress *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Returns the username. 
			 */
			LINPHONECXX_PUBLIC std::string getUsername() const;
			
			/**
			 * @brief Sets the username. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setUsername(const std::string & username);
			
			/**
			 * @brief Returns the domain name. 
			 */
			LINPHONECXX_PUBLIC std::string getDomain() const;
			
			/**
			 * @brief Sets the domain. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setDomain(const std::string & host);
			
			/**
			 * @brief Get the password encoded in the address. 
			 */
			LINPHONECXX_PUBLIC std::string getPassword() const;
			
			/**
			 * @brief Set the password encoded in the address. 
			 */
			LINPHONECXX_PUBLIC void setPassword(const std::string & passwd);
			
			/**
			 * @brief Returns the display name. 
			 */
			LINPHONECXX_PUBLIC std::string getDisplayName() const;
			
			/**
			 * @brief Sets the display name. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setDisplayName(const std::string & displayName);
			
			/**
			 * @brief Returns true if address refers to a secure location (sips) 
			 */
			LINPHONECXX_PUBLIC bool getSecure() const;
			
			/**
			 * @brief Make the address refer to a secure location (sips scheme) 
			 */
			LINPHONECXX_PUBLIC void setSecure(bool enabled);
			
			/**
			 * @brief returns true if address is a routable sip address 
			 */
			LINPHONECXX_PUBLIC bool isSip() const;
			
			/**
			 * @brief Get the value of the method parameter. 
			 */
			LINPHONECXX_PUBLIC std::string getMethodParam() const;
			
			/**
			 * @brief Set the value of the method parameter. 
			 */
			LINPHONECXX_PUBLIC void setMethodParam(const std::string & method);
			
			/**
			 * @brief Returns the address scheme, normally "sip". 
			 */
			LINPHONECXX_PUBLIC std::string getScheme() const;
			
			/**
			 * @brief Get port number as an integer value, 0 if not present. 
			 */
			LINPHONECXX_PUBLIC int getPort() const;
			
			/**
			 * @brief Sets the port number. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setPort(int port);
			
			/**
			 * @brief Get the transport. 
			 */
			LINPHONECXX_PUBLIC TransportType getTransport() const;
			
			/**
			 * @brief Set a transport. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setTransport(TransportType type);
			
			/**
			 * @brief Clones a LinphoneAddress object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> clone() const;
			
			/**
			 * @brief Removes address's tags and uri headers so that it is displayable to the
			 * user. 
			 */
			LINPHONECXX_PUBLIC void clean();
			
			/**
			 * @brief Returns the SIP uri only as a string, that is display name is removed. 
			 */
			LINPHONECXX_PUBLIC std::string asStringUriOnly() const;
			
			/**
			 * @brief Compare two LinphoneAddress taking the tags and headers into account. 
			 */
			LINPHONECXX_PUBLIC bool equal(const std::shared_ptr<const Address> & a2) const;
			
			/**
			 * @brief Get the header encoded in the address. 
			 */
			LINPHONECXX_PUBLIC std::string getHeader(const std::string & name) const;
			
			/**
			 * @brief Returns the address as a string. 
			 */
			LINPHONECXX_PUBLIC std::string asString() const;
			
			/**
			 * @brief Compare two LinphoneAddress ignoring tags and headers, basically just
			 * domain, username, and port. 
			 */
			LINPHONECXX_PUBLIC bool weakEqual(const std::shared_ptr<const Address> & a2) const;
			
			/**
			 * @brief Set a header into the address. 
			 */
			LINPHONECXX_PUBLIC void setHeader(const std::string & headerName, const std::string & headerValue);
			

		
		
		
	};

};

#endif // _LINPHONE_ADDRESS_HH
