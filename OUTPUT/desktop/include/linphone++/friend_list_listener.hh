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

#ifndef _LINPHONE_FRIEND_LIST_LISTENER_HH
#define _LINPHONE_FRIEND_LIST_LISTENER_HH

#include <memory>
#include <string>
#include "enums.hh"
#include "friend.hh"
#include "object.hh"







namespace linphone {

	class FriendList;

	class FriendListListener: public Listener {
	
		public:
			

	
		public:
			
		
			LINPHONECXX_PUBLIC virtual void onSyncStatusChanged(const std::shared_ptr<FriendList> & list, FriendListSyncStatus status, const std::string & msg) {}
			
			LINPHONECXX_PUBLIC virtual void onContactCreated(const std::shared_ptr<FriendList> & list, const std::shared_ptr<Friend> & lf) {}
			
			LINPHONECXX_PUBLIC virtual void onContactUpdated(const std::shared_ptr<FriendList> & list, const std::shared_ptr<Friend> & newFriend, const std::shared_ptr<Friend> & oldFriend) {}
			
			LINPHONECXX_PUBLIC virtual void onContactDeleted(const std::shared_ptr<FriendList> & list, const std::shared_ptr<Friend> & lf) {}
			

		
		
		
	};

};

#endif // _LINPHONE_FRIEND_LIST_LISTENER_HH
