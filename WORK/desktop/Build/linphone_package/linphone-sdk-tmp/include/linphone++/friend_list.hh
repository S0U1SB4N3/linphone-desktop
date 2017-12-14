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

#ifndef _LINPHONE_FRIEND_LIST_HH
#define _LINPHONE_FRIEND_LIST_HH

#include <memory>
#include <string>
#include <list>
#include "core.hh"
#include "address.hh"
#include "friend.hh"
#include "enums.hh"
#include "presence_model.hh"
#include "friend_list_listener.hh"
#include "object.hh"





struct _LinphoneFriendList;


namespace linphone {


	/**
	 * @brief The LinphoneFriendList object representing a list of friends. 
	 */
	class FriendList: public ListenableObject {
	
		public:
			FriendList(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneFriendList *cPtr() {return (_LinphoneFriendList *)mPrivPtr;}
			
			LINPHONECXX_PUBLIC void setListener(const std::shared_ptr<FriendListListener> &listener);

	
		public:
			
		
			/**
			 * @brief Returns the LinphoneCore object attached to this LinphoneFriendList. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Core> getCore() const;
			
			/**
			 * @brief Get the RLS (Resource List Server) URI associated with the friend list
			 * to subscribe to these friends presence. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getRlsAddress() const;
			
			/**
			 * @brief Set the RLS (Resource List Server) URI associated with the friend list
			 * to subscribe to these friends presence. 
			 */
			LINPHONECXX_PUBLIC void setRlsAddress(const std::shared_ptr<const Address> & rlsAddr);
			
			/**
			 * @brief Get the display name of the friend list. 
			 */
			LINPHONECXX_PUBLIC std::string getDisplayName() const;
			
			/**
			 * @brief Set the display name of the friend list. 
			 */
			LINPHONECXX_PUBLIC void setDisplayName(const std::string & displayName);
			
			/**
			 * @brief Get the URI associated with the friend list. 
			 */
			LINPHONECXX_PUBLIC std::string getUri() const;
			
			/**
			 * @brief Set the URI associated with the friend list. 
			 */
			LINPHONECXX_PUBLIC void setUri(const std::string & uri);
			
			/**
			 * @brief Get the RLS (Resource List Server) URI associated with the friend list
			 * to subscribe to these friends presence. 
			 */
			LINPHONECXX_PUBLIC std::string getRlsUri() const;
			
			/**
			 * @brief Set the RLS (Resource List Server) URI associated with the friend list
			 * to subscribe to these friends presence. 
			 */
			LINPHONECXX_PUBLIC void setRlsUri(const std::string & rlsUri);
			
			/**
			 * @brief Retrieves the list of LinphoneFriend from this LinphoneFriendList. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<Friend> > getFriends() const;
			
			/**
			 * @brief Gets whether subscription to NOTIFYes of all friends list are enabled or
			 * not. 
			 */
			LINPHONECXX_PUBLIC bool subscriptionsEnabled();
			
			/**
			 * @brief Enable subscription to NOTIFYes of all friends list. 
			 */
			LINPHONECXX_PUBLIC void enableSubscriptions(bool enabled);
			
			/**
			 * @brief Sets the revision from the last synchronization. 
			 */
			LINPHONECXX_PUBLIC void updateRevision(int rev);
			
			/**
			 * @brief Goes through all the LinphoneFriend that are dirty and does a CardDAV
			 * PUT to update the server. 
			 */
			LINPHONECXX_PUBLIC void updateDirtyFriends();
			
			/**
			 * @brief Update presence subscriptions for the entire list. 
			 */
			LINPHONECXX_PUBLIC void updateSubscriptions();
			
			/**
			 * @brief Remove a friend from a friend list. 
			 */
			LINPHONECXX_PUBLIC FriendListStatus removeFriend(const std::shared_ptr<Friend> & lf);
			
			/**
			 * @brief Starts a CardDAV synchronization using value set using
			 * linphone_friend_list_set_uri. 
			 */
			LINPHONECXX_PUBLIC void synchronizeFriendsFromServer();
			
			/**
			 * @brief Find a friend in the friend list using a LinphoneAddress. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Friend> findFriendByAddress(const std::shared_ptr<const Address> & address) const;
			
			/**
			 * @brief Add a friend to a friend list. 
			 */
			LINPHONECXX_PUBLIC FriendListStatus addLocalFriend(const std::shared_ptr<Friend> & lf);
			
			/**
			 * @brief Find a friend in the friend list using an URI string. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Friend> findFriendByUri(const std::string & uri) const;
			
			/**
			 * @brief Notify our presence to all the friends in the friend list that have
			 * subscribed to our presence directly (not using a RLS). 
			 */
			LINPHONECXX_PUBLIC void notifyPresence(const std::shared_ptr<PresenceModel> & presence);
			
			/**
			 * @brief Creates and export LinphoneFriend objects from LinphoneFriendList to a
			 * file using vCard 4 format. 
			 */
			LINPHONECXX_PUBLIC void exportFriendsAsVcard4File(const std::string & vcardFile);
			
			/**
			 * @brief Creates and adds LinphoneFriend objects to LinphoneFriendList from a
			 * file that contains the vCard(s) to parse. 
			 */
			LINPHONECXX_PUBLIC linphone::Status importFriendsFromVcard4File(const std::string & vcardFile);
			
			/**
			 * @brief Find a friend in the friend list using a ref key. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Friend> findFriendByRefKey(const std::string & refKey) const;
			
			/**
			 * @brief Creates and adds LinphoneFriend objects to LinphoneFriendList from a
			 * buffer that contains the vCard(s) to parse. 
			 */
			LINPHONECXX_PUBLIC linphone::Status importFriendsFromVcard4Buffer(const std::string & vcardBuffer);
			
			/**
			 * @brief Add a friend to a friend list. 
			 */
			LINPHONECXX_PUBLIC FriendListStatus addFriend(const std::shared_ptr<Friend> & lf);
			

		
		
		
	};

};

#endif // _LINPHONE_FRIEND_LIST_HH
