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

#ifndef _LINPHONE_CHAT_MESSAGE_LISTENER_HH
#define _LINPHONE_CHAT_MESSAGE_LISTENER_HH

#include <memory>
#include "content.hh"
#include "buffer.hh"
#include "enums.hh"
#include "object.hh"







namespace linphone {

	class ChatMessage;

	class ChatMessageListener: public Listener {
	
		public:
			

	
		public:
			
		
			LINPHONECXX_PUBLIC virtual void onFileTransferRecv(const std::shared_ptr<ChatMessage> & message, const std::shared_ptr<const Content> & content, const std::shared_ptr<const Buffer> & buffer) {}
			
			LINPHONECXX_PUBLIC virtual std::shared_ptr<Buffer> onFileTransferSend(const std::shared_ptr<ChatMessage> & message, const std::shared_ptr<const Content> & content, size_t offset, size_t size) = 0;
			
			LINPHONECXX_PUBLIC virtual void onFileTransferProgressIndication(const std::shared_ptr<ChatMessage> & message, const std::shared_ptr<const Content> & content, size_t offset, size_t total) {}
			
			LINPHONECXX_PUBLIC virtual void onMsgStateChanged(const std::shared_ptr<ChatMessage> & msg, ChatMessageState state) {}
			

		
		
		
	};

};

#endif // _LINPHONE_CHAT_MESSAGE_LISTENER_HH
