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

#ifndef _LINPHONE_PRESENCE_ACTIVITY_HH
#define _LINPHONE_PRESENCE_ACTIVITY_HH

#include <string>
#include "enums.hh"
#include "object.hh"





struct _LinphonePresenceActivity;


namespace linphone {


	/**
	 * @brief Presence activity type holding information about a presence activity. 
	 */
	class PresenceActivity: public Object {
	
		public:
			PresenceActivity(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePresenceActivity *cPtr() {return (_LinphonePresenceActivity *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Gets the activity type of a presence activity. 
			 */
			LINPHONECXX_PUBLIC PresenceActivityType getType() const;
			
			/**
			 * @brief Sets the type of activity of a presence activity. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setType(PresenceActivityType acttype);
			
			/**
			 * @brief Gets the description of a presence activity. 
			 */
			LINPHONECXX_PUBLIC std::string getDescription() const;
			
			/**
			 * @brief Sets the description of a presence activity. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setDescription(const std::string & description);
			
			/**
			 * @brief Gets the string representation of a presence activity. 
			 */
			LINPHONECXX_PUBLIC std::string toString() const;
			

		
		
		
	};

};

#endif // _LINPHONE_PRESENCE_ACTIVITY_HH
