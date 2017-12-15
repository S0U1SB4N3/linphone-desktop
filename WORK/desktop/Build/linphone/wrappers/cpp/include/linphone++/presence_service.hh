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

#ifndef _LINPHONE_PRESENCE_SERVICE_HH
#define _LINPHONE_PRESENCE_SERVICE_HH

#include <string>
#include <memory>
#include "enums.hh"
#include "presence_note.hh"
#include "object.hh"





struct _LinphonePresenceService;


namespace linphone {


	/**
	 * @brief Presence service type holding information about a presence service. 
	 */
	class PresenceService: public Object {
	
		public:
			PresenceService(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePresenceService *cPtr() {return (_LinphonePresenceService *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Gets the basic status of a presence service. 
			 */
			LINPHONECXX_PUBLIC PresenceBasicStatus getBasicStatus() const;
			
			/**
			 * @brief Sets the basic status of a presence service. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setBasicStatus(PresenceBasicStatus basicStatus);
			
			/**
			 * @brief Gets the id of a presence service. 
			 */
			LINPHONECXX_PUBLIC std::string getId() const;
			
			/**
			 * @brief Sets the id of a presence service. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setId(const std::string & id);
			
			/**
			 * @brief Gets the number of notes included in the presence service. 
			 */
			LINPHONECXX_PUBLIC unsigned int getNbNotes() const;
			
			/**
			 * @brief Gets the contact of a presence service. 
			 */
			LINPHONECXX_PUBLIC std::string getContact() const;
			
			/**
			 * @brief Sets the contact of a presence service. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setContact(const std::string & contact);
			
			/**
			 * @brief Gets the nth note of a presence service. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceNote> getNthNote(unsigned int idx) const;
			
			/**
			 * @brief Clears the notes of a presence service. 
			 */
			LINPHONECXX_PUBLIC linphone::Status clearNotes();
			
			/**
			 * @brief Adds a note to a presence service. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addNote(const std::shared_ptr<PresenceNote> & note);
			

		
		
		
	};

};

#endif // _LINPHONE_PRESENCE_SERVICE_HH
