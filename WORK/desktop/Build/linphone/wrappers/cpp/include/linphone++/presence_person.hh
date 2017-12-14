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

#ifndef _LINPHONE_PRESENCE_PERSON_HH
#define _LINPHONE_PRESENCE_PERSON_HH

#include <string>
#include <memory>
#include "presence_activity.hh"
#include "presence_note.hh"
#include "object.hh"





struct _LinphonePresencePerson;


namespace linphone {


	/**
	 * @brief Presence person holding information about a presence person. 
	 */
	class PresencePerson: public Object {
	
		public:
			PresencePerson(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePresencePerson *cPtr() {return (_LinphonePresencePerson *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Gets the number of activities notes included in the presence person. 
			 */
			LINPHONECXX_PUBLIC unsigned int getNbActivitiesNotes() const;
			
			/**
			 * @brief Gets the id of a presence person. 
			 */
			LINPHONECXX_PUBLIC std::string getId() const;
			
			/**
			 * @brief Sets the id of a presence person. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setId(const std::string & id);
			
			/**
			 * @brief Gets the number of notes included in the presence person. 
			 */
			LINPHONECXX_PUBLIC unsigned int getNbNotes() const;
			
			/**
			 * @brief Gets the number of activities included in the presence person. 
			 */
			LINPHONECXX_PUBLIC unsigned int getNbActivities() const;
			
			/**
			 * @brief Clears the activities notes of a presence person. 
			 */
			LINPHONECXX_PUBLIC linphone::Status clearActivitiesNotes();
			
			/**
			 * @brief Adds an activity to a presence person. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addActivity(const std::shared_ptr<PresenceActivity> & activity);
			
			/**
			 * @brief Gets the nth note of a presence person. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceNote> getNthNote(unsigned int idx) const;
			
			/**
			 * @brief Gets the nth activities note of a presence person. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceNote> getNthActivitiesNote(unsigned int idx) const;
			
			/**
			 * @brief Clears the notes of a presence person. 
			 */
			LINPHONECXX_PUBLIC linphone::Status clearNotes();
			
			/**
			 * @brief Gets the nth activity of a presence person. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceActivity> getNthActivity(unsigned int idx) const;
			
			/**
			 * @brief Clears the activities of a presence person. 
			 */
			LINPHONECXX_PUBLIC linphone::Status clearActivities();
			
			/**
			 * @brief Adds an activities note to a presence person. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addActivitiesNote(const std::shared_ptr<PresenceNote> & note);
			
			/**
			 * @brief Adds a note to a presence person. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addNote(const std::shared_ptr<PresenceNote> & note);
			

		
		
		
	};

};

#endif // _LINPHONE_PRESENCE_PERSON_HH
