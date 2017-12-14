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

#ifndef _LINPHONE_CALL_HH
#define _LINPHONE_CALL_HH

#include <memory>
#include <string>
#include "address.hh"
#include "call_params.hh"
#include "player.hh"
#include "conference.hh"
#include "call_log.hh"
#include "enums.hh"
#include "core.hh"
#include "error_info.hh"
#include "chat_room.hh"
#include "call_stats.hh"
#include "info_message.hh"
#include "call_listener.hh"
#include "object.hh"





struct _LinphoneCall;


namespace linphone {


	/**
	 * @brief The LinphoneCall object represents a call issued or received by the
	 * LinphoneCore. 
	 */
	class Call: public MultiListenableObject {
	
		public:
			Call(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneCall *cPtr() {return (_LinphoneCall *)mPrivPtr;}
			

			LINPHONECXX_PUBLIC virtual ~Call();
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<CallListener> &listener);
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<CallListener> &listener);
	
		public:
			
		
			/**
			 * @brief Returns the to address with its headers associated to this call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getToAddress() const;
			
			/**
			 * @brief Returns call parameters proposed by remote. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const CallParams> getRemoteParams();
			
			/**
			 * @brief Returns the call object this call is replacing, if any. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> getReplacedCall();
			
			/**
			 * @brief Returns TRUE if echo limiter is enabled. 
			 */
			LINPHONECXX_PUBLIC bool echoLimiterEnabled() const;
			
			/**
			 * @brief Enables or disable echo limiter for this call. 
			 */
			LINPHONECXX_PUBLIC void enableEchoLimiter(bool val);
			
			/**
			 * @brief Get a player associated with the call to play a local file and stream it
			 * to the remote peer. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Player> getPlayer();
			
			/**
			 * @brief Gets the refer-to uri (if the call was transfered). 
			 */
			LINPHONECXX_PUBLIC std::string getReferTo() const;
			
			/**
			 * @brief Obtain real-time quality rating of the call. 
			 */
			LINPHONECXX_PUBLIC float getCurrentQuality();
			
			/**
			 * @brief Returns call's duration in seconds. 
			 */
			LINPHONECXX_PUBLIC int getDuration() const;
			
			/**
			 * @brief Returns call quality averaged over all the duration of the call. 
			 */
			LINPHONECXX_PUBLIC float getAverageQuality();
			
			/**
			 * @brief Return the associated conference object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Conference> getConference() const;
			
			/**
			 * @brief Returns the remote address associated to this call as a string. 
			 */
			LINPHONECXX_PUBLIC std::string getRemoteAddressAsString() const;
			
			/**
			 * @brief Gets the call log associated to this call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<CallLog> getCallLog() const;
			
			/**
			 * @brief Get the mesured record volume level (sent to remote) in dbm0. 
			 */
			LINPHONECXX_PUBLIC float getRecordVolume();
			
			/**
			 * @brief Retrieves the call's current state. 
			 */
			LINPHONECXX_PUBLIC CallState getState() const;
			
			/**
			 * @brief Returns local parameters associated with the call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const CallParams> getParams();
			
			/**
			 * @brief Set call parameters - advanced and not recommended feature - use with
			 * caution. 
			 */
			LINPHONECXX_PUBLIC void setParams(const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Returns the diversion address associated to this call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getDiversionAddress() const;
			
			/**
			 * @brief Get speaker volume gain. 
			 */
			LINPHONECXX_PUBLIC float getSpeakerVolumeGain() const;
			
			/**
			 * @brief Set speaker volume gain. 
			 */
			LINPHONECXX_PUBLIC void setSpeakerVolumeGain(float volume);
			
			/**
			 * @brief Get the mesured playback volume level (received from remote) in dbm0. 
			 */
			LINPHONECXX_PUBLIC float getPlayVolume();
			
			/**
			 * @brief Get the core that has created the specified call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Core> getCore() const;
			
			/**
			 * @brief Returns current parameters associated to the call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const CallParams> getCurrentParams();
			
			/**
			 * @brief Returns the ZRTP authentication token to verify. 
			 */
			LINPHONECXX_PUBLIC std::string getAuthenticationToken();
			
			/**
			 * @brief Change the playback output device (currently only used for blackberry) 
			 */
			LINPHONECXX_PUBLIC void setAudioRoute(AudioRoute route);
			
			/**
			 * @brief When this call has received a transfer request, returns the new call
			 * that was automatically created as a result of the transfer. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> getTransferTargetCall() const;
			
			/**
			 * @brief Returns the remote address associated to this call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getRemoteAddress() const;
			
			/**
			 * @brief Returns full details about call errors or termination reasons. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const ErrorInfo> getErrorInfo() const;
			
			/**
			 * @brief Returns whether ZRTP authentication token is verified. 
			 */
			LINPHONECXX_PUBLIC bool getAuthenticationTokenVerified();
			
			/**
			 * @brief Set the result of ZRTP short code verification by user. 
			 */
			LINPHONECXX_PUBLIC void setAuthenticationTokenVerified(bool verified);
			
			/**
			 * @brief Returns the reason for a call termination (either error or normal
			 * termination) 
			 */
			LINPHONECXX_PUBLIC Reason getReason() const;
			
			/**
			 * @brief Get the native window handle of the video window, casted as an unsigned
			 * long. 
			 */
			LINPHONECXX_PUBLIC void * getNativeVideoWindowId() const;
			
			/**
			 * @brief Set the native video window id where the video is to be displayed. 
			 */
			LINPHONECXX_PUBLIC void setNativeVideoWindowId(void * id);
			
			/**
			 * @brief Returns TRUE if camera pictures are allowed to be sent to the remote
			 * party. 
			 */
			LINPHONECXX_PUBLIC bool cameraEnabled() const;
			
			/**
			 * @brief Indicate whether camera input should be sent to remote end. 
			 */
			LINPHONECXX_PUBLIC void enableCamera(bool enabled);
			
			/**
			 * @brief Returns the far end's sip contact as a string, if available. 
			 */
			LINPHONECXX_PUBLIC std::string getRemoteContact();
			
			/**
			 * @brief Returns the number of stream for the given call. 
			 */
			LINPHONECXX_PUBLIC int getStreamCount();
			
			/**
			 * @brief Returns TRUE if echo cancellation is enabled. 
			 */
			LINPHONECXX_PUBLIC bool echoCancellationEnabled();
			
			/**
			 * @brief Enables or disable echo cancellation for this call. 
			 */
			LINPHONECXX_PUBLIC void enableEchoCancellation(bool val);
			
			/**
			 * @brief Returns the current transfer state, if a transfer has been initiated
			 * from this call. 
			 */
			LINPHONECXX_PUBLIC CallState getTransferState();
			
			/**
			 * @brief Returns the far end's user agent description string, if available. 
			 */
			LINPHONECXX_PUBLIC std::string getRemoteUserAgent();
			
			/**
			 * @brief Gets the transferer if this call was started automatically as a result
			 * of an incoming transfer request. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> getTransfererCall() const;
			
			/**
			 * @brief Get microphone volume gain. 
			 */
			LINPHONECXX_PUBLIC float getMicrophoneVolumeGain() const;
			
			/**
			 * @brief Set microphone volume gain. 
			 */
			LINPHONECXX_PUBLIC void setMicrophoneVolumeGain(float volume);
			
			/**
			 * @brief Create a new chat room for messaging from a call if not already
			 * existing, else return existing one. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ChatRoom> getChatRoom();
			
			/**
			 * @brief Returns direction of the call (incoming or outgoing). 
			 */
			LINPHONECXX_PUBLIC CallDir getDir() const;
			
			/**
			 * @brief Return a copy of the call statistics for a particular stream type. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<CallStats> getStats(StreamType type);
			
			/**
			 * @brief When receiving an incoming, accept to start a media session as
			 * early-media. 
			 */
			LINPHONECXX_PUBLIC linphone::Status acceptEarlyMediaWithParams(const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Take a photo of currently received video and write it into a jpeg file. 
			 */
			LINPHONECXX_PUBLIC linphone::Status takeVideoSnapshot(const std::string & file);
			
			/**
			 * @brief Pauses the call. 
			 */
			LINPHONECXX_PUBLIC linphone::Status pause();
			
			/**
			 * @brief Accept an incoming call, with parameters. 
			 */
			LINPHONECXX_PUBLIC linphone::Status acceptWithParams(const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Send a list of dtmf. 
			 */
			LINPHONECXX_PUBLIC linphone::Status sendDtmfs(const std::string & dtmfs);
			
			/**
			 * @brief Perform a zoom of the video displayed during a call. 
			 */
			LINPHONECXX_PUBLIC void zoomVideo(float zoomFactor, float * cx, float * cy);
			
			/**
			 * @brief Stop call recording. 
			 */
			LINPHONECXX_PUBLIC void stopRecording();
			
			/**
			 * @brief Request remote side to send us a Video Fast Update. 
			 */
			LINPHONECXX_PUBLIC void sendVfuRequest();
			
			/**
			 * @brief Tell whether a call has been asked to autoanswer. 
			 */
			LINPHONECXX_PUBLIC bool askedToAutoanswer();
			
			/**
			 * @brief Accept an early media session for an incoming call. 
			 */
			LINPHONECXX_PUBLIC linphone::Status acceptEarlyMedia();
			
			/**
			 * @brief Decline a pending incoming call, with a reason. 
			 */
			LINPHONECXX_PUBLIC linphone::Status decline(Reason reason);
			
			/**
			 * @brief Call generic OpenGL render for a given call. 
			 */
			LINPHONECXX_PUBLIC void oglRender() const;
			
			/**
			 * @brief Transfers a call to destination of another running call. 
			 */
			LINPHONECXX_PUBLIC linphone::Status transferToAnother(const std::shared_ptr<Call> & dest);
			
			/**
			 * @brief Resumes a call. 
			 */
			LINPHONECXX_PUBLIC linphone::Status resume();
			
			/**
			 * @brief Performs a simple call transfer to the specified destination. 
			 */
			LINPHONECXX_PUBLIC linphone::Status transfer(const std::string & referTo);
			
			/**
			 * @brief Take a photo of currently captured video and write it into a jpeg file. 
			 */
			LINPHONECXX_PUBLIC linphone::Status takePreviewSnapshot(const std::string & file);
			
			/**
			 * @brief Updates a running call according to supplied call parameters or
			 * parameters changed in the LinphoneCore. 
			 */
			LINPHONECXX_PUBLIC linphone::Status update(const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Accept call modifications initiated by other end. 
			 */
			LINPHONECXX_PUBLIC linphone::Status acceptUpdate(const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Redirect the specified call to the given redirect URI. 
			 */
			LINPHONECXX_PUBLIC linphone::Status redirect(const std::string & redirectUri);
			
			/**
			 * @brief Send the specified dtmf. 
			 */
			LINPHONECXX_PUBLIC linphone::Status sendDtmf(char dtmf);
			
			/**
			 * @brief Terminates a call. 
			 */
			LINPHONECXX_PUBLIC linphone::Status terminate();
			
			/**
			 * @brief Indicates whether an operation is in progress at the media side. 
			 */
			LINPHONECXX_PUBLIC bool mediaInProgress();
			
			/**
			 * @brief Stop current DTMF sequence sending. 
			 */
			LINPHONECXX_PUBLIC void cancelDtmfs();
			
			/**
			 * @brief Decline a pending incoming call, with a LinphoneErrorInfo object. 
			 */
			LINPHONECXX_PUBLIC int declineWithErrorInfo(const std::shared_ptr<const ErrorInfo> & ei);
			
			/**
			 * @brief Start call recording. 
			 */
			LINPHONECXX_PUBLIC void startRecording();
			
			/**
			 * @brief Send a LinphoneInfoMessage through an established call. 
			 */
			LINPHONECXX_PUBLIC linphone::Status sendInfoMessage(const std::shared_ptr<const InfoMessage> & info);
			
			/**
			 * @brief Returns true if this calls has received a transfer that has not been
			 * executed yet. 
			 */
			LINPHONECXX_PUBLIC bool hasTransferPending() const;
			
			/**
			 * @brief When receiving a LinphoneCallUpdatedByRemote state notification, prevent
			 * LinphoneCore from performing an automatic answer. 
			 */
			LINPHONECXX_PUBLIC linphone::Status deferUpdate();
			
			/**
			 * @brief Accept an incoming call. 
			 */
			LINPHONECXX_PUBLIC linphone::Status accept();
			
			/**
			 * @brief Terminates a call. 
			 */
			LINPHONECXX_PUBLIC linphone::Status terminateWithErrorInfo(const std::shared_ptr<const ErrorInfo> & ei);
			

		private:
			static void *createCallbacks(void *userData);
		
		
		private:
			void *mCallbacks;
		
	};

};

#endif // _LINPHONE_CALL_HH
