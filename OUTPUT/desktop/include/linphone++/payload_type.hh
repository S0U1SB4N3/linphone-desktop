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

#ifndef _LINPHONE_PAYLOAD_TYPE_HH
#define _LINPHONE_PAYLOAD_TYPE_HH

#include <string>
#include "object.hh"





struct _LinphonePayloadType;


namespace linphone {


	/**
	 * @brief Object representing an RTP payload type. 
	 */
	class PayloadType: public Object {
	
		public:
			PayloadType(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePayloadType *cPtr() {return (_LinphonePayloadType *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get the number of channels. 
			 */
			LINPHONECXX_PUBLIC int getChannels() const;
			
			/**
			 * @brief Return a string describing a payload type. 
			 */
			LINPHONECXX_PUBLIC std::string getDescription() const;
			
			/**
			 * @brief Get the clock rate of a payload type. 
			 */
			LINPHONECXX_PUBLIC int getClockRate() const;
			
			/**
			 * @brief Returns the payload type number assigned for this codec. 
			 */
			LINPHONECXX_PUBLIC int getNumber() const;
			
			/**
			 * @brief Force a number for a payload type. 
			 */
			LINPHONECXX_PUBLIC void setNumber(int number);
			
			/**
			 * @brief Get the format parameters for outgoing streams. 
			 */
			LINPHONECXX_PUBLIC std::string getSendFmtp() const;
			
			/**
			 * @brief Set the format parameters for outgoing streams. 
			 */
			LINPHONECXX_PUBLIC void setSendFmtp(const std::string & sendFmtp);
			
			/**
			 * @brief Get a description of the encoder used to provide a payload type. 
			 */
			LINPHONECXX_PUBLIC std::string getEncoderDescription() const;
			
			/**
			 * @brief Get the format parameters for incoming streams. 
			 */
			LINPHONECXX_PUBLIC std::string getRecvFmtp() const;
			
			/**
			 * @brief Set the format parameters for incoming streams. 
			 */
			LINPHONECXX_PUBLIC void setRecvFmtp(const std::string & recvFmtp);
			
			/**
			 * @brief Tells whether the specified payload type represents a variable bitrate
			 * codec. 
			 */
			LINPHONECXX_PUBLIC bool isVbr() const;
			
			/**
			 * @brief Get the normal bitrate in bits/s. 
			 */
			LINPHONECXX_PUBLIC int getNormalBitrate() const;
			
			/**
			 * @brief Change the normal bitrate of a payload type. 
			 */
			LINPHONECXX_PUBLIC void setNormalBitrate(int bitrate);
			
			/**
			 * @brief Check whether the payload is usable according the bandwidth targets set
			 * in the core. 
			 */
			LINPHONECXX_PUBLIC bool isUsable() const;
			
			/**
			 * @brief Get the type of a payload type. 
			 */
			LINPHONECXX_PUBLIC int getType() const;
			
			/**
			 * @brief Get the mime type. 
			 */
			LINPHONECXX_PUBLIC std::string getMimeType() const;
			
			/**
			 * @brief Check whether a palyoad type is enabled. 
			 */
			LINPHONECXX_PUBLIC bool enabled() const;
			
			/**
			 * @brief Enable/disable a payload type. 
			 */
			LINPHONECXX_PUBLIC int enable(bool enabled);
			

		
		
		
	};

};

#endif // _LINPHONE_PAYLOAD_TYPE_HH
