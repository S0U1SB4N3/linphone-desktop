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

#ifndef _LINPHONE_CONTENT_HH
#define _LINPHONE_CONTENT_HH

#include <string>
#include <memory>
#include "object.hh"





struct _LinphoneContent;


namespace linphone {


	/**
	 * @brief The LinphoneContent object holds data that can be embedded in a
	 * signaling message. 
	 */
	class Content: public Object {
	
		public:
			Content(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneContent *cPtr() {return (_LinphoneContent *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get the name associated with a RCS file transfer message. 
			 */
			LINPHONECXX_PUBLIC std::string getName() const;
			
			/**
			 * @brief Set the name associated with a RCS file transfer message. 
			 */
			LINPHONECXX_PUBLIC void setName(const std::string & name);
			
			/**
			 * @brief Get the encoding of the data buffer, for example "gzip". 
			 */
			LINPHONECXX_PUBLIC std::string getEncoding() const;
			
			/**
			 * @brief Set the encoding of the data buffer, for example "gzip". 
			 */
			LINPHONECXX_PUBLIC void setEncoding(const std::string & encoding);
			
			/**
			 * @brief Get the content data buffer, usually a string. 
			 */
			LINPHONECXX_PUBLIC void * getBuffer() const;
			
			/**
			 * @brief Tell whether a content is a multipart content. 
			 */
			LINPHONECXX_PUBLIC bool isMultipart() const;
			
			/**
			 * @brief Get the mime subtype of the content data. 
			 */
			LINPHONECXX_PUBLIC std::string getSubtype() const;
			
			/**
			 * @brief Set the mime subtype of the content data. 
			 */
			LINPHONECXX_PUBLIC void setSubtype(const std::string & subtype);
			
			/**
			 * @brief Get the string content data buffer. 
			 */
			LINPHONECXX_PUBLIC std::string getStringBuffer() const;
			
			/**
			 * @brief Set the string content data buffer. 
			 */
			LINPHONECXX_PUBLIC void setStringBuffer(const std::string & buffer);
			
			/**
			 * @brief Get the mime type of the content data. 
			 */
			LINPHONECXX_PUBLIC std::string getType() const;
			
			/**
			 * @brief Set the mime type of the content data. 
			 */
			LINPHONECXX_PUBLIC void setType(const std::string & type);
			
			/**
			 * @brief Get the content data buffer size, excluding null character despite null
			 * character is always set for convenience. 
			 */
			LINPHONECXX_PUBLIC size_t getSize() const;
			
			/**
			 * @brief Set the content data size, excluding null character despite null
			 * character is always set for convenience. 
			 */
			LINPHONECXX_PUBLIC void setSize(size_t size);
			
			/**
			 * @brief Get a part from a multipart content according to its index. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Content> getPart(int idx) const;
			
			/**
			 * @brief Set the content data buffer, usually a string. 
			 */
			LINPHONECXX_PUBLIC void setBuffer(void * buffer, size_t size);
			
			/**
			 * @brief Find a part from a multipart content looking for a part header with a
			 * specified value. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Content> findPartByHeader(const std::string & headerName, const std::string & headerValue) const;
			
			/**
			 * @brief Get a custom header value of a content. 
			 */
			LINPHONECXX_PUBLIC std::string getCustomHeader(const std::string & headerName) const;
			

		
		
		
	};

};

#endif // _LINPHONE_CONTENT_HH
