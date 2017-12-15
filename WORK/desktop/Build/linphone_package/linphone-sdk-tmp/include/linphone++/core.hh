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

#ifndef _LINPHONE_CORE_HH
#define _LINPHONE_CORE_HH

#include <string>
#include <list>
#include <memory>
#include "enums.hh"
#include "object.hh"





struct _LinphoneCore;


namespace linphone {

	class FriendList;
	class CallLog;
	class VideoDefinition;
	class Address;
	class NatPolicy;
	class PayloadType;
	class ImEncryptionEngine;
	class Call;
	class Range;
	class PresenceModel;
	class Transports;
	class Conference;
	class AuthInfo;
	class Tunnel;
	class ProxyConfig;
	class ImNotifPolicy;
	class ChatRoom;
	class Config;
	class VideoActivationPolicy;
	class Friend;
	class PresencePerson;
	class ConferenceParams;
	class Event;
	class PresenceService;
	class AccountCreator;
	class CallParams;
	class Content;
	class Player;
	class InfoMessage;
	class PresenceNote;
	class PresenceActivity;
	class CoreListener;

	/**
	 * @brief Linphone core main object created by function linphone_core_new() . 
	 */
	class Core: public MultiListenableObject {
		friend class Factory;
	
		public:
			Core(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneCore *cPtr() {return (_LinphoneCore *)mPrivPtr;}
			

			LINPHONECXX_PUBLIC virtual ~Core();
			LINPHONECXX_PUBLIC void addListener(const std::shared_ptr<CoreListener> &listener);
			LINPHONECXX_PUBLIC void removeListener(const std::shared_ptr<CoreListener> &listener);
	
		public:
			
		
			/**
			 * @brief Gets the database filename where friends will be stored. 
			 */
			LINPHONECXX_PUBLIC std::string getFriendsDatabasePath();
			
			/**
			 * @brief Sets the database filename where friends will be stored. 
			 */
			LINPHONECXX_PUBLIC void setFriendsDatabasePath(const std::string & path);
			
			/**
			 * @brief Get the name of the mediastreamer2 filter used for echo cancelling. 
			 */
			LINPHONECXX_PUBLIC std::string getEchoCancellerFilterName() const;
			
			/**
			 * @brief Set the name of the mediastreamer2 filter to be used for echo
			 * cancelling. 
			 */
			LINPHONECXX_PUBLIC void setEchoCancellerFilterName(const std::string & filtername);
			
			/**
			 * @brief Forces liblinphone to use the supplied list of dns servers, instead of
			 * system's ones. 
			 */
			LINPHONECXX_PUBLIC void setDnsServers(const std::list<std::string > & servers);
			
			/**
			 * @brief Gets the name of the currently assigned sound device for ringing. 
			 */
			LINPHONECXX_PUBLIC std::string getRingerDevice();
			
			/**
			 * @brief Sets the sound device used for ringing. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setRingerDevice(const std::string & devid);
			
			/**
			 * @brief Retrieves the first list of LinphoneFriend from the core. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<FriendList> getDefaultFriendList() const;
			
			/**
			 * @brief Get the latest outgoing call log. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<CallLog> getLastOutgoingCallLog();
			
			/**
			 * @brief Returns the path to the wav file used for ringing back. 
			 */
			LINPHONECXX_PUBLIC std::string getRingback() const;
			
			/**
			 * @brief Sets the path to a wav file used for ringing back. 
			 */
			LINPHONECXX_PUBLIC void setRingback(const std::string & path);
			
			/**
			 * @brief Retrieve the maximum available download bandwidth. 
			 */
			LINPHONECXX_PUBLIC int getDownloadBandwidth() const;
			
			/**
			 * @brief Sets maximum available download bandwidth This is IP bandwidth, in
			 * kbit/s. 
			 */
			LINPHONECXX_PUBLIC void setDownloadBandwidth(int bw);
			
			/**
			 * @brief Gets the value of the no-rtp timeout. 
			 */
			LINPHONECXX_PUBLIC int getNortpTimeout() const;
			
			/**
			 * @brief Sets the no-rtp timeout value in seconds. 
			 */
			LINPHONECXX_PUBLIC void setNortpTimeout(int seconds);
			
			/**
			 * @brief Returns the preferred video framerate, previously set by
			 * linphone_core_set_preferred_framerate(). 
			 */
			LINPHONECXX_PUBLIC float getPreferredFramerate();
			
			/**
			 * @brief Set the preferred frame rate for video. 
			 */
			LINPHONECXX_PUBLIC void setPreferredFramerate(float fps);
			
			/**
			 * @brief Get the maximum number of simultaneous calls Linphone core can manage at
			 * a time. 
			 */
			LINPHONECXX_PUBLIC int getMaxCalls();
			
			/**
			 * @brief Set the maximum number of simultaneous calls Linphone core can manage at
			 * a time. 
			 */
			LINPHONECXX_PUBLIC void setMaxCalls(int max);
			
			/**
			 * @brief Get the path to the file storing the zrtp secrets cache. 
			 */
			LINPHONECXX_PUBLIC std::string getZrtpSecretsFile();
			
			/**
			 * @brief Set the path to the file storing the zrtp secrets cache. 
			 */
			LINPHONECXX_PUBLIC void setZrtpSecretsFile(const std::string & file);
			
			/**
			 * @brief Get the DSCP field for outgoing audio streams. 
			 */
			LINPHONECXX_PUBLIC int getAudioDscp() const;
			
			/**
			 * @brief Set the DSCP field for outgoing audio streams. 
			 */
			LINPHONECXX_PUBLIC void setAudioDscp(int dscp);
			
			/**
			 * @brief Gets the list of the available video capture devices. 
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getVideoDevices() const;
			
			/**
			 * @brief Get microphone gain in db. 
			 */
			LINPHONECXX_PUBLIC float getMicGainDb();
			
			/**
			 * @brief Allow to control microphone level: gain in db. 
			 */
			LINPHONECXX_PUBLIC void setMicGainDb(float level);
			
			/**
			 * @brief Get behaviour when encryption parameters negociation fails on outgoing
			 * call. 
			 */
			LINPHONECXX_PUBLIC bool isMediaEncryptionMandatory();
			
			/**
			 * @brief Gets the name of the currently assigned sound device for playback. 
			 */
			LINPHONECXX_PUBLIC std::string getPlaybackDevice();
			
			/**
			 * @brief Sets the sound device used for playback. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setPlaybackDevice(const std::string & devid);
			
			/**
			 * @brief Get the definition of the captured video. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const VideoDefinition> getPreviewVideoDefinition() const;
			
			/**
			 * @brief Set the video definition for the captured (preview) video. 
			 */
			LINPHONECXX_PUBLIC void setPreviewVideoDefinition(const std::shared_ptr<VideoDefinition> & vdef);
			
			/**
			 * @brief Same as linphone_core_get_primary_contact() but the result is a
			 * LinphoneAddress object instead of const char*. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> getPrimaryContactParsed();
			
			/**
			 * @brief Get The policy that is used to pass through NATs/firewalls. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<NatPolicy> getNatPolicy() const;
			
			/**
			 * @brief Set the policy to use to pass through NATs/firewalls. 
			 */
			LINPHONECXX_PUBLIC void setNatPolicy(const std::shared_ptr<NatPolicy> & policy);
			
			/**
			 * @brief Tells whether there is an incoming invite pending. 
			 */
			LINPHONECXX_PUBLIC bool isIncomingInvitePending();
			
			/**
			 * @brief Gets the TLS certificate. 
			 */
			LINPHONECXX_PUBLIC std::string getTlsCert() const;
			
			/**
			 * @brief Sets a TLS certificate used for TLS authentication The certificate won't
			 * be stored, you have to set it after each LinphoneCore startup. 
			 */
			LINPHONECXX_PUBLIC void setTlsCert(const std::string & tlsCert);
			
			/**
			 * @brief Get the path to the image file streamed when "Static picture" is set as
			 * the video device. 
			 */
			LINPHONECXX_PUBLIC std::string getStaticPicture();
			
			/**
			 * @brief Set the path to the image file to stream when "Static picture" is set as
			 * the video device. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setStaticPicture(const std::string & path);
			
			/**
			 * @brief Sets the preview video size by its name. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setPreviewVideoSizeByName(const std::string & name);
			
			/**
			 * @brief Tells whether video display is enabled. 
			 */
			LINPHONECXX_PUBLIC bool videoDisplayEnabled();
			
			/**
			 * @brief Enable or disable video display. 
			 */
			LINPHONECXX_PUBLIC void enableVideoDisplay(bool enable);
			
			/**
			 * @brief Indicates whether RFC2833 is used to send digits. 
			 */
			LINPHONECXX_PUBLIC bool getUseRfc2833ForDtmf();
			
			/**
			 * @brief Sets whether RFC2833 is to be used to send digits. 
			 */
			LINPHONECXX_PUBLIC void setUseRfc2833ForDtmf(bool useRfc2833);
			
			/**
			 * @brief Gets the name of the currently assigned sound device for capture. 
			 */
			LINPHONECXX_PUBLIC std::string getCaptureDevice();
			
			/**
			 * @brief Sets the sound device used for capture. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setCaptureDevice(const std::string & devid);
			
			/**
			 * @brief Get the wav file where incoming stream is recorded, when files are used
			 * instead of soundcards (see linphone_core_set_use_files()). 
			 */
			LINPHONECXX_PUBLIC std::string getRecordFile() const;
			
			/**
			 * @brief Sets a wav file where incoming stream is to be recorded, when files are
			 * used instead of soundcards (see linphone_core_set_use_files()). 
			 */
			LINPHONECXX_PUBLIC void setRecordFile(const std::string & file);
			
			/**
			 * @brief Get the remote address of the current call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const Address> getCurrentCallRemoteAddress();
			
			/**
			 * @brief Gets whether linphone is currently streaming audio from and to files,
			 * rather than using the soundcard. 
			 */
			LINPHONECXX_PUBLIC bool getUseFiles();
			
			/**
			 * @brief Ask the core to stream audio from and to files, instead of using the
			 * soundcard. 
			 */
			LINPHONECXX_PUBLIC void setUseFiles(bool yesno);
			
			/**
			 * @brief Returns which adaptive rate algorithm is currently configured for future
			 * calls. 
			 */
			LINPHONECXX_PUBLIC std::string getAdaptiveRateAlgorithm() const;
			
			/**
			 * @brief Sets adaptive rate algorithm. 
			 */
			LINPHONECXX_PUBLIC void setAdaptiveRateAlgorithm(const std::string & algorithm);
			
			/**
			 * @brief Get provisioning URI. 
			 */
			LINPHONECXX_PUBLIC std::string getProvisioningUri() const;
			
			/**
			 * @brief Set URI where to download xml configuration file at startup. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setProvisioningUri(const std::string & uri);
			
			/**
			 * @brief Use to get multicast address to be used for video stream. 
			 */
			LINPHONECXX_PUBLIC std::string getVideoMulticastAddr() const;
			
			/**
			 * @brief Use to set multicast address to be used for video stream. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setVideoMulticastAddr(const std::string & ip);
			
			/**
			 * @brief Gets the delayed timeout See linphone_core_set_delayed_timeout() for
			 * details. 
			 */
			LINPHONECXX_PUBLIC int getDelayedTimeout();
			
			/**
			 * @brief Set the in delayed timeout in seconds. 
			 */
			LINPHONECXX_PUBLIC void setDelayedTimeout(int seconds);
			
			/**
			 * @brief Sets expected available upload bandwidth This is IP bandwidth, in
			 * kbit/s. 
			 */
			LINPHONECXX_PUBLIC void setExpectedBandwidth(int bw);
			
			/**
			 * @brief Return the avpf report interval in seconds. 
			 */
			LINPHONECXX_PUBLIC int getAvpfRrInterval() const;
			
			/**
			 * @brief Set the avpf report interval in seconds. 
			 */
			LINPHONECXX_PUBLIC void setAvpfRrInterval(int interval);
			
			/**
			 * @brief Set audio packetization time linphone will send (in absence of
			 * requirement from peer) A value of 0 stands for the current codec default
			 * packetization time. 
			 */
			LINPHONECXX_PUBLIC int getUploadPtime();
			
			/**
			 * @brief Set audio packetization time linphone will send (in absence of
			 * requirement from peer) A value of 0 stands for the current codec default
			 * packetization time. 
			 */
			LINPHONECXX_PUBLIC void setUploadPtime(int ptime);
			
			/**
			 * @brief Gets the url of the server where to upload the collected log files. 
			 */
			LINPHONECXX_PUBLIC std::string getLogCollectionUploadServerUrl();
			
			/**
			 * @brief Set the url of the server where to upload the collected log files. 
			 */
			LINPHONECXX_PUBLIC void setLogCollectionUploadServerUrl(const std::string & serverUrl);
			
			/**
			 * @brief Get a pointer to the sqlite db holding zrtp/lime cache. 
			 */
			LINPHONECXX_PUBLIC void * getZrtpCacheDb();
			
			/**
			 * @brief Get the globaly set http file transfer server to be used for content
			 * type application/vnd.gsma.rcs-ft-http+xml. 
			 */
			LINPHONECXX_PUBLIC std::string getFileTransferServer();
			
			/**
			 * @brief Globaly set an http file transfer server to be used for content type
			 * application/vnd.gsma.rcs-ft-http+xml. 
			 */
			LINPHONECXX_PUBLIC void setFileTransferServer(const std::string & serverUrl);
			
			/**
			 * @brief Gets if realtime text is enabled or not. 
			 */
			LINPHONECXX_PUBLIC bool realtimeTextEnabled();
			
			/**
			 * @brief Get the set input volume of the local participant. 
			 */
			LINPHONECXX_PUBLIC float getConferenceLocalInputVolume();
			
			/**
			 * @brief Get the preferred video definition for the stream that is captured and
			 * sent to the remote party. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const VideoDefinition> getPreferredVideoDefinition() const;
			
			/**
			 * @brief Set the preferred video definition for the stream that is captured and
			 * sent to the remote party. 
			 */
			LINPHONECXX_PUBLIC void setPreferredVideoDefinition(const std::shared_ptr<VideoDefinition> & vdef);
			
			/**
			 * @brief Use to get multicast state of video stream. 
			 */
			LINPHONECXX_PUBLIC bool videoMulticastEnabled() const;
			
			/**
			 * @brief Use to enable multicast rtp for video stream. 
			 */
			LINPHONECXX_PUBLIC void enableVideoMulticast(bool yesno);
			
			/**
			 * @brief Gets the TLS key. 
			 */
			LINPHONECXX_PUBLIC std::string getTlsKey() const;
			
			/**
			 * @brief Sets a TLS key used for TLS authentication The key won't be stored, you
			 * have to set it after each LinphoneCore startup. 
			 */
			LINPHONECXX_PUBLIC void setTlsKey(const std::string & tlsKey);
			
			/**
			 * @brief Get http proxy port to be used for signaling. 
			 */
			LINPHONECXX_PUBLIC int getHttpProxyPort() const;
			
			/**
			 * @brief Set http proxy port to be used for signaling. 
			 */
			LINPHONECXX_PUBLIC void setHttpProxyPort(int port);
			
			/**
			 * @brief Tells whether echo limiter is enabled. 
			 */
			LINPHONECXX_PUBLIC bool echoLimiterEnabled() const;
			
			/**
			 * @brief Enables or disable echo limiter. 
			 */
			LINPHONECXX_PUBLIC void enableEchoLimiter(bool val);
			
			/**
			 * @brief Return the list of the available audio payload types. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<PayloadType> > getAudioPayloadTypes();
			
			/**
			 * @brief Redefine the list of the available payload types. 
			 */
			LINPHONECXX_PUBLIC void setAudioPayloadTypes(const std::list<std::shared_ptr<PayloadType> > & payloadTypes);
			
			/**
			 * @brief Get the DSCP field for SIP signaling channel. 
			 */
			LINPHONECXX_PUBLIC int getSipDscp() const;
			
			/**
			 * @brief Set the DSCP field for SIP signaling channel. 
			 */
			LINPHONECXX_PUBLIC void setSipDscp(int dscp);
			
			/**
			 * @brief This method is called by the application to notify the linphone core
			 * library when network is reachable. 
			 */
			LINPHONECXX_PUBLIC void setNetworkReachable(bool value);
			
			/**
			 * @brief return network state either as positioned by the application or by
			 * linphone itself. 
			 */
			LINPHONECXX_PUBLIC bool isNetworkReachable();
			
			/**
			 * @brief Tells whether video capture is enabled. 
			 */
			LINPHONECXX_PUBLIC bool videoCaptureEnabled();
			
			/**
			 * @brief Enable or disable video capture. 
			 */
			LINPHONECXX_PUBLIC void enableVideoCapture(bool enable);
			
			/**
			 * @brief Get the number of missed calls. 
			 */
			LINPHONECXX_PUBLIC int getMissedCallsCount();
			
			/**
			 * @brief Gets the UDP port used for text streaming. 
			 */
			LINPHONECXX_PUBLIC int getTextPort() const;
			
			/**
			 * @brief Sets the UDP port used for text streaming. 
			 */
			LINPHONECXX_PUBLIC void setTextPort(int port);
			
			/**
			 * @brief Returns the incoming call timeout See linphone_core_set_inc_timeout()
			 * for details. 
			 */
			LINPHONECXX_PUBLIC int getIncTimeout();
			
			/**
			 * @brief Set the incoming call timeout in seconds. 
			 */
			LINPHONECXX_PUBLIC void setIncTimeout(int seconds);
			
			/**
			 * @brief Tells whether DNS SRV resolution is enabled. 
			 */
			LINPHONECXX_PUBLIC bool dnsSrvEnabled() const;
			
			/**
			 * @brief Enable or disable DNS SRV resolution. 
			 */
			LINPHONECXX_PUBLIC void enableDnsSrv(bool enable);
			
			/**
			 * @brief Get playback gain in db before entering sound card. 
			 */
			LINPHONECXX_PUBLIC float getPlaybackGainDb();
			
			/**
			 * @brief Allow to control play level before entering sound card: gain in db. 
			 */
			LINPHONECXX_PUBLIC void setPlaybackGainDb(float level);
			
			/**
			 * @brief Gets the IM Encryption Engine in the core if possible. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ImEncryptionEngine> getImEncryptionEngine() const;
			
			/**
			 * @brief Sets an IM Encryption Engine in the core. 
			 */
			LINPHONECXX_PUBLIC void setImEncryptionEngine(const std::shared_ptr<ImEncryptionEngine> & imee);
			
			/**
			 * @brief Get the wav file that is played when putting somebody on hold, or when
			 * files are used instead of soundcards (see linphone_core_set_use_files()). 
			 */
			LINPHONECXX_PUBLIC std::string getPlayFile() const;
			
			/**
			 * @brief Sets a wav file to be played when putting somebody on hold, or when
			 * files are used instead of soundcards (see linphone_core_set_use_files()). 
			 */
			LINPHONECXX_PUBLIC void setPlayFile(const std::string & file);
			
			/**
			 * @brief Tells whether the video adaptive jitter compensation is enabled. 
			 */
			LINPHONECXX_PUBLIC bool videoAdaptiveJittcompEnabled();
			
			/**
			 * @brief Enable or disable the video adaptive jitter compensation. 
			 */
			LINPHONECXX_PUBLIC void enableVideoAdaptiveJittcomp(bool enable);
			
			/**
			 * @brief Enable or disable video source reuse when switching from preview to
			 * actual video call. 
			 */
			LINPHONECXX_PUBLIC void enableVideoSourceReuse(bool enable);
			
			/**
			 * @brief Gets the current call. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> getCurrentCall() const;
			
			/**
			 * @brief Get path to the database file used for storing chat messages. 
			 */
			LINPHONECXX_PUBLIC std::string getChatDatabasePath() const;
			
			/**
			 * @brief Set the chat database path. 
			 */
			LINPHONECXX_PUBLIC void setChatDatabasePath(const std::string & path);
			
			/**
			 * @brief Get the video port range from which is randomly chosen the UDP port used
			 * for video streaming. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Range> getVideoPortsRange() const;
			
			/**
			 * @brief Get the video preset used for video calls. 
			 */
			LINPHONECXX_PUBLIC std::string getVideoPreset() const;
			
			/**
			 * @brief Set the video preset to be used for video calls. 
			 */
			LINPHONECXX_PUBLIC void setVideoPreset(const std::string & preset);
			
			/**
			 * @brief Returns whether chat is enabled. 
			 */
			LINPHONECXX_PUBLIC bool chatEnabled() const;
			
			/**
			 * @brief Returns TRUE if echo cancellation is enabled. 
			 */
			LINPHONECXX_PUBLIC bool echoCancellationEnabled() const;
			
			/**
			 * @brief Enables or disable echo cancellation. 
			 */
			LINPHONECXX_PUBLIC void enableEchoCancellation(bool val);
			
			/**
			 * @brief Get the text port range from which is randomly chosen the UDP port used
			 * for text streaming. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Range> getTextPortsRange() const;
			
			/**
			 * @brief Use to get multicast address to be used for audio stream. 
			 */
			LINPHONECXX_PUBLIC std::string getAudioMulticastAddr() const;
			
			/**
			 * @brief Use to set multicast address to be used for audio stream. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setAudioMulticastAddr(const std::string & ip);
			
			/**
			 */
			LINPHONECXX_PUBLIC std::string getUserAgent();
			
			/**
			 * @brief Returns a null terminated table of strings containing the file format
			 * extension supported for call recording. 
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getSupportedFileFormats();
			
			/**
			 * @brief Get the number of participant in the running conference. 
			 */
			LINPHONECXX_PUBLIC int getConferenceSize();
			
			/**
			 * @brief Get my consolidated presence. 
			 */
			LINPHONECXX_PUBLIC ConsolidatedPresence getConsolidatedPresence() const;
			
			/**
			 * @brief Set my consolidated presence. 
			 */
			LINPHONECXX_PUBLIC void setConsolidatedPresence(ConsolidatedPresence presence);
			
			/**
			 * @brief Get my presence model. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceModel> getPresenceModel() const;
			
			/**
			 * @brief Set my presence model. 
			 */
			LINPHONECXX_PUBLIC void setPresenceModel(const std::shared_ptr<PresenceModel> & presence);
			
			/**
			 * @brief Retrieves the real port number assigned for each sip transport (udp,
			 * tcp, tls). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Transports> getTransportsUsed();
			
			/**
			 * @brief Gets the in call timeout See linphone_core_set_in_call_timeout() for
			 * details. 
			 */
			LINPHONECXX_PUBLIC int getInCallTimeout();
			
			/**
			 * @brief Set the in call timeout in seconds. 
			 */
			LINPHONECXX_PUBLIC void setInCallTimeout(int seconds);
			
			/**
			 * @brief Returns the nominal audio jitter buffer size in milliseconds. 
			 */
			LINPHONECXX_PUBLIC int getAudioJittcomp();
			
			/**
			 * @brief Sets the nominal audio jitter buffer size in milliseconds. 
			 */
			LINPHONECXX_PUBLIC void setAudioJittcomp(int milliseconds);
			
			/**
			 * @brief Tells whether video preview is enabled. 
			 */
			LINPHONECXX_PUBLIC bool videoPreviewEnabled() const;
			
			/**
			 * @brief Controls video preview enablement. 
			 */
			LINPHONECXX_PUBLIC void enableVideoPreview(bool val);
			
			/**
			 * @brief Returns the path to the wav file used for ringing. 
			 */
			LINPHONECXX_PUBLIC std::string getRing() const;
			
			/**
			 * @brief Sets the path to a wav file used for ringing. 
			 */
			LINPHONECXX_PUBLIC void setRing(const std::string & path);
			
			/**
			 * @brief Gets the path to the TLS certificate file. 
			 */
			LINPHONECXX_PUBLIC std::string getTlsCertPath() const;
			
			/**
			 * @brief Sets a TLS certificate path used for TLS authentication The path will be
			 * stored in the rc file and automatically restored on startup. 
			 */
			LINPHONECXX_PUBLIC void setTlsCertPath(const std::string & tlsCertPath);
			
			/**
			 * @brief Get the STUN server address being used. 
			 */
			LINPHONECXX_PUBLIC std::string getStunServer() const;
			
			/**
			 * @brief Set the STUN server address to use when the firewall policy is set to
			 * STUN. 
			 */
			LINPHONECXX_PUBLIC void setStunServer(const std::string & server);
			
			/**
			 * @brief Indicates whether the local participant is part of a conference. 
			 */
			LINPHONECXX_PUBLIC bool isInConference() const;
			
			/**
			 * @brief Get a pointer on the internal conference object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Conference> getConference();
			
			/**
			 * @brief Return the list of the available text payload types. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<PayloadType> > getTextPayloadTypes();
			
			/**
			 * @brief Redefine the list of the available payload types. 
			 */
			LINPHONECXX_PUBLIC void setTextPayloadTypes(const std::list<std::shared_ptr<PayloadType> > & payloadTypes);
			
			/**
			 * @brief Returns whether adaptive rate control is enabled. 
			 */
			LINPHONECXX_PUBLIC bool adaptiveRateControlEnabled() const;
			
			/**
			 * @brief Enable adaptive rate control. 
			 */
			LINPHONECXX_PUBLIC void enableAdaptiveRateControl(bool enabled);
			
			/**
			 * @brief Get the path to the directory storing the user's certificates. 
			 */
			LINPHONECXX_PUBLIC std::string getUserCertificatesPath();
			
			/**
			 * @brief Set the path to the directory storing the user's x509 certificates (used
			 * by dtls) 
			 */
			LINPHONECXX_PUBLIC void setUserCertificatesPath(const std::string & path);
			
			/**
			 * @brief Return the internal state of uPnP. 
			 */
			LINPHONECXX_PUBLIC UpnpState getUpnpState() const;
			
			/**
			 * @brief Gets the database filename where call logs will be stored. 
			 */
			LINPHONECXX_PUBLIC std::string getCallLogsDatabasePath();
			
			/**
			 * @brief Sets the database filename where call logs will be stored. 
			 */
			LINPHONECXX_PUBLIC void setCallLogsDatabasePath(const std::string & path);
			
			/**
			 * @brief Gets the list of the available sound devices. 
			 */
			LINPHONECXX_PUBLIC std::list<std::string> getSoundDevices();
			
			/**
			 * @brief Tells whether the ring play is enabled during an incoming early media
			 * call. 
			 */
			LINPHONECXX_PUBLIC bool getRingDuringIncomingEarlyMedia() const;
			
			/**
			 * @brief Enable or disable the ring play during an incoming early media call. 
			 */
			LINPHONECXX_PUBLIC void setRingDuringIncomingEarlyMedia(bool enable);
			
			/**
			 * @brief Tells whether the microphone is enabled. 
			 */
			LINPHONECXX_PUBLIC bool micEnabled();
			
			/**
			 * @brief Enable or disable the microphone. 
			 */
			LINPHONECXX_PUBLIC void enableMic(bool enable);
			
			/**
			 * @brief Media offer control param for SIP INVITE. 
			 */
			LINPHONECXX_PUBLIC bool sdp200AckEnabled() const;
			
			/**
			 * @brief Control when media offer is sent in SIP INVITE. 
			 */
			LINPHONECXX_PUBLIC void enableSdp200Ack(bool enable);
			
			/**
			 * @brief Returns the nominal video jitter buffer size in milliseconds. 
			 */
			LINPHONECXX_PUBLIC int getVideoJittcomp();
			
			/**
			 * @brief Sets the nominal video jitter buffer size in milliseconds. 
			 */
			LINPHONECXX_PUBLIC void setVideoJittcomp(int milliseconds);
			
			/**
			 * @brief Returns the name of the currently active video device. 
			 */
			LINPHONECXX_PUBLIC std::string getVideoDevice() const;
			
			/**
			 * @brief Sets the active video device. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setVideoDevice(const std::string & id);
			
			/**
			 * @brief This method is called by the application to notify the linphone core
			 * library when the media (RTP) network is reachable. 
			 */
			LINPHONECXX_PUBLIC void setMediaNetworkReachable(bool value);
			
			/**
			 * @brief Gets the UDP port used for audio streaming. 
			 */
			LINPHONECXX_PUBLIC int getAudioPort() const;
			
			/**
			 * @brief Sets the UDP port used for audio streaming. 
			 */
			LINPHONECXX_PUBLIC void setAudioPort(int port);
			
			/**
			 * @brief Get the list of call logs (past calls). 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<CallLog> > getCallLogs();
			
			/**
			 * @brief Returns an unmodifiable list of currently entered #LinphoneAuthInfo. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<AuthInfo> > getAuthInfoList() const;
			
			/**
			 * @brief Retrieve the maximum available upload bandwidth. 
			 */
			LINPHONECXX_PUBLIC int getUploadBandwidth() const;
			
			/**
			 * @brief Sets maximum available upload bandwidth This is IP bandwidth, in kbit/s. 
			 */
			LINPHONECXX_PUBLIC void setUploadBandwidth(int bw);
			
			/**
			 * @brief Returns TRUE if either capture or display is enabled, FALSE otherwise. 
			 */
			LINPHONECXX_PUBLIC bool videoEnabled();
			
			/**
			 * @brief Get the public IP address of NAT being used. 
			 */
			LINPHONECXX_PUBLIC std::string getNatAddress() const;
			
			/**
			 * @brief Set the public IP address of NAT when using the firewall policy is set
			 * to use NAT. 
			 */
			LINPHONECXX_PUBLIC void setNatAddress(const std::string & addr);
			
			/**
			 * @brief Tells whether the audio adaptive jitter compensation is enabled. 
			 */
			LINPHONECXX_PUBLIC bool audioAdaptiveJittcompEnabled();
			
			/**
			 * @brief Enable or disable the audio adaptive jitter compensation. 
			 */
			LINPHONECXX_PUBLIC void enableAudioAdaptiveJittcomp(bool enable);
			
			/**
			 * @brief Return the external ip address of router. 
			 */
			LINPHONECXX_PUBLIC std::string getUpnpExternalIpaddress() const;
			
			/**
			 * @brief Return the list of the available video payload types. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<PayloadType> > getVideoPayloadTypes();
			
			/**
			 * @brief Redefine the list of the available video payload types. 
			 */
			LINPHONECXX_PUBLIC void setVideoPayloadTypes(const std::list<std::shared_ptr<PayloadType> > & payloadTypes);
			
			/**
			 * @brief get tunnel instance if available 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Tunnel> getTunnel() const;
			
			/**
			 * @brief Tells whether video self view during call is enabled or not. 
			 */
			LINPHONECXX_PUBLIC bool selfViewEnabled() const;
			
			/**
			 * @brief Enables or disable self view during calls. 
			 */
			LINPHONECXX_PUBLIC void enableSelfView(bool val);
			
			/**
			 * @brief Returns the maximum transmission unit size in bytes. 
			 */
			LINPHONECXX_PUBLIC int getMtu() const;
			
			/**
			 * @brief Sets the maximum transmission unit size in bytes. 
			 */
			LINPHONECXX_PUBLIC void setMtu(int mtu);
			
			/**
			 * @brief Sets the preferred video size by its name. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void setPreferredVideoSizeByName(const std::string & name);
			
			/**
			 * @brief Get the DSCP field for outgoing video streams. 
			 */
			LINPHONECXX_PUBLIC int getVideoDscp() const;
			
			/**
			 * @brief Set the DSCP field for outgoing video streams. 
			 */
			LINPHONECXX_PUBLIC void setVideoDscp(int dscp);
			
			/**
			 * @brief Is signaling keep alive enabled. 
			 */
			LINPHONECXX_PUBLIC bool keepAliveEnabled();
			
			/**
			 * @brief Enables signaling keep alive, small udp packet sent periodically to keep
			 * udp NAT association. 
			 */
			LINPHONECXX_PUBLIC void enableKeepAlive(bool enable);
			
			/**
			 * @brief Returns an unmodifiable list of entered proxy configurations. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<ProxyConfig> > getProxyConfigList() const;
			
			/**
			 * @brief Gets the UDP port used for video streaming. 
			 */
			LINPHONECXX_PUBLIC int getVideoPort() const;
			
			/**
			 * @brief Sets the UDP port used for video streaming. 
			 */
			LINPHONECXX_PUBLIC void setVideoPort(int port);
			
			/**
			 * @brief Get the ring back tone played to far end during incoming calls. 
			 */
			LINPHONECXX_PUBLIC std::string getRemoteRingbackTone() const;
			
			/**
			 * @brief Specify a ring back tone to be played to far end during incoming calls. 
			 */
			LINPHONECXX_PUBLIC void setRemoteRingbackTone(const std::string & ring);
			
			/**
			 * @brief Return AVPF enablement. 
			 */
			LINPHONECXX_PUBLIC AVPFMode getAvpfMode() const;
			
			/**
			 * @brief Enable RTCP feedback (also known as RTP/AVPF profile). 
			 */
			LINPHONECXX_PUBLIC void setAvpfMode(AVPFMode mode);
			
			/**
			 * @brief Get the number of Call. 
			 */
			LINPHONECXX_PUBLIC int getCallsNb() const;
			
			/**
			 * @brief Returns the default identity when no proxy configuration is used. 
			 */
			LINPHONECXX_PUBLIC std::string getPrimaryContact();
			
			/**
			 * @brief Sets the local "from" identity. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setPrimaryContact(const std::string & contact);
			
			/**
			 * @brief Get the effective video definition provided by the camera for the
			 * captured video. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<VideoDefinition> getCurrentPreviewVideoDefinition() const;
			
			/**
			 * @brief Get the name of the mediastreamer2 filter used for rendering video. 
			 */
			LINPHONECXX_PUBLIC std::string getVideoDisplayFilter();
			
			/**
			 * @brief Set the name of the mediastreamer2 filter to be used for rendering
			 * video. 
			 */
			LINPHONECXX_PUBLIC void setVideoDisplayFilter(const std::string & filtername);
			
			/**
			 * @brief Gets the current device orientation. 
			 */
			LINPHONECXX_PUBLIC int getDeviceRotation();
			
			/**
			 * @brief Tells the core the device current orientation. 
			 */
			LINPHONECXX_PUBLIC void setDeviceRotation(int rotation);
			
			/**
			 * @brief Get the audio port range from which is randomly chosen the UDP port used
			 * for audio streaming. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Range> getAudioPortsRange() const;
			
			/**
			 * @brief Get http proxy address to be used for signaling. 
			 */
			LINPHONECXX_PUBLIC std::string getHttpProxyHost() const;
			
			/**
			 * @brief Set http proxy address to be used for signaling during next channel
			 * connection. 
			 */
			LINPHONECXX_PUBLIC void setHttpProxyHost(const std::string & host);
			
			/**
			 * @brief Get the LinphoneImNotifPolicy object controlling the instant messaging
			 * notifications. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ImNotifPolicy> getImNotifPolicy() const;
			
			/**
			 * @brief Tells whether DNS search (use of local domain if the fully qualified
			 * name did return results) is enabled. 
			 */
			LINPHONECXX_PUBLIC bool dnsSearchEnabled() const;
			
			/**
			 * @brief Enable or disable DNS search (use of local domain if the fully qualified
			 * name did return results). 
			 */
			LINPHONECXX_PUBLIC void enableDnsSearch(bool enable);
			
			/**
			 * @brief Returns an list of chat rooms. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<ChatRoom> > getChatRooms();
			
			/**
			 * @brief Returns TRUE if hostname part of primary contact is guessed
			 * automatically. 
			 */
			LINPHONECXX_PUBLIC bool getGuessHostname();
			
			/**
			 * @brief Tells LinphoneCore to guess local hostname automatically in primary
			 * contact. 
			 */
			LINPHONECXX_PUBLIC void setGuessHostname(bool val);
			
			/**
			 * @brief Retrieves the list of LinphoneFriendList from the core. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<FriendList> > getFriendsLists() const;
			
			/**
			 * @brief Get the SIP transport timeout. 
			 */
			LINPHONECXX_PUBLIC int getSipTransportTimeout();
			
			/**
			 * @brief Set the SIP transport timeout. 
			 */
			LINPHONECXX_PUBLIC void setSipTransportTimeout(int timeoutMs);
			
			/**
			 * @brief Indicates whether SIP INFO is used to send digits. 
			 */
			LINPHONECXX_PUBLIC bool getUseInfoForDtmf();
			
			/**
			 * @brief Sets whether SIP INFO is to be used to send digits. 
			 */
			LINPHONECXX_PUBLIC void setUseInfoForDtmf(bool useInfo);
			
			/**
			 * @brief Returns the LpConfig object used to manage the storage (config) file. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Config> getConfig();
			
			/**
			 * @brief Get the media encryption policy being used for RTP packets. 
			 */
			LINPHONECXX_PUBLIC MediaEncryption getMediaEncryption();
			
			/**
			 * @brief Choose the media encryption policy to be used for RTP packets. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setMediaEncryption(MediaEncryption menc);
			
			/**
			 * @brief Get the frame rate for static picture. 
			 */
			LINPHONECXX_PUBLIC float getStaticPictureFps();
			
			/**
			 * @brief Set the frame rate for static picture. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setStaticPictureFps(float fps);
			
			/**
			 * @brief Get the default policy for video. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<VideoActivationPolicy> getVideoActivationPolicy() const;
			
			/**
			 * @brief Sets the default policy for video. 
			 */
			LINPHONECXX_PUBLIC void setVideoActivationPolicy(const std::shared_ptr<const VideoActivationPolicy> & policy);
			
			/**
			 * @brief Use to get multicast ttl to be used for video stream. 
			 */
			LINPHONECXX_PUBLIC int getVideoMulticastTtl() const;
			
			/**
			 * @brief Use to set multicast ttl to be used for video stream. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setVideoMulticastTtl(int ttl);
			
			/**
			 * @brief This method is called by the application to notify the linphone core
			 * library when the SIP network is reachable. 
			 */
			LINPHONECXX_PUBLIC void setSipNetworkReachable(bool value);
			
			/**
			 * @brief Get audio packetization time linphone expects to receive from peer. 
			 */
			LINPHONECXX_PUBLIC int getDownloadPtime();
			
			/**
			 * @brief Set audio packetization time linphone expects to receive from peer. 
			 */
			LINPHONECXX_PUBLIC void setDownloadPtime(int ptime);
			
			/**
			 * @brief Use to get multicast state of audio stream. 
			 */
			LINPHONECXX_PUBLIC bool audioMulticastEnabled() const;
			
			/**
			 * @brief Use to enable multicast rtp for audio stream. 
			 */
			LINPHONECXX_PUBLIC void enableAudioMulticast(bool yesno);
			
			/**
			 * @brief Gets the path to the TLS key file. 
			 */
			LINPHONECXX_PUBLIC std::string getTlsKeyPath() const;
			
			/**
			 * @brief Sets a TLS key path used for TLS authentication The path will be stored
			 * in the rc file and automatically restored on startup. 
			 */
			LINPHONECXX_PUBLIC void setTlsKeyPath(const std::string & tlsKeyPath);
			
			/**
			 * @brief Tells whether IPv6 is enabled or not. 
			 */
			LINPHONECXX_PUBLIC bool ipv6Enabled();
			
			/**
			 * @brief Turns IPv6 support on or off. 
			 */
			LINPHONECXX_PUBLIC void enableIpv6(bool val);
			
			/**
			 * @brief Get the native window handle of the video window. 
			 */
			LINPHONECXX_PUBLIC void * getNativeVideoWindowId() const;
			
			/**
			 * @brief Set the native video window id where the video is to be displayed. 
			 */
			LINPHONECXX_PUBLIC void setNativeVideoWindowId(void * id);
			
			/**
			 * @brief Gets the default identity SIP address. 
			 */
			LINPHONECXX_PUBLIC std::string getIdentity();
			
			/**
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ProxyConfig> getDefaultProxyConfig();
			
			/**
			 * @brief Sets the default proxy. 
			 */
			LINPHONECXX_PUBLIC void setDefaultProxyConfig(const std::shared_ptr<ProxyConfig> & config);
			
			/**
			 * @brief Gets the current list of calls. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<Call> > getCalls();
			
			/**
			 * @brief Get the native window handle of the video preview window. 
			 */
			LINPHONECXX_PUBLIC void * getNativePreviewWindowId() const;
			
			/**
			 * @brief Set the native window id where the preview video (local camera) is to be
			 * displayed. 
			 */
			LINPHONECXX_PUBLIC void setNativePreviewWindowId(void * id);
			
			/**
			 * @brief Use to get multicast ttl to be used for audio stream. 
			 */
			LINPHONECXX_PUBLIC int getAudioMulticastTtl() const;
			
			/**
			 * @brief Use to set multicast ttl to be used for audio stream. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setAudioMulticastTtl(int ttl);
			
			/**
			 * @brief Sets the trusted root CAs (PEM format) 
			 */
			LINPHONECXX_PUBLIC void setRootCaData(const std::string & data);
			
			/**
			 * @brief Gets the path to a file or folder containing the trusted root CAs (PEM
			 * format) 
			 */
			LINPHONECXX_PUBLIC std::string getRootCa();
			
			/**
			 * @brief Sets the path to a file or folder containing trusted root CAs (PEM
			 * format) 
			 */
			LINPHONECXX_PUBLIC void setRootCa(const std::string & path);
			
			/**
			 * @brief Define behaviour when encryption parameters negociation fails on
			 * outgoing call. 
			 */
			LINPHONECXX_PUBLIC void setMediaEncryptionMandatory(bool m);
			
			/**
			 * @brief Retrieves the port configuration used for each transport (udp, tcp,
			 * tls). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Transports> getTransports();
			
			/**
			 * @brief Sets the ports to be used for each of transport (UDP or TCP) A zero
			 * value port for a given transport means the transport is not used. 
			 */
			LINPHONECXX_PUBLIC linphone::Status setTransports(const std::shared_ptr<const Transports> & transports);
			
			/**
			 * @brief Notifies the upper layer that a presence model change has been received
			 * for the uri or telephone number given as a parameter, by calling the
			 * appropriate callback if one has been set. 
			 */
			LINPHONECXX_PUBLIC void notifyNotifyPresenceReceivedForUriOrTel(const std::shared_ptr<Friend> & lf, const std::string & uriOrTel, const std::shared_ptr<const PresenceModel> & presenceModel);
			
			/**
			 * @brief Terminates all the calls. 
			 */
			LINPHONECXX_PUBLIC linphone::Status terminateAllCalls();
			
			/**
			 * @brief Erase all proxies from config. 
			 */
			LINPHONECXX_PUBLIC void clearProxyConfig();
			
			/**
			 * @brief Add a friend list. 
			 */
			LINPHONECXX_PUBLIC void addFriendList(const std::shared_ptr<FriendList> & list);
			
			/**
			 * @brief Create a LinphonePresencePerson with the given id. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresencePerson> createPresencePerson(const std::string & id);
			
			/**
			 * @brief Create a conference. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Conference> createConferenceWithParams(const std::shared_ptr<const ConferenceParams> & params);
			
			/**
			 * @brief Create a #LinphoneAddress object by parsing the user supplied address,
			 * given as a string. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> createAddress(const std::string & address);
			
			/**
			 * @brief Check if a call will need the sound resources in near future (typically
			 * an outgoing call that is awaiting response). 
			 */
			LINPHONECXX_PUBLIC bool soundResourcesLocked();
			
			/**
			 * @brief Upload the log collection to the configured server url. 
			 */
			LINPHONECXX_PUBLIC void uploadLogCollection();
			
			/**
			 * @brief Create an out-of-dialog notification, specifying the destination
			 * resource, the event name. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Event> createNotify(const std::shared_ptr<const Address> & resource, const std::string & event);
			
			/**
			 * @brief Create a new LinphoneNatPolicy object with every policies being
			 * disabled. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<NatPolicy> createNatPolicy();
			
			/**
			 * @brief force registration refresh to be initiated upon next iterate 
			 */
			LINPHONECXX_PUBLIC void refreshRegisters();
			
			/**
			 * @brief Transfers a call to destination of another running call. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status transferCallToAnother(const std::shared_ptr<Call> & call, const std::shared_ptr<Call> & dest);
			
			/**
			 * @brief Create a LinphonePresenceModel with the given activity type, activity
			 * description, note content and note language. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceModel> createPresenceModelWithActivityAndNote(PresenceActivityType acttype, const std::string & description, const std::string & note, const std::string & lang);
			
			/**
			 * @brief Remove a specific call log from call history list. 
			 */
			LINPHONECXX_PUBLIC void removeCallLog(const std::shared_ptr<CallLog> & callLog);
			
			/**
			 * @brief See linphone_proxy_config_normalize_sip_uri for documentation. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Address> interpretUrl(const std::string & url);
			
			/**
			 * @brief Sets the UDP port range from which to randomly select the port used for
			 * audio streaming. 
			 */
			LINPHONECXX_PUBLIC void setAudioPortRange(int minPort, int maxPort);
			
			/**
			 * @brief Migrates the friends from the linphonerc to the database if not done
			 * yet. 
			 */
			LINPHONECXX_PUBLIC void migrateFriendsFromRcToDb();
			
			/**
			 * @brief Tells whether there is a call running. 
			 */
			LINPHONECXX_PUBLIC bool inCall() const;
			
			/**
			 * @brief Removes a proxy configuration. 
			 */
			LINPHONECXX_PUBLIC void removeProxyConfig(const std::shared_ptr<ProxyConfig> & config);
			
			/**
			 * @brief Accept an early media session for an incoming call. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status acceptEarlyMedia(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Get a chat room for messaging from a sip uri like
			 * sip:joe@sip.linphone.org. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ChatRoom> getChatRoomFromUri(const std::string & to);
			
			/**
			 * @brief Take a photo of currently from capture device and write it into a jpeg
			 * file. 
			 */
			LINPHONECXX_PUBLIC linphone::Status takePreviewSnapshot(const std::string & file);
			
			/**
			 * @brief Create a LinphonePresenceService with the given id, basic status and
			 * contact. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceService> createPresenceService(const std::string & id, PresenceBasicStatus basicStatus, const std::string & contact);
			
			/**
			 * @brief Add a proxy configuration. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addProxyConfig(const std::shared_ptr<ProxyConfig> & config);
			
			/**
			 * @brief Resumes a call. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status resumeCall(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Create a new LinphoneNatPolicy by reading the config of a LinphoneCore
			 * according to the passed ref. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<NatPolicy> createNatPolicyFromConfig(const std::string & ref);
			
			/**
			 * @brief Sets the user agent string used in SIP messages, ideally called just
			 * after linphone_core_new() or linphone_core_init(). 
			 */
			LINPHONECXX_PUBLIC void setUserAgent(const std::string & uaName, const std::string & version);
			
			/**
			 * @brief Create a LinphoneAccountCreator and set Linphone Request callbacks. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<AccountCreator> createAccountCreator(const std::string & xmlrpcUrl);
			
			/**
			 * @brief Create a LinphoneFriend from the given address. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Friend> createFriendWithAddress(const std::string & address);
			
			/**
			 * @brief Accept call modifications initiated by other end. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status acceptCallUpdate(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Plays an audio file to the local user. 
			 */
			LINPHONECXX_PUBLIC linphone::Status playLocal(const std::string & audiofile);
			
			/**
			 * @brief Reset the counter of missed calls. 
			 */
			LINPHONECXX_PUBLIC void resetMissedCallsCount();
			
			/**
			 * @brief Check if a media encryption type is supported. 
			 */
			LINPHONECXX_PUBLIC bool mediaEncryptionSupported(MediaEncryption menc) const;
			
			/**
			 * @brief Create an authentication information with default values from Linphone
			 * core. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<AuthInfo> createAuthInfo(const std::string & username, const std::string & userid, const std::string & passwd, const std::string & ha1, const std::string & realm, const std::string & domain);
			
			/**
			 * @brief Create a content with default values from Linphone core. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Content> createContent();
			
			/**
			 * @brief Create a proxy config with default values from Linphone core. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ProxyConfig> createProxyConfig();
			
			/**
			 * @brief Search from the list of current calls if a remote address match uri. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> findCallFromUri(const std::string & uri) const;
			
			/**
			 * @brief Create an independent media file player. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Player> createLocalPlayer(const std::string & soundCardName, const std::string & videoDisplayName, void * windowId);
			
			/**
			 * @brief Creates an empty info message. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<InfoMessage> createInfoMessage();
			
			/**
			 * @brief This function controls signaling features supported by the core. 
			 */
			LINPHONECXX_PUBLIC void addSupportedTag(const std::string & tag);
			
			/**
			 * @brief Call generic OpenGL render for a given core. 
			 */
			LINPHONECXX_PUBLIC void previewOglRender() const;
			
			/**
			 * @brief Create a publish context for an event state. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Event> createPublish(const std::shared_ptr<const Address> & resource, const std::string & event, int expires);
			
			/**
			 * @brief Start recording the running conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status startConferenceRecording(const std::string & path);
			
			/**
			 * @brief Adds authentication information to the #LinphoneCore. 
			 */
			LINPHONECXX_PUBLIC void addAuthInfo(const std::shared_ptr<const AuthInfo> & info);
			
			/**
			 * @brief Get the call with the remote_address specified. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> getCallByRemoteAddress(const std::string & remoteAddress) const;
			
			/**
			 * @brief Create some default conference parameters for instanciating a a
			 * conference with linphone_core_create_conference_with_params(). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ConferenceParams> createConferenceParams();
			
			/**
			 * @brief Migrates the call logs from the linphonerc to the database if not done
			 * yet. 
			 */
			LINPHONECXX_PUBLIC void migrateLogsFromRcToDb();
			
			/**
			 * @brief Tells if lime is available. 
			 */
			LINPHONECXX_PUBLIC bool limeAvailable() const;
			
			/**
			 * @brief Pauses the call. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status pauseCall(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Terminates a call. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status terminateCall(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Get the call with the remote_address specified. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> getCallByRemoteAddress2(const std::shared_ptr<const Address> & remoteAddress) const;
			
			/**
			 * @brief Add a friend to the current buddy list, if subscription attribute  is
			 * set, a SIP SUBSCRIBE message is sent. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED void addFriend(const std::shared_ptr<Friend> & fr);
			
			/**
			 * @brief Update detection of sound devices. 
			 */
			LINPHONECXX_PUBLIC void reloadSoundDevices();
			
			/**
			 * @brief Sets the UDP port range from which to randomly select the port used for
			 * video streaming. 
			 */
			LINPHONECXX_PUBLIC void setVideoPortRange(int minPort, int maxPort);
			
			/**
			 * @brief Migrate configuration so that all SIP transports are enabled. 
			 */
			LINPHONECXX_PUBLIC linphone::Status migrateToMultiTransport();
			
			/**
			 * @brief Returns whether a specific file format is supported. 
			 */
			LINPHONECXX_PUBLIC bool fileFormatSupported(const std::string & fmt);
			
			/**
			 * @brief Make the local participant leave the running conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status leaveConference();
			
			/**
			 * @brief Initiates an outgoing call The application doesn't own a reference to
			 * the returned LinphoneCall object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> invite(const std::string & url);
			
			/**
			 * @brief Create a default LinphonePresenceModel. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceModel> createPresenceModel();
			
			/**
			 * @brief Main loop function. 
			 */
			LINPHONECXX_PUBLIC void iterate();
			
			/**
			 * @brief Returns the lime state. 
			 */
			LINPHONECXX_PUBLIC LimeState limeEnabled() const;
			
			/**
			 * @brief Whenever the liblinphone is playing a ring to advertise an incoming call
			 * or ringback of an outgoing call, this function stops the ringing. 
			 */
			LINPHONECXX_PUBLIC void stopRinging();
			
			/**
			 * @brief Initiates an outgoing call given a destination LinphoneAddress The
			 * LinphoneAddress can be constructed directly using linphone_address_new(), or
			 * created by linphone_core_interpret_url(). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> inviteAddressWithParams(const std::shared_ptr<const Address> & addr, const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Initiates an outgoing call according to supplied call parameters The
			 * application doesn't own a reference to the returned LinphoneCall object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> inviteWithParams(const std::string & url, const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Create a LinphonePresenceNote with the given content and language. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceNote> createPresenceNote(const std::string & content, const std::string & lang);
			
			/**
			 * @brief Create a #LinphoneConfig object from a user config file. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Config> createConfig(const std::string & filename);
			
			/**
			 * @brief Clear all authentication information. 
			 */
			LINPHONECXX_PUBLIC void clearAllAuthInfo();
			
			/**
			 * @brief Specify whether the tls server certificate common name must be verified
			 * when connecting to a SIP/TLS server. 
			 */
			LINPHONECXX_PUBLIC void verifyServerCn(bool yesno);
			
			/**
			 * @brief Enable reception of incoming chat messages. 
			 */
			LINPHONECXX_PUBLIC void enableChat();
			
			/**
			 * @brief Assign an audio file to be played locally upon call failure, for a given
			 * reason. 
			 */
			LINPHONECXX_PUBLIC void setCallErrorTone(Reason reason, const std::string & audiofile);
			
			/**
			 * @brief Stops playing a dtmf started by linphone_core_play_dtmf(). 
			 */
			LINPHONECXX_PUBLIC void stopDtmf();
			
			/**
			 * @brief Reload mediastreamer2 plugins from specified directory. 
			 */
			LINPHONECXX_PUBLIC void reloadMsPlugins(const std::string & path);
			
			/**
			 * @brief Erase the call log. 
			 */
			LINPHONECXX_PUBLIC void clearCallLogs();
			
			/**
			 * @brief Create a LinphonePresenceActivity with the given type and description. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceActivity> createPresenceActivity(PresenceActivityType acttype, const std::string & description);
			
			/**
			 * @brief Pause all currently running calls. 
			 */
			LINPHONECXX_PUBLIC linphone::Status pauseAllCalls();
			
			/**
			 * @brief Performs a simple call transfer to the specified destination. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status transferCall(const std::shared_ptr<Call> & call, const std::string & referTo);
			
			/**
			 * @brief Tells whether a specified sound device can play sound. 
			 */
			LINPHONECXX_PUBLIC bool soundDeviceCanPlayback(const std::string & device);
			
			/**
			 * @brief Plays a dtmf sound to the local user. 
			 */
			LINPHONECXX_PUBLIC void playDtmf(char dtmf, int durationMs);
			
			/**
			 * @brief Notifies the upper layer that a presence status has been received by
			 * calling the appropriate callback if one has been set. 
			 */
			LINPHONECXX_PUBLIC void notifyNotifyPresenceReceived(const std::shared_ptr<Friend> & lf);
			
			/**
			 * @brief Updates a running call according to supplied call parameters or
			 * parameters changed in the LinphoneCore. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status updateCall(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Search a LinphoneFriend by its reference key. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Friend> getFriendByRefKey(const std::string & key) const;
			
			/**
			 * @brief Removes a friend list. 
			 */
			LINPHONECXX_PUBLIC void removeFriendList(const std::shared_ptr<FriendList> & list);
			
			/**
			 * @brief Special function to stop dtmf feed back function. 
			 */
			LINPHONECXX_PUBLIC void stopDtmfStream();
			
			/**
			 * @brief Add a participant to the conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addToConference(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Checks if a new version of the application is available. 
			 */
			LINPHONECXX_PUBLIC void checkForUpdate(const std::string & currentVersion);
			
			/**
			 * @brief Remove a supported tag. 
			 */
			LINPHONECXX_PUBLIC void removeSupportedTag(const std::string & tag);
			
			/**
			 * @brief Stop recording the running conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status stopConferenceRecording();
			
			/**
			 * @brief Publish an event state. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Event> publish(const std::shared_ptr<const Address> & resource, const std::string & event, int expires, const std::shared_ptr<const Content> & body);
			
			/**
			 * @brief Redirect the specified call to the given redirect URI. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status redirectCall(const std::shared_ptr<Call> & call, const std::string & redirectUri);
			
			/**
			 * @brief Test if video is supported. 
			 */
			LINPHONECXX_PUBLIC bool videoSupported();
			
			/**
			 * @brief Create a default LinphoneFriend. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Friend> createFriend();
			
			/**
			 * @brief Update detection of camera devices. 
			 */
			LINPHONECXX_PUBLIC void reloadVideoDevices();
			
			/**
			 * @brief Sets the UDP port range from which to randomly select the port used for
			 * text streaming. 
			 */
			LINPHONECXX_PUBLIC void setTextPortRange(int minPort, int maxPort);
			
			/**
			 * @brief Create a publish context for a one-shot publish. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Event> createOneShotPublish(const std::shared_ptr<const Address> & resource, const std::string & event);
			
			/**
			 * @brief Create a new empty LinphoneFriendList object. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<FriendList> createFriendList();
			
			/**
			 * @brief Specify whether the tls server certificate must be verified when
			 * connecting to a SIP/TLS server. 
			 */
			LINPHONECXX_PUBLIC void verifyServerCertificates(bool yesno);
			
			/**
			 * @brief Inconditionnaly disable incoming chat messages. 
			 */
			LINPHONECXX_PUBLIC void disableChat(Reason denyReason);
			
			/**
			 * @brief Join the local participant to the running conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status enterConference();
			
			/**
			 * @brief Black list a friend. 
			 */
			LINPHONECXX_PUBLIC void rejectSubscriber(const std::shared_ptr<Friend> & lf);
			
			/**
			 * @brief Initiates an outgoing call given a destination LinphoneAddress The
			 * LinphoneAddress can be constructed directly using linphone_address_new(), or
			 * created by linphone_core_interpret_url(). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Call> inviteAddress(const std::shared_ptr<const Address> & addr);
			
			/**
			 * @brief When receiving a LinphoneCallUpdatedByRemote state notification, prevent
			 * LinphoneCore from performing an automatic answer. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status deferCallUpdate(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Create a LinphoneCallParams suitable for
			 * linphone_core_invite_with_params(), linphone_core_accept_call_with_params(),
			 * linphone_core_accept_early_media_with_params(),
			 * linphone_core_accept_call_update(). 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<CallParams> createCallParams(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Get the call log matching the call id, or NULL if can't be found. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<CallLog> findCallLogFromCallId(const std::string & callId);
			
			/**
			 * @brief Find authentication info matching realm, username, domain criteria. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<const AuthInfo> findAuthInfo(const std::string & realm, const std::string & username, const std::string & sipDomain);
			
			/**
			 * @brief Special function to warm up dtmf feeback stream. 
			 */
			LINPHONECXX_PUBLIC void startDtmfStream();
			
			/**
			 * @brief Create an outgoing subscription, specifying the destination resource,
			 * the event name, and an optional content body. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Event> subscribe(const std::shared_ptr<const Address> & resource, const std::string & event, int expires, const std::shared_ptr<const Content> & body);
			
			/**
			 * @brief Tells whether a specified sound device can capture sound. 
			 */
			LINPHONECXX_PUBLIC bool soundDeviceCanCapture(const std::string & device);
			
			/**
			 * @brief Search a LinphoneFriend by its address. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Friend> findFriend(const std::shared_ptr<const Address> & addr) const;
			
			/**
			 * @brief Tells to LinphoneCore to use Linphone Instant Messaging encryption. 
			 */
			LINPHONECXX_PUBLIC void enableLime(LimeState val);
			
			/**
			 * @brief Create an outgoing subscription, specifying the destination resource,
			 * the event name, and an optional content body. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Event> createSubscribe(const std::shared_ptr<const Address> & resource, const std::string & event, int expires);
			
			/**
			 * @brief Get a chat room whose peer is the supplied address. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<ChatRoom> getChatRoom(const std::shared_ptr<const Address> & addr);
			
			/**
			 * @brief Accept an incoming call, with parameters. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status acceptCallWithParams(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Notify all friends that have subscribed. 
			 */
			LINPHONECXX_PUBLIC void notifyAllFriends(const std::shared_ptr<PresenceModel> & presence);
			
			/**
			 * @brief Terminate the running conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status terminateConference();
			
			/**
			 * @brief Accept an incoming call. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status acceptCall(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Remove a call from the conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status removeFromConference(const std::shared_ptr<Call> & call);
			
			/**
			 * @brief Create a LinphonePresenceModel with the given activity type and activity
			 * description. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PresenceModel> createPresenceModelWithActivity(PresenceActivityType acttype, const std::string & description);
			
			/**
			 * @brief Add all current calls into the conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status addAllToConference();
			
			/**
			 * @brief Removes an authentication information object. 
			 */
			LINPHONECXX_PUBLIC void removeAuthInfo(const std::shared_ptr<const AuthInfo> & info);
			
			/**
			 * @brief Get the list of call logs (past calls) that matches the given
			 * #LinphoneAddress. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<CallLog> > getCallHistoryForAddress(const std::shared_ptr<const Address> & addr);
			
			/**
			 * @brief Decline a pending incoming call, with a reason. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status declineCall(const std::shared_ptr<Call> & call, Reason reason);
			
			/**
			 * @brief Get payload type from mime type and clock rate. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<PayloadType> getPayloadType(const std::string & type, int rate, int channels);
			
			/**
			 * @brief When receiving an incoming, accept to start a media session as
			 * early-media. 
			 */
			LINPHONECXX_PUBLIC LINPHONECXX_DEPRECATED linphone::Status acceptEarlyMediaWithParams(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallParams> & params);
			
			/**
			 * @brief Removes a chatroom including all message history from the LinphoneCore. 
			 */
			LINPHONECXX_PUBLIC void deleteChatRoom(const std::shared_ptr<ChatRoom> & cr);
			
			/**
			 * @brief Tells the core to use a separate window for local camera preview video,
			 * instead of inserting local view within the remote video window. 
			 */
			LINPHONECXX_PUBLIC void usePreviewWindow(bool yesno);
			
			/**
			 * @brief Set the max file size in bytes of the files used for log collection. 
			 */
			LINPHONECXX_PUBLIC static void setLogCollectionMaxFileSize(size_t size);
			
			/**
			 * @brief Enable logs serialization (output logs from either the thread that
			 * creates the linphone core or the thread that calls linphone_core_iterate()). 
			 */
			LINPHONECXX_PUBLIC static void serializeLogs();
			
			/**
			 * @brief Enable the linphone core log collection to upload logs on a server. 
			 */
			LINPHONECXX_PUBLIC static void enableLogCollection(LogCollectionState state);
			
			/**
			 * @brief Get the prefix of the filenames that will be used for log collection. 
			 */
			LINPHONECXX_PUBLIC static std::string getLogCollectionPrefix();
			
			/**
			 * @brief Tells whether VCARD support is builtin. 
			 */
			LINPHONECXX_PUBLIC static bool vcardSupported();
			
			/**
			 * @brief Compress the log collection in a single file. 
			 */
			LINPHONECXX_PUBLIC static std::string compressLogCollection();
			
			/**
			 * @brief Tells whether the linphone core log collection is enabled. 
			 */
			LINPHONECXX_PUBLIC static LogCollectionState logCollectionEnabled();
			
			/**
			 * @brief Get the path where the log files will be written for log collection. 
			 */
			LINPHONECXX_PUBLIC static std::string getLogCollectionPath();
			
			/**
			 * @brief True if tunnel support was compiled. 
			 */
			LINPHONECXX_PUBLIC static bool tunnelAvailable();
			
			/**
			 * @brief Set the path where the log files will be written for log collection. 
			 */
			LINPHONECXX_PUBLIC static void setLogCollectionPath(const std::string & path);
			
			/**
			 * @brief Reset the log collection by removing the log files. 
			 */
			LINPHONECXX_PUBLIC static void resetLogCollection();
			
			/**
			 * @brief Returns liblinphone's version as a string. 
			 */
			LINPHONECXX_PUBLIC static std::string getVersion();
			
			/**
			 * @brief Return the availability of uPnP. 
			 */
			LINPHONECXX_PUBLIC static bool upnpAvailable();
			
			/**
			 * @brief Define the log level using mask. 
			 */
			LINPHONECXX_PUBLIC static void setLogLevelMask(unsigned int loglevel);
			
			/**
			 * @brief Set the prefix of the filenames that will be used for log collection. 
			 */
			LINPHONECXX_PUBLIC static void setLogCollectionPrefix(const std::string & prefix);
			
			/**
			 * @brief Get the max file size in bytes of the files used for log collection. 
			 */
			LINPHONECXX_PUBLIC static size_t getLogCollectionMaxFileSize();
			

		private:
			static void *createCallbacks(void *userData);
		
		
		private:
			void *mCallbacks;
		
	};

};

#endif // _LINPHONE_CORE_HH
