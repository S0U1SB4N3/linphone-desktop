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

#ifndef _LINPHONE_PRESENCE_MODEL_HH
#define _LINPHONE_PRESENCE_MODEL_HH

#include <memory>
#include <string>
#include "address.hh"
#include "enums.hh"
#include "presence_activity.hh"
#include "presence_note.hh"
#include "presence_service.hh"
#include "presence_person.hh"
#include "object.hh"





struct _LinphonePresenceModel;


namespace linphone {


	/**
	 * @brief Presence model type holding information about the presence of a person. 
	 */
	class PresenceModel: public Object {
	
		public:
			PresenceModel(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePresenceModel *cPtr() {return (_LinphonePresenceModel *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Gets the presentity of a presence model. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getPresentity() const;
			
			/**
			 * @brief Sets the presentity of a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setPresentity(const std::shared_ptr<const Address> & presentity);
			
			/**
			 * @brief Gets the number of persons included in the presence model. 
			 */
			LINPHONECXX_PUBLIC unsigned int getNbPersons() const;
			
			/**
			 * @brief Gets the timestamp of a presence model. 
			 */
			LINPHONECXX_PUBLIC time_t getTimestamp() const;
			
			/**
			 * @brief Get the consolidated presence from a presence model. 
			 */
			LINPHONECXX_PUBLIC ConsolidatedPresence getConsolidatedPresence() const;
			
			/**
			 * @brief Tells whether a presence model is considered online. 
			 */
			LINPHONECXX_PUBLIC bool isOnline() const;
			
			/**
			 * @brief Gets the number of services included in the presence model. 
			 */
			LINPHONECXX_PUBLIC unsigned int getNbServices() const;
			
			/**
			 * @brief Gets the contact of a presence model. 
			 */
			LINPHONECXX_PUBLIC std::string getContact() const;
			
			/**
			 * @brief Sets the contact of a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setContact(const std::string & contact);
			
			/**
			 * @brief Gets the basic status of a presence model. 
			 */
			LINPHONECXX_PUBLIC PresenceBasicStatus getBasicStatus() const;
			
			/**
			 * @brief Sets the basic status of a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setBasicStatus(PresenceBasicStatus basicStatus);
			
			/**
			 * @brief Gets the first activity of a presence model (there is usually only one). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceActivity> getActivity() const;
			
			/**
			 * @brief Gets the number of activities included in the presence model. 
			 */
			LINPHONECXX_PUBLIC unsigned int getNbActivities() const;
			
			/**
			 * @brief Sets the activity of a presence model (limits to only one activity). 
			 */
			LINPHONECXX_PUBLIC linphone::Status setActivity(PresenceActivityType activity, const std::string & description);
			
			/**
			 * @brief Clears the activities of a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status clearActivities();
			
			/**
			 * @brief Gets the first note of a presence model (there is usually only one). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceNote> getNote(const std::string & lang) const;
			
			/**
			 * @brief Adds a service to a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addService(const std::shared_ptr<PresenceService> & service);
			
			/**
			 * @brief Clears all the notes of a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status clearNotes();
			
			/**
			 * @brief Adds an activity to a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addActivity(const std::shared_ptr<PresenceActivity> & activity);
			
			/**
			 * @brief Gets the nth service of a presence model. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceService> getNthService(unsigned int idx) const;
			
			/**
			 * @brief Clears the persons of a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status clearPersons();
			
			/**
			 * @brief Adds a note to a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addNote(const std::string & noteContent, const std::string & lang);
			
			/**
			 * @brief Clears the services of a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status clearServices();
			
			/**
			 * @brief Gets the nth person of a presence model. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresencePerson> getNthPerson(unsigned int idx) const;
			
			/**
			 * @brief Adds a person to a presence model. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addPerson(const std::shared_ptr<PresencePerson> & person);
			
			/**
			 * @brief Gets the nth activity of a presence model. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceActivity> getNthActivity(unsigned int idx) const;
			
			/**
			 * @brief Creates a presence model specifying an activity and adding a note. 
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<PresenceModel> newWithActivityAndNote(PresenceActivityType activity, const std::string & description, const std::string & note, const std::string & lang);
			
			/**
			 * @brief Creates a presence model specifying an activity. 
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<PresenceModel> newWithActivity(PresenceActivityType activity, const std::string & description);
			

		
		
		
	};

};

#endif // _LINPHONE_PRESENCE_MODEL_HH
