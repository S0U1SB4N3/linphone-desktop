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

#ifndef _LINPHONE_AUTH_INFO_HH
#define _LINPHONE_AUTH_INFO_HH

#include <string>
#include <memory>
#include "object.hh"





struct _LinphoneAuthInfo;


namespace linphone {


	/**
	 * @brief Object holding authentication information. 
	 */
	class AuthInfo: public Object {
	
		public:
			AuthInfo(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneAuthInfo *cPtr() {return (_LinphoneAuthInfo *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Gets the username. 
			 */
			LINPHONECXX_PUBLIC std::string getUsername() const;
			
			/**
			 * @brief Sets the username. 
			 */
			LINPHONECXX_PUBLIC void setUsername(const std::string & username);
			
			/**
			 * @brief Gets the domain. 
			 */
			LINPHONECXX_PUBLIC std::string getDomain() const;
			
			/**
			 * @brief Sets the domain for which this authentication is valid. 
			 */
			LINPHONECXX_PUBLIC void setDomain(const std::string & domain);
			
			/**
			 * @brief Gets the realm. 
			 */
			LINPHONECXX_PUBLIC std::string getRealm() const;
			
			/**
			 * @brief Sets the realm. 
			 */
			LINPHONECXX_PUBLIC void setRealm(const std::string & realm);
			
			/**
			 * @brief Gets the password. 
			 */
			LINPHONECXX_PUBLIC std::string getPasswd() const;
			
			/**
			 * @brief Sets the password. 
			 */
			LINPHONECXX_PUBLIC void setPasswd(const std::string & passwd);
			
			/**
			 * @brief Gets the userid. 
			 */
			LINPHONECXX_PUBLIC std::string getUserid() const;
			
			/**
			 * @brief Sets the userid. 
			 */
			LINPHONECXX_PUBLIC void setUserid(const std::string & userid);
			
			/**
			 * @brief Gets the TLS key path. 
			 */
			LINPHONECXX_PUBLIC std::string getTlsKeyPath() const;
			
			/**
			 * @brief Sets the TLS key path. 
			 */
			LINPHONECXX_PUBLIC void setTlsKeyPath(const std::string & tlsKeyPath);
			
			/**
			 * @brief Gets the ha1. 
			 */
			LINPHONECXX_PUBLIC std::string getHa1() const;
			
			/**
			 * @brief Sets the ha1. 
			 */
			LINPHONECXX_PUBLIC void setHa1(const std::string & ha1);
			
			/**
			 * @brief Gets the TLS certificate path. 
			 */
			LINPHONECXX_PUBLIC std::string getTlsCertPath() const;
			
			/**
			 * @brief Sets the TLS certificate path. 
			 */
			LINPHONECXX_PUBLIC void setTlsCertPath(const std::string & tlsCertPath);
			
			/**
			 * @brief Gets the TLS certificate. 
			 */
			LINPHONECXX_PUBLIC std::string getTlsCert() const;
			
			/**
			 * @brief Sets the TLS certificate. 
			 */
			LINPHONECXX_PUBLIC void setTlsCert(const std::string & tlsCert);
			
			/**
			 * @brief Gets the TLS key. 
			 */
			LINPHONECXX_PUBLIC std::string getTlsKey() const;
			
			/**
			 * @brief Sets the TLS key. 
			 */
			LINPHONECXX_PUBLIC void setTlsKey(const std::string & tlsKey);
			
			/**
			 * @brief Instantiates a new auth info with values from source. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<AuthInfo> clone() const;
			

		
		
		
	};

};

#endif // _LINPHONE_AUTH_INFO_HH
