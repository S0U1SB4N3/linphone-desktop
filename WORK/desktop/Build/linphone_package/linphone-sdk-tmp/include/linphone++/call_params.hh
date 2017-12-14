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

#ifndef _LINPHONE_CALL_PARAMS_HH
#define _LINPHONE_CALL_PARAMS_HH

#include <memory>
#include <string>
#include "payload_type.hh"
#include "video_definition.hh"
#include "enums.hh"
#include "object.hh"





struct _LinphoneCallParams;


namespace linphone {


	/**
	 * @brief The LinphoneCallParams is an object containing various call related
	 * parameters. 
	 */
	class CallParams: public Object {
	
		public:
			CallParams(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneCallParams *cPtr() {return (_LinphoneCallParams *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get the framerate of the video that is sent. 
			 */
			LINPHONECXX_PUBLIC float getSentFramerate() const;
			
			/**
			 * @brief Use to get multicast state of video stream. 
			 */
			LINPHONECXX_PUBLIC bool videoMulticastEnabled() const;
			
			/**
			 * @brief Use to enable multicast rtp for video stream. 
			 */
			LINPHONECXX_PUBLIC void enableVideoMulticast(bool yesno);
			
			/**
			 * @brief Tell whether the call is part of the locally managed conference. 
			 */
			LINPHONECXX_PUBLIC bool getLocalConferenceMode() const;
			
			/**
			 * @brief Get the text payload type that has been selected by a call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PayloadType> getUsedTextPayloadType() const;
			
			/**
			 * @brief Get the definition of the sent video. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const VideoDefinition> getSentVideoDefinition() const;
			
			/**
			 * @brief Get the RTP profile being used. 
			 */
			LINPHONECXX_PUBLIC std::string getRtpProfile() const;
			
			/**
			 * @brief Get the definition of the received video. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const VideoDefinition> getReceivedVideoDefinition() const;
			
			/**
			 * @brief Get requested level of privacy for the call. 
			 */
			LINPHONECXX_PUBLIC unsigned int getPrivacy() const;
			
			/**
			 * @brief Set requested level of privacy for the call. 
			 */
			LINPHONECXX_PUBLIC void setPrivacy(unsigned int privacy);
			
			/**
			 * @brief Get the video stream direction. 
			 */
			LINPHONECXX_PUBLIC MediaDirection getVideoDirection() const;
			
			/**
			 * @brief Set the video stream direction. 
			 */
			LINPHONECXX_PUBLIC void setVideoDirection(MediaDirection dir);
			
			/**
			 * @brief Get the audio payload type that has been selected by a call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PayloadType> getUsedAudioPayloadType() const;
			
			/**
			 * @brief Get the kind of media encryption selected for the call. 
			 */
			LINPHONECXX_PUBLIC MediaEncryption getMediaEncryption() const;
			
			/**
			 * @brief Set requested media encryption for a call. 
			 */
			LINPHONECXX_PUBLIC void setMediaEncryption(MediaEncryption enc);
			
			/**
			 * @brief Get the video payload type that has been selected by a call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PayloadType> getUsedVideoPayloadType() const;
			
			/**
			 * @brief Indicate whether sending of early media was enabled. 
			 */
			LINPHONECXX_PUBLIC bool earlyMediaSendingEnabled() const;
			
			/**
			 * @brief Enable sending of real early media (during outgoing calls). 
			 */
			LINPHONECXX_PUBLIC void enableEarlyMediaSending(bool enabled);
			
			/**
			 * @brief Get the path for the audio recording of the call. 
			 */
			LINPHONECXX_PUBLIC std::string getRecordFile() const;
			
			/**
			 * @brief Enable recording of the call. 
			 */
			LINPHONECXX_PUBLIC void setRecordFile(const std::string & path);
			
			/**
			 * @brief Use to get multicast state of audio stream. 
			 */
			LINPHONECXX_PUBLIC bool audioMulticastEnabled() const;
			
			/**
			 * @brief Use to enable multicast rtp for audio stream. 
			 */
			LINPHONECXX_PUBLIC void enableAudioMulticast(bool yesno);
			
			/**
			 * @brief Tell whether video is enabled or not. 
			 */
			LINPHONECXX_PUBLIC bool videoEnabled() const;
			
			/**
			 * @brief Enable video stream. 
			 */
			LINPHONECXX_PUBLIC void enableVideo(bool enabled);
			
			/**
			 * @brief Get the framerate of the video that is received. 
			 */
			LINPHONECXX_PUBLIC float getReceivedFramerate() const;
			
			/**
			 * @brief Tell whether audio is enabled or not. 
			 */
			LINPHONECXX_PUBLIC bool audioEnabled() const;
			
			/**
			 * @brief Enable audio stream. 
			 */
			LINPHONECXX_PUBLIC void enableAudio(bool enabled);
			
			/**
			 * @brief Get the audio stream direction. 
			 */
			LINPHONECXX_PUBLIC MediaDirection getAudioDirection() const;
			
			/**
			 * @brief Set the audio stream direction. 
			 */
			LINPHONECXX_PUBLIC void setAudioDirection(MediaDirection dir);
			
			/**
			 * @brief Tell whether the call has been configured in low bandwidth mode or not. 
			 */
			LINPHONECXX_PUBLIC bool lowBandwidthEnabled() const;
			
			/**
			 * @brief Indicate low bandwith mode. 
			 */
			LINPHONECXX_PUBLIC void enableLowBandwidth(bool enabled);
			
			/**
			 * @brief Refine bandwidth settings for this call by setting a bandwidth limit for
			 * audio streams. 
			 */
			LINPHONECXX_PUBLIC void setAudioBandwidthLimit(int bw);
			
			/**
			 * @brief Get the session name of the media session (ie in SDP). 
			 */
			LINPHONECXX_PUBLIC std::string getSessionName() const;
			
			/**
			 * @brief Set the session name of the media session (ie in SDP). 
			 */
			LINPHONECXX_PUBLIC void setSessionName(const std::string & name);
			
			/**
			 * @brief Use to get real time text following rfc4103. 
			 */
			LINPHONECXX_PUBLIC bool realtimeTextEnabled() const;
			
			/**
			 * @brief Use to enable real time text following rfc4103. 
			 */
			LINPHONECXX_PUBLIC linphone::Status enableRealtimeText(bool yesno);
			
			/**
			 * @brief Add a custom attribute related to a specific stream in the SDP exchanged
			 * within SIP messages during a call. 
			 */
			LINPHONECXX_PUBLIC void addCustomSdpMediaAttribute(StreamType type, const std::string & attributeName, const std::string & attributeValue);
			
			/**
			 * @brief Copy an existing LinphoneCallParams object to a new LinphoneCallParams
			 * object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<CallParams> copy() const;
			
			/**
			 * @brief Get a custom SDP attribute that is related to all the streams. 
			 */
			LINPHONECXX_PUBLIC std::string getCustomSdpAttribute(const std::string & attributeName) const;
			
			/**
			 * @brief Clear the custom SDP attributes related to all the streams in the SDP
			 * exchanged within SIP messages during a call. 
			 */
			LINPHONECXX_PUBLIC void clearCustomSdpAttributes();
			
			/**
			 * @brief Add a custom attribute related to all the streams in the SDP exchanged
			 * within SIP messages during a call. 
			 */
			LINPHONECXX_PUBLIC void addCustomSdpAttribute(const std::string & attributeName, const std::string & attributeValue);
			
			/**
			 * @brief Get a custom SIP header. 
			 */
			LINPHONECXX_PUBLIC std::string getCustomHeader(const std::string & headerName) const;
			
			/**
			 * @brief Add a custom SIP header in the INVITE for a call. 
			 */
			LINPHONECXX_PUBLIC void addCustomHeader(const std::string & headerName, const std::string & headerValue);
			
			/**
			 * @brief Clear the custom SDP attributes related to a specific stream in the SDP
			 * exchanged within SIP messages during a call. 
			 */
			LINPHONECXX_PUBLIC void clearCustomSdpMediaAttributes(StreamType type);
			
			/**
			 * @brief Get a custom SDP attribute that is related to a specific stream. 
			 */
			LINPHONECXX_PUBLIC std::string getCustomSdpMediaAttribute(StreamType type, const std::string & attributeName) const;
			

		
		
		
	};

};

#endif // _LINPHONE_CALL_PARAMS_HH
