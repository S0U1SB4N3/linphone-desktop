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

#ifndef _LINPHONE_VIDEO_DEFINITION_HH
#define _LINPHONE_VIDEO_DEFINITION_HH

#include <string>
#include <memory>
#include "object.hh"





struct _LinphoneVideoDefinition;


namespace linphone {


	/**
	 * @brief The LinphoneVideoDefinition object represents a video definition, eg. 
	 */
	class VideoDefinition: public Object {
	
		public:
			VideoDefinition(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneVideoDefinition *cPtr() {return (_LinphoneVideoDefinition *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get the width of the video definition. 
			 */
			LINPHONECXX_PUBLIC unsigned int getWidth() const;
			
			/**
			 * @brief Set the width of the video definition. 
			 */
			LINPHONECXX_PUBLIC void setWidth(unsigned int width);
			
			/**
			 * @brief Tells whether a LinphoneVideoDefinition is undefined. 
			 */
			LINPHONECXX_PUBLIC bool isUndefined() const;
			
			/**
			 * @brief Get the name of the video definition. 
			 */
			LINPHONECXX_PUBLIC std::string getName() const;
			
			/**
			 * @brief Set the name of the video definition. 
			 */
			LINPHONECXX_PUBLIC void setName(const std::string & name);
			
			/**
			 * @brief Get the height of the video definition. 
			 */
			LINPHONECXX_PUBLIC unsigned int getHeight() const;
			
			/**
			 * @brief Set the height of the video definition. 
			 */
			LINPHONECXX_PUBLIC void setHeight(unsigned int height);
			
			/**
			 * @brief Tells whether two LinphoneVideoDefinition objects are strictly equal
			 * (the widths are the same and the heights are the same). 
			 */
			LINPHONECXX_PUBLIC bool strictEquals(const std::shared_ptr<const VideoDefinition> & vdef2) const;
			
			/**
			 * @brief Set the width and the height of the video definition. 
			 */
			LINPHONECXX_PUBLIC void setDefinition(unsigned int width, unsigned int height);
			
			/**
			 * @brief Tells whether two LinphoneVideoDefinition objects are equal (the widths
			 * and the heights are the same but can be switched). 
			 */
			LINPHONECXX_PUBLIC bool equals(const std::shared_ptr<const VideoDefinition> & vdef2) const;
			
			/**
			 * @brief Clone a video definition. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<VideoDefinition> clone() const;
			

		
		
		
	};

};

#endif // _LINPHONE_VIDEO_DEFINITION_HH
