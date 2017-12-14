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

#ifndef _LINPHONE_PROXY_CONFIG_HH
#define _LINPHONE_PROXY_CONFIG_HH

#include <string>
#include <memory>
#include <cstdint>
#include "enums.hh"
#include "nat_policy.hh"
#include "core.hh"
#include "address.hh"
#include "error_info.hh"
#include "auth_info.hh"
#include "object.hh"





struct _LinphoneProxyConfig;


namespace linphone {


	/**
	 * @brief The LinphoneProxyConfig object represents a proxy configuration to be
	 * used by the LinphoneCore object. 
	 */
	class ProxyConfig: public Object {
	
		public:
			ProxyConfig(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneProxyConfig *cPtr() {return (_LinphoneProxyConfig *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 */
			LINPHONECXX_PUBLIC std::string getDialPrefix() const;
			
			/**
			 * @brief Sets a dialing prefix to be automatically prepended when inviting a
			 * number with linphone_core_invite(); This dialing prefix shall usually be the
			 * country code of the country where the user is living, without "+". 
			 */
			LINPHONECXX_PUBLIC void setDialPrefix(const std::string & prefix);
			
			/**
			 * @brief Get the domain name of the given proxy config. 
			 */
			LINPHONECXX_PUBLIC std::string getDomain() const;
			
			/**
			 * @brief Get the transport from either service route, route or addr. 
			 */
			LINPHONECXX_PUBLIC std::string getTransport() const;
			
			/**
			 * @brief get the publish expiration time in second. 
			 */
			LINPHONECXX_PUBLIC int getPublishExpires() const;
			
			/**
			 * @brief Set the publish expiration time in second. 
			 */
			LINPHONECXX_PUBLIC void setPublishExpires(int expires);
			
			/**
			 * @brief Get enablement status of RTCP feedback (also known as AVPF profile). 
			 */
			LINPHONECXX_PUBLIC AVPFMode getAvpfMode() const;
			
			/**
			 * @brief Enable the use of RTCP feedback (also known as AVPF profile). 
			 */
			LINPHONECXX_PUBLIC void setAvpfMode(AVPFMode mode);
			
			/**
			 * @brief Get the realm of the given proxy config. 
			 */
			LINPHONECXX_PUBLIC std::string getRealm() const;
			
			/**
			 * @brief Set the realm of the given proxy config. 
			 */
			LINPHONECXX_PUBLIC void setRealm(const std::string & realm);
			
			/**
			 * @brief Get default privacy policy for all calls routed through this proxy. 
			 */
			LINPHONECXX_PUBLIC unsigned int getPrivacy() const;
			
			/**
			 * @brief Set default privacy policy for all calls routed through this proxy. 
			 */
			LINPHONECXX_PUBLIC void setPrivacy(unsigned int privacy);
			
			/**
			 */
			LINPHONECXX_PUBLIC std::string getContactUriParameters() const;
			
			/**
			 * @brief Set optional contact parameters that will be added to the contact
			 * information sent in the registration, inside the URI. 
			 */
			LINPHONECXX_PUBLIC void setContactUriParameters(const std::string & contactUriParams);
			
			/**
			 * @brief Get the registration state of the given proxy config. 
			 */
			LINPHONECXX_PUBLIC RegistrationState getState() const;
			
			/**
			 */
			LINPHONECXX_PUBLIC bool publishEnabled() const;
			
			/**
			 * @brief Indicates either or not, PUBLISH must be issued for this
			 * #LinphoneProxyConfig . 
			 */
			LINPHONECXX_PUBLIC void enablePublish(bool val);
			
			/**
			 * @brief Get the interval between interval reports when using quality reporting. 
			 */
			LINPHONECXX_PUBLIC int getQualityReportingInterval();
			
			/**
			 * @brief Set the interval between 2 interval reports sending when using quality
			 * reporting. 
			 */
			LINPHONECXX_PUBLIC void setQualityReportingInterval(int interval);
			
			/**
			 * @brief Get the route of the collector end-point when using quality reporting. 
			 */
			LINPHONECXX_PUBLIC std::string getQualityReportingCollector() const;
			
			/**
			 * @brief Set the route of the collector end-point when using quality reporting. 
			 */
			LINPHONECXX_PUBLIC void setQualityReportingCollector(const std::string & collector);
			
			/**
			 * @brief Get The policy that is used to pass through NATs/firewalls when using
			 * this proxy config. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<NatPolicy> getNatPolicy() const;
			
			/**
			 * @brief Set the policy to use to pass through NATs/firewalls when using this
			 * proxy config. 
			 */
			LINPHONECXX_PUBLIC void setNatPolicy(const std::shared_ptr<NatPolicy> & policy);
			
			/**
			 */
			LINPHONECXX_PUBLIC bool getDialEscapePlus() const;
			
			/**
			 * @brief Sets whether liblinphone should replace "+" by international calling
			 * prefix in dialed numbers (passed to linphone_core_invite ). 
			 */
			LINPHONECXX_PUBLIC void setDialEscapePlus(bool val);
			
			/**
			 */
			LINPHONECXX_PUBLIC std::string getServerAddr() const;
			
			/**
			 * @brief Sets the proxy address. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setServerAddr(const std::string & serverAddr);
			
			/**
			 * @brief Get the #LinphoneCore object to which is associated the
			 * #LinphoneProxyConfig. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Core> getCore() const;
			
			/**
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getIdentityAddress() const;
			
			/**
			 * @brief Sets the user identity as a SIP address. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setIdentityAddress(const std::shared_ptr<const Address> & identity);
			
			/**
			 */
			LINPHONECXX_PUBLIC int getExpires() const;
			
			/**
			 * @brief Sets the registration expiration time in seconds. 
			 */
			LINPHONECXX_PUBLIC void setExpires(int expires);
			
			/**
			 */
			LINPHONECXX_PUBLIC std::string getContactParameters() const;
			
			/**
			 * @brief Set optional contact parameters that will be added to the contact
			 * information sent in the registration. 
			 */
			LINPHONECXX_PUBLIC void setContactParameters(const std::string & contactParams);
			
			/**
			 * @brief Get detailed information why registration failed when the proxy config
			 * state is LinphoneRegistrationFailed. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const ErrorInfo> getErrorInfo() const;
			
			/**
			 */
			LINPHONECXX_PUBLIC std::string getRoute() const;
			
			/**
			 * @brief Sets a SIP route. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setRoute(const std::string & route);
			
			/**
			 * @brief Get the interval between regular RTCP reports when using AVPF/SAVPF. 
			 */
			LINPHONECXX_PUBLIC uint8_t getAvpfRrInterval() const;
			
			/**
			 * @brief Set the interval between regular RTCP reports when using AVPF/SAVPF. 
			 */
			LINPHONECXX_PUBLIC void setAvpfRrInterval(uint8_t interval);
			
			/**
			 * @brief Indicates whether AVPF/SAVPF is being used for calls using this proxy
			 * config. 
			 */
			LINPHONECXX_PUBLIC bool avpfEnabled();
			
			/**
			 * @brief Indicates whether quality statistics during call should be stored and
			 * sent to a collector according to RFC 6035. 
			 */
			LINPHONECXX_PUBLIC bool qualityReportingEnabled();
			
			/**
			 * @brief Indicates whether quality statistics during call should be stored and
			 * sent to a collector according to RFC 6035. 
			 */
			LINPHONECXX_PUBLIC void enableQualityReporting(bool enable);
			
			/**
			 */
			LINPHONECXX_PUBLIC bool registerEnabled() const;
			
			/**
			 * @brief Indicates either or not, REGISTRATION must be issued for this
			 * #LinphoneProxyConfig . 
			 */
			LINPHONECXX_PUBLIC void enableRegister(bool val);
			
			/**
			 * @brief Get the reason why registration failed when the proxy config state is
			 * LinphoneRegistrationFailed. 
			 */
			LINPHONECXX_PUBLIC Reason getError() const;
			
			/**
			 * @brief Get the persistent reference key associated to the proxy config. 
			 */
			LINPHONECXX_PUBLIC std::string getRefKey() const;
			
			/**
			 * @brief Associate a persistent reference key to the proxy config. 
			 */
			LINPHONECXX_PUBLIC void setRefKey(const std::string & refkey);
			
			/**
			 * @brief Set the value of a custom header sent to the server in REGISTERs
			 * request. 
			 */
			LINPHONECXX_PUBLIC void setCustomHeader(const std::string & headerName, const std::string & headerValue);
			
			/**
			 * @brief Detect if the given input is a phone number or not. 
			 */
			LINPHONECXX_PUBLIC bool isPhoneNumber(const std::string & username);
			
			/**
			 * @brief Prevent a proxy config from refreshing its registration. 
			 */
			LINPHONECXX_PUBLIC void pauseRegister();
			
			/**
			 * @brief Obtain the value of a header sent by the server in last answer to
			 * REGISTER. 
			 */
			LINPHONECXX_PUBLIC std::string getCustomHeader(const std::string & headerName);
			
			/**
			 * @brief Find authentication info matching proxy config, if any, similarly to
			 * linphone_core_find_auth_info. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const AuthInfo> findAuthInfo() const;
			
			/**
			 * @brief Normalize a human readable sip uri into a fully qualified
			 * LinphoneAddress. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> normalizeSipUri(const std::string & username);
			
			/**
			 * @brief Normalize a human readable phone number into a basic string. 
			 */
			LINPHONECXX_PUBLIC std::string normalizePhoneNumber(const std::string & username);
			
			/**
			 * @brief Refresh a proxy registration. 
			 */
			LINPHONECXX_PUBLIC void refreshRegister();
			
			/**
			 * @brief Starts editing a proxy configuration. 
			 */
			LINPHONECXX_PUBLIC void edit();
			
			/**
			 * @brief Commits modification made to the proxy configuration. 
			 */
			LINPHONECXX_PUBLIC linphone::Status done();
			

		
		
		
	};

};

#endif // _LINPHONE_PROXY_CONFIG_HH
