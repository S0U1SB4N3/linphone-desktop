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

#ifndef _LINPHONE_CORE_LISTENER_HH
#define _LINPHONE_CORE_LISTENER_HH

#include <memory>
#include <string>
#include "call.hh"
#include "enums.hh"
#include "friend_list.hh"
#include "event.hh"
#include "call_log.hh"
#include "auth_info.hh"
#include "friend.hh"
#include "presence_model.hh"
#include "content.hh"
#include "proxy_config.hh"
#include "chat_room.hh"
#include "chat_message.hh"
#include "info_message.hh"
#include "call_stats.hh"
#include "object.hh"







namespace linphone {

	class Core;

	class CoreListener: public Listener {
	
		public:
			

	
		public:
			
		
			LINPHONECXX_PUBLIC virtual void onTransferStateChanged(const std::shared_ptr<Core> & lc, const std::shared_ptr<Call> & transfered, CallState newCallState) {}
			
			LINPHONECXX_PUBLIC virtual void onFriendListCreated(const std::shared_ptr<Core> & lc, const std::shared_ptr<FriendList> & list) {}
			
			LINPHONECXX_PUBLIC virtual void onSubscriptionStateChanged(const std::shared_ptr<Core> & lc, const std::shared_ptr<Event> & lev, SubscriptionState state) {}
			
			LINPHONECXX_PUBLIC virtual void onCallLogUpdated(const std::shared_ptr<Core> & lc, const std::shared_ptr<CallLog> & newcl) {}
			
			LINPHONECXX_PUBLIC virtual void onCallStateChanged(const std::shared_ptr<Core> & lc, const std::shared_ptr<Call> & call, CallState cstate, const std::string & message) {}
			
			LINPHONECXX_PUBLIC virtual void onAuthenticationRequested(const std::shared_ptr<Core> & lc, const std::shared_ptr<AuthInfo> & authInfo, AuthMethod method) {}
			
			LINPHONECXX_PUBLIC virtual void onNotifyPresenceReceivedForUriOrTel(const std::shared_ptr<Core> & lc, const std::shared_ptr<Friend> & lf, const std::string & uriOrTel, const std::shared_ptr<const PresenceModel> & presenceModel) {}
			
			LINPHONECXX_PUBLIC virtual void onBuddyInfoUpdated(const std::shared_ptr<Core> & lc, const std::shared_ptr<Friend> & lf) {}
			
			LINPHONECXX_PUBLIC virtual void onNetworkReachable(const std::shared_ptr<Core> & lc, bool reachable) {}
			
			LINPHONECXX_PUBLIC virtual void onNotifyReceived(const std::shared_ptr<Core> & lc, const std::shared_ptr<Event> & lev, const std::string & notifiedEvent, const std::shared_ptr<const Content> & body) {}
			
			LINPHONECXX_PUBLIC virtual void onNewSubscriptionRequested(const std::shared_ptr<Core> & lc, const std::shared_ptr<Friend> & lf, const std::string & url) {}
			
			LINPHONECXX_PUBLIC virtual void onRegistrationStateChanged(const std::shared_ptr<Core> & lc, const std::shared_ptr<ProxyConfig> & cfg, RegistrationState cstate, const std::string & message) {}
			
			LINPHONECXX_PUBLIC virtual void onNotifyPresenceReceived(const std::shared_ptr<Core> & lc, const std::shared_ptr<Friend> & lf) {}
			
			LINPHONECXX_PUBLIC virtual void onMessageReceived(const std::shared_ptr<Core> & lc, const std::shared_ptr<ChatRoom> & room, const std::shared_ptr<ChatMessage> & message) {}
			
			LINPHONECXX_PUBLIC virtual void onInfoReceived(const std::shared_ptr<Core> & lc, const std::shared_ptr<Call> & call, const std::shared_ptr<const InfoMessage> & msg) {}
			
			LINPHONECXX_PUBLIC virtual void onCallStatsUpdated(const std::shared_ptr<Core> & lc, const std::shared_ptr<Call> & call, const std::shared_ptr<const CallStats> & stats) {}
			
			LINPHONECXX_PUBLIC virtual void onFriendListRemoved(const std::shared_ptr<Core> & lc, const std::shared_ptr<FriendList> & list) {}
			
			LINPHONECXX_PUBLIC virtual void onReferReceived(const std::shared_ptr<Core> & lc, const std::string & referTo) {}
			
			LINPHONECXX_PUBLIC virtual void onConfiguringStatus(const std::shared_ptr<Core> & lc, ConfiguringState status, const std::string & message) {}
			
			LINPHONECXX_PUBLIC virtual void onCallCreated(const std::shared_ptr<Core> & lc, const std::shared_ptr<Call> & call) {}
			
			LINPHONECXX_PUBLIC virtual void onPublishStateChanged(const std::shared_ptr<Core> & lc, const std::shared_ptr<Event> & lev, PublishState state) {}
			
			LINPHONECXX_PUBLIC virtual void onCallEncryptionChanged(const std::shared_ptr<Core> & lc, const std::shared_ptr<Call> & call, bool on, const std::string & authenticationToken) {}
			
			LINPHONECXX_PUBLIC virtual void onIsComposingReceived(const std::shared_ptr<Core> & lc, const std::shared_ptr<ChatRoom> & room) {}
			
			LINPHONECXX_PUBLIC virtual void onLogCollectionUploadProgressIndication(const std::shared_ptr<Core> & lc, size_t offset, size_t total) {}
			
			LINPHONECXX_PUBLIC virtual void onVersionUpdateCheckResultReceived(const std::shared_ptr<Core> & lc, VersionUpdateCheckResult result, const std::string & version, const std::string & url) {}
			
			LINPHONECXX_PUBLIC virtual void onGlobalStateChanged(const std::shared_ptr<Core> & lc, GlobalState gstate, const std::string & message) {}
			
			LINPHONECXX_PUBLIC virtual void onLogCollectionUploadStateChanged(const std::shared_ptr<Core> & lc, CoreLogCollectionUploadState state, const std::string & info) {}
			
			LINPHONECXX_PUBLIC virtual void onDtmfReceived(const std::shared_ptr<Core> & lc, const std::shared_ptr<Call> & call, int dtmf) {}
			

		
		
		
	};

};

#endif // _LINPHONE_CORE_LISTENER_HH
