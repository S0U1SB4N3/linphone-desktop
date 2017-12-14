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

#ifndef _LINPHONE_CHAT_ROOM_HH
#define _LINPHONE_CHAT_ROOM_HH

#include <memory>
#include <cstdint>
#include <list>
#include <string>
#include "core.hh"
#include "call.hh"
#include "address.hh"
#include "chat_message.hh"
#include "enums.hh"
#include "content.hh"
#include "object.hh"





struct _LinphoneChatRoom;


namespace linphone {


	/**
	 * @brief A chat room is the place where text messages are exchanged. 
	 */
	class ChatRoom: public Object {
	
		public:
			ChatRoom(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneChatRoom *cPtr() {return (_LinphoneChatRoom *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Returns back pointer to #LinphoneCore object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Core> getCore();
			
			/**
			 * @brief Tells whether the remote is currently composing a message. 
			 */
			LINPHONECXX_PUBLIC bool isRemoteComposing() const;
			
			/**
			 * @brief Gets the number of unread messages in the chatroom. 
			 */
			LINPHONECXX_PUBLIC int getUnreadMessagesCount();
			
			/**
			 * @brief When realtime text is enabled
			 * linphone_call_params_realtime_text_enabled, LinphoneCoreIsComposingReceivedCb
			 * is call everytime a char is received from peer. 
			 */
			LINPHONECXX_PUBLIC uint32_t getChar() const;
			
			/**
			 * @brief get Curent Call associated to this chatroom if any To commit a message,
			 * use linphone_chat_room_send_message 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> getCall() const;
			
			/**
			 * @brief Gets the number of messages in a chat room. 
			 */
			LINPHONECXX_PUBLIC int getHistorySize();
			
			/**
			 * @brief get peer address associated to  this #LinphoneChatRoom 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getPeerAddress();
			
			/**
			 * @brief Send a message to peer member of this chat room. 
			 */
			LINPHONECXX_PUBLIC void sendChatMessage(const std::shared_ptr<ChatMessage> & msg);
			
			/**
			 * @brief Gets nb_message most recent messages from cr chat room, sorted from
			 * oldest to most recent. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<ChatMessage> > getHistory(int nbMessage);
			
			/**
			 * @brief Create a message attached to a dedicated chat room;. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ChatMessage> createMessage(const std::string & message, const std::string & externalBodyUrl, ChatMessageState state, time_t time, bool isRead, bool isIncoming);
			
			/**
			 * @brief Mark all messages of the conversation as read. 
			 */
			LINPHONECXX_PUBLIC void markAsRead();
			
			/**
			 * @brief Notifies the destination of the chat message being composed that the
			 * user is typing a new message. 
			 */
			LINPHONECXX_PUBLIC void compose();
			
			/**
			 * @brief Delete all messages from the history. 
			 */
			LINPHONECXX_PUBLIC void deleteHistory();
			
			/**
			 * @brief Create a message attached to a dedicated chat room with a particular
			 * content. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ChatMessage> createFileTransferMessage(const std::shared_ptr<const Content> & initialContent);
			
			/**
			 * @brief Create a message attached to a dedicated chat room;. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ChatMessage> createMessage(const std::string & message);
			
			/**
			 * @brief Gets the partial list of messages in the given range, sorted from oldest
			 * to most recent. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<ChatMessage> > getHistoryRange(int begin, int end);
			
			/**
			 * @brief Returns true if lime is available for given peer. 
			 */
			LINPHONECXX_PUBLIC bool limeAvailable();
			
			/**
			 * @brief Delete a message from the chat room history. 
			 */
			LINPHONECXX_PUBLIC void deleteMessage(const std::shared_ptr<ChatMessage> & msg);
			

		
		
		
	};

};

#endif // _LINPHONE_CHAT_ROOM_HH
