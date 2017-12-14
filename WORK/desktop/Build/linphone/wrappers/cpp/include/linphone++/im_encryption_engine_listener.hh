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

#ifndef _LINPHONE_IM_ENCRYPTION_ENGINE_LISTENER_HH
#define _LINPHONE_IM_ENCRYPTION_ENGINE_LISTENER_HH

#include <memory>
#include <cstdint>
#include "chat_room.hh"
#include "chat_message.hh"
#include "object.hh"







namespace linphone {

	class ImEncryptionEngine;

	class ImEncryptionEngineListener: public Listener {
	
		public:
			

	
		public:
			
		
			LINPHONECXX_PUBLIC virtual bool onIsEncryptionEnabledForFileTransfer(const std::shared_ptr<ImEncryptionEngine> & engine, const std::shared_ptr<ChatRoom> & room) = 0;
			
			LINPHONECXX_PUBLIC virtual void onGenerateFileTransferKey(const std::shared_ptr<ImEncryptionEngine> & engine, const std::shared_ptr<ChatRoom> & room, const std::shared_ptr<ChatMessage> & msg) {}
			
			LINPHONECXX_PUBLIC virtual int onProcessUploadingFile(const std::shared_ptr<ImEncryptionEngine> & engine, const std::shared_ptr<ChatMessage> & msg, size_t offset, const uint8_t * buffer, size_t * size, uint8_t * encryptedBuffer) = 0;
			
			LINPHONECXX_PUBLIC virtual int onProcessDownloadingFile(const std::shared_ptr<ImEncryptionEngine> & engine, const std::shared_ptr<ChatMessage> & msg, size_t offset, const uint8_t * buffer, size_t size, uint8_t * decryptedBuffer) = 0;
			
			LINPHONECXX_PUBLIC virtual int onProcessOutgoingMessage(const std::shared_ptr<ImEncryptionEngine> & engine, const std::shared_ptr<ChatRoom> & room, const std::shared_ptr<ChatMessage> & msg) = 0;
			
			LINPHONECXX_PUBLIC virtual int onProcessIncomingMessage(const std::shared_ptr<ImEncryptionEngine> & engine, const std::shared_ptr<ChatRoom> & room, const std::shared_ptr<ChatMessage> & msg) = 0;
			

		
		
		
	};

};

#endif // _LINPHONE_IM_ENCRYPTION_ENGINE_LISTENER_HH
