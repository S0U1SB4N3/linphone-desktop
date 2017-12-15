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

#ifndef _LINPHONE_BUFFER_HH
#define _LINPHONE_BUFFER_HH

#include <cstdint>
#include <string>
#include <memory>
#include "object.hh"





struct _LinphoneBuffer;


namespace linphone {


	/**
	 * @brief The LinphoneContent object representing a data buffer. 
	 */
	class Buffer: public Object {
	
		public:
			Buffer(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneBuffer *cPtr() {return (_LinphoneBuffer *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get the content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC const uint8_t * getContent() const;
			
			/**
			 * @brief Tell whether the LinphoneBuffer is empty. 
			 */
			LINPHONECXX_PUBLIC bool isEmpty() const;
			
			/**
			 * @brief Get the size of the content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC size_t getSize() const;
			
			/**
			 * @brief Set the size of the content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC void setSize(size_t size);
			
			/**
			 * @brief Get the string content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC std::string getStringContent() const;
			
			/**
			 * @brief Set the string content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC void setStringContent(const std::string & content);
			
			/**
			 * @brief Set the content of the data buffer. 
			 */
			LINPHONECXX_PUBLIC void setContent(const uint8_t * content, size_t size);
			
			/**
			 * @brief Create a new LinphoneBuffer object from existing data. 
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<Buffer> newFromData(const uint8_t * data, size_t size);
			
			/**
			 * @brief Create a new LinphoneBuffer object from a string. 
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<Buffer> newFromString(const std::string & data);
			

		
		
		
	};

};

#endif // _LINPHONE_BUFFER_HH
