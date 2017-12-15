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

#ifndef _LINPHONE_CHAT_MESSAGE_HH
#define _LINPHONE_CHAT_MESSAGE_HH

#include <memory>
#include <string>
#include <cstdint>
#include "address.hh"
#include "content.hh"
#include "enums.hh"
#include "error_info.hh"
#include "chat_room.hh"
#include "chat_message_listener.hh"
#include "object.hh"





struct _LinphoneChatMessage;


namespace linphone {


	/**
	 * @brief A chat room message to hold content to be sent. 
	 */
	class ChatMessage: public ListenableObject {
	
		public:
			ChatMessage(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneChatMessage *cPtr() {return (_LinphoneChatMessage *)mPrivPtr;}
			
			LINPHONECXX_PUBLIC void setListener(const std::shared_ptr<ChatMessageListener> &listener);

	
		public:
			
		
			/**
			 * @brief Get destination of the message. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getToAddress() const;
			
			/**
			 * @brief Set destination of the message. 
			 */
			LINPHONECXX_PUBLIC void setToAddress(const std::shared_ptr<const Address> & addr);
			
			/**
			 * @brief Get origin of the message. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getFromAddress() const;
			
			/**
			 * @brief Set origin of the message. 
			 */
			LINPHONECXX_PUBLIC void setFromAddress(const std::shared_ptr<const Address> & from);
			
			/**
			 * @brief Linphone message has an app-specific field that can store a text. 
			 */
			LINPHONECXX_PUBLIC std::string getAppdata() const;
			
			/**
			 * @brief Linphone message has an app-specific field that can store a text. 
			 */
			LINPHONECXX_PUBLIC void setAppdata(const std::string & data);
			
			/**
			 * @brief Linphone message can carry external body as defined by rfc2017. 
			 */
			LINPHONECXX_PUBLIC std::string getExternalBodyUrl() const;
			
			/**
			 * @brief Linphone message can carry external body as defined by rfc2017. 
			 */
			LINPHONECXX_PUBLIC void setExternalBodyUrl(const std::string & url);
			
			/**
			 * @brief Get text part of this message. 
			 */
			LINPHONECXX_PUBLIC std::string getText() const;
			
			/**
			 * @brief Set a chat message text to be sent by linphone_chat_room_send_message. 
			 */
			LINPHONECXX_PUBLIC int setText(const std::string & text);
			
			/**
			 * @brief Get if a chat message is to be stored. 
			 */
			LINPHONECXX_PUBLIC bool getToBeStored() const;
			
			/**
			 * @brief Set if a chat message is to be stored. 
			 */
			LINPHONECXX_PUBLIC void setToBeStored(bool toBeStored);
			
			/**
			 * @brief Get if the message was encrypted when transfered. 
			 */
			LINPHONECXX_PUBLIC bool isSecured();
			
			/**
			 * @brief Get the file_transfer_information (used by call backs to recover
			 * informations during a rcs file transfer) 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Content> getFileTransferInformation() const;
			
			/**
			 * @brief Return whether or not a chat message is a file tranfer. 
			 */
			LINPHONECXX_PUBLIC bool isFileTransfer() const;
			
			/**
			 * @brief Get the state of the message. 
			 */
			LINPHONECXX_PUBLIC ChatMessageState getState() const;
			
			/**
			 * @brief Returns the id used to identify this message in the storage database. 
			 */
			LINPHONECXX_PUBLIC unsigned int getStorageId();
			
			/**
			 * @brief Returns the origin address of a message if it was a outgoing message, or
			 * the destination address if it was an incoming message. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> getLocalAddress() const;
			
			/**
			 * @brief Get the message identifier. 
			 */
			LINPHONECXX_PUBLIC std::string getMessageId() const;
			
			/**
			 * @brief Return whether or not a chat message is a text. 
			 */
			LINPHONECXX_PUBLIC bool isText() const;
			
			/**
			 * @brief Get full details about delivery error of a chat message. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const ErrorInfo> getErrorInfo() const;
			
			/**
			 * @brief Returns TRUE if the message has been read, otherwise returns FALSE. 
			 */
			LINPHONECXX_PUBLIC bool isRead();
			
			/**
			 * @brief Get the path to the file to read from or write to during the file
			 * transfer. 
			 */
			LINPHONECXX_PUBLIC std::string getFileTransferFilepath();
			
			/**
			 * @brief Set the path to the file to read from or write to during the file
			 * transfer. 
			 */
			LINPHONECXX_PUBLIC void setFileTransferFilepath(const std::string & filepath);
			
			/**
			 * @brief Get the content type of a chat message. 
			 */
			LINPHONECXX_PUBLIC std::string getContentType() const;
			
			/**
			 * @brief Set the content type of a chat message. 
			 */
			LINPHONECXX_PUBLIC void setContentType(const std::string & contentType);
			
			/**
			 * @brief Returns TRUE if the message has been sent, returns FALSE if the message
			 * has been received. 
			 */
			LINPHONECXX_PUBLIC bool isOutgoing();
			
			/**
			 * @brief Get the time the message was sent. 
			 */
			LINPHONECXX_PUBLIC time_t getTime() const;
			
			/**
			 * @brief Returns the chatroom this message belongs to. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ChatRoom> getChatRoom();
			
			/**
			 * @brief Resend a chat message if it is in the 'not delivered' state for whatever
			 * reason. 
			 */
			LINPHONECXX_PUBLIC void resend();
			
			/**
			 * @brief Retrieve a custom header value given its name. 
			 */
			LINPHONECXX_PUBLIC std::string getCustomHeader(const std::string & headerName);
			
			/**
			 * @brief Duplicate a LinphoneChatMessage. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ChatMessage> clone() const;
			
			/**
			 * @brief Start the download of the file referenced in a LinphoneChatMessage from
			 * remote server. 
			 */
			LINPHONECXX_PUBLIC linphone::Status downloadFile();
			
			/**
			 * @brief Removes a custom header from the message. 
			 */
			LINPHONECXX_PUBLIC void removeCustomHeader(const std::string & headerName);
			
			/**
			 * @brief Add custom headers to the message. 
			 */
			LINPHONECXX_PUBLIC void addCustomHeader(const std::string & headerName, const std::string & headerValue);
			
			/**
			 * @brief Cancel an ongoing file transfer attached to this message. 
			 */
			LINPHONECXX_PUBLIC void cancelFileTransfer();
			
			/**
			 * @brief Fulfill a chat message char by char. 
			 */
			LINPHONECXX_PUBLIC linphone::Status putChar(uint32_t character);
			

		
		
		
	};

};

#endif // _LINPHONE_CHAT_MESSAGE_HH
