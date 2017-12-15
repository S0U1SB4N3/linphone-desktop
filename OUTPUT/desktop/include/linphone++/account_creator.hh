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

#ifndef _LINPHONE_ACCOUNT_CREATOR_HH
#define _LINPHONE_ACCOUNT_CREATOR_HH

#include <string>
#include <memory>
#include "enums.hh"
#include "proxy_config.hh"
#include "account_creator_listener.hh"
#include "object.hh"





struct _LinphoneAccountCreator;


namespace linphone {


	/**
	 * @brief The LinphoneAccountCreator object used to configure an account on a
	 * server via XML-RPC. 
	 */
	class AccountCreator: public ListenableObject {
	
		public:
			AccountCreator(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneAccountCreator *cPtr() {return (_LinphoneAccountCreator *)mPrivPtr;}
			
			LINPHONECXX_PUBLIC void setListener(const std::shared_ptr<AccountCreatorListener> &listener);

	
		public:
			
		
			/**
			 * @brief Get the username. 
			 */
			LINPHONECXX_PUBLIC std::string getUsername() const;
			
			/**
			 * @brief Set the username. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorUsernameStatus setUsername(const std::string & username);
			
			/**
			 * @brief Get the RFC 3966 normalized phone number. 
			 */
			LINPHONECXX_PUBLIC std::string getPhoneNumber() const;
			
			/**
			 * @brief Get the domain. 
			 */
			LINPHONECXX_PUBLIC std::string getDomain() const;
			
			/**
			 * @brief Set the domain. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorDomainStatus setDomain(const std::string & domain);
			
			/**
			 * @brief Get the activation code. 
			 */
			LINPHONECXX_PUBLIC std::string getActivationCode() const;
			
			/**
			 * @brief Set the activation code. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorActivationCodeStatus setActivationCode(const std::string & activationCode);
			
			/**
			 * @brief Get the display name. 
			 */
			LINPHONECXX_PUBLIC std::string getDisplayName() const;
			
			/**
			 * @brief Set the display name. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorUsernameStatus setDisplayName(const std::string & displayName);
			
			/**
			 * @brief Get the language use in email of SMS. 
			 */
			LINPHONECXX_PUBLIC std::string getLanguage() const;
			
			/**
			 * @brief Set the language to use in email or SMS if supported. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorLanguageStatus setLanguage(const std::string & lang);
			
			/**
			 * @brief Get the route. 
			 */
			LINPHONECXX_PUBLIC std::string getRoute() const;
			
			/**
			 * @brief Set the route. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus setRoute(const std::string & route);
			
			/**
			 * @brief Get the ha1. 
			 */
			LINPHONECXX_PUBLIC std::string getHa1() const;
			
			/**
			 * @brief Set the ha1. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorPasswordStatus setHa1(const std::string & ha1);
			
			/**
			 * @brief Get the password. 
			 */
			LINPHONECXX_PUBLIC std::string getPassword() const;
			
			/**
			 * @brief Set the password. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorPasswordStatus setPassword(const std::string & password);
			
			/**
			 * @brief Get the email. 
			 */
			LINPHONECXX_PUBLIC std::string getEmail() const;
			
			/**
			 * @brief Set the email. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorEmailStatus setEmail(const std::string & email);
			
			/**
			 * @brief get Transport 
			 */
			LINPHONECXX_PUBLIC TransportType getTransport() const;
			
			/**
			 * @brief Set Transport. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorTransportStatus setTransport(TransportType transport);
			
			/**
			 * @brief Send a request to activate an alias. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus activateAlias();
			
			/**
			 * @brief Send a request to create an account on server. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus createAccount();
			
			/**
			 * @brief Send a request to link an account to an alias. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus linkAccount();
			
			/**
			 * @brief Send a request to know if an alias is used. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus isAliasUsed();
			
			/**
			 * @brief Configure an account (create a proxy config and authentication info for
			 * it). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ProxyConfig> configure() const;
			
			/**
			 * @brief Reset the account creator entries like username, password, phone
			 * number... 
			 */
			LINPHONECXX_PUBLIC void reset();
			
			/**
			 * @brief Set the phone number normalized. 
			 */
			LINPHONECXX_PUBLIC unsigned int setPhoneNumber(const std::string & phoneNumber, const std::string & countryCode);
			
			/**
			 * @brief Send a request to know the existence of account on server. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus isAccountExist();
			
			/**
			 * @brief Send a request to update an account. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus updateAccount();
			
			/**
			 * @brief Send a request to activate an account on server. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus activateAccount();
			
			/**
			 * @brief Create and configure a proxy config and a authentication info for an
			 * account creator. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ProxyConfig> createProxyConfig() const;
			
			/**
			 * @brief Send a request to recover an account. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus recoverAccount();
			
			/**
			 * @brief Send a request to know if an account is activated on server. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus isAccountActivated();
			
			/**
			 * @brief Send a request to know if an account is linked. 
			 */
			LINPHONECXX_PUBLIC AccountCreatorStatus isAccountLinked();
			

		
		
		
	};

};

#endif // _LINPHONE_ACCOUNT_CREATOR_HH
