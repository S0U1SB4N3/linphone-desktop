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

#ifndef _LINPHONE_FACTORY_HH
#define _LINPHONE_FACTORY_HH

#include <string>
#include <list>
#include <memory>
#include "video_definition.hh"
#include "vcard.hh"
#include "error_info.hh"
#include "auth_info.hh"
#include "range.hh"
#include "video_activation_policy.hh"
#include "address.hh"
#include "transports.hh"
#include "object.hh"



#include "config.hh"



struct _LinphoneFactory;


namespace linphone {


	/**
	 * @brief #LinphoneFactory is a singleton object devoted to the creation of all
	 * the object of Liblinphone that cannot created by #LinphoneCore or #LinphoneCore
	 * itself. 
	 */
	class Factory: public Object {
	
		public:
			Factory(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneFactory *cPtr() {return (_LinphoneFactory *)mPrivPtr;}
			

	
		public:
			LINPHONECXX_PUBLIC std::shared_ptr<Core> createCore(const std::shared_ptr<CoreListener> &listener, const std::string & configPath, const std::string & factoryConfigPath) const;
			LINPHONECXX_PUBLIC std::shared_ptr<Core> createCoreWithConfig(const std::shared_ptr<CoreListener> &listener, const std::shared_ptr<Config> & config) const;
			
		
			/**
			 * @brief Get the top directory where the resources are located. 
			 */
			LINPHONECXX_PUBLIC std::string getTopResourcesDir() const;
			
			/**
			 * @brief Set the top directory where the resources are located. 
			 */
			LINPHONECXX_PUBLIC void setTopResourcesDir(const std::string & path);
			
			/**
			 * @brief Get the directory where the image resources are located. 
			 */
			LINPHONECXX_PUBLIC std::string getImageResourcesDir();
			
			/**
			 * @brief Set the directory where the image resources are located. 
			 */
			LINPHONECXX_PUBLIC void setImageResourcesDir(const std::string & path);
			
			/**
			 * @brief Get the directory where the ring resources are located. 
			 */
			LINPHONECXX_PUBLIC std::string getRingResourcesDir();
			
			/**
			 * @brief Set the directory where the ring resources are located. 
			 */
			LINPHONECXX_PUBLIC void setRingResourcesDir(const std::string & path);
			
			/**
			 * @brief Get the directory where the data resources are located. 
			 */
			LINPHONECXX_PUBLIC std::string getDataResourcesDir();
			
			/**
			 * @brief Set the directory where the data resources are located. 
			 */
			LINPHONECXX_PUBLIC void setDataResourcesDir(const std::string & path);
			
			/**
			 * @brief Get the directory where the sound resources are located. 
			 */
			LINPHONECXX_PUBLIC std::string getSoundResourcesDir();
			
			/**
			 * @brief Set the directory where the sound resources are located. 
			 */
			LINPHONECXX_PUBLIC void setSoundResourcesDir(const std::string & path);
			
			/**
			 * @brief Get the directory where the mediastreamer2 plugins are located. 
			 */
			LINPHONECXX_PUBLIC std::string getMspluginsDir();
			
			/**
			 * @brief Set the directory where the mediastreamer2 plugins are located. 
			 */
			LINPHONECXX_PUBLIC void setMspluginsDir(const std::string & path);
			
			/**
			 * @brief Get the list of standard video definitions supported by Linphone. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<VideoDefinition> > getSupportedVideoDefinitions() const;
			
			/**
			 * @brief Create a LinphoneVideoDefinition from a given width and height. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<VideoDefinition> createVideoDefinition(unsigned int width, unsigned int height) const;
			
			/**
			 * @brief Create an empty #LinphoneVcard. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Vcard> createVcard();
			
			/**
			 * @brief Creates an object LinphoneErrorInfo. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ErrorInfo> createErrorInfo();
			
			/**
			 * @brief Creates a #LinphoneAuthInfo object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<AuthInfo> createAuthInfo(const std::string & username, const std::string & userid, const std::string & passwd, const std::string & ha1, const std::string & realm, const std::string & domain) const;
			
			/**
			 * @brief Creates an object LinphoneRange. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Range> createRange();
			
			/**
			 * @brief Creates an object LinphoneVideoActivationPolicy. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<VideoActivationPolicy> createVideoActivationPolicy();
			
			/**
			 * @brief Parse a string holding a SIP URI and create the according
			 * #LinphoneAddress object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> createAddress(const std::string & addr) const;
			
			/**
			 * @brief Create a LinphoneVideoDefinition from a given standard definition name. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<VideoDefinition> createVideoDefinitionFromName(const std::string & name) const;
			
			/**
			 * @brief Creates an object LinphoneTransports. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Transports> createTransports();
			
			/**
			 * @brief Clean the factory. 
			 */
			LINPHONECXX_PUBLIC static void clean();
			
			/**
			 * @brief Create the #LinphoneFactory if that has not been done and return a
			 * pointer on it. 
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<Factory> get();
			

		
		
		
	};

};

#endif // _LINPHONE_FACTORY_HH
