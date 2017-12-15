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

#ifndef _LINPHONE_CONFIG_HH
#define _LINPHONE_CONFIG_HH

#include <memory>
#include <string>
#include <list>
#include <cstdint>
#include "object.hh"





struct _LinphoneConfig;


namespace linphone {


	/**
	 * @brief The LinphoneConfig object is used to manipulate a configuration file. 
	 */
	class Config: public Object {
	
		public:
			Config(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneConfig *cPtr() {return (_LinphoneConfig *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Returns the list of sections' names in the LinphoneConfig. 
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getSectionsNames();
			
			/**
			 * @brief Retrieves a configuration item as a string, given its section, key, and
			 * default value. 
			 */
			LINPHONECXX_PUBLIC std::string getString(const std::string & section, const std::string & key, const std::string & defaultString) const;
			
			/**
			 * @brief Retrieves a configuration item as a list of strings, given its section,
			 * key, and default value. 
			 */
			LINPHONECXX_PUBLIC std::list<std::string > getStringList(const std::string & section, const std::string & key, const std::list<std::string > & defaultList) const;
			
			/**
			 * @brief Sets the overwrite flag for a config section (used when dumping config
			 * as xml) 
			 */
			LINPHONECXX_PUBLIC void setOverwriteFlagForSection(const std::string & section, bool value);
			
			/**
			 * @brief Reads a xml config file and fill the LinphoneConfig with the read config
			 * dynamic values. 
			 */
			LINPHONECXX_PUBLIC std::string loadFromXmlFile(const std::string & filename);
			
			/**
			 * @brief Retrieves a default configuration item as an integer, given its section,
			 * key, and default value. 
			 */
			LINPHONECXX_PUBLIC int getDefaultInt(const std::string & section, const std::string & key, int defaultValue) const;
			
			/**
			 * @brief Retrieves a configuration item as an integer, given its section, key,
			 * and default value. 
			 */
			LINPHONECXX_PUBLIC int getInt(const std::string & section, const std::string & key, int defaultValue) const;
			
			/**
			 * @brief Retrieves a default configuration item as a string, given its section,
			 * key, and default value. 
			 */
			LINPHONECXX_PUBLIC std::string getDefaultString(const std::string & section, const std::string & key, const std::string & defaultValue) const;
			
			/**
			 * @brief Returns 1 if a given section is present in the configuration. 
			 */
			LINPHONECXX_PUBLIC int hasSection(const std::string & section) const;
			
			/**
			 * @brief Sets a string config item. 
			 */
			LINPHONECXX_PUBLIC void setString(const std::string & section, const std::string & key, const std::string & value);
			
			/**
			 * @brief Retrieves a default configuration item as a 64 bit integer, given its
			 * section, key, and default value. 
			 */
			LINPHONECXX_PUBLIC int64_t getDefaultInt64(const std::string & section, const std::string & key, int64_t defaultValue) const;
			
			/**
			 * @brief Write a string in a file placed relatively with the Linphone
			 * configuration file. 
			 */
			LINPHONECXX_PUBLIC void writeRelativeFile(const std::string & filename, const std::string & data) const;
			
			/**
			 * @brief Reads a user config file and fill the LinphoneConfig with the read
			 * config values. 
			 */
			LINPHONECXX_PUBLIC linphone::Status readFile(const std::string & filename);
			
			/**
			 * @brief Retrieves a configuration item as a range, given its section, key, and
			 * default min and max values. 
			 */
			LINPHONECXX_PUBLIC bool getRange(const std::string & section, const std::string & key, int * min, int * max, int defaultMin, int defaultMax) const;
			
			/**
			 * @brief Sets a string list config item. 
			 */
			LINPHONECXX_PUBLIC void setStringList(const std::string & section, const std::string & key, const std::list<std::string > & value);
			
			/**
			 * @brief Retrieves the overwrite flag for a config section. 
			 */
			LINPHONECXX_PUBLIC bool getOverwriteFlagForSection(const std::string & section) const;
			
			/**
			 * @brief Sets a 64 bits integer config item. 
			 */
			LINPHONECXX_PUBLIC void setInt64(const std::string & section, const std::string & key, int64_t value);
			
			/**
			 * @brief Sets the overwrite flag for a config item (used when dumping config as
			 * xml) 
			 */
			LINPHONECXX_PUBLIC void setOverwriteFlagForEntry(const std::string & section, const std::string & key, bool value);
			
			/**
			 * @brief Sets a range config item. 
			 */
			LINPHONECXX_PUBLIC void setRange(const std::string & section, const std::string & key, int minValue, int maxValue);
			
			/**
			 * @brief Sets the skip flag for a config item (used when dumping config as xml) 
			 */
			LINPHONECXX_PUBLIC void setSkipFlagForEntry(const std::string & section, const std::string & key, bool value);
			
			/**
			 */
			LINPHONECXX_PUBLIC bool relativeFileExists(const std::string & filename) const;
			
			/**
			 * @brief Retrieves a section parameter item as a string, given its section and
			 * key. 
			 */
			LINPHONECXX_PUBLIC std::string getSectionParamString(const std::string & section, const std::string & key, const std::string & defaultValue) const;
			
			/**
			 * @brief Retrieves the skip flag for a config item. 
			 */
			LINPHONECXX_PUBLIC bool getSkipFlagForEntry(const std::string & section, const std::string & key) const;
			
			/**
			 * @brief Retrieves a configuration item as a float, given its section, key, and
			 * default value. 
			 */
			LINPHONECXX_PUBLIC float getFloat(const std::string & section, const std::string & key, float defaultValue) const;
			
			/**
			 * @brief Retrieves a configuration item as a 64 bit integer, given its section,
			 * key, and default value. 
			 */
			LINPHONECXX_PUBLIC int64_t getInt64(const std::string & section, const std::string & key, int64_t defaultValue) const;
			
			/**
			 * @brief Returns 1 if a given section with a given key is present in the
			 * configuration. 
			 */
			LINPHONECXX_PUBLIC int hasEntry(const std::string & section, const std::string & key) const;
			
			/**
			 * @brief Sets the skip flag for a config section (used when dumping config as
			 * xml) 
			 */
			LINPHONECXX_PUBLIC void setSkipFlagForSection(const std::string & section, bool value);
			
			/**
			 * @brief Retrieves the skip flag for a config section. 
			 */
			LINPHONECXX_PUBLIC bool getSkipFlagForSection(const std::string & section) const;
			
			/**
			 * @brief Dumps the LinphoneConfig as XML into a buffer. 
			 */
			LINPHONECXX_PUBLIC std::string dumpAsXml() const;
			
			/**
			 * @brief Writes the config file to disk. 
			 */
			LINPHONECXX_PUBLIC linphone::Status sync();
			
			/**
			 * @brief Sets a float config item. 
			 */
			LINPHONECXX_PUBLIC void setFloat(const std::string & section, const std::string & key, float value);
			
			/**
			 * @brief Sets an integer config item, but store it as hexadecimal. 
			 */
			LINPHONECXX_PUBLIC void setIntHex(const std::string & section, const std::string & key, int value);
			
			/**
			 * @brief Sets an integer config item. 
			 */
			LINPHONECXX_PUBLIC void setInt(const std::string & section, const std::string & key, int value);
			
			/**
			 * @brief Removes entries for key,value in a section. 
			 */
			LINPHONECXX_PUBLIC void cleanEntry(const std::string & section, const std::string & key);
			
			/**
			 * @brief Retrieves the overwrite flag for a config item. 
			 */
			LINPHONECXX_PUBLIC bool getOverwriteFlagForEntry(const std::string & section, const std::string & key) const;
			
			/**
			 * @brief Retrieves a default configuration item as a float, given its section,
			 * key, and default value. 
			 */
			LINPHONECXX_PUBLIC float getDefaultFloat(const std::string & section, const std::string & key, float defaultValue) const;
			
			/**
			 * @brief Removes every pair of key,value in a section and remove the section. 
			 */
			LINPHONECXX_PUBLIC void cleanSection(const std::string & section);
			
			/**
			 * @brief Dumps the LinphoneConfig as INI into a buffer. 
			 */
			LINPHONECXX_PUBLIC std::string dump() const;
			
			/**
			 * @brief Instantiates a LinphoneConfig object from a user provided buffer. 
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<Config> newFromBuffer(const std::string & buffer);
			
			/**
			 * @brief Instantiates a LinphoneConfig object from a user config file and a
			 * factory config file. 
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<Config> newWithFactory(const std::string & configFilename, const std::string & factoryConfigFilename);
			

		
		
		
	};

};

#endif // _LINPHONE_CONFIG_HH
