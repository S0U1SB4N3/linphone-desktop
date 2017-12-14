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

#ifndef _LINPHONE_FRIEND_HH
#define _LINPHONE_FRIEND_HH

#include <memory>
#include <list>
#include <string>
#include "core.hh"
#include "address.hh"
#include "enums.hh"
#include "presence_model.hh"
#include "vcard.hh"
#include "object.hh"





struct _LinphoneFriend;


namespace linphone {


	/**
	 * @brief Represents a buddy, all presence actions like subscription and status
	 * change notification are performed on this object. 
	 */
	class Friend: public Object {
	
		public:
			Friend(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneFriend *cPtr() {return (_LinphoneFriend *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Returns the LinphoneCore object managing this friend, if any. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Core> getCore() const;
			
			/**
			 * @brief Returns a list of #LinphoneAddress for this friend. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<Address> > getAddresses() const;
			
			/**
			 * @brief Get the consolidated presence of a friend. 
			 */
			LINPHONECXX_PUBLIC ConsolidatedPresence getConsolidatedPresence() const;
			
			/**
			 * @brief Get the presence model of a friend. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const PresenceModel> getPresenceModel() const;
			
			/**
			 * @brief Set the presence model of a friend. 
			 */
			LINPHONECXX_PUBLIC void setPresenceModel(const std::shared_ptr<PresenceModel> & presence);
			
			/**
			 * @brief Get the display name for this friend. 
			 */
			LINPHONECXX_PUBLIC std::string getName() const;
			
			/**
			 * @brief Set the display name for this friend. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setName(const std::string & name);
			
			/**
			 * @brief get current subscription policy for this #LinphoneFriend 
			 */
			LINPHONECXX_PUBLIC SubscribePolicy getIncSubscribePolicy() const;
			
			/**
			 * @brief Configure incoming subscription policy for this friend. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setIncSubscribePolicy(SubscribePolicy pol);
			
			/**
			 * @brief Tells whether we already received presence information for a friend. 
			 */
			LINPHONECXX_PUBLIC bool isPresenceReceived() const;
			
			/**
			 * @brief Get address of this friend. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getAddress() const;
			
			/**
			 * @brief Set #LinphoneAddress for this friend. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setAddress(const std::shared_ptr<const Address> & address);
			
			/**
			 * @brief Get the reference key of a friend. 
			 */
			LINPHONECXX_PUBLIC std::string getRefKey() const;
			
			/**
			 * @brief Set the reference key of a friend. 
			 */
			LINPHONECXX_PUBLIC void setRefKey(const std::string & key);
			
			/**
			 * @brief Returns a list of phone numbers for this friend. 
			 */
			LINPHONECXX_PUBLIC std::list<std::string > getPhoneNumbers();
			
			/**
			 * @brief Get subscription state of a friend. 
			 */
			LINPHONECXX_PUBLIC SubscriptionState getSubscriptionState() const;
			
			/**
			 * @brief Returns the vCard object associated to this friend, if any. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Vcard> getVcard();
			
			/**
			 * @brief Binds a vCard object to a friend. 
			 */
			LINPHONECXX_PUBLIC void setVcard(const std::shared_ptr<Vcard> & vcard);
			
			/**
			 * @brief get subscription flag value 
			 */
			LINPHONECXX_PUBLIC bool subscribesEnabled() const;
			
			/**
			 * @brief Configure #LinphoneFriend to subscribe to presence information. 
			 */
			LINPHONECXX_PUBLIC linphone::Status enableSubscribes(bool val);
			
			/**
			 * @brief Commits modification made to the friend configuration. 
			 */
			LINPHONECXX_PUBLIC void done();
			
			/**
			 * @brief Set the presence model for a specific SIP URI or phone number of a
			 * friend. 
			 */
			LINPHONECXX_PUBLIC void setPresenceModelForUriOrTel(const std::string & uriOrTel, const std::shared_ptr<PresenceModel> & presence);
			
			/**
			 * @brief Adds a phone number in this friend. 
			 */
			LINPHONECXX_PUBLIC void addPhoneNumber(const std::string & phone);
			
			/**
			 * @brief Adds an address in this friend. 
			 */
			LINPHONECXX_PUBLIC void addAddress(const std::shared_ptr<const Address> & addr);
			
			/**
			 * @brief Saves a friend either in database if configured, otherwise in
			 * linphonerc. 
			 */
			LINPHONECXX_PUBLIC void save(const std::shared_ptr<Core> & lc);
			
			/**
			 * @brief Creates a vCard object associated to this friend if there isn't one yet
			 * and if the full name is available, either by the parameter or the one in the
			 * friend's SIP URI. 
			 */
			LINPHONECXX_PUBLIC bool createVcard(const std::string & name);
			
			/**
			 * @brief Starts editing a friend configuration. 
			 */
			LINPHONECXX_PUBLIC void edit();
			
			/**
			 * @brief Check that the given friend is in a friend list. 
			 */
			LINPHONECXX_PUBLIC bool inList() const;
			
			/**
			 * @brief Get the presence model for a specific SIP URI or phone number of a
			 * friend. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const PresenceModel> getPresenceModelForUriOrTel(const std::string & uriOrTel) const;
			
			/**
			 * @brief Removes an address in this friend. 
			 */
			LINPHONECXX_PUBLIC void removeAddress(const std::shared_ptr<const Address> & addr);
			
			/**
			 * @brief Removes a phone number in this friend. 
			 */
			LINPHONECXX_PUBLIC void removePhoneNumber(const std::string & phone);
			
			/**
			 * @brief Contructor same as linphone_friend_new() + linphone_friend_set_address() 
			 */
			LINPHONECXX_PUBLIC static std::shared_ptr<Friend> newFromVcard(const std::shared_ptr<Vcard> & vcard);
			

		
		
		
	};

};

#endif // _LINPHONE_FRIEND_HH
