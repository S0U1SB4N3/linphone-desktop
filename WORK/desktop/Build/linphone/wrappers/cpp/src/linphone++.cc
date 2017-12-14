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

#include <belle-sip/object.h>
#include <linphone/linphonecore.h>
#include <linphone/linphone_tunnel.h>
#include <linphone/linphonecore_utils.h>
#include <linphone/wrapper_utils.h>
#include "linphone++/linphone.hh"
#include "tools.hh"

using namespace std;
using namespace linphone;



linphone::NatPolicy::NatPolicy(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






bool linphone::NatPolicy::upnpEnabled() const {
	return (linphone_nat_policy_upnp_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableUpnp(bool enable) {
	linphone_nat_policy_enable_upnp((::LinphoneNatPolicy *)mPrivPtr, enable);
}
bool linphone::NatPolicy::turnEnabled() const {
	return (linphone_nat_policy_turn_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableTurn(bool enable) {
	linphone_nat_policy_enable_turn((::LinphoneNatPolicy *)mPrivPtr, enable);
}
std::string linphone::NatPolicy::getStunServerUsername() const {
	return StringUtilities::cStringToCpp(linphone_nat_policy_get_stun_server_username((::LinphoneNatPolicy *)mPrivPtr));
}
void linphone::NatPolicy::setStunServerUsername(const std::string & username) {
	linphone_nat_policy_set_stun_server_username((::LinphoneNatPolicy *)mPrivPtr, StringUtilities::cppStringToC(username));
}
bool linphone::NatPolicy::stunEnabled() const {
	return (linphone_nat_policy_stun_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableStun(bool enable) {
	linphone_nat_policy_enable_stun((::LinphoneNatPolicy *)mPrivPtr, enable);
}
bool linphone::NatPolicy::iceEnabled() const {
	return (linphone_nat_policy_ice_enabled((::LinphoneNatPolicy *)mPrivPtr) != FALSE);
}
void linphone::NatPolicy::enableIce(bool enable) {
	linphone_nat_policy_enable_ice((::LinphoneNatPolicy *)mPrivPtr, enable);
}
std::string linphone::NatPolicy::getStunServer() const {
	return StringUtilities::cStringToCpp(linphone_nat_policy_get_stun_server((::LinphoneNatPolicy *)mPrivPtr));
}
void linphone::NatPolicy::setStunServer(const std::string & stunServer) {
	linphone_nat_policy_set_stun_server((::LinphoneNatPolicy *)mPrivPtr, StringUtilities::cppStringToC(stunServer));
}
void linphone::NatPolicy::resolveStunServer() {
	linphone_nat_policy_resolve_stun_server((::LinphoneNatPolicy *)mPrivPtr);
}
void linphone::NatPolicy::clear() {
	linphone_nat_policy_clear((::LinphoneNatPolicy *)mPrivPtr);
}



static bool_t linphone_im_encryption_engine_listener_on_is_encryption_enabled_for_file_transfer_cb(LinphoneImEncryptionEngine * engine, LinphoneChatRoom * room) {
	std::shared_ptr<ImEncryptionEngineListener> listener = std::static_pointer_cast<ImEncryptionEngineListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)engine));
	return listener->onIsEncryptionEnabledForFileTransfer(Object::cPtrToSharedPtr<ImEncryptionEngine>(engine), Object::cPtrToSharedPtr<ChatRoom>(room));
	
}
static void linphone_im_encryption_engine_listener_on_generate_file_transfer_key_cb(LinphoneImEncryptionEngine * engine, LinphoneChatRoom * room, LinphoneChatMessage * msg) {
	std::shared_ptr<ImEncryptionEngineListener> listener = std::static_pointer_cast<ImEncryptionEngineListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)engine));
	listener->onGenerateFileTransferKey(Object::cPtrToSharedPtr<ImEncryptionEngine>(engine), Object::cPtrToSharedPtr<ChatRoom>(room), Object::cPtrToSharedPtr<ChatMessage>(msg));
	
}
static int linphone_im_encryption_engine_listener_on_process_uploading_file_cb(LinphoneImEncryptionEngine * engine, LinphoneChatMessage * msg, size_t offset, const uint8_t * buffer, size_t * size, uint8_t * encrypted_buffer) {
	std::shared_ptr<ImEncryptionEngineListener> listener = std::static_pointer_cast<ImEncryptionEngineListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)engine));
	return listener->onProcessUploadingFile(Object::cPtrToSharedPtr<ImEncryptionEngine>(engine), Object::cPtrToSharedPtr<ChatMessage>(msg), offset, buffer, size, encrypted_buffer);
	
}
static int linphone_im_encryption_engine_listener_on_process_downloading_file_cb(LinphoneImEncryptionEngine * engine, LinphoneChatMessage * msg, size_t offset, const uint8_t * buffer, size_t size, uint8_t * decrypted_buffer) {
	std::shared_ptr<ImEncryptionEngineListener> listener = std::static_pointer_cast<ImEncryptionEngineListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)engine));
	return listener->onProcessDownloadingFile(Object::cPtrToSharedPtr<ImEncryptionEngine>(engine), Object::cPtrToSharedPtr<ChatMessage>(msg), offset, buffer, size, decrypted_buffer);
	
}
static int linphone_im_encryption_engine_listener_on_process_outgoing_message_cb(LinphoneImEncryptionEngine * engine, LinphoneChatRoom * room, LinphoneChatMessage * msg) {
	std::shared_ptr<ImEncryptionEngineListener> listener = std::static_pointer_cast<ImEncryptionEngineListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)engine));
	return listener->onProcessOutgoingMessage(Object::cPtrToSharedPtr<ImEncryptionEngine>(engine), Object::cPtrToSharedPtr<ChatRoom>(room), Object::cPtrToSharedPtr<ChatMessage>(msg));
	
}
static int linphone_im_encryption_engine_listener_on_process_incoming_message_cb(LinphoneImEncryptionEngine * engine, LinphoneChatRoom * room, LinphoneChatMessage * msg) {
	std::shared_ptr<ImEncryptionEngineListener> listener = std::static_pointer_cast<ImEncryptionEngineListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)engine));
	return listener->onProcessIncomingMessage(Object::cPtrToSharedPtr<ImEncryptionEngine>(engine), Object::cPtrToSharedPtr<ChatRoom>(room), Object::cPtrToSharedPtr<ChatMessage>(msg));
	
}

linphone::ImEncryptionEngine::ImEncryptionEngine(void *ptr, bool takeRef): ListenableObject(ptr, takeRef) {
}


void linphone::ImEncryptionEngine::setListener(const std::shared_ptr<ImEncryptionEngineListener> & listener) {
	ListenableObject::setListener(std::static_pointer_cast<Listener>(listener));
	LinphoneImEncryptionEngineCbs *cbs = linphone_im_encryption_engine_get_callbacks((::LinphoneImEncryptionEngine *)mPrivPtr);
	if (listener == nullptr) {
		linphone_im_encryption_engine_cbs_set_is_encryption_enabled_for_file_transfer(cbs, NULL);
		linphone_im_encryption_engine_cbs_set_generate_file_transfer_key(cbs, NULL);
		linphone_im_encryption_engine_cbs_set_process_uploading_file(cbs, NULL);
		linphone_im_encryption_engine_cbs_set_process_downloading_file(cbs, NULL);
		linphone_im_encryption_engine_cbs_set_process_outgoing_message(cbs, NULL);
		linphone_im_encryption_engine_cbs_set_process_incoming_message(cbs, NULL);
	} else {
		linphone_im_encryption_engine_cbs_set_is_encryption_enabled_for_file_transfer(cbs, linphone_im_encryption_engine_listener_on_is_encryption_enabled_for_file_transfer_cb);
		linphone_im_encryption_engine_cbs_set_generate_file_transfer_key(cbs, linphone_im_encryption_engine_listener_on_generate_file_transfer_key_cb);
		linphone_im_encryption_engine_cbs_set_process_uploading_file(cbs, linphone_im_encryption_engine_listener_on_process_uploading_file_cb);
		linphone_im_encryption_engine_cbs_set_process_downloading_file(cbs, linphone_im_encryption_engine_listener_on_process_downloading_file_cb);
		linphone_im_encryption_engine_cbs_set_process_outgoing_message(cbs, linphone_im_encryption_engine_listener_on_process_outgoing_message_cb);
		linphone_im_encryption_engine_cbs_set_process_incoming_message(cbs, linphone_im_encryption_engine_listener_on_process_incoming_message_cb);
	}
}




std::shared_ptr<Core> linphone::ImEncryptionEngine::getCore() {
	return Object::cPtrToSharedPtr<Core>(linphone_im_encryption_engine_get_core((::LinphoneImEncryptionEngine *)mPrivPtr));
}




linphone::VideoActivationPolicy::VideoActivationPolicy(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






bool linphone::VideoActivationPolicy::getAutomaticallyAccept() const {
	return (linphone_video_activation_policy_get_automatically_accept((::LinphoneVideoActivationPolicy *)mPrivPtr) != FALSE);
}
void linphone::VideoActivationPolicy::setAutomaticallyAccept(bool enable) {
	linphone_video_activation_policy_set_automatically_accept((::LinphoneVideoActivationPolicy *)mPrivPtr, enable);
}
bool linphone::VideoActivationPolicy::getAutomaticallyInitiate() const {
	return (linphone_video_activation_policy_get_automatically_initiate((::LinphoneVideoActivationPolicy *)mPrivPtr) != FALSE);
}
void linphone::VideoActivationPolicy::setAutomaticallyInitiate(bool enable) {
	linphone_video_activation_policy_set_automatically_initiate((::LinphoneVideoActivationPolicy *)mPrivPtr, enable);
}




linphone::PresenceService::PresenceService(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






PresenceBasicStatus linphone::PresenceService::getBasicStatus() const {
	return (PresenceBasicStatus)linphone_presence_service_get_basic_status((::LinphonePresenceService *)mPrivPtr);
}
linphone::Status linphone::PresenceService::setBasicStatus(PresenceBasicStatus basicStatus) {
	return linphone_presence_service_set_basic_status((::LinphonePresenceService *)mPrivPtr, (::LinphonePresenceBasicStatus)basicStatus);
}
std::string linphone::PresenceService::getId() const {
	return StringUtilities::cStringToCpp(linphone_presence_service_get_id((::LinphonePresenceService *)mPrivPtr));
}
linphone::Status linphone::PresenceService::setId(const std::string & id) {
	return linphone_presence_service_set_id((::LinphonePresenceService *)mPrivPtr, StringUtilities::cppStringToC(id));
}
unsigned int linphone::PresenceService::getNbNotes() const {
	return linphone_presence_service_get_nb_notes((::LinphonePresenceService *)mPrivPtr);
}
std::string linphone::PresenceService::getContact() const {
	return StringUtilities::cStringToCpp(linphone_presence_service_get_contact((::LinphonePresenceService *)mPrivPtr));
}
linphone::Status linphone::PresenceService::setContact(const std::string & contact) {
	return linphone_presence_service_set_contact((::LinphonePresenceService *)mPrivPtr, StringUtilities::cppStringToC(contact));
}
std::shared_ptr<PresenceNote> linphone::PresenceService::getNthNote(unsigned int idx) const {
	return Object::cPtrToSharedPtr<PresenceNote>(linphone_presence_service_get_nth_note((::LinphonePresenceService *)mPrivPtr, idx));
}
linphone::Status linphone::PresenceService::clearNotes() {
	return linphone_presence_service_clear_notes((::LinphonePresenceService *)mPrivPtr);
}
linphone::Status linphone::PresenceService::addNote(const std::shared_ptr<PresenceNote> & note) {
	return linphone_presence_service_add_note((::LinphonePresenceService *)mPrivPtr, (::LinphonePresenceNote *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceNote>(note)));
}




linphone::Transports::Transports(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






int linphone::Transports::getTcpPort() const {
	return linphone_transports_get_tcp_port((::LinphoneTransports *)mPrivPtr);
}
void linphone::Transports::setTcpPort(int port) {
	linphone_transports_set_tcp_port((::LinphoneTransports *)mPrivPtr, port);
}
int linphone::Transports::getDtlsPort() const {
	return linphone_transports_get_dtls_port((::LinphoneTransports *)mPrivPtr);
}
void linphone::Transports::setDtlsPort(int port) {
	linphone_transports_set_dtls_port((::LinphoneTransports *)mPrivPtr, port);
}
int linphone::Transports::getTlsPort() const {
	return linphone_transports_get_tls_port((::LinphoneTransports *)mPrivPtr);
}
void linphone::Transports::setTlsPort(int port) {
	linphone_transports_set_tls_port((::LinphoneTransports *)mPrivPtr, port);
}
int linphone::Transports::getUdpPort() const {
	return linphone_transports_get_udp_port((::LinphoneTransports *)mPrivPtr);
}
void linphone::Transports::setUdpPort(int port) {
	linphone_transports_set_udp_port((::LinphoneTransports *)mPrivPtr, port);
}




linphone::ConferenceParams::ConferenceParams(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






void linphone::ConferenceParams::enableVideo(bool enable) {
	linphone_conference_params_enable_video((::LinphoneConferenceParams *)mPrivPtr, enable);
}
bool linphone::ConferenceParams::videoRequested() const {
	return (linphone_conference_params_video_requested((::LinphoneConferenceParams *)mPrivPtr) != FALSE);
}
std::shared_ptr<ConferenceParams> linphone::ConferenceParams::clone() const {
	return Object::cPtrToSharedPtr<ConferenceParams>(linphone_conference_params_clone((::LinphoneConferenceParams *)mPrivPtr));
}




linphone::InfoMessage::InfoMessage(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::shared_ptr<const Content> linphone::InfoMessage::getContent() const {
	return Object::cPtrToSharedPtr<const Content>(linphone_info_message_get_content((::LinphoneInfoMessage *)mPrivPtr));
}
void linphone::InfoMessage::setContent(const std::shared_ptr<const Content> & content) {
	linphone_info_message_set_content((::LinphoneInfoMessage *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(content)));
}
std::string linphone::InfoMessage::getHeader(const std::string & name) const {
	return StringUtilities::cStringToCpp(linphone_info_message_get_header((::LinphoneInfoMessage *)mPrivPtr, StringUtilities::cppStringToC(name)));
}
void linphone::InfoMessage::addHeader(const std::string & name, const std::string & value) {
	linphone_info_message_add_header((::LinphoneInfoMessage *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}




linphone::PresenceActivity::PresenceActivity(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






PresenceActivityType linphone::PresenceActivity::getType() const {
	return (PresenceActivityType)linphone_presence_activity_get_type((::LinphonePresenceActivity *)mPrivPtr);
}
linphone::Status linphone::PresenceActivity::setType(PresenceActivityType acttype) {
	return linphone_presence_activity_set_type((::LinphonePresenceActivity *)mPrivPtr, (::LinphonePresenceActivityType)acttype);
}
std::string linphone::PresenceActivity::getDescription() const {
	return StringUtilities::cStringToCpp(linphone_presence_activity_get_description((::LinphonePresenceActivity *)mPrivPtr));
}
linphone::Status linphone::PresenceActivity::setDescription(const std::string & description) {
	return linphone_presence_activity_set_description((::LinphonePresenceActivity *)mPrivPtr, StringUtilities::cppStringToC(description));
}
std::string linphone::PresenceActivity::toString() const {
	return StringUtilities::cStringToCpp(linphone_presence_activity_to_string((::LinphonePresenceActivity *)mPrivPtr));
}



static void linphone_call_listener_on_state_changed_cb(LinphoneCall * call, LinphoneCallState cstate, const char * message) {
	
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_call_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
		listener->onStateChanged(Object::cPtrToSharedPtr<Call>(call), (CallState)cstate, StringUtilities::cStringToCpp(message));
	}
}
static void linphone_call_listener_on_transfer_state_changed_cb(LinphoneCall * call, LinphoneCallState cstate) {
	
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_call_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
		listener->onTransferStateChanged(Object::cPtrToSharedPtr<Call>(call), (CallState)cstate);
	}
}
static void linphone_call_listener_on_info_message_received_cb(LinphoneCall * call, const LinphoneInfoMessage * msg) {
	
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_call_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
		listener->onInfoMessageReceived(Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<const InfoMessage>(msg));
	}
}
static void linphone_call_listener_on_encryption_changed_cb(LinphoneCall * call, bool_t on, const char * authentication_token) {
	
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_call_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
		listener->onEncryptionChanged(Object::cPtrToSharedPtr<Call>(call), (on != FALSE), StringUtilities::cStringToCpp(authentication_token));
	}
}
static void linphone_call_listener_on_ack_processing_cb(LinphoneCall * call, LinphoneHeaders * ack, bool_t is_received) {
	
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_call_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
		listener->onAckProcessing(Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<Headers>(ack), (is_received != FALSE));
	}
}
static void linphone_call_listener_on_dtmf_received_cb(LinphoneCall * call, int dtmf) {
	
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_call_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
		listener->onDtmfReceived(Object::cPtrToSharedPtr<Call>(call), dtmf);
	}
}
static void linphone_call_listener_on_stats_updated_cb(LinphoneCall * call, const LinphoneCallStats * stats) {
	
	LinphoneCallCbs *cbs = linphone_call_get_current_callbacks(call);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_call_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CallListener> listener = std::static_pointer_cast<CallListener,Listener>(*it);
		listener->onStatsUpdated(Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<const CallStats>(stats));
	}
}

linphone::Call::Call(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
	mCallbacks = (LinphoneCallCbs *)createCallbacks(&getListeners());
	linphone_call_add_callbacks((::LinphoneCall *)mPrivPtr, (LinphoneCallCbs *)mCallbacks);
}



Call::~Call() {
	linphone_call_remove_callbacks((::LinphoneCall *)mPrivPtr, (LinphoneCallCbs *)mCallbacks);
	belle_sip_object_unref(mCallbacks);
}

void Call::addListener(const std::shared_ptr<CallListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,CallListener>(listener));
}

void Call::removeListener(const std::shared_ptr<CallListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,CallListener>(listener));
}

void *Call::createCallbacks(void *userData) {
	LinphoneCallCbs *cbs = linphone_factory_create_call_cbs(linphone_factory_get());
	linphone_call_cbs_set_state_changed(cbs, linphone_call_listener_on_state_changed_cb);
	linphone_call_cbs_set_transfer_state_changed(cbs, linphone_call_listener_on_transfer_state_changed_cb);
	linphone_call_cbs_set_info_message_received(cbs, linphone_call_listener_on_info_message_received_cb);
	linphone_call_cbs_set_encryption_changed(cbs, linphone_call_listener_on_encryption_changed_cb);
	linphone_call_cbs_set_ack_processing(cbs, linphone_call_listener_on_ack_processing_cb);
	linphone_call_cbs_set_dtmf_received(cbs, linphone_call_listener_on_dtmf_received_cb);
	linphone_call_cbs_set_stats_updated(cbs, linphone_call_listener_on_stats_updated_cb);
	linphone_call_cbs_set_user_data(cbs, userData);
	return cbs;
}



std::shared_ptr<const Address> linphone::Call::getToAddress() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_call_get_to_address((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const CallParams> linphone::Call::getRemoteParams() {
	return Object::cPtrToSharedPtr<const CallParams>(linphone_call_get_remote_params((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<Call> linphone::Call::getReplacedCall() {
	return Object::cPtrToSharedPtr<Call>(linphone_call_get_replaced_call((::LinphoneCall *)mPrivPtr));
}
bool linphone::Call::echoLimiterEnabled() const {
	return (linphone_call_echo_limiter_enabled((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::enableEchoLimiter(bool val) {
	linphone_call_enable_echo_limiter((::LinphoneCall *)mPrivPtr, val);
}
std::shared_ptr<Player> linphone::Call::getPlayer() {
	return Object::cPtrToSharedPtr<Player>(linphone_call_get_player((::LinphoneCall *)mPrivPtr));
}
std::string linphone::Call::getReferTo() const {
	return StringUtilities::cStringToCpp(linphone_call_get_refer_to((::LinphoneCall *)mPrivPtr));
}
float linphone::Call::getCurrentQuality() {
	return linphone_call_get_current_quality((::LinphoneCall *)mPrivPtr);
}
int linphone::Call::getDuration() const {
	return linphone_call_get_duration((::LinphoneCall *)mPrivPtr);
}
float linphone::Call::getAverageQuality() {
	return linphone_call_get_average_quality((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<Conference> linphone::Call::getConference() const {
	return Object::cPtrToSharedPtr<Conference>(linphone_call_get_conference((::LinphoneCall *)mPrivPtr));
}
std::string linphone::Call::getRemoteAddressAsString() const {
	return StringUtilities::cStringToCpp(linphone_call_get_remote_address_as_string((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<CallLog> linphone::Call::getCallLog() const {
	return Object::cPtrToSharedPtr<CallLog>(linphone_call_get_call_log((::LinphoneCall *)mPrivPtr));
}
float linphone::Call::getRecordVolume() {
	return linphone_call_get_record_volume((::LinphoneCall *)mPrivPtr);
}
CallState linphone::Call::getState() const {
	return (CallState)linphone_call_get_state((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<const CallParams> linphone::Call::getParams() {
	return Object::cPtrToSharedPtr<const CallParams>(linphone_call_get_params((::LinphoneCall *)mPrivPtr));
}
void linphone::Call::setParams(const std::shared_ptr<const CallParams> & params) {
	linphone_call_set_params((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
std::shared_ptr<const Address> linphone::Call::getDiversionAddress() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_call_get_diversion_address((::LinphoneCall *)mPrivPtr));
}
float linphone::Call::getSpeakerVolumeGain() const {
	return linphone_call_get_speaker_volume_gain((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::setSpeakerVolumeGain(float volume) {
	linphone_call_set_speaker_volume_gain((::LinphoneCall *)mPrivPtr, volume);
}
float linphone::Call::getPlayVolume() {
	return linphone_call_get_play_volume((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<Core> linphone::Call::getCore() const {
	return Object::cPtrToSharedPtr<Core>(linphone_call_get_core((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const CallParams> linphone::Call::getCurrentParams() {
	return Object::cPtrToSharedPtr<const CallParams>(linphone_call_get_current_params((::LinphoneCall *)mPrivPtr));
}
std::string linphone::Call::getAuthenticationToken() {
	return StringUtilities::cStringToCpp(linphone_call_get_authentication_token((::LinphoneCall *)mPrivPtr));
}
void linphone::Call::setAudioRoute(AudioRoute route) {
	linphone_call_set_audio_route((::LinphoneCall *)mPrivPtr, (::LinphoneAudioRoute)route);
}
std::shared_ptr<Call> linphone::Call::getTransferTargetCall() const {
	return Object::cPtrToSharedPtr<Call>(linphone_call_get_transfer_target_call((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const Address> linphone::Call::getRemoteAddress() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_call_get_remote_address((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<const ErrorInfo> linphone::Call::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const ErrorInfo>(linphone_call_get_error_info((::LinphoneCall *)mPrivPtr));
}
bool linphone::Call::getAuthenticationTokenVerified() {
	return (linphone_call_get_authentication_token_verified((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::setAuthenticationTokenVerified(bool verified) {
	linphone_call_set_authentication_token_verified((::LinphoneCall *)mPrivPtr, verified);
}
Reason linphone::Call::getReason() const {
	return (Reason)linphone_call_get_reason((::LinphoneCall *)mPrivPtr);
}
void * linphone::Call::getNativeVideoWindowId() const {
	return linphone_call_get_native_video_window_id((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::setNativeVideoWindowId(void * id) {
	linphone_call_set_native_video_window_id((::LinphoneCall *)mPrivPtr, id);
}
bool linphone::Call::cameraEnabled() const {
	return (linphone_call_camera_enabled((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::enableCamera(bool enabled) {
	linphone_call_enable_camera((::LinphoneCall *)mPrivPtr, enabled);
}
std::string linphone::Call::getRemoteContact() {
	return StringUtilities::cStringToCpp(linphone_call_get_remote_contact((::LinphoneCall *)mPrivPtr));
}
int linphone::Call::getStreamCount() {
	return linphone_call_get_stream_count((::LinphoneCall *)mPrivPtr);
}
bool linphone::Call::echoCancellationEnabled() {
	return (linphone_call_echo_cancellation_enabled((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::enableEchoCancellation(bool val) {
	linphone_call_enable_echo_cancellation((::LinphoneCall *)mPrivPtr, val);
}
CallState linphone::Call::getTransferState() {
	return (CallState)linphone_call_get_transfer_state((::LinphoneCall *)mPrivPtr);
}
std::string linphone::Call::getRemoteUserAgent() {
	return StringUtilities::cStringToCpp(linphone_call_get_remote_user_agent((::LinphoneCall *)mPrivPtr));
}
std::shared_ptr<Call> linphone::Call::getTransfererCall() const {
	return Object::cPtrToSharedPtr<Call>(linphone_call_get_transferer_call((::LinphoneCall *)mPrivPtr));
}
float linphone::Call::getMicrophoneVolumeGain() const {
	return linphone_call_get_microphone_volume_gain((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::setMicrophoneVolumeGain(float volume) {
	linphone_call_set_microphone_volume_gain((::LinphoneCall *)mPrivPtr, volume);
}
std::shared_ptr<ChatRoom> linphone::Call::getChatRoom() {
	return Object::cPtrToSharedPtr<ChatRoom>(linphone_call_get_chat_room((::LinphoneCall *)mPrivPtr));
}
CallDir linphone::Call::getDir() const {
	return (CallDir)linphone_call_get_dir((::LinphoneCall *)mPrivPtr);
}
std::shared_ptr<CallStats> linphone::Call::getStats(StreamType type) {
	return Object::cPtrToSharedPtr<CallStats>(linphone_call_get_stats((::LinphoneCall *)mPrivPtr, (::LinphoneStreamType)type));
}
linphone::Status linphone::Call::acceptEarlyMediaWithParams(const std::shared_ptr<const CallParams> & params) {
	return linphone_call_accept_early_media_with_params((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
linphone::Status linphone::Call::takeVideoSnapshot(const std::string & file) {
	return linphone_call_take_video_snapshot((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(file));
}
linphone::Status linphone::Call::pause() {
	return linphone_call_pause((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::acceptWithParams(const std::shared_ptr<const CallParams> & params) {
	return linphone_call_accept_with_params((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
linphone::Status linphone::Call::sendDtmfs(const std::string & dtmfs) {
	return linphone_call_send_dtmfs((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(dtmfs));
}
void linphone::Call::zoomVideo(float zoomFactor, float * cx, float * cy) {
	linphone_call_zoom_video((::LinphoneCall *)mPrivPtr, zoomFactor, cx, cy);
}
void linphone::Call::stopRecording() {
	linphone_call_stop_recording((::LinphoneCall *)mPrivPtr);
}
void linphone::Call::sendVfuRequest() {
	linphone_call_send_vfu_request((::LinphoneCall *)mPrivPtr);
}
bool linphone::Call::askedToAutoanswer() {
	return (linphone_call_asked_to_autoanswer((::LinphoneCall *)mPrivPtr) != FALSE);
}
linphone::Status linphone::Call::acceptEarlyMedia() {
	return linphone_call_accept_early_media((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::decline(Reason reason) {
	return linphone_call_decline((::LinphoneCall *)mPrivPtr, (::LinphoneReason)reason);
}
void linphone::Call::oglRender() const {
	linphone_call_ogl_render((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::transferToAnother(const std::shared_ptr<Call> & dest) {
	return linphone_call_transfer_to_another((::LinphoneCall *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(dest)));
}
linphone::Status linphone::Call::resume() {
	return linphone_call_resume((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::transfer(const std::string & referTo) {
	return linphone_call_transfer((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(referTo));
}
linphone::Status linphone::Call::takePreviewSnapshot(const std::string & file) {
	return linphone_call_take_preview_snapshot((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(file));
}
linphone::Status linphone::Call::update(const std::shared_ptr<const CallParams> & params) {
	return linphone_call_update((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
linphone::Status linphone::Call::acceptUpdate(const std::shared_ptr<const CallParams> & params) {
	return linphone_call_accept_update((::LinphoneCall *)mPrivPtr, (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
linphone::Status linphone::Call::redirect(const std::string & redirectUri) {
	return linphone_call_redirect((::LinphoneCall *)mPrivPtr, StringUtilities::cppStringToC(redirectUri));
}
linphone::Status linphone::Call::sendDtmf(char dtmf) {
	return linphone_call_send_dtmf((::LinphoneCall *)mPrivPtr, dtmf);
}
linphone::Status linphone::Call::terminate() {
	return linphone_call_terminate((::LinphoneCall *)mPrivPtr);
}
bool linphone::Call::mediaInProgress() {
	return (linphone_call_media_in_progress((::LinphoneCall *)mPrivPtr) != FALSE);
}
void linphone::Call::cancelDtmfs() {
	linphone_call_cancel_dtmfs((::LinphoneCall *)mPrivPtr);
}
int linphone::Call::declineWithErrorInfo(const std::shared_ptr<const ErrorInfo> & ei) {
	return linphone_call_decline_with_error_info((::LinphoneCall *)mPrivPtr, (::LinphoneErrorInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const ErrorInfo>(ei)));
}
void linphone::Call::startRecording() {
	linphone_call_start_recording((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::sendInfoMessage(const std::shared_ptr<const InfoMessage> & info) {
	return linphone_call_send_info_message((::LinphoneCall *)mPrivPtr, (::LinphoneInfoMessage *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const InfoMessage>(info)));
}
bool linphone::Call::hasTransferPending() const {
	return (linphone_call_has_transfer_pending((::LinphoneCall *)mPrivPtr) != FALSE);
}
linphone::Status linphone::Call::deferUpdate() {
	return linphone_call_defer_update((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::accept() {
	return linphone_call_accept((::LinphoneCall *)mPrivPtr);
}
linphone::Status linphone::Call::terminateWithErrorInfo(const std::shared_ptr<const ErrorInfo> & ei) {
	return linphone_call_terminate_with_error_info((::LinphoneCall *)mPrivPtr, (::LinphoneErrorInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const ErrorInfo>(ei)));
}




linphone::XmlRpcSession::XmlRpcSession(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






void linphone::XmlRpcSession::release() {
	linphone_xml_rpc_session_release((::LinphoneXmlRpcSession *)mPrivPtr);
}
void linphone::XmlRpcSession::sendRequest(const std::shared_ptr<XmlRpcRequest> & request) {
	linphone_xml_rpc_session_send_request((::LinphoneXmlRpcSession *)mPrivPtr, (::LinphoneXmlRpcRequest *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,XmlRpcRequest>(request)));
}




linphone::Tunnel::Tunnel(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






bool linphone::Tunnel::sipEnabled() const {
	return (linphone_tunnel_sip_enabled((::LinphoneTunnel *)mPrivPtr) != FALSE);
}
void linphone::Tunnel::enableSip(bool enable) {
	linphone_tunnel_enable_sip((::LinphoneTunnel *)mPrivPtr, enable);
}
bool linphone::Tunnel::dualModeEnabled() const {
	return (linphone_tunnel_dual_mode_enabled((::LinphoneTunnel *)mPrivPtr) != FALSE);
}
void linphone::Tunnel::enableDualMode(bool dualModeEnabled) {
	linphone_tunnel_enable_dual_mode((::LinphoneTunnel *)mPrivPtr, dualModeEnabled);
}
bool linphone::Tunnel::getActivated() const {
	return (linphone_tunnel_get_activated((::LinphoneTunnel *)mPrivPtr) != FALSE);
}
TunnelMode linphone::Tunnel::getMode() const {
	return (TunnelMode)linphone_tunnel_get_mode((::LinphoneTunnel *)mPrivPtr);
}
void linphone::Tunnel::setMode(TunnelMode mode) {
	linphone_tunnel_set_mode((::LinphoneTunnel *)mPrivPtr, (::LinphoneTunnelMode)mode);
}
void linphone::Tunnel::reconnect() {
	linphone_tunnel_reconnect((::LinphoneTunnel *)mPrivPtr);
}
void linphone::Tunnel::cleanServers() {
	linphone_tunnel_clean_servers((::LinphoneTunnel *)mPrivPtr);
}
bool linphone::Tunnel::connected() const {
	return (linphone_tunnel_connected((::LinphoneTunnel *)mPrivPtr) != FALSE);
}
void linphone::Tunnel::setHttpProxyAuthInfo(const std::string & username, const std::string & passwd) {
	linphone_tunnel_set_http_proxy_auth_info((::LinphoneTunnel *)mPrivPtr, StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(passwd));
}
void linphone::Tunnel::setHttpProxy(const std::string & host, int port, const std::string & username, const std::string & passwd) {
	linphone_tunnel_set_http_proxy((::LinphoneTunnel *)mPrivPtr, StringUtilities::cppStringToC(host), port, StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(passwd));
}




linphone::Event::Event(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::shared_ptr<Core> linphone::Event::getCore() const {
	return Object::cPtrToSharedPtr<Core>(linphone_event_get_core((::LinphoneEvent *)mPrivPtr));
}
SubscriptionDir linphone::Event::getSubscriptionDir() {
	return (SubscriptionDir)linphone_event_get_subscription_dir((::LinphoneEvent *)mPrivPtr);
}
std::shared_ptr<const Address> linphone::Event::getFrom() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_event_get_from((::LinphoneEvent *)mPrivPtr));
}
std::string linphone::Event::getName() const {
	return StringUtilities::cStringToCpp(linphone_event_get_name((::LinphoneEvent *)mPrivPtr));
}
PublishState linphone::Event::getPublishState() const {
	return (PublishState)linphone_event_get_publish_state((::LinphoneEvent *)mPrivPtr);
}
std::shared_ptr<const ErrorInfo> linphone::Event::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const ErrorInfo>(linphone_event_get_error_info((::LinphoneEvent *)mPrivPtr));
}
Reason linphone::Event::getReason() const {
	return (Reason)linphone_event_get_reason((::LinphoneEvent *)mPrivPtr);
}
std::shared_ptr<const Address> linphone::Event::getResource() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_event_get_resource((::LinphoneEvent *)mPrivPtr));
}
SubscriptionState linphone::Event::getSubscriptionState() const {
	return (SubscriptionState)linphone_event_get_subscription_state((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::refreshPublish() {
	return linphone_event_refresh_publish((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::sendPublish(const std::shared_ptr<const Content> & body) {
	return linphone_event_send_publish((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(body)));
}
linphone::Status linphone::Event::updatePublish(const std::shared_ptr<const Content> & body) {
	return linphone_event_update_publish((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(body)));
}
void linphone::Event::terminate() {
	linphone_event_terminate((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::updateSubscribe(const std::shared_ptr<const Content> & body) {
	return linphone_event_update_subscribe((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(body)));
}
std::string linphone::Event::getCustomHeader(const std::string & name) {
	return StringUtilities::cStringToCpp(linphone_event_get_custom_header((::LinphoneEvent *)mPrivPtr, StringUtilities::cppStringToC(name)));
}
void linphone::Event::addCustomHeader(const std::string & name, const std::string & value) {
	linphone_event_add_custom_header((::LinphoneEvent *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}
void linphone::Event::pausePublish() {
	linphone_event_pause_publish((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::refreshSubscribe() {
	return linphone_event_refresh_subscribe((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::acceptSubscription() {
	return linphone_event_accept_subscription((::LinphoneEvent *)mPrivPtr);
}
linphone::Status linphone::Event::sendSubscribe(const std::shared_ptr<const Content> & body) {
	return linphone_event_send_subscribe((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(body)));
}
linphone::Status linphone::Event::denySubscription(Reason reason) {
	return linphone_event_deny_subscription((::LinphoneEvent *)mPrivPtr, (::LinphoneReason)reason);
}
linphone::Status linphone::Event::notify(const std::shared_ptr<const Content> & body) {
	return linphone_event_notify((::LinphoneEvent *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(body)));
}




linphone::Vcard::Vcard(void *ptr, bool takeRef): Object(ptr, takeRef) {
}





std::shared_ptr<belcard::BelCard> &Vcard::getVcard() {
	return *(shared_ptr<belcard::BelCard> *)linphone_vcard_get_belcard((LinphoneVcard *)mPrivPtr);
}

std::string linphone::Vcard::getFamilyName() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_family_name((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setFamilyName(const std::string & name) {
	linphone_vcard_set_family_name((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::list<std::shared_ptr<Address> > linphone::Vcard::getSipAddresses() {
	return ObjectBctbxListWrapper<Address>::bctbxListToCppList(linphone_vcard_get_sip_addresses((::LinphoneVcard *)mPrivPtr));
}
std::string linphone::Vcard::getFullName() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_full_name((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setFullName(const std::string & name) {
	linphone_vcard_set_full_name((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::string linphone::Vcard::getUrl() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_url((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setUrl(const std::string & url) {
	linphone_vcard_set_url((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(url));
}
std::string linphone::Vcard::getEtag() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_etag((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setEtag(const std::string & etag) {
	linphone_vcard_set_etag((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(etag));
}
std::string linphone::Vcard::getGivenName() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_given_name((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setGivenName(const std::string & name) {
	linphone_vcard_set_given_name((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(name));
}
bool linphone::Vcard::getSkipValidation() const {
	return (linphone_vcard_get_skip_validation((::LinphoneVcard *)mPrivPtr) != FALSE);
}
void linphone::Vcard::setSkipValidation(bool skip) {
	linphone_vcard_set_skip_validation((::LinphoneVcard *)mPrivPtr, skip);
}
std::string linphone::Vcard::getOrganization() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_organization((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setOrganization(const std::string & organization) {
	linphone_vcard_set_organization((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(organization));
}
std::list<std::string > linphone::Vcard::getPhoneNumbers() const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_vcard_get_phone_numbers((::LinphoneVcard *)mPrivPtr));
}
std::string linphone::Vcard::getUid() const {
	return StringUtilities::cStringToCpp(linphone_vcard_get_uid((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::setUid(const std::string & uid) {
	linphone_vcard_set_uid((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(uid));
}
bool linphone::Vcard::generateUniqueId() {
	return (linphone_vcard_generate_unique_id((::LinphoneVcard *)mPrivPtr) != FALSE);
}
void linphone::Vcard::removeSipAddress(const std::string & sipAddress) {
	linphone_vcard_remove_sip_address((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(sipAddress));
}
void linphone::Vcard::removePhoneNumber(const std::string & phone) {
	linphone_vcard_remove_phone_number((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(phone));
}
void linphone::Vcard::addPhoneNumber(const std::string & phone) {
	linphone_vcard_add_phone_number((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(phone));
}
std::shared_ptr<Vcard> linphone::Vcard::clone() const {
	return Object::cPtrToSharedPtr<Vcard>(linphone_vcard_clone((::LinphoneVcard *)mPrivPtr));
}
void linphone::Vcard::addSipAddress(const std::string & sipAddress) {
	linphone_vcard_add_sip_address((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(sipAddress));
}
void linphone::Vcard::editMainSipAddress(const std::string & sipAddress) {
	linphone_vcard_edit_main_sip_address((::LinphoneVcard *)mPrivPtr, StringUtilities::cppStringToC(sipAddress));
}
std::string linphone::Vcard::asVcard4String() {
	return StringUtilities::cStringToCpp(linphone_vcard_as_vcard4_string((::LinphoneVcard *)mPrivPtr));
}




linphone::Conference::Conference(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::list<std::shared_ptr<Address> > linphone::Conference::getParticipants() const {
	return ObjectBctbxListWrapper<Address>::bctbxListToCppList(linphone_conference_get_participants((::LinphoneConference *)mPrivPtr));
}
linphone::Status linphone::Conference::removeParticipant(const std::shared_ptr<const Address> & uri) {
	return linphone_conference_remove_participant((::LinphoneConference *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(uri)));
}
linphone::Status linphone::Conference::inviteParticipants(const std::list<std::shared_ptr<Address> > & addresses, const std::shared_ptr<const CallParams> & params) {
	return linphone_conference_invite_participants((::LinphoneConference *)mPrivPtr, ObjectBctbxListWrapper<Address>(addresses).c_list(), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}



static void linphone_core_listener_on_transfer_state_changed_cb(LinphoneCore * lc, LinphoneCall * transfered, LinphoneCallState new_call_state) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onTransferStateChanged(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Call>(transfered), (CallState)new_call_state);
	}
}
static void linphone_core_listener_on_friend_list_created_cb(LinphoneCore * lc, LinphoneFriendList * list) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onFriendListCreated(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<FriendList>(list));
	}
}
static void linphone_core_listener_on_subscription_state_changed_cb(LinphoneCore * lc, LinphoneEvent * lev, LinphoneSubscriptionState state) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onSubscriptionStateChanged(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Event>(lev), (SubscriptionState)state);
	}
}
static void linphone_core_listener_on_call_log_updated_cb(LinphoneCore * lc, LinphoneCallLog * newcl) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onCallLogUpdated(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<CallLog>(newcl));
	}
}
static void linphone_core_listener_on_call_state_changed_cb(LinphoneCore * lc, LinphoneCall * call, LinphoneCallState cstate, const char * message) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onCallStateChanged(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Call>(call), (CallState)cstate, StringUtilities::cStringToCpp(message));
	}
}
static void linphone_core_listener_on_authentication_requested_cb(LinphoneCore * lc, LinphoneAuthInfo * auth_info, LinphoneAuthMethod method) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onAuthenticationRequested(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<AuthInfo>(auth_info), (AuthMethod)method);
	}
}
static void linphone_core_listener_on_notify_presence_received_for_uri_or_tel_cb(LinphoneCore * lc, LinphoneFriend * lf, const char * uri_or_tel, const LinphonePresenceModel * presence_model) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onNotifyPresenceReceivedForUriOrTel(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Friend>(lf), StringUtilities::cStringToCpp(uri_or_tel), Object::cPtrToSharedPtr<const PresenceModel>(presence_model));
	}
}
static void linphone_core_listener_on_buddy_info_updated_cb(LinphoneCore * lc, LinphoneFriend * lf) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onBuddyInfoUpdated(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Friend>(lf));
	}
}
static void linphone_core_listener_on_network_reachable_cb(LinphoneCore * lc, bool_t reachable) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onNetworkReachable(Object::cPtrToSharedPtr<Core>(lc), (reachable != FALSE));
	}
}
static void linphone_core_listener_on_notify_received_cb(LinphoneCore * lc, LinphoneEvent * lev, const char * notified_event, const LinphoneContent * body) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onNotifyReceived(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Event>(lev), StringUtilities::cStringToCpp(notified_event), Object::cPtrToSharedPtr<const Content>(body));
	}
}
static void linphone_core_listener_on_new_subscription_requested_cb(LinphoneCore * lc, LinphoneFriend * lf, const char * url) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onNewSubscriptionRequested(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Friend>(lf), StringUtilities::cStringToCpp(url));
	}
}
static void linphone_core_listener_on_registration_state_changed_cb(LinphoneCore * lc, LinphoneProxyConfig * cfg, LinphoneRegistrationState cstate, const char * message) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onRegistrationStateChanged(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<ProxyConfig>(cfg), (RegistrationState)cstate, StringUtilities::cStringToCpp(message));
	}
}
static void linphone_core_listener_on_notify_presence_received_cb(LinphoneCore * lc, LinphoneFriend * lf) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onNotifyPresenceReceived(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Friend>(lf));
	}
}
static void linphone_core_listener_on_message_received_cb(LinphoneCore * lc, LinphoneChatRoom * room, LinphoneChatMessage * message) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onMessageReceived(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<ChatRoom>(room), Object::cPtrToSharedPtr<ChatMessage>(message));
	}
}
static void linphone_core_listener_on_info_received_cb(LinphoneCore * lc, LinphoneCall * call, const LinphoneInfoMessage * msg) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onInfoReceived(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<const InfoMessage>(msg));
	}
}
static void linphone_core_listener_on_call_stats_updated_cb(LinphoneCore * lc, LinphoneCall * call, const LinphoneCallStats * stats) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onCallStatsUpdated(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Call>(call), Object::cPtrToSharedPtr<const CallStats>(stats));
	}
}
static void linphone_core_listener_on_friend_list_removed_cb(LinphoneCore * lc, LinphoneFriendList * list) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onFriendListRemoved(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<FriendList>(list));
	}
}
static void linphone_core_listener_on_refer_received_cb(LinphoneCore * lc, const char * refer_to) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onReferReceived(Object::cPtrToSharedPtr<Core>(lc), StringUtilities::cStringToCpp(refer_to));
	}
}
static void linphone_core_listener_on_configuring_status_cb(LinphoneCore * lc, LinphoneConfiguringState status, const char * message) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onConfiguringStatus(Object::cPtrToSharedPtr<Core>(lc), (ConfiguringState)status, StringUtilities::cStringToCpp(message));
	}
}
static void linphone_core_listener_on_call_created_cb(LinphoneCore * lc, LinphoneCall * call) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onCallCreated(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Call>(call));
	}
}
static void linphone_core_listener_on_publish_state_changed_cb(LinphoneCore * lc, LinphoneEvent * lev, LinphonePublishState state) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onPublishStateChanged(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Event>(lev), (PublishState)state);
	}
}
static void linphone_core_listener_on_call_encryption_changed_cb(LinphoneCore * lc, LinphoneCall * call, bool_t on, const char * authentication_token) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onCallEncryptionChanged(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Call>(call), (on != FALSE), StringUtilities::cStringToCpp(authentication_token));
	}
}
static void linphone_core_listener_on_is_composing_received_cb(LinphoneCore * lc, LinphoneChatRoom * room) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onIsComposingReceived(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<ChatRoom>(room));
	}
}
static void linphone_core_listener_on_log_collection_upload_progress_indication_cb(LinphoneCore * lc, size_t offset, size_t total) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onLogCollectionUploadProgressIndication(Object::cPtrToSharedPtr<Core>(lc), offset, total);
	}
}
static void linphone_core_listener_on_version_update_check_result_received_cb(LinphoneCore * lc, LinphoneVersionUpdateCheckResult result, const char * version, const char * url) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onVersionUpdateCheckResultReceived(Object::cPtrToSharedPtr<Core>(lc), (VersionUpdateCheckResult)result, StringUtilities::cStringToCpp(version), StringUtilities::cStringToCpp(url));
	}
}
static void linphone_core_listener_on_global_state_changed_cb(LinphoneCore * lc, LinphoneGlobalState gstate, const char * message) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onGlobalStateChanged(Object::cPtrToSharedPtr<Core>(lc), (GlobalState)gstate, StringUtilities::cStringToCpp(message));
	}
}
static void linphone_core_listener_on_log_collection_upload_state_changed_cb(LinphoneCore * lc, LinphoneCoreLogCollectionUploadState state, const char * info) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onLogCollectionUploadStateChanged(Object::cPtrToSharedPtr<Core>(lc), (CoreLogCollectionUploadState)state, StringUtilities::cStringToCpp(info));
	}
}
static void linphone_core_listener_on_dtmf_received_cb(LinphoneCore * lc, LinphoneCall * call, int dtmf) {
	
	LinphoneCoreCbs *cbs = linphone_core_get_current_callbacks(lc);
	std::list<std::shared_ptr<Listener> > &listeners = *(std::list<std::shared_ptr<Listener> > *)linphone_core_cbs_get_user_data(cbs);
	for(auto it=listeners.begin(); it!=listeners.end(); it++) {
		std::shared_ptr<CoreListener> listener = std::static_pointer_cast<CoreListener,Listener>(*it);
		listener->onDtmfReceived(Object::cPtrToSharedPtr<Core>(lc), Object::cPtrToSharedPtr<Call>(call), dtmf);
	}
}

linphone::Core::Core(void *ptr, bool takeRef): MultiListenableObject(ptr, takeRef) {
	mCallbacks = (LinphoneCoreCbs *)createCallbacks(&getListeners());
	linphone_core_add_callbacks((::LinphoneCore *)mPrivPtr, (LinphoneCoreCbs *)mCallbacks);
}



Core::~Core() {
	linphone_core_remove_callbacks((::LinphoneCore *)mPrivPtr, (LinphoneCoreCbs *)mCallbacks);
	belle_sip_object_unref(mCallbacks);
}

void Core::addListener(const std::shared_ptr<CoreListener> &listener) {
	MultiListenableObject::addListener(std::static_pointer_cast<Listener,CoreListener>(listener));
}

void Core::removeListener(const std::shared_ptr<CoreListener> &listener) {
	MultiListenableObject::removeListener(std::static_pointer_cast<Listener,CoreListener>(listener));
}

void *Core::createCallbacks(void *userData) {
	LinphoneCoreCbs *cbs = linphone_factory_create_core_cbs(linphone_factory_get());
	linphone_core_cbs_set_transfer_state_changed(cbs, linphone_core_listener_on_transfer_state_changed_cb);
	linphone_core_cbs_set_friend_list_created(cbs, linphone_core_listener_on_friend_list_created_cb);
	linphone_core_cbs_set_subscription_state_changed(cbs, linphone_core_listener_on_subscription_state_changed_cb);
	linphone_core_cbs_set_call_log_updated(cbs, linphone_core_listener_on_call_log_updated_cb);
	linphone_core_cbs_set_call_state_changed(cbs, linphone_core_listener_on_call_state_changed_cb);
	linphone_core_cbs_set_authentication_requested(cbs, linphone_core_listener_on_authentication_requested_cb);
	linphone_core_cbs_set_notify_presence_received_for_uri_or_tel(cbs, linphone_core_listener_on_notify_presence_received_for_uri_or_tel_cb);
	linphone_core_cbs_set_buddy_info_updated(cbs, linphone_core_listener_on_buddy_info_updated_cb);
	linphone_core_cbs_set_network_reachable(cbs, linphone_core_listener_on_network_reachable_cb);
	linphone_core_cbs_set_notify_received(cbs, linphone_core_listener_on_notify_received_cb);
	linphone_core_cbs_set_new_subscription_requested(cbs, linphone_core_listener_on_new_subscription_requested_cb);
	linphone_core_cbs_set_registration_state_changed(cbs, linphone_core_listener_on_registration_state_changed_cb);
	linphone_core_cbs_set_notify_presence_received(cbs, linphone_core_listener_on_notify_presence_received_cb);
	linphone_core_cbs_set_message_received(cbs, linphone_core_listener_on_message_received_cb);
	linphone_core_cbs_set_info_received(cbs, linphone_core_listener_on_info_received_cb);
	linphone_core_cbs_set_call_stats_updated(cbs, linphone_core_listener_on_call_stats_updated_cb);
	linphone_core_cbs_set_friend_list_removed(cbs, linphone_core_listener_on_friend_list_removed_cb);
	linphone_core_cbs_set_refer_received(cbs, linphone_core_listener_on_refer_received_cb);
	linphone_core_cbs_set_configuring_status(cbs, linphone_core_listener_on_configuring_status_cb);
	linphone_core_cbs_set_call_created(cbs, linphone_core_listener_on_call_created_cb);
	linphone_core_cbs_set_publish_state_changed(cbs, linphone_core_listener_on_publish_state_changed_cb);
	linphone_core_cbs_set_call_encryption_changed(cbs, linphone_core_listener_on_call_encryption_changed_cb);
	linphone_core_cbs_set_is_composing_received(cbs, linphone_core_listener_on_is_composing_received_cb);
	linphone_core_cbs_set_log_collection_upload_progress_indication(cbs, linphone_core_listener_on_log_collection_upload_progress_indication_cb);
	linphone_core_cbs_set_version_update_check_result_received(cbs, linphone_core_listener_on_version_update_check_result_received_cb);
	linphone_core_cbs_set_global_state_changed(cbs, linphone_core_listener_on_global_state_changed_cb);
	linphone_core_cbs_set_log_collection_upload_state_changed(cbs, linphone_core_listener_on_log_collection_upload_state_changed_cb);
	linphone_core_cbs_set_dtmf_received(cbs, linphone_core_listener_on_dtmf_received_cb);
	linphone_core_cbs_set_user_data(cbs, userData);
	return cbs;
}



std::string linphone::Core::getFriendsDatabasePath() {
	return StringUtilities::cStringToCpp(linphone_core_get_friends_database_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setFriendsDatabasePath(const std::string & path) {
	linphone_core_set_friends_database_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Core::getEchoCancellerFilterName() const {
	return StringUtilities::cStringToCpp(linphone_core_get_echo_canceller_filter_name((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setEchoCancellerFilterName(const std::string & filtername) {
	linphone_core_set_echo_canceller_filter_name((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(filtername));
}
void linphone::Core::setDnsServers(const std::list<std::string > & servers) {
	linphone_core_set_dns_servers((::LinphoneCore *)mPrivPtr, StringBctbxListWrapper(servers).c_list());
}
std::string linphone::Core::getRingerDevice() {
	return StringUtilities::cStringToCpp(linphone_core_get_ringer_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setRingerDevice(const std::string & devid) {
	return linphone_core_set_ringer_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(devid));
}
std::shared_ptr<FriendList> linphone::Core::getDefaultFriendList() const {
	return Object::cPtrToSharedPtr<FriendList>(linphone_core_get_default_friend_list((::LinphoneCore *)mPrivPtr));
}
std::shared_ptr<CallLog> linphone::Core::getLastOutgoingCallLog() {
	return Object::cPtrToSharedPtr<CallLog>(linphone_core_get_last_outgoing_call_log((::LinphoneCore *)mPrivPtr));
}
std::string linphone::Core::getRingback() const {
	return StringUtilities::cStringToCpp(linphone_core_get_ringback((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRingback(const std::string & path) {
	linphone_core_set_ringback((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
int linphone::Core::getDownloadBandwidth() const {
	return linphone_core_get_download_bandwidth((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDownloadBandwidth(int bw) {
	linphone_core_set_download_bandwidth((::LinphoneCore *)mPrivPtr, bw);
}
int linphone::Core::getNortpTimeout() const {
	return linphone_core_get_nortp_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setNortpTimeout(int seconds) {
	linphone_core_set_nortp_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
float linphone::Core::getPreferredFramerate() {
	return linphone_core_get_preferred_framerate((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setPreferredFramerate(float fps) {
	linphone_core_set_preferred_framerate((::LinphoneCore *)mPrivPtr, fps);
}
int linphone::Core::getMaxCalls() {
	return linphone_core_get_max_calls((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setMaxCalls(int max) {
	linphone_core_set_max_calls((::LinphoneCore *)mPrivPtr, max);
}
std::string linphone::Core::getZrtpSecretsFile() {
	return StringUtilities::cStringToCpp(linphone_core_get_zrtp_secrets_file((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setZrtpSecretsFile(const std::string & file) {
	linphone_core_set_zrtp_secrets_file((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(file));
}
int linphone::Core::getAudioDscp() const {
	return linphone_core_get_audio_dscp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAudioDscp(int dscp) {
	linphone_core_set_audio_dscp((::LinphoneCore *)mPrivPtr, dscp);
}
std::list<std::string> linphone::Core::getVideoDevices() const {
	return StringUtilities::cStringArrayToCppList(linphone_core_get_video_devices((::LinphoneCore *)mPrivPtr));
}
float linphone::Core::getMicGainDb() {
	return linphone_core_get_mic_gain_db((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setMicGainDb(float level) {
	linphone_core_set_mic_gain_db((::LinphoneCore *)mPrivPtr, level);
}
bool linphone::Core::isMediaEncryptionMandatory() {
	return (linphone_core_is_media_encryption_mandatory((::LinphoneCore *)mPrivPtr) != FALSE);
}
std::string linphone::Core::getPlaybackDevice() {
	return StringUtilities::cStringToCpp(linphone_core_get_playback_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setPlaybackDevice(const std::string & devid) {
	return linphone_core_set_playback_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(devid));
}
std::shared_ptr<const VideoDefinition> linphone::Core::getPreviewVideoDefinition() const {
	return Object::cPtrToSharedPtr<const VideoDefinition>(linphone_core_get_preview_video_definition((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setPreviewVideoDefinition(const std::shared_ptr<VideoDefinition> & vdef) {
	linphone_core_set_preview_video_definition((::LinphoneCore *)mPrivPtr, (::LinphoneVideoDefinition *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,VideoDefinition>(vdef)));
}
std::shared_ptr<Address> linphone::Core::getPrimaryContactParsed() {
	return Object::cPtrToSharedPtr<Address>(linphone_core_get_primary_contact_parsed((::LinphoneCore *)mPrivPtr));
}
std::shared_ptr<NatPolicy> linphone::Core::getNatPolicy() const {
	return Object::cPtrToSharedPtr<NatPolicy>(linphone_core_get_nat_policy((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setNatPolicy(const std::shared_ptr<NatPolicy> & policy) {
	linphone_core_set_nat_policy((::LinphoneCore *)mPrivPtr, (::LinphoneNatPolicy *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,NatPolicy>(policy)));
}
bool linphone::Core::isIncomingInvitePending() {
	return (linphone_core_is_incoming_invite_pending((::LinphoneCore *)mPrivPtr) != FALSE);
}
std::string linphone::Core::getTlsCert() const {
	return StringUtilities::cStringToCpp(linphone_core_get_tls_cert((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTlsCert(const std::string & tlsCert) {
	linphone_core_set_tls_cert((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tlsCert));
}
std::string linphone::Core::getStaticPicture() {
	return StringUtilities::cStringToCpp(linphone_core_get_static_picture((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setStaticPicture(const std::string & path) {
	return linphone_core_set_static_picture((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Core::setPreviewVideoSizeByName(const std::string & name) {
	linphone_core_set_preview_video_size_by_name((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(name));
}
bool linphone::Core::videoDisplayEnabled() {
	return (linphone_core_video_display_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoDisplay(bool enable) {
	linphone_core_enable_video_display((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::getUseRfc2833ForDtmf() {
	return (linphone_core_get_use_rfc2833_for_dtmf((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setUseRfc2833ForDtmf(bool useRfc2833) {
	linphone_core_set_use_rfc2833_for_dtmf((::LinphoneCore *)mPrivPtr, useRfc2833);
}
std::string linphone::Core::getCaptureDevice() {
	return StringUtilities::cStringToCpp(linphone_core_get_capture_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setCaptureDevice(const std::string & devid) {
	return linphone_core_set_capture_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(devid));
}
std::string linphone::Core::getRecordFile() const {
	return StringUtilities::cStringToCpp(linphone_core_get_record_file((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRecordFile(const std::string & file) {
	linphone_core_set_record_file((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(file));
}
std::shared_ptr<const Address> linphone::Core::getCurrentCallRemoteAddress() {
	return Object::cPtrToSharedPtr<const Address>(linphone_core_get_current_call_remote_address((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::getUseFiles() {
	return (linphone_core_get_use_files((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setUseFiles(bool yesno) {
	linphone_core_set_use_files((::LinphoneCore *)mPrivPtr, yesno);
}
std::string linphone::Core::getAdaptiveRateAlgorithm() const {
	return StringUtilities::cStringToCpp(linphone_core_get_adaptive_rate_algorithm((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setAdaptiveRateAlgorithm(const std::string & algorithm) {
	linphone_core_set_adaptive_rate_algorithm((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(algorithm));
}
std::string linphone::Core::getProvisioningUri() const {
	return StringUtilities::cStringToCpp(linphone_core_get_provisioning_uri((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setProvisioningUri(const std::string & uri) {
	return linphone_core_set_provisioning_uri((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(uri));
}
std::string linphone::Core::getVideoMulticastAddr() const {
	return StringUtilities::cStringToCpp(linphone_core_get_video_multicast_addr((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setVideoMulticastAddr(const std::string & ip) {
	return linphone_core_set_video_multicast_addr((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(ip));
}
int linphone::Core::getDelayedTimeout() {
	return linphone_core_get_delayed_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDelayedTimeout(int seconds) {
	linphone_core_set_delayed_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
void linphone::Core::setExpectedBandwidth(int bw) {
	linphone_core_set_expected_bandwidth((::LinphoneCore *)mPrivPtr, bw);
}
int linphone::Core::getAvpfRrInterval() const {
	return linphone_core_get_avpf_rr_interval((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAvpfRrInterval(int interval) {
	linphone_core_set_avpf_rr_interval((::LinphoneCore *)mPrivPtr, interval);
}
int linphone::Core::getUploadPtime() {
	return linphone_core_get_upload_ptime((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setUploadPtime(int ptime) {
	linphone_core_set_upload_ptime((::LinphoneCore *)mPrivPtr, ptime);
}
std::string linphone::Core::getLogCollectionUploadServerUrl() {
	return StringUtilities::cStringToCpp(linphone_core_get_log_collection_upload_server_url((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setLogCollectionUploadServerUrl(const std::string & serverUrl) {
	linphone_core_set_log_collection_upload_server_url((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(serverUrl));
}
void * linphone::Core::getZrtpCacheDb() {
	return linphone_core_get_zrtp_cache_db((::LinphoneCore *)mPrivPtr);
}
std::string linphone::Core::getFileTransferServer() {
	return StringUtilities::cStringToCpp(linphone_core_get_file_transfer_server((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setFileTransferServer(const std::string & serverUrl) {
	linphone_core_set_file_transfer_server((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(serverUrl));
}
bool linphone::Core::realtimeTextEnabled() {
	return (linphone_core_realtime_text_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
float linphone::Core::getConferenceLocalInputVolume() {
	return linphone_core_get_conference_local_input_volume((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<const VideoDefinition> linphone::Core::getPreferredVideoDefinition() const {
	return Object::cPtrToSharedPtr<const VideoDefinition>(linphone_core_get_preferred_video_definition((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setPreferredVideoDefinition(const std::shared_ptr<VideoDefinition> & vdef) {
	linphone_core_set_preferred_video_definition((::LinphoneCore *)mPrivPtr, (::LinphoneVideoDefinition *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,VideoDefinition>(vdef)));
}
bool linphone::Core::videoMulticastEnabled() const {
	return (linphone_core_video_multicast_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoMulticast(bool yesno) {
	linphone_core_enable_video_multicast((::LinphoneCore *)mPrivPtr, yesno);
}
std::string linphone::Core::getTlsKey() const {
	return StringUtilities::cStringToCpp(linphone_core_get_tls_key((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTlsKey(const std::string & tlsKey) {
	linphone_core_set_tls_key((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tlsKey));
}
int linphone::Core::getHttpProxyPort() const {
	return linphone_core_get_http_proxy_port((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setHttpProxyPort(int port) {
	linphone_core_set_http_proxy_port((::LinphoneCore *)mPrivPtr, port);
}
bool linphone::Core::echoLimiterEnabled() const {
	return (linphone_core_echo_limiter_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableEchoLimiter(bool val) {
	linphone_core_enable_echo_limiter((::LinphoneCore *)mPrivPtr, val);
}
std::list<std::shared_ptr<linphone::PayloadType> > linphone::Core::getAudioPayloadTypes() {
	return ObjectBctbxListWrapper<PayloadType>::bctbxListToCppList(linphone_core_get_audio_payload_types((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setAudioPayloadTypes(const std::list<std::shared_ptr<PayloadType> > & payloadTypes) {
	linphone_core_set_audio_payload_types((::LinphoneCore *)mPrivPtr, ObjectBctbxListWrapper<PayloadType>(payloadTypes).c_list());
}
int linphone::Core::getSipDscp() const {
	return linphone_core_get_sip_dscp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setSipDscp(int dscp) {
	linphone_core_set_sip_dscp((::LinphoneCore *)mPrivPtr, dscp);
}
void linphone::Core::setNetworkReachable(bool value) {
	linphone_core_set_network_reachable((::LinphoneCore *)mPrivPtr, value);
}
bool linphone::Core::isNetworkReachable() {
	return (linphone_core_is_network_reachable((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::videoCaptureEnabled() {
	return (linphone_core_video_capture_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoCapture(bool enable) {
	linphone_core_enable_video_capture((::LinphoneCore *)mPrivPtr, enable);
}
int linphone::Core::getMissedCallsCount() {
	return linphone_core_get_missed_calls_count((::LinphoneCore *)mPrivPtr);
}
int linphone::Core::getTextPort() const {
	return linphone_core_get_text_port((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setTextPort(int port) {
	linphone_core_set_text_port((::LinphoneCore *)mPrivPtr, port);
}
int linphone::Core::getIncTimeout() {
	return linphone_core_get_inc_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setIncTimeout(int seconds) {
	linphone_core_set_inc_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
bool linphone::Core::dnsSrvEnabled() const {
	return (linphone_core_dns_srv_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableDnsSrv(bool enable) {
	linphone_core_enable_dns_srv((::LinphoneCore *)mPrivPtr, enable);
}
float linphone::Core::getPlaybackGainDb() {
	return linphone_core_get_playback_gain_db((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setPlaybackGainDb(float level) {
	linphone_core_set_playback_gain_db((::LinphoneCore *)mPrivPtr, level);
}
std::shared_ptr<ImEncryptionEngine> linphone::Core::getImEncryptionEngine() const {
	return Object::cPtrToSharedPtr<ImEncryptionEngine>(linphone_core_get_im_encryption_engine((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setImEncryptionEngine(const std::shared_ptr<ImEncryptionEngine> & imee) {
	linphone_core_set_im_encryption_engine((::LinphoneCore *)mPrivPtr, (::LinphoneImEncryptionEngine *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,ImEncryptionEngine>(imee)));
}
std::string linphone::Core::getPlayFile() const {
	return StringUtilities::cStringToCpp(linphone_core_get_play_file((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setPlayFile(const std::string & file) {
	linphone_core_set_play_file((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(file));
}
bool linphone::Core::videoAdaptiveJittcompEnabled() {
	return (linphone_core_video_adaptive_jittcomp_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoAdaptiveJittcomp(bool enable) {
	linphone_core_enable_video_adaptive_jittcomp((::LinphoneCore *)mPrivPtr, enable);
}
void linphone::Core::enableVideoSourceReuse(bool enable) {
	linphone_core_enable_video_source_reuse((::LinphoneCore *)mPrivPtr, enable);
}
std::shared_ptr<Call> linphone::Core::getCurrentCall() const {
	return Object::cPtrToSharedPtr<Call>(linphone_core_get_current_call((::LinphoneCore *)mPrivPtr));
}
std::string linphone::Core::getChatDatabasePath() const {
	return StringUtilities::cStringToCpp(linphone_core_get_chat_database_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setChatDatabasePath(const std::string & path) {
	linphone_core_set_chat_database_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::shared_ptr<Range> linphone::Core::getVideoPortsRange() const {
	return Object::cPtrToSharedPtr<Range>(linphone_core_get_video_ports_range((::LinphoneCore *)mPrivPtr));
}
std::string linphone::Core::getVideoPreset() const {
	return StringUtilities::cStringToCpp(linphone_core_get_video_preset((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setVideoPreset(const std::string & preset) {
	linphone_core_set_video_preset((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(preset));
}
bool linphone::Core::chatEnabled() const {
	return (linphone_core_chat_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
bool linphone::Core::echoCancellationEnabled() const {
	return (linphone_core_echo_cancellation_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableEchoCancellation(bool val) {
	linphone_core_enable_echo_cancellation((::LinphoneCore *)mPrivPtr, val);
}
std::shared_ptr<Range> linphone::Core::getTextPortsRange() const {
	return Object::cPtrToSharedPtr<Range>(linphone_core_get_text_ports_range((::LinphoneCore *)mPrivPtr));
}
std::string linphone::Core::getAudioMulticastAddr() const {
	return StringUtilities::cStringToCpp(linphone_core_get_audio_multicast_addr((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setAudioMulticastAddr(const std::string & ip) {
	return linphone_core_set_audio_multicast_addr((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(ip));
}
std::string linphone::Core::getUserAgent() {
	return StringUtilities::cStringToCpp(linphone_core_get_user_agent((::LinphoneCore *)mPrivPtr));
}
std::list<std::string> linphone::Core::getSupportedFileFormats() {
	return StringUtilities::cStringArrayToCppList(linphone_core_get_supported_file_formats((::LinphoneCore *)mPrivPtr));
}
int linphone::Core::getConferenceSize() {
	return linphone_core_get_conference_size((::LinphoneCore *)mPrivPtr);
}
ConsolidatedPresence linphone::Core::getConsolidatedPresence() const {
	return (ConsolidatedPresence)linphone_core_get_consolidated_presence((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setConsolidatedPresence(ConsolidatedPresence presence) {
	linphone_core_set_consolidated_presence((::LinphoneCore *)mPrivPtr, (::LinphoneConsolidatedPresence)presence);
}
std::shared_ptr<PresenceModel> linphone::Core::getPresenceModel() const {
	return Object::cPtrToSharedPtr<PresenceModel>(linphone_core_get_presence_model((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setPresenceModel(const std::shared_ptr<PresenceModel> & presence) {
	linphone_core_set_presence_model((::LinphoneCore *)mPrivPtr, (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceModel>(presence)));
}
std::shared_ptr<Transports> linphone::Core::getTransportsUsed() {
	return Object::cPtrToSharedPtr<Transports>(linphone_core_get_transports_used((::LinphoneCore *)mPrivPtr));
}
int linphone::Core::getInCallTimeout() {
	return linphone_core_get_in_call_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setInCallTimeout(int seconds) {
	linphone_core_set_in_call_timeout((::LinphoneCore *)mPrivPtr, seconds);
}
int linphone::Core::getAudioJittcomp() {
	return linphone_core_get_audio_jittcomp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAudioJittcomp(int milliseconds) {
	linphone_core_set_audio_jittcomp((::LinphoneCore *)mPrivPtr, milliseconds);
}
bool linphone::Core::videoPreviewEnabled() const {
	return (linphone_core_video_preview_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableVideoPreview(bool val) {
	linphone_core_enable_video_preview((::LinphoneCore *)mPrivPtr, val);
}
std::string linphone::Core::getRing() const {
	return StringUtilities::cStringToCpp(linphone_core_get_ring((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRing(const std::string & path) {
	linphone_core_set_ring((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Core::getTlsCertPath() const {
	return StringUtilities::cStringToCpp(linphone_core_get_tls_cert_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTlsCertPath(const std::string & tlsCertPath) {
	linphone_core_set_tls_cert_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tlsCertPath));
}
std::string linphone::Core::getStunServer() const {
	return StringUtilities::cStringToCpp(linphone_core_get_stun_server((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setStunServer(const std::string & server) {
	linphone_core_set_stun_server((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(server));
}
bool linphone::Core::isInConference() const {
	return (linphone_core_is_in_conference((::LinphoneCore *)mPrivPtr) != FALSE);
}
std::shared_ptr<Conference> linphone::Core::getConference() {
	return Object::cPtrToSharedPtr<Conference>(linphone_core_get_conference((::LinphoneCore *)mPrivPtr));
}
std::list<std::shared_ptr<linphone::PayloadType> > linphone::Core::getTextPayloadTypes() {
	return ObjectBctbxListWrapper<PayloadType>::bctbxListToCppList(linphone_core_get_text_payload_types((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTextPayloadTypes(const std::list<std::shared_ptr<PayloadType> > & payloadTypes) {
	linphone_core_set_text_payload_types((::LinphoneCore *)mPrivPtr, ObjectBctbxListWrapper<PayloadType>(payloadTypes).c_list());
}
bool linphone::Core::adaptiveRateControlEnabled() const {
	return (linphone_core_adaptive_rate_control_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAdaptiveRateControl(bool enabled) {
	linphone_core_enable_adaptive_rate_control((::LinphoneCore *)mPrivPtr, enabled);
}
std::string linphone::Core::getUserCertificatesPath() {
	return StringUtilities::cStringToCpp(linphone_core_get_user_certificates_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setUserCertificatesPath(const std::string & path) {
	linphone_core_set_user_certificates_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
UpnpState linphone::Core::getUpnpState() const {
	return (UpnpState)linphone_core_get_upnp_state((::LinphoneCore *)mPrivPtr);
}
std::string linphone::Core::getCallLogsDatabasePath() {
	return StringUtilities::cStringToCpp(linphone_core_get_call_logs_database_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setCallLogsDatabasePath(const std::string & path) {
	linphone_core_set_call_logs_database_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::list<std::string> linphone::Core::getSoundDevices() {
	return StringUtilities::cStringArrayToCppList(linphone_core_get_sound_devices((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::getRingDuringIncomingEarlyMedia() const {
	return (linphone_core_get_ring_during_incoming_early_media((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setRingDuringIncomingEarlyMedia(bool enable) {
	linphone_core_set_ring_during_incoming_early_media((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::micEnabled() {
	return (linphone_core_mic_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableMic(bool enable) {
	linphone_core_enable_mic((::LinphoneCore *)mPrivPtr, enable);
}
bool linphone::Core::sdp200AckEnabled() const {
	return (linphone_core_sdp_200_ack_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableSdp200Ack(bool enable) {
	linphone_core_enable_sdp_200_ack((::LinphoneCore *)mPrivPtr, enable);
}
int linphone::Core::getVideoJittcomp() {
	return linphone_core_get_video_jittcomp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setVideoJittcomp(int milliseconds) {
	linphone_core_set_video_jittcomp((::LinphoneCore *)mPrivPtr, milliseconds);
}
std::string linphone::Core::getVideoDevice() const {
	return StringUtilities::cStringToCpp(linphone_core_get_video_device((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setVideoDevice(const std::string & id) {
	return linphone_core_set_video_device((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(id));
}
void linphone::Core::setMediaNetworkReachable(bool value) {
	linphone_core_set_media_network_reachable((::LinphoneCore *)mPrivPtr, value);
}
int linphone::Core::getAudioPort() const {
	return linphone_core_get_audio_port((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAudioPort(int port) {
	linphone_core_set_audio_port((::LinphoneCore *)mPrivPtr, port);
}
std::list<std::shared_ptr<CallLog> > linphone::Core::getCallLogs() {
	return ObjectBctbxListWrapper<CallLog>::bctbxListToCppList(linphone_core_get_call_logs((::LinphoneCore *)mPrivPtr));
}
std::list<std::shared_ptr<AuthInfo> > linphone::Core::getAuthInfoList() const {
	return ObjectBctbxListWrapper<AuthInfo>::bctbxListToCppList(linphone_core_get_auth_info_list((::LinphoneCore *)mPrivPtr));
}
int linphone::Core::getUploadBandwidth() const {
	return linphone_core_get_upload_bandwidth((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setUploadBandwidth(int bw) {
	linphone_core_set_upload_bandwidth((::LinphoneCore *)mPrivPtr, bw);
}
bool linphone::Core::videoEnabled() {
	return (linphone_core_video_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
std::string linphone::Core::getNatAddress() const {
	return StringUtilities::cStringToCpp(linphone_core_get_nat_address((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setNatAddress(const std::string & addr) {
	linphone_core_set_nat_address((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(addr));
}
bool linphone::Core::audioAdaptiveJittcompEnabled() {
	return (linphone_core_audio_adaptive_jittcomp_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAudioAdaptiveJittcomp(bool enable) {
	linphone_core_enable_audio_adaptive_jittcomp((::LinphoneCore *)mPrivPtr, enable);
}
std::string linphone::Core::getUpnpExternalIpaddress() const {
	return StringUtilities::cStringToCpp(linphone_core_get_upnp_external_ipaddress((::LinphoneCore *)mPrivPtr));
}
std::list<std::shared_ptr<linphone::PayloadType> > linphone::Core::getVideoPayloadTypes() {
	return ObjectBctbxListWrapper<PayloadType>::bctbxListToCppList(linphone_core_get_video_payload_types((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setVideoPayloadTypes(const std::list<std::shared_ptr<PayloadType> > & payloadTypes) {
	linphone_core_set_video_payload_types((::LinphoneCore *)mPrivPtr, ObjectBctbxListWrapper<PayloadType>(payloadTypes).c_list());
}
std::shared_ptr<Tunnel> linphone::Core::getTunnel() const {
	return Object::cPtrToSharedPtr<Tunnel>(linphone_core_get_tunnel((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::selfViewEnabled() const {
	return (linphone_core_self_view_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableSelfView(bool val) {
	linphone_core_enable_self_view((::LinphoneCore *)mPrivPtr, val);
}
int linphone::Core::getMtu() const {
	return linphone_core_get_mtu((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setMtu(int mtu) {
	linphone_core_set_mtu((::LinphoneCore *)mPrivPtr, mtu);
}
void linphone::Core::setPreferredVideoSizeByName(const std::string & name) {
	linphone_core_set_preferred_video_size_by_name((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(name));
}
int linphone::Core::getVideoDscp() const {
	return linphone_core_get_video_dscp((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setVideoDscp(int dscp) {
	linphone_core_set_video_dscp((::LinphoneCore *)mPrivPtr, dscp);
}
bool linphone::Core::keepAliveEnabled() {
	return (linphone_core_keep_alive_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableKeepAlive(bool enable) {
	linphone_core_enable_keep_alive((::LinphoneCore *)mPrivPtr, enable);
}
std::list<std::shared_ptr<ProxyConfig> > linphone::Core::getProxyConfigList() const {
	return ObjectBctbxListWrapper<ProxyConfig>::bctbxListToCppList(linphone_core_get_proxy_config_list((::LinphoneCore *)mPrivPtr));
}
int linphone::Core::getVideoPort() const {
	return linphone_core_get_video_port((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setVideoPort(int port) {
	linphone_core_set_video_port((::LinphoneCore *)mPrivPtr, port);
}
std::string linphone::Core::getRemoteRingbackTone() const {
	return StringUtilities::cStringToCpp(linphone_core_get_remote_ringback_tone((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRemoteRingbackTone(const std::string & ring) {
	linphone_core_set_remote_ringback_tone((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(ring));
}
AVPFMode linphone::Core::getAvpfMode() const {
	return (AVPFMode)linphone_core_get_avpf_mode((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setAvpfMode(AVPFMode mode) {
	linphone_core_set_avpf_mode((::LinphoneCore *)mPrivPtr, (::LinphoneAVPFMode)mode);
}
int linphone::Core::getCallsNb() const {
	return linphone_core_get_calls_nb((::LinphoneCore *)mPrivPtr);
}
std::string linphone::Core::getPrimaryContact() {
	return StringUtilities::cStringToCpp(linphone_core_get_primary_contact((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setPrimaryContact(const std::string & contact) {
	return linphone_core_set_primary_contact((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(contact));
}
std::shared_ptr<VideoDefinition> linphone::Core::getCurrentPreviewVideoDefinition() const {
	return Object::cPtrToSharedPtr<VideoDefinition>(linphone_core_get_current_preview_video_definition((::LinphoneCore *)mPrivPtr));
}
std::string linphone::Core::getVideoDisplayFilter() {
	return StringUtilities::cStringToCpp(linphone_core_get_video_display_filter((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setVideoDisplayFilter(const std::string & filtername) {
	linphone_core_set_video_display_filter((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(filtername));
}
int linphone::Core::getDeviceRotation() {
	return linphone_core_get_device_rotation((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDeviceRotation(int rotation) {
	linphone_core_set_device_rotation((::LinphoneCore *)mPrivPtr, rotation);
}
std::shared_ptr<Range> linphone::Core::getAudioPortsRange() const {
	return Object::cPtrToSharedPtr<Range>(linphone_core_get_audio_ports_range((::LinphoneCore *)mPrivPtr));
}
std::string linphone::Core::getHttpProxyHost() const {
	return StringUtilities::cStringToCpp(linphone_core_get_http_proxy_host((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setHttpProxyHost(const std::string & host) {
	linphone_core_set_http_proxy_host((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(host));
}
std::shared_ptr<ImNotifPolicy> linphone::Core::getImNotifPolicy() const {
	return Object::cPtrToSharedPtr<ImNotifPolicy>(linphone_core_get_im_notif_policy((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::dnsSearchEnabled() const {
	return (linphone_core_dns_search_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableDnsSearch(bool enable) {
	linphone_core_enable_dns_search((::LinphoneCore *)mPrivPtr, enable);
}
std::list<std::shared_ptr<ChatRoom> > linphone::Core::getChatRooms() {
	return ObjectBctbxListWrapper<ChatRoom>::bctbxListToCppList(linphone_core_get_chat_rooms((::LinphoneCore *)mPrivPtr));
}
bool linphone::Core::getGuessHostname() {
	return (linphone_core_get_guess_hostname((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setGuessHostname(bool val) {
	linphone_core_set_guess_hostname((::LinphoneCore *)mPrivPtr, val);
}
std::list<std::shared_ptr<FriendList> > linphone::Core::getFriendsLists() const {
	return ObjectBctbxListWrapper<FriendList>::bctbxListToCppList(linphone_core_get_friends_lists((::LinphoneCore *)mPrivPtr));
}
int linphone::Core::getSipTransportTimeout() {
	return linphone_core_get_sip_transport_timeout((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setSipTransportTimeout(int timeoutMs) {
	linphone_core_set_sip_transport_timeout((::LinphoneCore *)mPrivPtr, timeoutMs);
}
bool linphone::Core::getUseInfoForDtmf() {
	return (linphone_core_get_use_info_for_dtmf((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::setUseInfoForDtmf(bool useInfo) {
	linphone_core_set_use_info_for_dtmf((::LinphoneCore *)mPrivPtr, useInfo);
}
std::shared_ptr<Config> linphone::Core::getConfig() {
	return Object::cPtrToSharedPtr<Config>(linphone_core_get_config((::LinphoneCore *)mPrivPtr));
}
MediaEncryption linphone::Core::getMediaEncryption() {
	return (MediaEncryption)linphone_core_get_media_encryption((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::setMediaEncryption(MediaEncryption menc) {
	return linphone_core_set_media_encryption((::LinphoneCore *)mPrivPtr, (::LinphoneMediaEncryption)menc);
}
float linphone::Core::getStaticPictureFps() {
	return linphone_core_get_static_picture_fps((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::setStaticPictureFps(float fps) {
	return linphone_core_set_static_picture_fps((::LinphoneCore *)mPrivPtr, fps);
}
std::shared_ptr<VideoActivationPolicy> linphone::Core::getVideoActivationPolicy() const {
	return Object::cPtrToSharedPtr<VideoActivationPolicy>(linphone_core_get_video_activation_policy((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setVideoActivationPolicy(const std::shared_ptr<const VideoActivationPolicy> & policy) {
	linphone_core_set_video_activation_policy((::LinphoneCore *)mPrivPtr, (::LinphoneVideoActivationPolicy *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const VideoActivationPolicy>(policy)));
}
int linphone::Core::getVideoMulticastTtl() const {
	return linphone_core_get_video_multicast_ttl((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::setVideoMulticastTtl(int ttl) {
	return linphone_core_set_video_multicast_ttl((::LinphoneCore *)mPrivPtr, ttl);
}
void linphone::Core::setSipNetworkReachable(bool value) {
	linphone_core_set_sip_network_reachable((::LinphoneCore *)mPrivPtr, value);
}
int linphone::Core::getDownloadPtime() {
	return linphone_core_get_download_ptime((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setDownloadPtime(int ptime) {
	linphone_core_set_download_ptime((::LinphoneCore *)mPrivPtr, ptime);
}
bool linphone::Core::audioMulticastEnabled() const {
	return (linphone_core_audio_multicast_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableAudioMulticast(bool yesno) {
	linphone_core_enable_audio_multicast((::LinphoneCore *)mPrivPtr, yesno);
}
std::string linphone::Core::getTlsKeyPath() const {
	return StringUtilities::cStringToCpp(linphone_core_get_tls_key_path((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setTlsKeyPath(const std::string & tlsKeyPath) {
	linphone_core_set_tls_key_path((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tlsKeyPath));
}
bool linphone::Core::ipv6Enabled() {
	return (linphone_core_ipv6_enabled((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::enableIpv6(bool val) {
	linphone_core_enable_ipv6((::LinphoneCore *)mPrivPtr, val);
}
void * linphone::Core::getNativeVideoWindowId() const {
	return linphone_core_get_native_video_window_id((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setNativeVideoWindowId(void * id) {
	linphone_core_set_native_video_window_id((::LinphoneCore *)mPrivPtr, id);
}
std::string linphone::Core::getIdentity() {
	return StringUtilities::cStringToCpp(linphone_core_get_identity((::LinphoneCore *)mPrivPtr));
}
std::shared_ptr<ProxyConfig> linphone::Core::getDefaultProxyConfig() {
	return Object::cPtrToSharedPtr<ProxyConfig>(linphone_core_get_default_proxy_config((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setDefaultProxyConfig(const std::shared_ptr<ProxyConfig> & config) {
	linphone_core_set_default_proxy_config((::LinphoneCore *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,ProxyConfig>(config)));
}
std::list<std::shared_ptr<Call> > linphone::Core::getCalls() {
	return ObjectBctbxListWrapper<Call>::bctbxListToCppList(linphone_core_get_calls((::LinphoneCore *)mPrivPtr));
}
void * linphone::Core::getNativePreviewWindowId() const {
	return linphone_core_get_native_preview_window_id((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setNativePreviewWindowId(void * id) {
	linphone_core_set_native_preview_window_id((::LinphoneCore *)mPrivPtr, id);
}
int linphone::Core::getAudioMulticastTtl() const {
	return linphone_core_get_audio_multicast_ttl((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::setAudioMulticastTtl(int ttl) {
	return linphone_core_set_audio_multicast_ttl((::LinphoneCore *)mPrivPtr, ttl);
}
void linphone::Core::setRootCaData(const std::string & data) {
	linphone_core_set_root_ca_data((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(data));
}
std::string linphone::Core::getRootCa() {
	return StringUtilities::cStringToCpp(linphone_core_get_root_ca((::LinphoneCore *)mPrivPtr));
}
void linphone::Core::setRootCa(const std::string & path) {
	linphone_core_set_root_ca((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Core::setMediaEncryptionMandatory(bool m) {
	linphone_core_set_media_encryption_mandatory((::LinphoneCore *)mPrivPtr, m);
}
std::shared_ptr<Transports> linphone::Core::getTransports() {
	return Object::cPtrToSharedPtr<Transports>(linphone_core_get_transports((::LinphoneCore *)mPrivPtr));
}
linphone::Status linphone::Core::setTransports(const std::shared_ptr<const Transports> & transports) {
	return linphone_core_set_transports((::LinphoneCore *)mPrivPtr, (::LinphoneTransports *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Transports>(transports)));
}
void linphone::Core::notifyNotifyPresenceReceivedForUriOrTel(const std::shared_ptr<Friend> & lf, const std::string & uriOrTel, const std::shared_ptr<const PresenceModel> & presenceModel) {
	linphone_core_notify_notify_presence_received_for_uri_or_tel((::LinphoneCore *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Friend>(lf)), StringUtilities::cppStringToC(uriOrTel), (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const PresenceModel>(presenceModel)));
}
linphone::Status linphone::Core::terminateAllCalls() {
	return linphone_core_terminate_all_calls((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::clearProxyConfig() {
	linphone_core_clear_proxy_config((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::addFriendList(const std::shared_ptr<FriendList> & list) {
	linphone_core_add_friend_list((::LinphoneCore *)mPrivPtr, (::LinphoneFriendList *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,FriendList>(list)));
}
std::shared_ptr<PresencePerson> linphone::Core::createPresencePerson(const std::string & id) {
	return Object::cPtrToSharedPtr<PresencePerson>(linphone_core_create_presence_person((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(id)), false);
}
std::shared_ptr<Conference> linphone::Core::createConferenceWithParams(const std::shared_ptr<const ConferenceParams> & params) {
	return Object::cPtrToSharedPtr<Conference>(linphone_core_create_conference_with_params((::LinphoneCore *)mPrivPtr, (::LinphoneConferenceParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const ConferenceParams>(params))), false);
}
std::shared_ptr<Address> linphone::Core::createAddress(const std::string & address) {
	return Object::cPtrToSharedPtr<Address>(linphone_core_create_address((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(address)), false);
}
bool linphone::Core::soundResourcesLocked() {
	return (linphone_core_sound_resources_locked((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::uploadLogCollection() {
	linphone_core_upload_log_collection((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<Event> linphone::Core::createNotify(const std::shared_ptr<const Address> & resource, const std::string & event) {
	return Object::cPtrToSharedPtr<Event>(linphone_core_create_notify((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(resource)), StringUtilities::cppStringToC(event)), false);
}
std::shared_ptr<NatPolicy> linphone::Core::createNatPolicy() {
	return Object::cPtrToSharedPtr<NatPolicy>(linphone_core_create_nat_policy((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::refreshRegisters() {
	linphone_core_refresh_registers((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::transferCallToAnother(const std::shared_ptr<Call> & call, const std::shared_ptr<Call> & dest) {
	return linphone_core_transfer_call_to_another((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)), (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(dest)));
}
std::shared_ptr<PresenceModel> linphone::Core::createPresenceModelWithActivityAndNote(PresenceActivityType acttype, const std::string & description, const std::string & note, const std::string & lang) {
	return Object::cPtrToSharedPtr<PresenceModel>(linphone_core_create_presence_model_with_activity_and_note((::LinphoneCore *)mPrivPtr, (::LinphonePresenceActivityType)acttype, StringUtilities::cppStringToC(description), StringUtilities::cppStringToC(note), StringUtilities::cppStringToC(lang)), false);
}
void linphone::Core::removeCallLog(const std::shared_ptr<CallLog> & callLog) {
	linphone_core_remove_call_log((::LinphoneCore *)mPrivPtr, (::LinphoneCallLog *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,CallLog>(callLog)));
}
std::shared_ptr<Address> linphone::Core::interpretUrl(const std::string & url) {
	return Object::cPtrToSharedPtr<Address>(linphone_core_interpret_url((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url)));
}
void linphone::Core::setAudioPortRange(int minPort, int maxPort) {
	linphone_core_set_audio_port_range((::LinphoneCore *)mPrivPtr, minPort, maxPort);
}
void linphone::Core::migrateFriendsFromRcToDb() {
	linphone_core_migrate_friends_from_rc_to_db((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::inCall() const {
	return (linphone_core_in_call((::LinphoneCore *)mPrivPtr) != FALSE);
}
void linphone::Core::removeProxyConfig(const std::shared_ptr<ProxyConfig> & config) {
	linphone_core_remove_proxy_config((::LinphoneCore *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,ProxyConfig>(config)));
}
linphone::Status linphone::Core::acceptEarlyMedia(const std::shared_ptr<Call> & call) {
	return linphone_core_accept_early_media((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)));
}
std::shared_ptr<ChatRoom> linphone::Core::getChatRoomFromUri(const std::string & to) {
	return Object::cPtrToSharedPtr<ChatRoom>(linphone_core_get_chat_room_from_uri((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(to)));
}
linphone::Status linphone::Core::takePreviewSnapshot(const std::string & file) {
	return linphone_core_take_preview_snapshot((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(file));
}
std::shared_ptr<PresenceService> linphone::Core::createPresenceService(const std::string & id, PresenceBasicStatus basicStatus, const std::string & contact) {
	return Object::cPtrToSharedPtr<PresenceService>(linphone_core_create_presence_service((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(id), (::LinphonePresenceBasicStatus)basicStatus, StringUtilities::cppStringToC(contact)), false);
}
linphone::Status linphone::Core::addProxyConfig(const std::shared_ptr<ProxyConfig> & config) {
	return linphone_core_add_proxy_config((::LinphoneCore *)mPrivPtr, (::LinphoneProxyConfig *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,ProxyConfig>(config)));
}
linphone::Status linphone::Core::resumeCall(const std::shared_ptr<Call> & call) {
	return linphone_core_resume_call((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)));
}
std::shared_ptr<NatPolicy> linphone::Core::createNatPolicyFromConfig(const std::string & ref) {
	return Object::cPtrToSharedPtr<NatPolicy>(linphone_core_create_nat_policy_from_config((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(ref)), false);
}
void linphone::Core::setUserAgent(const std::string & uaName, const std::string & version) {
	linphone_core_set_user_agent((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(uaName), StringUtilities::cppStringToC(version));
}
std::shared_ptr<AccountCreator> linphone::Core::createAccountCreator(const std::string & xmlrpcUrl) {
	return Object::cPtrToSharedPtr<AccountCreator>(linphone_core_create_account_creator((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(xmlrpcUrl)), false);
}
std::shared_ptr<Friend> linphone::Core::createFriendWithAddress(const std::string & address) {
	return Object::cPtrToSharedPtr<Friend>(linphone_core_create_friend_with_address((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(address)), false);
}
linphone::Status linphone::Core::acceptCallUpdate(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallParams> & params) {
	return linphone_core_accept_call_update((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
linphone::Status linphone::Core::playLocal(const std::string & audiofile) {
	return linphone_core_play_local((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(audiofile));
}
void linphone::Core::resetMissedCallsCount() {
	linphone_core_reset_missed_calls_count((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::mediaEncryptionSupported(MediaEncryption menc) const {
	return (linphone_core_media_encryption_supported((::LinphoneCore *)mPrivPtr, (::LinphoneMediaEncryption)menc) != FALSE);
}
std::shared_ptr<AuthInfo> linphone::Core::createAuthInfo(const std::string & username, const std::string & userid, const std::string & passwd, const std::string & ha1, const std::string & realm, const std::string & domain) {
	return Object::cPtrToSharedPtr<AuthInfo>(linphone_core_create_auth_info((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(userid), StringUtilities::cppStringToC(passwd), StringUtilities::cppStringToC(ha1), StringUtilities::cppStringToC(realm), StringUtilities::cppStringToC(domain)), false);
}
std::shared_ptr<Content> linphone::Core::createContent() {
	return Object::cPtrToSharedPtr<Content>(linphone_core_create_content((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<ProxyConfig> linphone::Core::createProxyConfig() {
	return Object::cPtrToSharedPtr<ProxyConfig>(linphone_core_create_proxy_config((::LinphoneCore *)mPrivPtr), false);
}
std::shared_ptr<Call> linphone::Core::findCallFromUri(const std::string & uri) const {
	return Object::cPtrToSharedPtr<Call>(linphone_core_find_call_from_uri((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(uri)));
}
std::shared_ptr<Player> linphone::Core::createLocalPlayer(const std::string & soundCardName, const std::string & videoDisplayName, void * windowId) {
	return Object::cPtrToSharedPtr<Player>(linphone_core_create_local_player((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(soundCardName), StringUtilities::cppStringToC(videoDisplayName), windowId), false);
}
std::shared_ptr<InfoMessage> linphone::Core::createInfoMessage() {
	return Object::cPtrToSharedPtr<InfoMessage>(linphone_core_create_info_message((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::addSupportedTag(const std::string & tag) {
	linphone_core_add_supported_tag((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tag));
}
void linphone::Core::previewOglRender() const {
	linphone_core_preview_ogl_render((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<Event> linphone::Core::createPublish(const std::shared_ptr<const Address> & resource, const std::string & event, int expires) {
	return Object::cPtrToSharedPtr<Event>(linphone_core_create_publish((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(resource)), StringUtilities::cppStringToC(event), expires), false);
}
linphone::Status linphone::Core::startConferenceRecording(const std::string & path) {
	return linphone_core_start_conference_recording((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Core::addAuthInfo(const std::shared_ptr<const AuthInfo> & info) {
	linphone_core_add_auth_info((::LinphoneCore *)mPrivPtr, (::LinphoneAuthInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const AuthInfo>(info)));
}
std::shared_ptr<Call> linphone::Core::getCallByRemoteAddress(const std::string & remoteAddress) const {
	return Object::cPtrToSharedPtr<Call>(linphone_core_get_call_by_remote_address((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(remoteAddress)));
}
std::shared_ptr<ConferenceParams> linphone::Core::createConferenceParams() {
	return Object::cPtrToSharedPtr<ConferenceParams>(linphone_core_create_conference_params((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::migrateLogsFromRcToDb() {
	linphone_core_migrate_logs_from_rc_to_db((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::limeAvailable() const {
	return (linphone_core_lime_available((::LinphoneCore *)mPrivPtr) != FALSE);
}
linphone::Status linphone::Core::pauseCall(const std::shared_ptr<Call> & call) {
	return linphone_core_pause_call((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)));
}
linphone::Status linphone::Core::terminateCall(const std::shared_ptr<Call> & call) {
	return linphone_core_terminate_call((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)));
}
std::shared_ptr<Call> linphone::Core::getCallByRemoteAddress2(const std::shared_ptr<const Address> & remoteAddress) const {
	return Object::cPtrToSharedPtr<Call>(linphone_core_get_call_by_remote_address2((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(remoteAddress))));
}
void linphone::Core::addFriend(const std::shared_ptr<Friend> & fr) {
	linphone_core_add_friend((::LinphoneCore *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Friend>(fr)));
}
void linphone::Core::reloadSoundDevices() {
	linphone_core_reload_sound_devices((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setVideoPortRange(int minPort, int maxPort) {
	linphone_core_set_video_port_range((::LinphoneCore *)mPrivPtr, minPort, maxPort);
}
linphone::Status linphone::Core::migrateToMultiTransport() {
	return linphone_core_migrate_to_multi_transport((::LinphoneCore *)mPrivPtr);
}
bool linphone::Core::fileFormatSupported(const std::string & fmt) {
	return (linphone_core_file_format_supported((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(fmt)) != FALSE);
}
linphone::Status linphone::Core::leaveConference() {
	return linphone_core_leave_conference((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<Call> linphone::Core::invite(const std::string & url) {
	return Object::cPtrToSharedPtr<Call>(linphone_core_invite((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url)));
}
std::shared_ptr<PresenceModel> linphone::Core::createPresenceModel() {
	return Object::cPtrToSharedPtr<PresenceModel>(linphone_core_create_presence_model((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::iterate() {
	linphone_core_iterate((::LinphoneCore *)mPrivPtr);
}
LimeState linphone::Core::limeEnabled() const {
	return (LimeState)linphone_core_lime_enabled((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::stopRinging() {
	linphone_core_stop_ringing((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<Call> linphone::Core::inviteAddressWithParams(const std::shared_ptr<const Address> & addr, const std::shared_ptr<const CallParams> & params) {
	return Object::cPtrToSharedPtr<Call>(linphone_core_invite_address_with_params((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(addr)), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params))));
}
std::shared_ptr<Call> linphone::Core::inviteWithParams(const std::string & url, const std::shared_ptr<const CallParams> & params) {
	return Object::cPtrToSharedPtr<Call>(linphone_core_invite_with_params((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(url), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params))));
}
std::shared_ptr<PresenceNote> linphone::Core::createPresenceNote(const std::string & content, const std::string & lang) {
	return Object::cPtrToSharedPtr<PresenceNote>(linphone_core_create_presence_note((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(content), StringUtilities::cppStringToC(lang)), false);
}
std::shared_ptr<Config> linphone::Core::createConfig(const std::string & filename) {
	return Object::cPtrToSharedPtr<Config>(linphone_core_create_config((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(filename)), false);
}
void linphone::Core::clearAllAuthInfo() {
	linphone_core_clear_all_auth_info((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::verifyServerCn(bool yesno) {
	linphone_core_verify_server_cn((::LinphoneCore *)mPrivPtr, yesno);
}
void linphone::Core::enableChat() {
	linphone_core_enable_chat((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setCallErrorTone(Reason reason, const std::string & audiofile) {
	linphone_core_set_call_error_tone((::LinphoneCore *)mPrivPtr, (::LinphoneReason)reason, StringUtilities::cppStringToC(audiofile));
}
void linphone::Core::stopDtmf() {
	linphone_core_stop_dtmf((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::reloadMsPlugins(const std::string & path) {
	linphone_core_reload_ms_plugins((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(path));
}
void linphone::Core::clearCallLogs() {
	linphone_core_clear_call_logs((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<PresenceActivity> linphone::Core::createPresenceActivity(PresenceActivityType acttype, const std::string & description) {
	return Object::cPtrToSharedPtr<PresenceActivity>(linphone_core_create_presence_activity((::LinphoneCore *)mPrivPtr, (::LinphonePresenceActivityType)acttype, StringUtilities::cppStringToC(description)), false);
}
linphone::Status linphone::Core::pauseAllCalls() {
	return linphone_core_pause_all_calls((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::transferCall(const std::shared_ptr<Call> & call, const std::string & referTo) {
	return linphone_core_transfer_call((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)), StringUtilities::cppStringToC(referTo));
}
bool linphone::Core::soundDeviceCanPlayback(const std::string & device) {
	return (linphone_core_sound_device_can_playback((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(device)) != FALSE);
}
void linphone::Core::playDtmf(char dtmf, int durationMs) {
	linphone_core_play_dtmf((::LinphoneCore *)mPrivPtr, dtmf, durationMs);
}
void linphone::Core::notifyNotifyPresenceReceived(const std::shared_ptr<Friend> & lf) {
	linphone_core_notify_notify_presence_received((::LinphoneCore *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Friend>(lf)));
}
linphone::Status linphone::Core::updateCall(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallParams> & params) {
	return linphone_core_update_call((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
std::shared_ptr<Friend> linphone::Core::getFriendByRefKey(const std::string & key) const {
	return Object::cPtrToSharedPtr<Friend>(linphone_core_get_friend_by_ref_key((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(key)));
}
void linphone::Core::removeFriendList(const std::shared_ptr<FriendList> & list) {
	linphone_core_remove_friend_list((::LinphoneCore *)mPrivPtr, (::LinphoneFriendList *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,FriendList>(list)));
}
void linphone::Core::stopDtmfStream() {
	linphone_core_stop_dtmf_stream((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::addToConference(const std::shared_ptr<Call> & call) {
	return linphone_core_add_to_conference((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)));
}
void linphone::Core::checkForUpdate(const std::string & currentVersion) {
	linphone_core_check_for_update((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(currentVersion));
}
void linphone::Core::removeSupportedTag(const std::string & tag) {
	linphone_core_remove_supported_tag((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(tag));
}
linphone::Status linphone::Core::stopConferenceRecording() {
	return linphone_core_stop_conference_recording((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<Event> linphone::Core::publish(const std::shared_ptr<const Address> & resource, const std::string & event, int expires, const std::shared_ptr<const Content> & body) {
	return Object::cPtrToSharedPtr<Event>(linphone_core_publish((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(resource)), StringUtilities::cppStringToC(event), expires, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(body))));
}
linphone::Status linphone::Core::redirectCall(const std::shared_ptr<Call> & call, const std::string & redirectUri) {
	return linphone_core_redirect_call((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)), StringUtilities::cppStringToC(redirectUri));
}
bool linphone::Core::videoSupported() {
	return (linphone_core_video_supported((::LinphoneCore *)mPrivPtr) != FALSE);
}
std::shared_ptr<Friend> linphone::Core::createFriend() {
	return Object::cPtrToSharedPtr<Friend>(linphone_core_create_friend((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::reloadVideoDevices() {
	linphone_core_reload_video_devices((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::setTextPortRange(int minPort, int maxPort) {
	linphone_core_set_text_port_range((::LinphoneCore *)mPrivPtr, minPort, maxPort);
}
std::shared_ptr<Event> linphone::Core::createOneShotPublish(const std::shared_ptr<const Address> & resource, const std::string & event) {
	return Object::cPtrToSharedPtr<Event>(linphone_core_create_one_shot_publish((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(resource)), StringUtilities::cppStringToC(event)), false);
}
std::shared_ptr<FriendList> linphone::Core::createFriendList() {
	return Object::cPtrToSharedPtr<FriendList>(linphone_core_create_friend_list((::LinphoneCore *)mPrivPtr), false);
}
void linphone::Core::verifyServerCertificates(bool yesno) {
	linphone_core_verify_server_certificates((::LinphoneCore *)mPrivPtr, yesno);
}
void linphone::Core::disableChat(Reason denyReason) {
	linphone_core_disable_chat((::LinphoneCore *)mPrivPtr, (::LinphoneReason)denyReason);
}
linphone::Status linphone::Core::enterConference() {
	return linphone_core_enter_conference((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::rejectSubscriber(const std::shared_ptr<Friend> & lf) {
	linphone_core_reject_subscriber((::LinphoneCore *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Friend>(lf)));
}
std::shared_ptr<Call> linphone::Core::inviteAddress(const std::shared_ptr<const Address> & addr) {
	return Object::cPtrToSharedPtr<Call>(linphone_core_invite_address((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(addr))));
}
linphone::Status linphone::Core::deferCallUpdate(const std::shared_ptr<Call> & call) {
	return linphone_core_defer_call_update((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)));
}
std::shared_ptr<CallParams> linphone::Core::createCallParams(const std::shared_ptr<Call> & call) {
	return Object::cPtrToSharedPtr<CallParams>(linphone_core_create_call_params((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call))), false);
}
std::shared_ptr<CallLog> linphone::Core::findCallLogFromCallId(const std::string & callId) {
	return Object::cPtrToSharedPtr<CallLog>(linphone_core_find_call_log_from_call_id((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(callId)));
}
std::shared_ptr<const AuthInfo> linphone::Core::findAuthInfo(const std::string & realm, const std::string & username, const std::string & sipDomain) {
	return Object::cPtrToSharedPtr<const AuthInfo>(linphone_core_find_auth_info((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(realm), StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(sipDomain)));
}
void linphone::Core::startDtmfStream() {
	linphone_core_start_dtmf_stream((::LinphoneCore *)mPrivPtr);
}
std::shared_ptr<Event> linphone::Core::subscribe(const std::shared_ptr<const Address> & resource, const std::string & event, int expires, const std::shared_ptr<const Content> & body) {
	return Object::cPtrToSharedPtr<Event>(linphone_core_subscribe((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(resource)), StringUtilities::cppStringToC(event), expires, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(body))));
}
bool linphone::Core::soundDeviceCanCapture(const std::string & device) {
	return (linphone_core_sound_device_can_capture((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(device)) != FALSE);
}
std::shared_ptr<Friend> linphone::Core::findFriend(const std::shared_ptr<const Address> & addr) const {
	return Object::cPtrToSharedPtr<Friend>(linphone_core_find_friend((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(addr))));
}
void linphone::Core::enableLime(LimeState val) {
	linphone_core_enable_lime((::LinphoneCore *)mPrivPtr, (::LinphoneLimeState)val);
}
std::shared_ptr<Event> linphone::Core::createSubscribe(const std::shared_ptr<const Address> & resource, const std::string & event, int expires) {
	return Object::cPtrToSharedPtr<Event>(linphone_core_create_subscribe((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(resource)), StringUtilities::cppStringToC(event), expires), false);
}
std::shared_ptr<ChatRoom> linphone::Core::getChatRoom(const std::shared_ptr<const Address> & addr) {
	return Object::cPtrToSharedPtr<ChatRoom>(linphone_core_get_chat_room((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(addr))));
}
linphone::Status linphone::Core::acceptCallWithParams(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallParams> & params) {
	return linphone_core_accept_call_with_params((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
void linphone::Core::notifyAllFriends(const std::shared_ptr<PresenceModel> & presence) {
	linphone_core_notify_all_friends((::LinphoneCore *)mPrivPtr, (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceModel>(presence)));
}
linphone::Status linphone::Core::terminateConference() {
	return linphone_core_terminate_conference((::LinphoneCore *)mPrivPtr);
}
linphone::Status linphone::Core::acceptCall(const std::shared_ptr<Call> & call) {
	return linphone_core_accept_call((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)));
}
linphone::Status linphone::Core::removeFromConference(const std::shared_ptr<Call> & call) {
	return linphone_core_remove_from_conference((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)));
}
std::shared_ptr<PresenceModel> linphone::Core::createPresenceModelWithActivity(PresenceActivityType acttype, const std::string & description) {
	return Object::cPtrToSharedPtr<PresenceModel>(linphone_core_create_presence_model_with_activity((::LinphoneCore *)mPrivPtr, (::LinphonePresenceActivityType)acttype, StringUtilities::cppStringToC(description)), false);
}
linphone::Status linphone::Core::addAllToConference() {
	return linphone_core_add_all_to_conference((::LinphoneCore *)mPrivPtr);
}
void linphone::Core::removeAuthInfo(const std::shared_ptr<const AuthInfo> & info) {
	linphone_core_remove_auth_info((::LinphoneCore *)mPrivPtr, (::LinphoneAuthInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const AuthInfo>(info)));
}
std::list<std::shared_ptr<CallLog> > linphone::Core::getCallHistoryForAddress(const std::shared_ptr<const Address> & addr) {
	return ObjectBctbxListWrapper<CallLog>::bctbxListToCppList(linphone_core_get_call_history_for_address((::LinphoneCore *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(addr))));
}
linphone::Status linphone::Core::declineCall(const std::shared_ptr<Call> & call, Reason reason) {
	return linphone_core_decline_call((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)), (::LinphoneReason)reason);
}
std::shared_ptr<linphone::PayloadType> linphone::Core::getPayloadType(const std::string & type, int rate, int channels) {
	return Object::cPtrToSharedPtr<PayloadType>(linphone_core_get_payload_type((::LinphoneCore *)mPrivPtr, StringUtilities::cppStringToC(type), rate, channels));
}
linphone::Status linphone::Core::acceptEarlyMediaWithParams(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallParams> & params) {
	return linphone_core_accept_early_media_with_params((::LinphoneCore *)mPrivPtr, (::LinphoneCall *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Call>(call)), (::LinphoneCallParams *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const CallParams>(params)));
}
void linphone::Core::deleteChatRoom(const std::shared_ptr<ChatRoom> & cr) {
	linphone_core_delete_chat_room((::LinphoneCore *)mPrivPtr, (::LinphoneChatRoom *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,ChatRoom>(cr)));
}
void linphone::Core::usePreviewWindow(bool yesno) {
	linphone_core_use_preview_window((::LinphoneCore *)mPrivPtr, yesno);
}

void linphone::Core::setLogCollectionMaxFileSize(size_t size) {
	linphone_core_set_log_collection_max_file_size(size);
}
void linphone::Core::serializeLogs() {
	linphone_core_serialize_logs();
}
void linphone::Core::enableLogCollection(LogCollectionState state) {
	linphone_core_enable_log_collection((::LinphoneLogCollectionState)state);
}
std::string linphone::Core::getLogCollectionPrefix() {
	return StringUtilities::cStringToCpp(linphone_core_get_log_collection_prefix());
}
bool linphone::Core::vcardSupported() {
	return (linphone_core_vcard_supported() != FALSE);
}
std::string linphone::Core::compressLogCollection() {
	return StringUtilities::cStringToCpp(linphone_core_compress_log_collection());
}
LogCollectionState linphone::Core::logCollectionEnabled() {
	return (LogCollectionState)linphone_core_log_collection_enabled();
}
std::string linphone::Core::getLogCollectionPath() {
	return StringUtilities::cStringToCpp(linphone_core_get_log_collection_path());
}
bool linphone::Core::tunnelAvailable() {
	return (linphone_core_tunnel_available() != FALSE);
}
void linphone::Core::setLogCollectionPath(const std::string & path) {
	linphone_core_set_log_collection_path(StringUtilities::cppStringToC(path));
}
void linphone::Core::resetLogCollection() {
	linphone_core_reset_log_collection();
}
std::string linphone::Core::getVersion() {
	return StringUtilities::cStringToCpp(linphone_core_get_version());
}
bool linphone::Core::upnpAvailable() {
	return (linphone_core_upnp_available() != FALSE);
}
void linphone::Core::setLogLevelMask(unsigned int loglevel) {
	linphone_core_set_log_level_mask(loglevel);
}
void linphone::Core::setLogCollectionPrefix(const std::string & prefix) {
	linphone_core_set_log_collection_prefix(StringUtilities::cppStringToC(prefix));
}
size_t linphone::Core::getLogCollectionMaxFileSize() {
	return linphone_core_get_log_collection_max_file_size();
}



linphone::Buffer::Buffer(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






const uint8_t * linphone::Buffer::getContent() const {
	return linphone_buffer_get_content((::LinphoneBuffer *)mPrivPtr);
}
bool linphone::Buffer::isEmpty() const {
	return (linphone_buffer_is_empty((::LinphoneBuffer *)mPrivPtr) != FALSE);
}
size_t linphone::Buffer::getSize() const {
	return linphone_buffer_get_size((::LinphoneBuffer *)mPrivPtr);
}
void linphone::Buffer::setSize(size_t size) {
	linphone_buffer_set_size((::LinphoneBuffer *)mPrivPtr, size);
}
std::string linphone::Buffer::getStringContent() const {
	return StringUtilities::cStringToCpp(linphone_buffer_get_string_content((::LinphoneBuffer *)mPrivPtr));
}
void linphone::Buffer::setStringContent(const std::string & content) {
	linphone_buffer_set_string_content((::LinphoneBuffer *)mPrivPtr, StringUtilities::cppStringToC(content));
}
void linphone::Buffer::setContent(const uint8_t * content, size_t size) {
	linphone_buffer_set_content((::LinphoneBuffer *)mPrivPtr, content, size);
}

std::shared_ptr<Buffer> linphone::Buffer::newFromData(const uint8_t * data, size_t size) {
	return Object::cPtrToSharedPtr<Buffer>(linphone_buffer_new_from_data(data, size));
}
std::shared_ptr<Buffer> linphone::Buffer::newFromString(const std::string & data) {
	return Object::cPtrToSharedPtr<Buffer>(linphone_buffer_new_from_string(StringUtilities::cppStringToC(data)));
}


static void linphone_friend_list_listener_on_sync_status_changed_cb(LinphoneFriendList * list, LinphoneFriendListSyncStatus status, const char * msg) {
	std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)list));
	listener->onSyncStatusChanged(Object::cPtrToSharedPtr<FriendList>(list), (FriendListSyncStatus)status, StringUtilities::cStringToCpp(msg));
	
}
static void linphone_friend_list_listener_on_contact_created_cb(LinphoneFriendList * list, LinphoneFriend * lf) {
	std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)list));
	listener->onContactCreated(Object::cPtrToSharedPtr<FriendList>(list), Object::cPtrToSharedPtr<Friend>(lf));
	
}
static void linphone_friend_list_listener_on_contact_updated_cb(LinphoneFriendList * list, LinphoneFriend * new_friend, LinphoneFriend * old_friend) {
	std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)list));
	listener->onContactUpdated(Object::cPtrToSharedPtr<FriendList>(list), Object::cPtrToSharedPtr<Friend>(new_friend), Object::cPtrToSharedPtr<Friend>(old_friend));
	
}
static void linphone_friend_list_listener_on_contact_deleted_cb(LinphoneFriendList * list, LinphoneFriend * lf) {
	std::shared_ptr<FriendListListener> listener = std::static_pointer_cast<FriendListListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)list));
	listener->onContactDeleted(Object::cPtrToSharedPtr<FriendList>(list), Object::cPtrToSharedPtr<Friend>(lf));
	
}

linphone::FriendList::FriendList(void *ptr, bool takeRef): ListenableObject(ptr, takeRef) {
}


void linphone::FriendList::setListener(const std::shared_ptr<FriendListListener> & listener) {
	ListenableObject::setListener(std::static_pointer_cast<Listener>(listener));
	LinphoneFriendListCbs *cbs = linphone_friend_list_get_callbacks((::LinphoneFriendList *)mPrivPtr);
	if (listener == nullptr) {
		linphone_friend_list_cbs_set_sync_status_changed(cbs, NULL);
		linphone_friend_list_cbs_set_contact_created(cbs, NULL);
		linphone_friend_list_cbs_set_contact_updated(cbs, NULL);
		linphone_friend_list_cbs_set_contact_deleted(cbs, NULL);
	} else {
		linphone_friend_list_cbs_set_sync_status_changed(cbs, linphone_friend_list_listener_on_sync_status_changed_cb);
		linphone_friend_list_cbs_set_contact_created(cbs, linphone_friend_list_listener_on_contact_created_cb);
		linphone_friend_list_cbs_set_contact_updated(cbs, linphone_friend_list_listener_on_contact_updated_cb);
		linphone_friend_list_cbs_set_contact_deleted(cbs, linphone_friend_list_listener_on_contact_deleted_cb);
	}
}




std::shared_ptr<Core> linphone::FriendList::getCore() const {
	return Object::cPtrToSharedPtr<Core>(linphone_friend_list_get_core((::LinphoneFriendList *)mPrivPtr));
}
std::shared_ptr<const Address> linphone::FriendList::getRlsAddress() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_friend_list_get_rls_address((::LinphoneFriendList *)mPrivPtr));
}
void linphone::FriendList::setRlsAddress(const std::shared_ptr<const Address> & rlsAddr) {
	linphone_friend_list_set_rls_address((::LinphoneFriendList *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(rlsAddr)));
}
std::string linphone::FriendList::getDisplayName() const {
	return StringUtilities::cStringToCpp(linphone_friend_list_get_display_name((::LinphoneFriendList *)mPrivPtr));
}
void linphone::FriendList::setDisplayName(const std::string & displayName) {
	linphone_friend_list_set_display_name((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(displayName));
}
std::string linphone::FriendList::getUri() const {
	return StringUtilities::cStringToCpp(linphone_friend_list_get_uri((::LinphoneFriendList *)mPrivPtr));
}
void linphone::FriendList::setUri(const std::string & uri) {
	linphone_friend_list_set_uri((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(uri));
}
std::string linphone::FriendList::getRlsUri() const {
	return StringUtilities::cStringToCpp(linphone_friend_list_get_rls_uri((::LinphoneFriendList *)mPrivPtr));
}
void linphone::FriendList::setRlsUri(const std::string & rlsUri) {
	linphone_friend_list_set_rls_uri((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(rlsUri));
}
std::list<std::shared_ptr<Friend> > linphone::FriendList::getFriends() const {
	return ObjectBctbxListWrapper<Friend>::bctbxListToCppList(linphone_friend_list_get_friends((::LinphoneFriendList *)mPrivPtr));
}
bool linphone::FriendList::subscriptionsEnabled() {
	return (linphone_friend_list_subscriptions_enabled((::LinphoneFriendList *)mPrivPtr) != FALSE);
}
void linphone::FriendList::enableSubscriptions(bool enabled) {
	linphone_friend_list_enable_subscriptions((::LinphoneFriendList *)mPrivPtr, enabled);
}
void linphone::FriendList::updateRevision(int rev) {
	linphone_friend_list_update_revision((::LinphoneFriendList *)mPrivPtr, rev);
}
void linphone::FriendList::updateDirtyFriends() {
	linphone_friend_list_update_dirty_friends((::LinphoneFriendList *)mPrivPtr);
}
void linphone::FriendList::updateSubscriptions() {
	linphone_friend_list_update_subscriptions((::LinphoneFriendList *)mPrivPtr);
}
FriendListStatus linphone::FriendList::removeFriend(const std::shared_ptr<Friend> & lf) {
	return (FriendListStatus)linphone_friend_list_remove_friend((::LinphoneFriendList *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Friend>(lf)));
}
void linphone::FriendList::synchronizeFriendsFromServer() {
	linphone_friend_list_synchronize_friends_from_server((::LinphoneFriendList *)mPrivPtr);
}
std::shared_ptr<Friend> linphone::FriendList::findFriendByAddress(const std::shared_ptr<const Address> & address) const {
	return Object::cPtrToSharedPtr<Friend>(linphone_friend_list_find_friend_by_address((::LinphoneFriendList *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(address))));
}
FriendListStatus linphone::FriendList::addLocalFriend(const std::shared_ptr<Friend> & lf) {
	return (FriendListStatus)linphone_friend_list_add_local_friend((::LinphoneFriendList *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Friend>(lf)));
}
std::shared_ptr<Friend> linphone::FriendList::findFriendByUri(const std::string & uri) const {
	return Object::cPtrToSharedPtr<Friend>(linphone_friend_list_find_friend_by_uri((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(uri)));
}
void linphone::FriendList::notifyPresence(const std::shared_ptr<PresenceModel> & presence) {
	linphone_friend_list_notify_presence((::LinphoneFriendList *)mPrivPtr, (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceModel>(presence)));
}
void linphone::FriendList::exportFriendsAsVcard4File(const std::string & vcardFile) {
	linphone_friend_list_export_friends_as_vcard4_file((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(vcardFile));
}
linphone::Status linphone::FriendList::importFriendsFromVcard4File(const std::string & vcardFile) {
	return linphone_friend_list_import_friends_from_vcard4_file((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(vcardFile));
}
std::shared_ptr<Friend> linphone::FriendList::findFriendByRefKey(const std::string & refKey) const {
	return Object::cPtrToSharedPtr<Friend>(linphone_friend_list_find_friend_by_ref_key((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(refKey)));
}
linphone::Status linphone::FriendList::importFriendsFromVcard4Buffer(const std::string & vcardBuffer) {
	return linphone_friend_list_import_friends_from_vcard4_buffer((::LinphoneFriendList *)mPrivPtr, StringUtilities::cppStringToC(vcardBuffer));
}
FriendListStatus linphone::FriendList::addFriend(const std::shared_ptr<Friend> & lf) {
	return (FriendListStatus)linphone_friend_list_add_friend((::LinphoneFriendList *)mPrivPtr, (::LinphoneFriend *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Friend>(lf)));
}




linphone::Headers::Headers(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






void linphone::Headers::add(const std::string & name, const std::string & value) {
	linphone_headers_add((::LinphoneHeaders *)mPrivPtr, StringUtilities::cppStringToC(name), StringUtilities::cppStringToC(value));
}
std::string linphone::Headers::getValue(const std::string & headerName) {
	return StringUtilities::cStringToCpp(linphone_headers_get_value((::LinphoneHeaders *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
void linphone::Headers::remove(const std::string & name) {
	linphone_headers_remove((::LinphoneHeaders *)mPrivPtr, StringUtilities::cppStringToC(name));
}




linphone::Address::Address(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::string linphone::Address::getUsername() const {
	return StringUtilities::cStringToCpp(linphone_address_get_username((::LinphoneAddress *)mPrivPtr));
}
linphone::Status linphone::Address::setUsername(const std::string & username) {
	return linphone_address_set_username((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(username));
}
std::string linphone::Address::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_address_get_domain((::LinphoneAddress *)mPrivPtr));
}
linphone::Status linphone::Address::setDomain(const std::string & host) {
	return linphone_address_set_domain((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(host));
}
std::string linphone::Address::getPassword() const {
	return StringUtilities::cStringToCpp(linphone_address_get_password((::LinphoneAddress *)mPrivPtr));
}
void linphone::Address::setPassword(const std::string & passwd) {
	linphone_address_set_password((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(passwd));
}
std::string linphone::Address::getDisplayName() const {
	return StringUtilities::cStringToCpp(linphone_address_get_display_name((::LinphoneAddress *)mPrivPtr));
}
linphone::Status linphone::Address::setDisplayName(const std::string & displayName) {
	return linphone_address_set_display_name((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(displayName));
}
bool linphone::Address::getSecure() const {
	return (linphone_address_get_secure((::LinphoneAddress *)mPrivPtr) != FALSE);
}
void linphone::Address::setSecure(bool enabled) {
	linphone_address_set_secure((::LinphoneAddress *)mPrivPtr, enabled);
}
bool linphone::Address::isSip() const {
	return (linphone_address_is_sip((::LinphoneAddress *)mPrivPtr) != FALSE);
}
std::string linphone::Address::getMethodParam() const {
	return StringUtilities::cStringToCpp(linphone_address_get_method_param((::LinphoneAddress *)mPrivPtr));
}
void linphone::Address::setMethodParam(const std::string & method) {
	linphone_address_set_method_param((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(method));
}
std::string linphone::Address::getScheme() const {
	return StringUtilities::cStringToCpp(linphone_address_get_scheme((::LinphoneAddress *)mPrivPtr));
}
int linphone::Address::getPort() const {
	return linphone_address_get_port((::LinphoneAddress *)mPrivPtr);
}
linphone::Status linphone::Address::setPort(int port) {
	return linphone_address_set_port((::LinphoneAddress *)mPrivPtr, port);
}
TransportType linphone::Address::getTransport() const {
	return (TransportType)linphone_address_get_transport((::LinphoneAddress *)mPrivPtr);
}
linphone::Status linphone::Address::setTransport(TransportType type) {
	return linphone_address_set_transport((::LinphoneAddress *)mPrivPtr, (::LinphoneTransportType)type);
}
std::shared_ptr<Address> linphone::Address::clone() const {
	return Object::cPtrToSharedPtr<Address>(linphone_address_clone((::LinphoneAddress *)mPrivPtr));
}
void linphone::Address::clean() {
	linphone_address_clean((::LinphoneAddress *)mPrivPtr);
}
std::string linphone::Address::asStringUriOnly() const {
	return StringUtilities::cStringToCpp(linphone_address_as_string_uri_only((::LinphoneAddress *)mPrivPtr));
}
bool linphone::Address::equal(const std::shared_ptr<const Address> & a2) const {
	return (linphone_address_equal((::LinphoneAddress *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(a2))) != FALSE);
}
std::string linphone::Address::getHeader(const std::string & name) const {
	return StringUtilities::cStringToCpp(linphone_address_get_header((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(name)));
}
std::string linphone::Address::asString() const {
	return StringUtilities::cStringToCpp(linphone_address_as_string((::LinphoneAddress *)mPrivPtr));
}
bool linphone::Address::weakEqual(const std::shared_ptr<const Address> & a2) const {
	return (linphone_address_weak_equal((::LinphoneAddress *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(a2))) != FALSE);
}
void linphone::Address::setHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_address_set_header((::LinphoneAddress *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}




linphone::Factory::Factory(void *ptr, bool takeRef): Object(ptr, takeRef) {
}




std::shared_ptr<Core> Factory::createCore(const std::shared_ptr<CoreListener> & listener, const std::string & configPath, const std::string & factoryConfigPath) const {
	::LinphoneCoreCbs *cbs = NULL;
	std::list<std::shared_ptr<Listener> > listeners;
	if (listener != nullptr) {
		listeners.push_back(std::static_pointer_cast<Listener,CoreListener>(listener));
		cbs = (::LinphoneCoreCbs *)Core::createCallbacks(&listeners);
	}
	
	::LinphoneFactory *factory = linphone_factory_get();
	::LinphoneCore *core_ptr = linphone_factory_create_core(factory, cbs, StringUtilities::cppStringToC(configPath), StringUtilities::cppStringToC(factoryConfigPath));
	
	if (cbs != NULL) {
		linphone_core_remove_callbacks(core_ptr, cbs);
		linphone_core_cbs_unref(cbs);
	}
	
	std::shared_ptr<Core> cppCore = cPtrToSharedPtr<Core>((::belle_sip_object_t *)core_ptr, false);
	if (listener != nullptr) cppCore->addListener(listener);
	return cppCore;
}

std::shared_ptr<Core> Factory::createCoreWithConfig(const std::shared_ptr<CoreListener> & listener, const std::shared_ptr<Config> & config) const {
	::LinphoneCoreCbs *cbs = NULL;
	std::list<std::shared_ptr<Listener> > listeners;
	if (listener != nullptr) {
		listeners.push_back(std::static_pointer_cast<Listener,CoreListener>(listener));
		cbs = (::LinphoneCoreCbs *)Core::createCallbacks(&listeners);
	}
	
	::LinphoneFactory *factory = linphone_factory_get();
	::LinphoneCore *core_ptr = linphone_factory_create_core_with_config(factory, cbs, (::LinphoneConfig *)sharedPtrToCPtr(config));
	
	if (cbs != NULL) {
		linphone_core_remove_callbacks(core_ptr, cbs);
		linphone_core_cbs_unref(cbs);
	}
	
	std::shared_ptr<Core> cppCore = cPtrToSharedPtr<Core>((::belle_sip_object_t *)core_ptr, false);
	if (listener != nullptr) cppCore->addListener(listener);
	return cppCore;
}


std::string linphone::Factory::getTopResourcesDir() const {
	return StringUtilities::cStringToCpp(linphone_factory_get_top_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setTopResourcesDir(const std::string & path) {
	linphone_factory_set_top_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getImageResourcesDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_image_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setImageResourcesDir(const std::string & path) {
	linphone_factory_set_image_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getRingResourcesDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_ring_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setRingResourcesDir(const std::string & path) {
	linphone_factory_set_ring_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getDataResourcesDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_data_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setDataResourcesDir(const std::string & path) {
	linphone_factory_set_data_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getSoundResourcesDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_sound_resources_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setSoundResourcesDir(const std::string & path) {
	linphone_factory_set_sound_resources_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::string linphone::Factory::getMspluginsDir() {
	return StringUtilities::cStringToCpp(linphone_factory_get_msplugins_dir((::LinphoneFactory *)mPrivPtr));
}
void linphone::Factory::setMspluginsDir(const std::string & path) {
	linphone_factory_set_msplugins_dir((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(path));
}
std::list<std::shared_ptr<VideoDefinition> > linphone::Factory::getSupportedVideoDefinitions() const {
	return ObjectBctbxListWrapper<VideoDefinition>::bctbxListToCppList(linphone_factory_get_supported_video_definitions((::LinphoneFactory *)mPrivPtr));
}
std::shared_ptr<VideoDefinition> linphone::Factory::createVideoDefinition(unsigned int width, unsigned int height) const {
	return Object::cPtrToSharedPtr<VideoDefinition>(linphone_factory_create_video_definition((::LinphoneFactory *)mPrivPtr, width, height), false);
}
std::shared_ptr<Vcard> linphone::Factory::createVcard() {
	return Object::cPtrToSharedPtr<Vcard>(linphone_factory_create_vcard((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<ErrorInfo> linphone::Factory::createErrorInfo() {
	return Object::cPtrToSharedPtr<ErrorInfo>(linphone_factory_create_error_info((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<AuthInfo> linphone::Factory::createAuthInfo(const std::string & username, const std::string & userid, const std::string & passwd, const std::string & ha1, const std::string & realm, const std::string & domain) const {
	return Object::cPtrToSharedPtr<AuthInfo>(linphone_factory_create_auth_info((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(username), StringUtilities::cppStringToC(userid), StringUtilities::cppStringToC(passwd), StringUtilities::cppStringToC(ha1), StringUtilities::cppStringToC(realm), StringUtilities::cppStringToC(domain)), false);
}
std::shared_ptr<Range> linphone::Factory::createRange() {
	return Object::cPtrToSharedPtr<Range>(linphone_factory_create_range((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<VideoActivationPolicy> linphone::Factory::createVideoActivationPolicy() {
	return Object::cPtrToSharedPtr<VideoActivationPolicy>(linphone_factory_create_video_activation_policy((::LinphoneFactory *)mPrivPtr), false);
}
std::shared_ptr<Address> linphone::Factory::createAddress(const std::string & addr) const {
	return Object::cPtrToSharedPtr<Address>(linphone_factory_create_address((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(addr)), false);
}
std::shared_ptr<VideoDefinition> linphone::Factory::createVideoDefinitionFromName(const std::string & name) const {
	return Object::cPtrToSharedPtr<VideoDefinition>(linphone_factory_create_video_definition_from_name((::LinphoneFactory *)mPrivPtr, StringUtilities::cppStringToC(name)), false);
}
std::shared_ptr<Transports> linphone::Factory::createTransports() {
	return Object::cPtrToSharedPtr<Transports>(linphone_factory_create_transports((::LinphoneFactory *)mPrivPtr), false);
}

void linphone::Factory::clean() {
	linphone_factory_clean();
}
std::shared_ptr<Factory> linphone::Factory::get() {
	return Object::cPtrToSharedPtr<Factory>(linphone_factory_get());
}



linphone::Config::Config(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::list<std::string> linphone::Config::getSectionsNames() {
	return StringUtilities::cStringArrayToCppList(linphone_config_get_sections_names((::LinphoneConfig *)mPrivPtr));
}
std::string linphone::Config::getString(const std::string & section, const std::string & key, const std::string & defaultString) const {
	return StringUtilities::cStringToCpp(linphone_config_get_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(defaultString)));
}
std::list<std::string > linphone::Config::getStringList(const std::string & section, const std::string & key, const std::list<std::string > & defaultList) const {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_config_get_string_list((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringBctbxListWrapper(defaultList).c_list()));
}
void linphone::Config::setOverwriteFlagForSection(const std::string & section, bool value) {
	linphone_config_set_overwrite_flag_for_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), value);
}
std::string linphone::Config::loadFromXmlFile(const std::string & filename) {
	return StringUtilities::cStringToCpp(linphone_config_load_from_xml_file((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(filename)));
}
int linphone::Config::getDefaultInt(const std::string & section, const std::string & key, int defaultValue) const {
	return linphone_config_get_default_int((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
int linphone::Config::getInt(const std::string & section, const std::string & key, int defaultValue) const {
	return linphone_config_get_int((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
std::string linphone::Config::getDefaultString(const std::string & section, const std::string & key, const std::string & defaultValue) const {
	return StringUtilities::cStringToCpp(linphone_config_get_default_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(defaultValue)));
}
int linphone::Config::hasSection(const std::string & section) const {
	return linphone_config_has_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section));
}
void linphone::Config::setString(const std::string & section, const std::string & key, const std::string & value) {
	linphone_config_set_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(value));
}
int64_t linphone::Config::getDefaultInt64(const std::string & section, const std::string & key, int64_t defaultValue) const {
	return linphone_config_get_default_int64((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
void linphone::Config::writeRelativeFile(const std::string & filename, const std::string & data) const {
	linphone_config_write_relative_file((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(filename), StringUtilities::cppStringToC(data));
}
linphone::Status linphone::Config::readFile(const std::string & filename) {
	return linphone_config_read_file((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(filename));
}
bool linphone::Config::getRange(const std::string & section, const std::string & key, int * min, int * max, int defaultMin, int defaultMax) const {
	return (linphone_config_get_range((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), min, max, defaultMin, defaultMax) != FALSE);
}
void linphone::Config::setStringList(const std::string & section, const std::string & key, const std::list<std::string > & value) {
	linphone_config_set_string_list((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringBctbxListWrapper(value).c_list());
}
bool linphone::Config::getOverwriteFlagForSection(const std::string & section) const {
	return (linphone_config_get_overwrite_flag_for_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section)) != FALSE);
}
void linphone::Config::setInt64(const std::string & section, const std::string & key, int64_t value) {
	linphone_config_set_int64((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setOverwriteFlagForEntry(const std::string & section, const std::string & key, bool value) {
	linphone_config_set_overwrite_flag_for_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setRange(const std::string & section, const std::string & key, int minValue, int maxValue) {
	linphone_config_set_range((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), minValue, maxValue);
}
void linphone::Config::setSkipFlagForEntry(const std::string & section, const std::string & key, bool value) {
	linphone_config_set_skip_flag_for_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
bool linphone::Config::relativeFileExists(const std::string & filename) const {
	return (linphone_config_relative_file_exists((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(filename)) != FALSE);
}
std::string linphone::Config::getSectionParamString(const std::string & section, const std::string & key, const std::string & defaultValue) const {
	return StringUtilities::cStringToCpp(linphone_config_get_section_param_string((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), StringUtilities::cppStringToC(defaultValue)));
}
bool linphone::Config::getSkipFlagForEntry(const std::string & section, const std::string & key) const {
	return (linphone_config_get_skip_flag_for_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key)) != FALSE);
}
float linphone::Config::getFloat(const std::string & section, const std::string & key, float defaultValue) const {
	return linphone_config_get_float((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
int64_t linphone::Config::getInt64(const std::string & section, const std::string & key, int64_t defaultValue) const {
	return linphone_config_get_int64((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
int linphone::Config::hasEntry(const std::string & section, const std::string & key) const {
	return linphone_config_has_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key));
}
void linphone::Config::setSkipFlagForSection(const std::string & section, bool value) {
	linphone_config_set_skip_flag_for_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), value);
}
bool linphone::Config::getSkipFlagForSection(const std::string & section) const {
	return (linphone_config_get_skip_flag_for_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section)) != FALSE);
}
std::string linphone::Config::dumpAsXml() const {
	return StringUtilities::cStringToCpp(linphone_config_dump_as_xml((::LinphoneConfig *)mPrivPtr));
}
linphone::Status linphone::Config::sync() {
	return linphone_config_sync((::LinphoneConfig *)mPrivPtr);
}
void linphone::Config::setFloat(const std::string & section, const std::string & key, float value) {
	linphone_config_set_float((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setIntHex(const std::string & section, const std::string & key, int value) {
	linphone_config_set_int_hex((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::setInt(const std::string & section, const std::string & key, int value) {
	linphone_config_set_int((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), value);
}
void linphone::Config::cleanEntry(const std::string & section, const std::string & key) {
	linphone_config_clean_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key));
}
bool linphone::Config::getOverwriteFlagForEntry(const std::string & section, const std::string & key) const {
	return (linphone_config_get_overwrite_flag_for_entry((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key)) != FALSE);
}
float linphone::Config::getDefaultFloat(const std::string & section, const std::string & key, float defaultValue) const {
	return linphone_config_get_default_float((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section), StringUtilities::cppStringToC(key), defaultValue);
}
void linphone::Config::cleanSection(const std::string & section) {
	linphone_config_clean_section((::LinphoneConfig *)mPrivPtr, StringUtilities::cppStringToC(section));
}
std::string linphone::Config::dump() const {
	return StringUtilities::cStringToCpp(linphone_config_dump((::LinphoneConfig *)mPrivPtr));
}

std::shared_ptr<Config> linphone::Config::newFromBuffer(const std::string & buffer) {
	return Object::cPtrToSharedPtr<Config>(linphone_config_new_from_buffer(StringUtilities::cppStringToC(buffer)));
}
std::shared_ptr<Config> linphone::Config::newWithFactory(const std::string & configFilename, const std::string & factoryConfigFilename) {
	return Object::cPtrToSharedPtr<Config>(linphone_config_new_with_factory(StringUtilities::cppStringToC(configFilename), StringUtilities::cppStringToC(factoryConfigFilename)));
}


static void linphone_account_creator_listener_on_activate_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onActivateAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_activate_alias_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onActivateAlias(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_is_account_linked_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onIsAccountLinked(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_link_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onLinkAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_is_alias_used_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onIsAliasUsed(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_is_account_activated_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onIsAccountActivated(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_is_account_exist_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onIsAccountExist(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_update_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onUpdateAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_recover_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onRecoverAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}
static void linphone_account_creator_listener_on_create_account_cb(LinphoneAccountCreator * creator, LinphoneAccountCreatorStatus status, const char * resp) {
	std::shared_ptr<AccountCreatorListener> listener = std::static_pointer_cast<AccountCreatorListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)creator));
	listener->onCreateAccount(Object::cPtrToSharedPtr<AccountCreator>(creator), (AccountCreatorStatus)status, StringUtilities::cStringToCpp(resp));
	
}

linphone::AccountCreator::AccountCreator(void *ptr, bool takeRef): ListenableObject(ptr, takeRef) {
}


void linphone::AccountCreator::setListener(const std::shared_ptr<AccountCreatorListener> & listener) {
	ListenableObject::setListener(std::static_pointer_cast<Listener>(listener));
	LinphoneAccountCreatorCbs *cbs = linphone_account_creator_get_callbacks((::LinphoneAccountCreator *)mPrivPtr);
	if (listener == nullptr) {
		linphone_account_creator_cbs_set_activate_account(cbs, NULL);
		linphone_account_creator_cbs_set_activate_alias(cbs, NULL);
		linphone_account_creator_cbs_set_is_account_linked(cbs, NULL);
		linphone_account_creator_cbs_set_link_account(cbs, NULL);
		linphone_account_creator_cbs_set_is_alias_used(cbs, NULL);
		linphone_account_creator_cbs_set_is_account_activated(cbs, NULL);
		linphone_account_creator_cbs_set_is_account_exist(cbs, NULL);
		linphone_account_creator_cbs_set_update_account(cbs, NULL);
		linphone_account_creator_cbs_set_recover_account(cbs, NULL);
		linphone_account_creator_cbs_set_create_account(cbs, NULL);
	} else {
		linphone_account_creator_cbs_set_activate_account(cbs, linphone_account_creator_listener_on_activate_account_cb);
		linphone_account_creator_cbs_set_activate_alias(cbs, linphone_account_creator_listener_on_activate_alias_cb);
		linphone_account_creator_cbs_set_is_account_linked(cbs, linphone_account_creator_listener_on_is_account_linked_cb);
		linphone_account_creator_cbs_set_link_account(cbs, linphone_account_creator_listener_on_link_account_cb);
		linphone_account_creator_cbs_set_is_alias_used(cbs, linphone_account_creator_listener_on_is_alias_used_cb);
		linphone_account_creator_cbs_set_is_account_activated(cbs, linphone_account_creator_listener_on_is_account_activated_cb);
		linphone_account_creator_cbs_set_is_account_exist(cbs, linphone_account_creator_listener_on_is_account_exist_cb);
		linphone_account_creator_cbs_set_update_account(cbs, linphone_account_creator_listener_on_update_account_cb);
		linphone_account_creator_cbs_set_recover_account(cbs, linphone_account_creator_listener_on_recover_account_cb);
		linphone_account_creator_cbs_set_create_account(cbs, linphone_account_creator_listener_on_create_account_cb);
	}
}




std::string linphone::AccountCreator::getUsername() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_username((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorUsernameStatus linphone::AccountCreator::setUsername(const std::string & username) {
	return (AccountCreatorUsernameStatus)linphone_account_creator_set_username((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(username));
}
std::string linphone::AccountCreator::getPhoneNumber() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_phone_number((::LinphoneAccountCreator *)mPrivPtr));
}
std::string linphone::AccountCreator::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_domain((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorDomainStatus linphone::AccountCreator::setDomain(const std::string & domain) {
	return (AccountCreatorDomainStatus)linphone_account_creator_set_domain((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(domain));
}
std::string linphone::AccountCreator::getActivationCode() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_activation_code((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorActivationCodeStatus linphone::AccountCreator::setActivationCode(const std::string & activationCode) {
	return (AccountCreatorActivationCodeStatus)linphone_account_creator_set_activation_code((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(activationCode));
}
std::string linphone::AccountCreator::getDisplayName() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_display_name((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorUsernameStatus linphone::AccountCreator::setDisplayName(const std::string & displayName) {
	return (AccountCreatorUsernameStatus)linphone_account_creator_set_display_name((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(displayName));
}
std::string linphone::AccountCreator::getLanguage() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_language((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorLanguageStatus linphone::AccountCreator::setLanguage(const std::string & lang) {
	return (AccountCreatorLanguageStatus)linphone_account_creator_set_language((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(lang));
}
std::string linphone::AccountCreator::getRoute() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_route((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorStatus linphone::AccountCreator::setRoute(const std::string & route) {
	return (AccountCreatorStatus)linphone_account_creator_set_route((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(route));
}
std::string linphone::AccountCreator::getHa1() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_ha1((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorPasswordStatus linphone::AccountCreator::setHa1(const std::string & ha1) {
	return (AccountCreatorPasswordStatus)linphone_account_creator_set_ha1((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(ha1));
}
std::string linphone::AccountCreator::getPassword() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_password((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorPasswordStatus linphone::AccountCreator::setPassword(const std::string & password) {
	return (AccountCreatorPasswordStatus)linphone_account_creator_set_password((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(password));
}
std::string linphone::AccountCreator::getEmail() const {
	return StringUtilities::cStringToCpp(linphone_account_creator_get_email((::LinphoneAccountCreator *)mPrivPtr));
}
AccountCreatorEmailStatus linphone::AccountCreator::setEmail(const std::string & email) {
	return (AccountCreatorEmailStatus)linphone_account_creator_set_email((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(email));
}
TransportType linphone::AccountCreator::getTransport() const {
	return (TransportType)linphone_account_creator_get_transport((::LinphoneAccountCreator *)mPrivPtr);
}
AccountCreatorTransportStatus linphone::AccountCreator::setTransport(TransportType transport) {
	return (AccountCreatorTransportStatus)linphone_account_creator_set_transport((::LinphoneAccountCreator *)mPrivPtr, (::LinphoneTransportType)transport);
}
AccountCreatorStatus linphone::AccountCreator::activateAlias() {
	return (AccountCreatorStatus)linphone_account_creator_activate_alias((::LinphoneAccountCreator *)mPrivPtr);
}
AccountCreatorStatus linphone::AccountCreator::createAccount() {
	return (AccountCreatorStatus)linphone_account_creator_create_account((::LinphoneAccountCreator *)mPrivPtr);
}
AccountCreatorStatus linphone::AccountCreator::linkAccount() {
	return (AccountCreatorStatus)linphone_account_creator_link_account((::LinphoneAccountCreator *)mPrivPtr);
}
AccountCreatorStatus linphone::AccountCreator::isAliasUsed() {
	return (AccountCreatorStatus)linphone_account_creator_is_alias_used((::LinphoneAccountCreator *)mPrivPtr);
}
std::shared_ptr<ProxyConfig> linphone::AccountCreator::configure() const {
	return Object::cPtrToSharedPtr<ProxyConfig>(linphone_account_creator_configure((::LinphoneAccountCreator *)mPrivPtr));
}
void linphone::AccountCreator::reset() {
	linphone_account_creator_reset((::LinphoneAccountCreator *)mPrivPtr);
}
unsigned int linphone::AccountCreator::setPhoneNumber(const std::string & phoneNumber, const std::string & countryCode) {
	return linphone_account_creator_set_phone_number((::LinphoneAccountCreator *)mPrivPtr, StringUtilities::cppStringToC(phoneNumber), StringUtilities::cppStringToC(countryCode));
}
AccountCreatorStatus linphone::AccountCreator::isAccountExist() {
	return (AccountCreatorStatus)linphone_account_creator_is_account_exist((::LinphoneAccountCreator *)mPrivPtr);
}
AccountCreatorStatus linphone::AccountCreator::updateAccount() {
	return (AccountCreatorStatus)linphone_account_creator_update_account((::LinphoneAccountCreator *)mPrivPtr);
}
AccountCreatorStatus linphone::AccountCreator::activateAccount() {
	return (AccountCreatorStatus)linphone_account_creator_activate_account((::LinphoneAccountCreator *)mPrivPtr);
}
std::shared_ptr<ProxyConfig> linphone::AccountCreator::createProxyConfig() const {
	return Object::cPtrToSharedPtr<ProxyConfig>(linphone_account_creator_create_proxy_config((::LinphoneAccountCreator *)mPrivPtr), false);
}
AccountCreatorStatus linphone::AccountCreator::recoverAccount() {
	return (AccountCreatorStatus)linphone_account_creator_recover_account((::LinphoneAccountCreator *)mPrivPtr);
}
AccountCreatorStatus linphone::AccountCreator::isAccountActivated() {
	return (AccountCreatorStatus)linphone_account_creator_is_account_activated((::LinphoneAccountCreator *)mPrivPtr);
}
AccountCreatorStatus linphone::AccountCreator::isAccountLinked() {
	return (AccountCreatorStatus)linphone_account_creator_is_account_linked((::LinphoneAccountCreator *)mPrivPtr);
}




linphone::ErrorInfo::ErrorInfo(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::string linphone::ErrorInfo::getProtocol() const {
	return StringUtilities::cStringToCpp(linphone_error_info_get_protocol((::LinphoneErrorInfo *)mPrivPtr));
}
void linphone::ErrorInfo::setProtocol(const std::string & proto) {
	linphone_error_info_set_protocol((::LinphoneErrorInfo *)mPrivPtr, StringUtilities::cppStringToC(proto));
}
int linphone::ErrorInfo::getProtocolCode() const {
	return linphone_error_info_get_protocol_code((::LinphoneErrorInfo *)mPrivPtr);
}
void linphone::ErrorInfo::setProtocolCode(int code) {
	linphone_error_info_set_protocol_code((::LinphoneErrorInfo *)mPrivPtr, code);
}
std::string linphone::ErrorInfo::getWarnings() const {
	return StringUtilities::cStringToCpp(linphone_error_info_get_warnings((::LinphoneErrorInfo *)mPrivPtr));
}
void linphone::ErrorInfo::setWarnings(const std::string & warnings) {
	linphone_error_info_set_warnings((::LinphoneErrorInfo *)mPrivPtr, StringUtilities::cppStringToC(warnings));
}
std::shared_ptr<ErrorInfo> linphone::ErrorInfo::getSubErrorInfo() const {
	return Object::cPtrToSharedPtr<ErrorInfo>(linphone_error_info_get_sub_error_info((::LinphoneErrorInfo *)mPrivPtr));
}
void linphone::ErrorInfo::setSubErrorInfo(const std::shared_ptr<ErrorInfo> & appendedEi) {
	linphone_error_info_set_sub_error_info((::LinphoneErrorInfo *)mPrivPtr, (::LinphoneErrorInfo *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,ErrorInfo>(appendedEi)));
}
Reason linphone::ErrorInfo::getReason() const {
	return (Reason)linphone_error_info_get_reason((::LinphoneErrorInfo *)mPrivPtr);
}
void linphone::ErrorInfo::setReason(Reason reason) {
	linphone_error_info_set_reason((::LinphoneErrorInfo *)mPrivPtr, (::LinphoneReason)reason);
}
std::string linphone::ErrorInfo::getPhrase() const {
	return StringUtilities::cStringToCpp(linphone_error_info_get_phrase((::LinphoneErrorInfo *)mPrivPtr));
}
void linphone::ErrorInfo::setPhrase(const std::string & phrase) {
	linphone_error_info_set_phrase((::LinphoneErrorInfo *)mPrivPtr, StringUtilities::cppStringToC(phrase));
}
void linphone::ErrorInfo::set(const std::string & protocol, Reason reason, int code, const std::string & statusString, const std::string & warning) {
	linphone_error_info_set((::LinphoneErrorInfo *)mPrivPtr, StringUtilities::cppStringToC(protocol), (::LinphoneReason)reason, code, StringUtilities::cppStringToC(statusString), StringUtilities::cppStringToC(warning));
}




linphone::PresenceNote::PresenceNote(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::string linphone::PresenceNote::getContent() const {
	return StringUtilities::cStringToCpp(linphone_presence_note_get_content((::LinphonePresenceNote *)mPrivPtr));
}
linphone::Status linphone::PresenceNote::setContent(const std::string & content) {
	return linphone_presence_note_set_content((::LinphonePresenceNote *)mPrivPtr, StringUtilities::cppStringToC(content));
}
std::string linphone::PresenceNote::getLang() const {
	return StringUtilities::cStringToCpp(linphone_presence_note_get_lang((::LinphonePresenceNote *)mPrivPtr));
}
linphone::Status linphone::PresenceNote::setLang(const std::string & lang) {
	return linphone_presence_note_set_lang((::LinphonePresenceNote *)mPrivPtr, StringUtilities::cppStringToC(lang));
}




linphone::PresencePerson::PresencePerson(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






unsigned int linphone::PresencePerson::getNbActivitiesNotes() const {
	return linphone_presence_person_get_nb_activities_notes((::LinphonePresencePerson *)mPrivPtr);
}
std::string linphone::PresencePerson::getId() const {
	return StringUtilities::cStringToCpp(linphone_presence_person_get_id((::LinphonePresencePerson *)mPrivPtr));
}
linphone::Status linphone::PresencePerson::setId(const std::string & id) {
	return linphone_presence_person_set_id((::LinphonePresencePerson *)mPrivPtr, StringUtilities::cppStringToC(id));
}
unsigned int linphone::PresencePerson::getNbNotes() const {
	return linphone_presence_person_get_nb_notes((::LinphonePresencePerson *)mPrivPtr);
}
unsigned int linphone::PresencePerson::getNbActivities() const {
	return linphone_presence_person_get_nb_activities((::LinphonePresencePerson *)mPrivPtr);
}
linphone::Status linphone::PresencePerson::clearActivitiesNotes() {
	return linphone_presence_person_clear_activities_notes((::LinphonePresencePerson *)mPrivPtr);
}
linphone::Status linphone::PresencePerson::addActivity(const std::shared_ptr<PresenceActivity> & activity) {
	return linphone_presence_person_add_activity((::LinphonePresencePerson *)mPrivPtr, (::LinphonePresenceActivity *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceActivity>(activity)));
}
std::shared_ptr<PresenceNote> linphone::PresencePerson::getNthNote(unsigned int idx) const {
	return Object::cPtrToSharedPtr<PresenceNote>(linphone_presence_person_get_nth_note((::LinphonePresencePerson *)mPrivPtr, idx));
}
std::shared_ptr<PresenceNote> linphone::PresencePerson::getNthActivitiesNote(unsigned int idx) const {
	return Object::cPtrToSharedPtr<PresenceNote>(linphone_presence_person_get_nth_activities_note((::LinphonePresencePerson *)mPrivPtr, idx));
}
linphone::Status linphone::PresencePerson::clearNotes() {
	return linphone_presence_person_clear_notes((::LinphonePresencePerson *)mPrivPtr);
}
std::shared_ptr<PresenceActivity> linphone::PresencePerson::getNthActivity(unsigned int idx) const {
	return Object::cPtrToSharedPtr<PresenceActivity>(linphone_presence_person_get_nth_activity((::LinphonePresencePerson *)mPrivPtr, idx));
}
linphone::Status linphone::PresencePerson::clearActivities() {
	return linphone_presence_person_clear_activities((::LinphonePresencePerson *)mPrivPtr);
}
linphone::Status linphone::PresencePerson::addActivitiesNote(const std::shared_ptr<PresenceNote> & note) {
	return linphone_presence_person_add_activities_note((::LinphonePresencePerson *)mPrivPtr, (::LinphonePresenceNote *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceNote>(note)));
}
linphone::Status linphone::PresencePerson::addNote(const std::shared_ptr<PresenceNote> & note) {
	return linphone_presence_person_add_note((::LinphonePresencePerson *)mPrivPtr, (::LinphonePresenceNote *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceNote>(note)));
}




linphone::Range::Range(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






int linphone::Range::getMax() const {
	return linphone_range_get_max((::LinphoneRange *)mPrivPtr);
}
void linphone::Range::setMax(int max) {
	linphone_range_set_max((::LinphoneRange *)mPrivPtr, max);
}
int linphone::Range::getMin() const {
	return linphone_range_get_min((::LinphoneRange *)mPrivPtr);
}
void linphone::Range::setMin(int min) {
	linphone_range_set_min((::LinphoneRange *)mPrivPtr, min);
}




linphone::ProxyConfig::ProxyConfig(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::string linphone::ProxyConfig::getDialPrefix() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_dial_prefix((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setDialPrefix(const std::string & prefix) {
	linphone_proxy_config_set_dial_prefix((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(prefix));
}
std::string linphone::ProxyConfig::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_domain((::LinphoneProxyConfig *)mPrivPtr));
}
std::string linphone::ProxyConfig::getTransport() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_transport((::LinphoneProxyConfig *)mPrivPtr));
}
int linphone::ProxyConfig::getPublishExpires() const {
	return linphone_proxy_config_get_publish_expires((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setPublishExpires(int expires) {
	linphone_proxy_config_set_publish_expires((::LinphoneProxyConfig *)mPrivPtr, expires);
}
AVPFMode linphone::ProxyConfig::getAvpfMode() const {
	return (AVPFMode)linphone_proxy_config_get_avpf_mode((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setAvpfMode(AVPFMode mode) {
	linphone_proxy_config_set_avpf_mode((::LinphoneProxyConfig *)mPrivPtr, (::LinphoneAVPFMode)mode);
}
std::string linphone::ProxyConfig::getRealm() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_realm((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setRealm(const std::string & realm) {
	linphone_proxy_config_set_realm((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(realm));
}
unsigned int linphone::ProxyConfig::getPrivacy() const {
	return linphone_proxy_config_get_privacy((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setPrivacy(unsigned int privacy) {
	linphone_proxy_config_set_privacy((::LinphoneProxyConfig *)mPrivPtr, privacy);
}
std::string linphone::ProxyConfig::getContactUriParameters() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_contact_uri_parameters((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setContactUriParameters(const std::string & contactUriParams) {
	linphone_proxy_config_set_contact_uri_parameters((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(contactUriParams));
}
RegistrationState linphone::ProxyConfig::getState() const {
	return (RegistrationState)linphone_proxy_config_get_state((::LinphoneProxyConfig *)mPrivPtr);
}
bool linphone::ProxyConfig::publishEnabled() const {
	return (linphone_proxy_config_publish_enabled((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
void linphone::ProxyConfig::enablePublish(bool val) {
	linphone_proxy_config_enable_publish((::LinphoneProxyConfig *)mPrivPtr, val);
}
int linphone::ProxyConfig::getQualityReportingInterval() {
	return linphone_proxy_config_get_quality_reporting_interval((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setQualityReportingInterval(int interval) {
	linphone_proxy_config_set_quality_reporting_interval((::LinphoneProxyConfig *)mPrivPtr, interval);
}
std::string linphone::ProxyConfig::getQualityReportingCollector() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_quality_reporting_collector((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setQualityReportingCollector(const std::string & collector) {
	linphone_proxy_config_set_quality_reporting_collector((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(collector));
}
std::shared_ptr<NatPolicy> linphone::ProxyConfig::getNatPolicy() const {
	return Object::cPtrToSharedPtr<NatPolicy>(linphone_proxy_config_get_nat_policy((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setNatPolicy(const std::shared_ptr<NatPolicy> & policy) {
	linphone_proxy_config_set_nat_policy((::LinphoneProxyConfig *)mPrivPtr, (::LinphoneNatPolicy *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,NatPolicy>(policy)));
}
bool linphone::ProxyConfig::getDialEscapePlus() const {
	return (linphone_proxy_config_get_dial_escape_plus((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
void linphone::ProxyConfig::setDialEscapePlus(bool val) {
	linphone_proxy_config_set_dial_escape_plus((::LinphoneProxyConfig *)mPrivPtr, val);
}
std::string linphone::ProxyConfig::getServerAddr() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_server_addr((::LinphoneProxyConfig *)mPrivPtr));
}
linphone::Status linphone::ProxyConfig::setServerAddr(const std::string & serverAddr) {
	return linphone_proxy_config_set_server_addr((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(serverAddr));
}
std::shared_ptr<Core> linphone::ProxyConfig::getCore() const {
	return Object::cPtrToSharedPtr<Core>(linphone_proxy_config_get_core((::LinphoneProxyConfig *)mPrivPtr));
}
std::shared_ptr<const Address> linphone::ProxyConfig::getIdentityAddress() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_proxy_config_get_identity_address((::LinphoneProxyConfig *)mPrivPtr));
}
linphone::Status linphone::ProxyConfig::setIdentityAddress(const std::shared_ptr<const Address> & identity) {
	return linphone_proxy_config_set_identity_address((::LinphoneProxyConfig *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(identity)));
}
int linphone::ProxyConfig::getExpires() const {
	return linphone_proxy_config_get_expires((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setExpires(int expires) {
	linphone_proxy_config_set_expires((::LinphoneProxyConfig *)mPrivPtr, expires);
}
std::string linphone::ProxyConfig::getContactParameters() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_contact_parameters((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setContactParameters(const std::string & contactParams) {
	linphone_proxy_config_set_contact_parameters((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(contactParams));
}
std::shared_ptr<const ErrorInfo> linphone::ProxyConfig::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const ErrorInfo>(linphone_proxy_config_get_error_info((::LinphoneProxyConfig *)mPrivPtr));
}
std::string linphone::ProxyConfig::getRoute() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_route((::LinphoneProxyConfig *)mPrivPtr));
}
linphone::Status linphone::ProxyConfig::setRoute(const std::string & route) {
	return linphone_proxy_config_set_route((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(route));
}
uint8_t linphone::ProxyConfig::getAvpfRrInterval() const {
	return linphone_proxy_config_get_avpf_rr_interval((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::setAvpfRrInterval(uint8_t interval) {
	linphone_proxy_config_set_avpf_rr_interval((::LinphoneProxyConfig *)mPrivPtr, interval);
}
bool linphone::ProxyConfig::avpfEnabled() {
	return (linphone_proxy_config_avpf_enabled((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
bool linphone::ProxyConfig::qualityReportingEnabled() {
	return (linphone_proxy_config_quality_reporting_enabled((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
void linphone::ProxyConfig::enableQualityReporting(bool enable) {
	linphone_proxy_config_enable_quality_reporting((::LinphoneProxyConfig *)mPrivPtr, enable);
}
bool linphone::ProxyConfig::registerEnabled() const {
	return (linphone_proxy_config_register_enabled((::LinphoneProxyConfig *)mPrivPtr) != FALSE);
}
void linphone::ProxyConfig::enableRegister(bool val) {
	linphone_proxy_config_enable_register((::LinphoneProxyConfig *)mPrivPtr, val);
}
Reason linphone::ProxyConfig::getError() const {
	return (Reason)linphone_proxy_config_get_error((::LinphoneProxyConfig *)mPrivPtr);
}
std::string linphone::ProxyConfig::getRefKey() const {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_ref_key((::LinphoneProxyConfig *)mPrivPtr));
}
void linphone::ProxyConfig::setRefKey(const std::string & refkey) {
	linphone_proxy_config_set_ref_key((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(refkey));
}
void linphone::ProxyConfig::setCustomHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_proxy_config_set_custom_header((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}
bool linphone::ProxyConfig::isPhoneNumber(const std::string & username) {
	return (linphone_proxy_config_is_phone_number((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(username)) != FALSE);
}
void linphone::ProxyConfig::pauseRegister() {
	linphone_proxy_config_pause_register((::LinphoneProxyConfig *)mPrivPtr);
}
std::string linphone::ProxyConfig::getCustomHeader(const std::string & headerName) {
	return StringUtilities::cStringToCpp(linphone_proxy_config_get_custom_header((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
std::shared_ptr<const AuthInfo> linphone::ProxyConfig::findAuthInfo() const {
	return Object::cPtrToSharedPtr<const AuthInfo>(linphone_proxy_config_find_auth_info((::LinphoneProxyConfig *)mPrivPtr));
}
std::shared_ptr<Address> linphone::ProxyConfig::normalizeSipUri(const std::string & username) {
	return Object::cPtrToSharedPtr<Address>(linphone_proxy_config_normalize_sip_uri((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(username)));
}
std::string linphone::ProxyConfig::normalizePhoneNumber(const std::string & username) {
	return StringUtilities::cStringToCpp(linphone_proxy_config_normalize_phone_number((::LinphoneProxyConfig *)mPrivPtr, StringUtilities::cppStringToC(username)));
}
void linphone::ProxyConfig::refreshRegister() {
	linphone_proxy_config_refresh_register((::LinphoneProxyConfig *)mPrivPtr);
}
void linphone::ProxyConfig::edit() {
	linphone_proxy_config_edit((::LinphoneProxyConfig *)mPrivPtr);
}
linphone::Status linphone::ProxyConfig::done() {
	return linphone_proxy_config_done((::LinphoneProxyConfig *)mPrivPtr);
}




linphone::AuthInfo::AuthInfo(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::string linphone::AuthInfo::getUsername() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_username((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setUsername(const std::string & username) {
	linphone_auth_info_set_username((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(username));
}
std::string linphone::AuthInfo::getDomain() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_domain((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setDomain(const std::string & domain) {
	linphone_auth_info_set_domain((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(domain));
}
std::string linphone::AuthInfo::getRealm() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_realm((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setRealm(const std::string & realm) {
	linphone_auth_info_set_realm((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(realm));
}
std::string linphone::AuthInfo::getPasswd() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_passwd((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setPasswd(const std::string & passwd) {
	linphone_auth_info_set_passwd((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(passwd));
}
std::string linphone::AuthInfo::getUserid() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_userid((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setUserid(const std::string & userid) {
	linphone_auth_info_set_userid((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(userid));
}
std::string linphone::AuthInfo::getTlsKeyPath() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_tls_key_path((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setTlsKeyPath(const std::string & tlsKeyPath) {
	linphone_auth_info_set_tls_key_path((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(tlsKeyPath));
}
std::string linphone::AuthInfo::getHa1() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_ha1((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setHa1(const std::string & ha1) {
	linphone_auth_info_set_ha1((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(ha1));
}
std::string linphone::AuthInfo::getTlsCertPath() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_tls_cert_path((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setTlsCertPath(const std::string & tlsCertPath) {
	linphone_auth_info_set_tls_cert_path((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(tlsCertPath));
}
std::string linphone::AuthInfo::getTlsCert() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_tls_cert((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setTlsCert(const std::string & tlsCert) {
	linphone_auth_info_set_tls_cert((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(tlsCert));
}
std::string linphone::AuthInfo::getTlsKey() const {
	return StringUtilities::cStringToCpp(linphone_auth_info_get_tls_key((::LinphoneAuthInfo *)mPrivPtr));
}
void linphone::AuthInfo::setTlsKey(const std::string & tlsKey) {
	linphone_auth_info_set_tls_key((::LinphoneAuthInfo *)mPrivPtr, StringUtilities::cppStringToC(tlsKey));
}
std::shared_ptr<AuthInfo> linphone::AuthInfo::clone() const {
	return Object::cPtrToSharedPtr<AuthInfo>(linphone_auth_info_clone((::LinphoneAuthInfo *)mPrivPtr));
}




linphone::ChatRoom::ChatRoom(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::shared_ptr<Core> linphone::ChatRoom::getCore() {
	return Object::cPtrToSharedPtr<Core>(linphone_chat_room_get_core((::LinphoneChatRoom *)mPrivPtr));
}
bool linphone::ChatRoom::isRemoteComposing() const {
	return (linphone_chat_room_is_remote_composing((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
int linphone::ChatRoom::getUnreadMessagesCount() {
	return linphone_chat_room_get_unread_messages_count((::LinphoneChatRoom *)mPrivPtr);
}
uint32_t linphone::ChatRoom::getChar() const {
	return linphone_chat_room_get_char((::LinphoneChatRoom *)mPrivPtr);
}
std::shared_ptr<Call> linphone::ChatRoom::getCall() const {
	return Object::cPtrToSharedPtr<Call>(linphone_chat_room_get_call((::LinphoneChatRoom *)mPrivPtr));
}
int linphone::ChatRoom::getHistorySize() {
	return linphone_chat_room_get_history_size((::LinphoneChatRoom *)mPrivPtr);
}
std::shared_ptr<const Address> linphone::ChatRoom::getPeerAddress() {
	return Object::cPtrToSharedPtr<const Address>(linphone_chat_room_get_peer_address((::LinphoneChatRoom *)mPrivPtr));
}
void linphone::ChatRoom::sendChatMessage(const std::shared_ptr<ChatMessage> & msg) {
	linphone_chat_room_send_chat_message_2((::LinphoneChatRoom *)mPrivPtr, (::LinphoneChatMessage *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,ChatMessage>(msg)));
}
std::list<std::shared_ptr<ChatMessage> > linphone::ChatRoom::getHistory(int nbMessage) {
	return ObjectBctbxListWrapper<ChatMessage>::bctbxListToCppList(linphone_chat_room_get_history((::LinphoneChatRoom *)mPrivPtr, nbMessage));
}
std::shared_ptr<ChatMessage> linphone::ChatRoom::createMessage(const std::string & message, const std::string & externalBodyUrl, ChatMessageState state, time_t time, bool isRead, bool isIncoming) {
	return Object::cPtrToSharedPtr<ChatMessage>(linphone_chat_room_create_message_2((::LinphoneChatRoom *)mPrivPtr, StringUtilities::cppStringToC(message), StringUtilities::cppStringToC(externalBodyUrl), (::LinphoneChatMessageState)state, time, isRead, isIncoming), false);
}
void linphone::ChatRoom::markAsRead() {
	linphone_chat_room_mark_as_read((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::compose() {
	linphone_chat_room_compose((::LinphoneChatRoom *)mPrivPtr);
}
void linphone::ChatRoom::deleteHistory() {
	linphone_chat_room_delete_history((::LinphoneChatRoom *)mPrivPtr);
}
std::shared_ptr<ChatMessage> linphone::ChatRoom::createFileTransferMessage(const std::shared_ptr<const Content> & initialContent) {
	return Object::cPtrToSharedPtr<ChatMessage>(linphone_chat_room_create_file_transfer_message((::LinphoneChatRoom *)mPrivPtr, (::LinphoneContent *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Content>(initialContent))), false);
}
std::shared_ptr<ChatMessage> linphone::ChatRoom::createMessage(const std::string & message) {
	return Object::cPtrToSharedPtr<ChatMessage>(linphone_chat_room_create_message((::LinphoneChatRoom *)mPrivPtr, StringUtilities::cppStringToC(message)), false);
}
std::list<std::shared_ptr<ChatMessage> > linphone::ChatRoom::getHistoryRange(int begin, int end) {
	return ObjectBctbxListWrapper<ChatMessage>::bctbxListToCppList(linphone_chat_room_get_history_range((::LinphoneChatRoom *)mPrivPtr, begin, end));
}
bool linphone::ChatRoom::limeAvailable() {
	return (linphone_chat_room_lime_available((::LinphoneChatRoom *)mPrivPtr) != FALSE);
}
void linphone::ChatRoom::deleteMessage(const std::shared_ptr<ChatMessage> & msg) {
	linphone_chat_room_delete_message((::LinphoneChatRoom *)mPrivPtr, (::LinphoneChatMessage *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,ChatMessage>(msg)));
}



static void linphone_chat_message_listener_on_file_transfer_recv_cb(LinphoneChatMessage * message, const LinphoneContent * content, const LinphoneBuffer * buffer) {
	std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)message));
	listener->onFileTransferRecv(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const Content>(content), Object::cPtrToSharedPtr<const Buffer>(buffer));
	
}
static LinphoneBuffer * linphone_chat_message_listener_on_file_transfer_send_cb(LinphoneChatMessage * message, const LinphoneContent * content, size_t offset, size_t size) {
	std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)message));
	return (::LinphoneBuffer *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,linphone::Buffer>(listener->onFileTransferSend(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const Content>(content), offset, size)));
	
}
static void linphone_chat_message_listener_on_file_transfer_progress_indication_cb(LinphoneChatMessage * message, const LinphoneContent * content, size_t offset, size_t total) {
	std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)message));
	listener->onFileTransferProgressIndication(Object::cPtrToSharedPtr<ChatMessage>(message), Object::cPtrToSharedPtr<const Content>(content), offset, total);
	
}
static void linphone_chat_message_listener_on_msg_state_changed_cb(LinphoneChatMessage * msg, LinphoneChatMessageState state) {
	std::shared_ptr<ChatMessageListener> listener = std::static_pointer_cast<ChatMessageListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)msg));
	listener->onMsgStateChanged(Object::cPtrToSharedPtr<ChatMessage>(msg), (ChatMessageState)state);
	
}

linphone::ChatMessage::ChatMessage(void *ptr, bool takeRef): ListenableObject(ptr, takeRef) {
}


void linphone::ChatMessage::setListener(const std::shared_ptr<ChatMessageListener> & listener) {
	ListenableObject::setListener(std::static_pointer_cast<Listener>(listener));
	LinphoneChatMessageCbs *cbs = linphone_chat_message_get_callbacks((::LinphoneChatMessage *)mPrivPtr);
	if (listener == nullptr) {
		linphone_chat_message_cbs_set_file_transfer_recv(cbs, NULL);
		linphone_chat_message_cbs_set_file_transfer_send(cbs, NULL);
		linphone_chat_message_cbs_set_file_transfer_progress_indication(cbs, NULL);
		linphone_chat_message_cbs_set_msg_state_changed(cbs, NULL);
	} else {
		linphone_chat_message_cbs_set_file_transfer_recv(cbs, linphone_chat_message_listener_on_file_transfer_recv_cb);
		linphone_chat_message_cbs_set_file_transfer_send(cbs, linphone_chat_message_listener_on_file_transfer_send_cb);
		linphone_chat_message_cbs_set_file_transfer_progress_indication(cbs, linphone_chat_message_listener_on_file_transfer_progress_indication_cb);
		linphone_chat_message_cbs_set_msg_state_changed(cbs, linphone_chat_message_listener_on_msg_state_changed_cb);
	}
}




std::shared_ptr<const Address> linphone::ChatMessage::getToAddress() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_chat_message_get_to_address((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setToAddress(const std::shared_ptr<const Address> & addr) {
	linphone_chat_message_set_to_address((::LinphoneChatMessage *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(addr)));
}
std::shared_ptr<const Address> linphone::ChatMessage::getFromAddress() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_chat_message_get_from_address((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setFromAddress(const std::shared_ptr<const Address> & from) {
	linphone_chat_message_set_from_address((::LinphoneChatMessage *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(from)));
}
std::string linphone::ChatMessage::getAppdata() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_appdata((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setAppdata(const std::string & data) {
	linphone_chat_message_set_appdata((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(data));
}
std::string linphone::ChatMessage::getExternalBodyUrl() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_external_body_url((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setExternalBodyUrl(const std::string & url) {
	linphone_chat_message_set_external_body_url((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(url));
}
std::string linphone::ChatMessage::getText() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_text((::LinphoneChatMessage *)mPrivPtr));
}
int linphone::ChatMessage::setText(const std::string & text) {
	return linphone_chat_message_set_text((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(text));
}
bool linphone::ChatMessage::getToBeStored() const {
	return (linphone_chat_message_get_to_be_stored((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
void linphone::ChatMessage::setToBeStored(bool toBeStored) {
	linphone_chat_message_set_to_be_stored((::LinphoneChatMessage *)mPrivPtr, toBeStored);
}
bool linphone::ChatMessage::isSecured() {
	return (linphone_chat_message_is_secured((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
std::shared_ptr<const Content> linphone::ChatMessage::getFileTransferInformation() const {
	return Object::cPtrToSharedPtr<const Content>(linphone_chat_message_get_file_transfer_information((::LinphoneChatMessage *)mPrivPtr));
}
bool linphone::ChatMessage::isFileTransfer() const {
	return (linphone_chat_message_is_file_transfer((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
ChatMessageState linphone::ChatMessage::getState() const {
	return (ChatMessageState)linphone_chat_message_get_state((::LinphoneChatMessage *)mPrivPtr);
}
unsigned int linphone::ChatMessage::getStorageId() {
	return linphone_chat_message_get_storage_id((::LinphoneChatMessage *)mPrivPtr);
}
std::shared_ptr<Address> linphone::ChatMessage::getLocalAddress() const {
	return Object::cPtrToSharedPtr<Address>(linphone_chat_message_get_local_address((::LinphoneChatMessage *)mPrivPtr));
}
std::string linphone::ChatMessage::getMessageId() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_message_id((::LinphoneChatMessage *)mPrivPtr));
}
bool linphone::ChatMessage::isText() const {
	return (linphone_chat_message_is_text((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
std::shared_ptr<const ErrorInfo> linphone::ChatMessage::getErrorInfo() const {
	return Object::cPtrToSharedPtr<const ErrorInfo>(linphone_chat_message_get_error_info((::LinphoneChatMessage *)mPrivPtr));
}
bool linphone::ChatMessage::isRead() {
	return (linphone_chat_message_is_read((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
std::string linphone::ChatMessage::getFileTransferFilepath() {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_file_transfer_filepath((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setFileTransferFilepath(const std::string & filepath) {
	linphone_chat_message_set_file_transfer_filepath((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(filepath));
}
std::string linphone::ChatMessage::getContentType() const {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_content_type((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::setContentType(const std::string & contentType) {
	linphone_chat_message_set_content_type((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(contentType));
}
bool linphone::ChatMessage::isOutgoing() {
	return (linphone_chat_message_is_outgoing((::LinphoneChatMessage *)mPrivPtr) != FALSE);
}
time_t linphone::ChatMessage::getTime() const {
	return linphone_chat_message_get_time((::LinphoneChatMessage *)mPrivPtr);
}
std::shared_ptr<ChatRoom> linphone::ChatMessage::getChatRoom() {
	return Object::cPtrToSharedPtr<ChatRoom>(linphone_chat_message_get_chat_room((::LinphoneChatMessage *)mPrivPtr));
}
void linphone::ChatMessage::resend() {
	linphone_chat_message_resend_2((::LinphoneChatMessage *)mPrivPtr);
}
std::string linphone::ChatMessage::getCustomHeader(const std::string & headerName) {
	return StringUtilities::cStringToCpp(linphone_chat_message_get_custom_header((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
std::shared_ptr<ChatMessage> linphone::ChatMessage::clone() const {
	return Object::cPtrToSharedPtr<ChatMessage>(linphone_chat_message_clone((::LinphoneChatMessage *)mPrivPtr));
}
linphone::Status linphone::ChatMessage::downloadFile() {
	return linphone_chat_message_download_file((::LinphoneChatMessage *)mPrivPtr);
}
void linphone::ChatMessage::removeCustomHeader(const std::string & headerName) {
	linphone_chat_message_remove_custom_header((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(headerName));
}
void linphone::ChatMessage::addCustomHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_chat_message_add_custom_header((::LinphoneChatMessage *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}
void linphone::ChatMessage::cancelFileTransfer() {
	linphone_chat_message_cancel_file_transfer((::LinphoneChatMessage *)mPrivPtr);
}
linphone::Status linphone::ChatMessage::putChar(uint32_t character) {
	return linphone_chat_message_put_char((::LinphoneChatMessage *)mPrivPtr, character);
}




linphone::PresenceModel::PresenceModel(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::shared_ptr<const Address> linphone::PresenceModel::getPresentity() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_presence_model_get_presentity((::LinphonePresenceModel *)mPrivPtr));
}
linphone::Status linphone::PresenceModel::setPresentity(const std::shared_ptr<const Address> & presentity) {
	return linphone_presence_model_set_presentity((::LinphonePresenceModel *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(presentity)));
}
unsigned int linphone::PresenceModel::getNbPersons() const {
	return linphone_presence_model_get_nb_persons((::LinphonePresenceModel *)mPrivPtr);
}
time_t linphone::PresenceModel::getTimestamp() const {
	return linphone_presence_model_get_timestamp((::LinphonePresenceModel *)mPrivPtr);
}
ConsolidatedPresence linphone::PresenceModel::getConsolidatedPresence() const {
	return (ConsolidatedPresence)linphone_presence_model_get_consolidated_presence((::LinphonePresenceModel *)mPrivPtr);
}
bool linphone::PresenceModel::isOnline() const {
	return (linphone_presence_model_is_online((::LinphonePresenceModel *)mPrivPtr) != FALSE);
}
unsigned int linphone::PresenceModel::getNbServices() const {
	return linphone_presence_model_get_nb_services((::LinphonePresenceModel *)mPrivPtr);
}
std::string linphone::PresenceModel::getContact() const {
	return StringUtilities::cStringToCpp(linphone_presence_model_get_contact((::LinphonePresenceModel *)mPrivPtr));
}
linphone::Status linphone::PresenceModel::setContact(const std::string & contact) {
	return linphone_presence_model_set_contact((::LinphonePresenceModel *)mPrivPtr, StringUtilities::cppStringToC(contact));
}
PresenceBasicStatus linphone::PresenceModel::getBasicStatus() const {
	return (PresenceBasicStatus)linphone_presence_model_get_basic_status((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::setBasicStatus(PresenceBasicStatus basicStatus) {
	return linphone_presence_model_set_basic_status((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresenceBasicStatus)basicStatus);
}
std::shared_ptr<PresenceActivity> linphone::PresenceModel::getActivity() const {
	return Object::cPtrToSharedPtr<PresenceActivity>(linphone_presence_model_get_activity((::LinphonePresenceModel *)mPrivPtr));
}
unsigned int linphone::PresenceModel::getNbActivities() const {
	return linphone_presence_model_get_nb_activities((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::setActivity(PresenceActivityType activity, const std::string & description) {
	return linphone_presence_model_set_activity((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresenceActivityType)activity, StringUtilities::cppStringToC(description));
}
linphone::Status linphone::PresenceModel::clearActivities() {
	return linphone_presence_model_clear_activities((::LinphonePresenceModel *)mPrivPtr);
}
std::shared_ptr<PresenceNote> linphone::PresenceModel::getNote(const std::string & lang) const {
	return Object::cPtrToSharedPtr<PresenceNote>(linphone_presence_model_get_note((::LinphonePresenceModel *)mPrivPtr, StringUtilities::cppStringToC(lang)));
}
linphone::Status linphone::PresenceModel::addService(const std::shared_ptr<PresenceService> & service) {
	return linphone_presence_model_add_service((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresenceService *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceService>(service)));
}
linphone::Status linphone::PresenceModel::clearNotes() {
	return linphone_presence_model_clear_notes((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::addActivity(const std::shared_ptr<PresenceActivity> & activity) {
	return linphone_presence_model_add_activity((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresenceActivity *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceActivity>(activity)));
}
std::shared_ptr<PresenceService> linphone::PresenceModel::getNthService(unsigned int idx) const {
	return Object::cPtrToSharedPtr<PresenceService>(linphone_presence_model_get_nth_service((::LinphonePresenceModel *)mPrivPtr, idx));
}
linphone::Status linphone::PresenceModel::clearPersons() {
	return linphone_presence_model_clear_persons((::LinphonePresenceModel *)mPrivPtr);
}
linphone::Status linphone::PresenceModel::addNote(const std::string & noteContent, const std::string & lang) {
	return linphone_presence_model_add_note((::LinphonePresenceModel *)mPrivPtr, StringUtilities::cppStringToC(noteContent), StringUtilities::cppStringToC(lang));
}
linphone::Status linphone::PresenceModel::clearServices() {
	return linphone_presence_model_clear_services((::LinphonePresenceModel *)mPrivPtr);
}
std::shared_ptr<PresencePerson> linphone::PresenceModel::getNthPerson(unsigned int idx) const {
	return Object::cPtrToSharedPtr<PresencePerson>(linphone_presence_model_get_nth_person((::LinphonePresenceModel *)mPrivPtr, idx));
}
linphone::Status linphone::PresenceModel::addPerson(const std::shared_ptr<PresencePerson> & person) {
	return linphone_presence_model_add_person((::LinphonePresenceModel *)mPrivPtr, (::LinphonePresencePerson *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresencePerson>(person)));
}
std::shared_ptr<PresenceActivity> linphone::PresenceModel::getNthActivity(unsigned int idx) const {
	return Object::cPtrToSharedPtr<PresenceActivity>(linphone_presence_model_get_nth_activity((::LinphonePresenceModel *)mPrivPtr, idx));
}

std::shared_ptr<PresenceModel> linphone::PresenceModel::newWithActivityAndNote(PresenceActivityType activity, const std::string & description, const std::string & note, const std::string & lang) {
	return Object::cPtrToSharedPtr<PresenceModel>(linphone_presence_model_new_with_activity_and_note((::LinphonePresenceActivityType)activity, StringUtilities::cppStringToC(description), StringUtilities::cppStringToC(note), StringUtilities::cppStringToC(lang)));
}
std::shared_ptr<PresenceModel> linphone::PresenceModel::newWithActivity(PresenceActivityType activity, const std::string & description) {
	return Object::cPtrToSharedPtr<PresenceModel>(linphone_presence_model_new_with_activity((::LinphonePresenceActivityType)activity, StringUtilities::cppStringToC(description)));
}



linphone::PayloadType::PayloadType(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






int linphone::PayloadType::getChannels() const {
	return linphone_payload_type_get_channels((::LinphonePayloadType *)mPrivPtr);
}
std::string linphone::PayloadType::getDescription() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_description((::LinphonePayloadType *)mPrivPtr));
}
int linphone::PayloadType::getClockRate() const {
	return linphone_payload_type_get_clock_rate((::LinphonePayloadType *)mPrivPtr);
}
int linphone::PayloadType::getNumber() const {
	return linphone_payload_type_get_number((::LinphonePayloadType *)mPrivPtr);
}
void linphone::PayloadType::setNumber(int number) {
	linphone_payload_type_set_number((::LinphonePayloadType *)mPrivPtr, number);
}
std::string linphone::PayloadType::getSendFmtp() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_send_fmtp((::LinphonePayloadType *)mPrivPtr));
}
void linphone::PayloadType::setSendFmtp(const std::string & sendFmtp) {
	linphone_payload_type_set_send_fmtp((::LinphonePayloadType *)mPrivPtr, StringUtilities::cppStringToC(sendFmtp));
}
std::string linphone::PayloadType::getEncoderDescription() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_encoder_description((::LinphonePayloadType *)mPrivPtr));
}
std::string linphone::PayloadType::getRecvFmtp() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_recv_fmtp((::LinphonePayloadType *)mPrivPtr));
}
void linphone::PayloadType::setRecvFmtp(const std::string & recvFmtp) {
	linphone_payload_type_set_recv_fmtp((::LinphonePayloadType *)mPrivPtr, StringUtilities::cppStringToC(recvFmtp));
}
bool linphone::PayloadType::isVbr() const {
	return (linphone_payload_type_is_vbr((::LinphonePayloadType *)mPrivPtr) != FALSE);
}
int linphone::PayloadType::getNormalBitrate() const {
	return linphone_payload_type_get_normal_bitrate((::LinphonePayloadType *)mPrivPtr);
}
void linphone::PayloadType::setNormalBitrate(int bitrate) {
	linphone_payload_type_set_normal_bitrate((::LinphonePayloadType *)mPrivPtr, bitrate);
}
bool linphone::PayloadType::isUsable() const {
	return (linphone_payload_type_is_usable((::LinphonePayloadType *)mPrivPtr) != FALSE);
}
int linphone::PayloadType::getType() const {
	return linphone_payload_type_get_type((::LinphonePayloadType *)mPrivPtr);
}
std::string linphone::PayloadType::getMimeType() const {
	return StringUtilities::cStringToCpp(linphone_payload_type_get_mime_type((::LinphonePayloadType *)mPrivPtr));
}
bool linphone::PayloadType::enabled() const {
	return (linphone_payload_type_enabled((::LinphonePayloadType *)mPrivPtr) != FALSE);
}
int linphone::PayloadType::enable(bool enabled) {
	return linphone_payload_type_enable((::LinphonePayloadType *)mPrivPtr, enabled);
}




linphone::CallLog::CallLog(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






CallStatus linphone::CallLog::getStatus() {
	return (CallStatus)linphone_call_log_get_status((::LinphoneCallLog *)mPrivPtr);
}
std::shared_ptr<Address> linphone::CallLog::getToAddress() {
	return Object::cPtrToSharedPtr<Address>(linphone_call_log_get_to_address((::LinphoneCallLog *)mPrivPtr));
}
std::shared_ptr<Address> linphone::CallLog::getFromAddress() {
	return Object::cPtrToSharedPtr<Address>(linphone_call_log_get_from_address((::LinphoneCallLog *)mPrivPtr));
}
std::shared_ptr<Address> linphone::CallLog::getRemoteAddress() {
	return Object::cPtrToSharedPtr<Address>(linphone_call_log_get_remote_address((::LinphoneCallLog *)mPrivPtr));
}
std::string linphone::CallLog::getCallId() const {
	return StringUtilities::cStringToCpp(linphone_call_log_get_call_id((::LinphoneCallLog *)mPrivPtr));
}
std::string linphone::CallLog::getRefKey() const {
	return StringUtilities::cStringToCpp(linphone_call_log_get_ref_key((::LinphoneCallLog *)mPrivPtr));
}
void linphone::CallLog::setRefKey(const std::string & refkey) {
	linphone_call_log_set_ref_key((::LinphoneCallLog *)mPrivPtr, StringUtilities::cppStringToC(refkey));
}
int linphone::CallLog::getDuration() {
	return linphone_call_log_get_duration((::LinphoneCallLog *)mPrivPtr);
}
bool linphone::CallLog::videoEnabled() {
	return (linphone_call_log_video_enabled((::LinphoneCallLog *)mPrivPtr) != FALSE);
}
std::shared_ptr<const ErrorInfo> linphone::CallLog::getErrorInfo() {
	return Object::cPtrToSharedPtr<const ErrorInfo>(linphone_call_log_get_error_info((::LinphoneCallLog *)mPrivPtr));
}
float linphone::CallLog::getQuality() {
	return linphone_call_log_get_quality((::LinphoneCallLog *)mPrivPtr);
}
time_t linphone::CallLog::getStartDate() {
	return linphone_call_log_get_start_date((::LinphoneCallLog *)mPrivPtr);
}
CallDir linphone::CallLog::getDir() {
	return (CallDir)linphone_call_log_get_dir((::LinphoneCallLog *)mPrivPtr);
}
std::string linphone::CallLog::toStr() {
	return StringUtilities::cStringToCpp(linphone_call_log_to_str((::LinphoneCallLog *)mPrivPtr));
}
bool linphone::CallLog::wasConference() {
	return (linphone_call_log_was_conference((::LinphoneCallLog *)mPrivPtr) != FALSE);
}




linphone::ImNotifPolicy::ImNotifPolicy(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






bool linphone::ImNotifPolicy::getRecvImdnDisplayed() const {
	return (linphone_im_notif_policy_get_recv_imdn_displayed((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setRecvImdnDisplayed(bool enable) {
	linphone_im_notif_policy_set_recv_imdn_displayed((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getSendImdnDisplayed() const {
	return (linphone_im_notif_policy_get_send_imdn_displayed((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setSendImdnDisplayed(bool enable) {
	linphone_im_notif_policy_set_send_imdn_displayed((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getSendIsComposing() const {
	return (linphone_im_notif_policy_get_send_is_composing((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setSendIsComposing(bool enable) {
	linphone_im_notif_policy_set_send_is_composing((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getRecvImdnDelivered() const {
	return (linphone_im_notif_policy_get_recv_imdn_delivered((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setRecvImdnDelivered(bool enable) {
	linphone_im_notif_policy_set_recv_imdn_delivered((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getRecvIsComposing() const {
	return (linphone_im_notif_policy_get_recv_is_composing((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setRecvIsComposing(bool enable) {
	linphone_im_notif_policy_set_recv_is_composing((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
bool linphone::ImNotifPolicy::getSendImdnDelivered() const {
	return (linphone_im_notif_policy_get_send_imdn_delivered((::LinphoneImNotifPolicy *)mPrivPtr) != FALSE);
}
void linphone::ImNotifPolicy::setSendImdnDelivered(bool enable) {
	linphone_im_notif_policy_set_send_imdn_delivered((::LinphoneImNotifPolicy *)mPrivPtr, enable);
}
void linphone::ImNotifPolicy::clear() {
	linphone_im_notif_policy_clear((::LinphoneImNotifPolicy *)mPrivPtr);
}
void linphone::ImNotifPolicy::enableAll() {
	linphone_im_notif_policy_enable_all((::LinphoneImNotifPolicy *)mPrivPtr);
}



static void linphone_xml_rpc_request_listener_on_response_cb(LinphoneXmlRpcRequest * request) {
	std::shared_ptr<XmlRpcRequestListener> listener = std::static_pointer_cast<XmlRpcRequestListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)request));
	listener->onResponse(Object::cPtrToSharedPtr<XmlRpcRequest>(request));
	
}

linphone::XmlRpcRequest::XmlRpcRequest(void *ptr, bool takeRef): ListenableObject(ptr, takeRef) {
}


void linphone::XmlRpcRequest::setListener(const std::shared_ptr<XmlRpcRequestListener> & listener) {
	ListenableObject::setListener(std::static_pointer_cast<Listener>(listener));
	LinphoneXmlRpcRequestCbs *cbs = linphone_xml_rpc_request_get_callbacks((::LinphoneXmlRpcRequest *)mPrivPtr);
	if (listener == nullptr) {
		linphone_xml_rpc_request_cbs_set_response(cbs, NULL);
	} else {
		linphone_xml_rpc_request_cbs_set_response(cbs, linphone_xml_rpc_request_listener_on_response_cb);
	}
}




XmlRpcStatus linphone::XmlRpcRequest::getStatus() const {
	return (XmlRpcStatus)linphone_xml_rpc_request_get_status((::LinphoneXmlRpcRequest *)mPrivPtr);
}
int linphone::XmlRpcRequest::getIntResponse() const {
	return linphone_xml_rpc_request_get_int_response((::LinphoneXmlRpcRequest *)mPrivPtr);
}
std::string linphone::XmlRpcRequest::getStringResponse() const {
	return StringUtilities::cStringToCpp(linphone_xml_rpc_request_get_string_response((::LinphoneXmlRpcRequest *)mPrivPtr));
}
std::string linphone::XmlRpcRequest::getContent() const {
	return StringUtilities::cStringToCpp(linphone_xml_rpc_request_get_content((::LinphoneXmlRpcRequest *)mPrivPtr));
}
void linphone::XmlRpcRequest::addStringArg(const std::string & value) {
	linphone_xml_rpc_request_add_string_arg((::LinphoneXmlRpcRequest *)mPrivPtr, StringUtilities::cppStringToC(value));
}
void linphone::XmlRpcRequest::addIntArg(int value) {
	linphone_xml_rpc_request_add_int_arg((::LinphoneXmlRpcRequest *)mPrivPtr, value);
}



static void linphone_player_listener_on_eof_reached_cb(LinphonePlayer * obj) {
	std::shared_ptr<PlayerListener> listener = std::static_pointer_cast<PlayerListener,Listener>(ListenableObject::getListenerFromObject((::belle_sip_object_t *)obj));
	listener->onEofReached(Object::cPtrToSharedPtr<Player>(obj));
	
}

linphone::Player::Player(void *ptr, bool takeRef): ListenableObject(ptr, takeRef) {
}


void linphone::Player::setListener(const std::shared_ptr<PlayerListener> & listener) {
	ListenableObject::setListener(std::static_pointer_cast<Listener>(listener));
	LinphonePlayerCbs *cbs = linphone_player_get_callbacks((::LinphonePlayer *)mPrivPtr);
	if (listener == nullptr) {
		linphone_player_cbs_set_eof_reached(cbs, NULL);
	} else {
		linphone_player_cbs_set_eof_reached(cbs, linphone_player_listener_on_eof_reached_cb);
	}
}




int linphone::Player::getDuration() {
	return linphone_player_get_duration((::LinphonePlayer *)mPrivPtr);
}
PlayerState linphone::Player::getState() {
	return (PlayerState)linphone_player_get_state((::LinphonePlayer *)mPrivPtr);
}
int linphone::Player::getCurrentPosition() {
	return linphone_player_get_current_position((::LinphonePlayer *)mPrivPtr);
}
linphone::Status linphone::Player::open(const std::string & filename) {
	return linphone_player_open((::LinphonePlayer *)mPrivPtr, StringUtilities::cppStringToC(filename));
}
linphone::Status linphone::Player::start() {
	return linphone_player_start((::LinphonePlayer *)mPrivPtr);
}
linphone::Status linphone::Player::pause() {
	return linphone_player_pause((::LinphonePlayer *)mPrivPtr);
}
linphone::Status linphone::Player::seek(int timeMs) {
	return linphone_player_seek((::LinphonePlayer *)mPrivPtr, timeMs);
}
void linphone::Player::close() {
	linphone_player_close((::LinphonePlayer *)mPrivPtr);
}




linphone::VideoDefinition::VideoDefinition(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






unsigned int linphone::VideoDefinition::getWidth() const {
	return linphone_video_definition_get_width((::LinphoneVideoDefinition *)mPrivPtr);
}
void linphone::VideoDefinition::setWidth(unsigned int width) {
	linphone_video_definition_set_width((::LinphoneVideoDefinition *)mPrivPtr, width);
}
bool linphone::VideoDefinition::isUndefined() const {
	return (linphone_video_definition_is_undefined((::LinphoneVideoDefinition *)mPrivPtr) != FALSE);
}
std::string linphone::VideoDefinition::getName() const {
	return StringUtilities::cStringToCpp(linphone_video_definition_get_name((::LinphoneVideoDefinition *)mPrivPtr));
}
void linphone::VideoDefinition::setName(const std::string & name) {
	linphone_video_definition_set_name((::LinphoneVideoDefinition *)mPrivPtr, StringUtilities::cppStringToC(name));
}
unsigned int linphone::VideoDefinition::getHeight() const {
	return linphone_video_definition_get_height((::LinphoneVideoDefinition *)mPrivPtr);
}
void linphone::VideoDefinition::setHeight(unsigned int height) {
	linphone_video_definition_set_height((::LinphoneVideoDefinition *)mPrivPtr, height);
}
bool linphone::VideoDefinition::strictEquals(const std::shared_ptr<const VideoDefinition> & vdef2) const {
	return (linphone_video_definition_strict_equals((::LinphoneVideoDefinition *)mPrivPtr, (::LinphoneVideoDefinition *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const VideoDefinition>(vdef2))) != FALSE);
}
void linphone::VideoDefinition::setDefinition(unsigned int width, unsigned int height) {
	linphone_video_definition_set_definition((::LinphoneVideoDefinition *)mPrivPtr, width, height);
}
bool linphone::VideoDefinition::equals(const std::shared_ptr<const VideoDefinition> & vdef2) const {
	return (linphone_video_definition_equals((::LinphoneVideoDefinition *)mPrivPtr, (::LinphoneVideoDefinition *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const VideoDefinition>(vdef2))) != FALSE);
}
std::shared_ptr<VideoDefinition> linphone::VideoDefinition::clone() const {
	return Object::cPtrToSharedPtr<VideoDefinition>(linphone_video_definition_clone((::LinphoneVideoDefinition *)mPrivPtr));
}




linphone::Content::Content(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::string linphone::Content::getName() const {
	return StringUtilities::cStringToCpp(linphone_content_get_name((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setName(const std::string & name) {
	linphone_content_set_name((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(name));
}
std::string linphone::Content::getEncoding() const {
	return StringUtilities::cStringToCpp(linphone_content_get_encoding((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setEncoding(const std::string & encoding) {
	linphone_content_set_encoding((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(encoding));
}
void * linphone::Content::getBuffer() const {
	return linphone_content_get_buffer((::LinphoneContent *)mPrivPtr);
}
bool linphone::Content::isMultipart() const {
	return (linphone_content_is_multipart((::LinphoneContent *)mPrivPtr) != FALSE);
}
std::string linphone::Content::getSubtype() const {
	return StringUtilities::cStringToCpp(linphone_content_get_subtype((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setSubtype(const std::string & subtype) {
	linphone_content_set_subtype((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(subtype));
}
std::string linphone::Content::getStringBuffer() const {
	return StringUtilities::cStringToCpp(linphone_content_get_string_buffer((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setStringBuffer(const std::string & buffer) {
	linphone_content_set_string_buffer((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(buffer));
}
std::string linphone::Content::getType() const {
	return StringUtilities::cStringToCpp(linphone_content_get_type((::LinphoneContent *)mPrivPtr));
}
void linphone::Content::setType(const std::string & type) {
	linphone_content_set_type((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(type));
}
size_t linphone::Content::getSize() const {
	return linphone_content_get_size((::LinphoneContent *)mPrivPtr);
}
void linphone::Content::setSize(size_t size) {
	linphone_content_set_size((::LinphoneContent *)mPrivPtr, size);
}
std::shared_ptr<Content> linphone::Content::getPart(int idx) const {
	return Object::cPtrToSharedPtr<Content>(linphone_content_get_part((::LinphoneContent *)mPrivPtr, idx));
}
void linphone::Content::setBuffer(void * buffer, size_t size) {
	linphone_content_set_buffer((::LinphoneContent *)mPrivPtr, buffer, size);
}
std::shared_ptr<Content> linphone::Content::findPartByHeader(const std::string & headerName, const std::string & headerValue) const {
	return Object::cPtrToSharedPtr<Content>(linphone_content_find_part_by_header((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue)));
}
std::string linphone::Content::getCustomHeader(const std::string & headerName) const {
	return StringUtilities::cStringToCpp(linphone_content_get_custom_header((::LinphoneContent *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}




linphone::CallParams::CallParams(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






float linphone::CallParams::getSentFramerate() const {
	return linphone_call_params_get_sent_framerate((::LinphoneCallParams *)mPrivPtr);
}
bool linphone::CallParams::videoMulticastEnabled() const {
	return (linphone_call_params_video_multicast_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableVideoMulticast(bool yesno) {
	linphone_call_params_enable_video_multicast((::LinphoneCallParams *)mPrivPtr, yesno);
}
bool linphone::CallParams::getLocalConferenceMode() const {
	return (linphone_call_params_get_local_conference_mode((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
std::shared_ptr<linphone::PayloadType> linphone::CallParams::getUsedTextPayloadType() const {
	return Object::cPtrToSharedPtr<PayloadType>(linphone_call_params_get_used_text_payload_type((::LinphoneCallParams *)mPrivPtr));
}
std::shared_ptr<const VideoDefinition> linphone::CallParams::getSentVideoDefinition() const {
	return Object::cPtrToSharedPtr<const VideoDefinition>(linphone_call_params_get_sent_video_definition((::LinphoneCallParams *)mPrivPtr));
}
std::string linphone::CallParams::getRtpProfile() const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_rtp_profile((::LinphoneCallParams *)mPrivPtr));
}
std::shared_ptr<const VideoDefinition> linphone::CallParams::getReceivedVideoDefinition() const {
	return Object::cPtrToSharedPtr<const VideoDefinition>(linphone_call_params_get_received_video_definition((::LinphoneCallParams *)mPrivPtr));
}
unsigned int linphone::CallParams::getPrivacy() const {
	return linphone_call_params_get_privacy((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setPrivacy(unsigned int privacy) {
	linphone_call_params_set_privacy((::LinphoneCallParams *)mPrivPtr, privacy);
}
MediaDirection linphone::CallParams::getVideoDirection() const {
	return (MediaDirection)linphone_call_params_get_video_direction((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setVideoDirection(MediaDirection dir) {
	linphone_call_params_set_video_direction((::LinphoneCallParams *)mPrivPtr, (::LinphoneMediaDirection)dir);
}
std::shared_ptr<linphone::PayloadType> linphone::CallParams::getUsedAudioPayloadType() const {
	return Object::cPtrToSharedPtr<PayloadType>(linphone_call_params_get_used_audio_payload_type((::LinphoneCallParams *)mPrivPtr));
}
MediaEncryption linphone::CallParams::getMediaEncryption() const {
	return (MediaEncryption)linphone_call_params_get_media_encryption((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setMediaEncryption(MediaEncryption enc) {
	linphone_call_params_set_media_encryption((::LinphoneCallParams *)mPrivPtr, (::LinphoneMediaEncryption)enc);
}
std::shared_ptr<linphone::PayloadType> linphone::CallParams::getUsedVideoPayloadType() const {
	return Object::cPtrToSharedPtr<PayloadType>(linphone_call_params_get_used_video_payload_type((::LinphoneCallParams *)mPrivPtr));
}
bool linphone::CallParams::earlyMediaSendingEnabled() const {
	return (linphone_call_params_early_media_sending_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableEarlyMediaSending(bool enabled) {
	linphone_call_params_enable_early_media_sending((::LinphoneCallParams *)mPrivPtr, enabled);
}
std::string linphone::CallParams::getRecordFile() const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_record_file((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setRecordFile(const std::string & path) {
	linphone_call_params_set_record_file((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(path));
}
bool linphone::CallParams::audioMulticastEnabled() const {
	return (linphone_call_params_audio_multicast_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableAudioMulticast(bool yesno) {
	linphone_call_params_enable_audio_multicast((::LinphoneCallParams *)mPrivPtr, yesno);
}
bool linphone::CallParams::videoEnabled() const {
	return (linphone_call_params_video_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableVideo(bool enabled) {
	linphone_call_params_enable_video((::LinphoneCallParams *)mPrivPtr, enabled);
}
float linphone::CallParams::getReceivedFramerate() const {
	return linphone_call_params_get_received_framerate((::LinphoneCallParams *)mPrivPtr);
}
bool linphone::CallParams::audioEnabled() const {
	return (linphone_call_params_audio_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableAudio(bool enabled) {
	linphone_call_params_enable_audio((::LinphoneCallParams *)mPrivPtr, enabled);
}
MediaDirection linphone::CallParams::getAudioDirection() const {
	return (MediaDirection)linphone_call_params_get_audio_direction((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::setAudioDirection(MediaDirection dir) {
	linphone_call_params_set_audio_direction((::LinphoneCallParams *)mPrivPtr, (::LinphoneMediaDirection)dir);
}
bool linphone::CallParams::lowBandwidthEnabled() const {
	return (linphone_call_params_low_bandwidth_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
void linphone::CallParams::enableLowBandwidth(bool enabled) {
	linphone_call_params_enable_low_bandwidth((::LinphoneCallParams *)mPrivPtr, enabled);
}
void linphone::CallParams::setAudioBandwidthLimit(int bw) {
	linphone_call_params_set_audio_bandwidth_limit((::LinphoneCallParams *)mPrivPtr, bw);
}
std::string linphone::CallParams::getSessionName() const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_session_name((::LinphoneCallParams *)mPrivPtr));
}
void linphone::CallParams::setSessionName(const std::string & name) {
	linphone_call_params_set_session_name((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(name));
}
bool linphone::CallParams::realtimeTextEnabled() const {
	return (linphone_call_params_realtime_text_enabled((::LinphoneCallParams *)mPrivPtr) != FALSE);
}
linphone::Status linphone::CallParams::enableRealtimeText(bool yesno) {
	return linphone_call_params_enable_realtime_text((::LinphoneCallParams *)mPrivPtr, yesno);
}
void linphone::CallParams::addCustomSdpMediaAttribute(StreamType type, const std::string & attributeName, const std::string & attributeValue) {
	linphone_call_params_add_custom_sdp_media_attribute((::LinphoneCallParams *)mPrivPtr, (::LinphoneStreamType)type, StringUtilities::cppStringToC(attributeName), StringUtilities::cppStringToC(attributeValue));
}
std::shared_ptr<CallParams> linphone::CallParams::copy() const {
	return Object::cPtrToSharedPtr<CallParams>(linphone_call_params_copy((::LinphoneCallParams *)mPrivPtr));
}
std::string linphone::CallParams::getCustomSdpAttribute(const std::string & attributeName) const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_custom_sdp_attribute((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(attributeName)));
}
void linphone::CallParams::clearCustomSdpAttributes() {
	linphone_call_params_clear_custom_sdp_attributes((::LinphoneCallParams *)mPrivPtr);
}
void linphone::CallParams::addCustomSdpAttribute(const std::string & attributeName, const std::string & attributeValue) {
	linphone_call_params_add_custom_sdp_attribute((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(attributeName), StringUtilities::cppStringToC(attributeValue));
}
std::string linphone::CallParams::getCustomHeader(const std::string & headerName) const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_custom_header((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(headerName)));
}
void linphone::CallParams::addCustomHeader(const std::string & headerName, const std::string & headerValue) {
	linphone_call_params_add_custom_header((::LinphoneCallParams *)mPrivPtr, StringUtilities::cppStringToC(headerName), StringUtilities::cppStringToC(headerValue));
}
void linphone::CallParams::clearCustomSdpMediaAttributes(StreamType type) {
	linphone_call_params_clear_custom_sdp_media_attributes((::LinphoneCallParams *)mPrivPtr, (::LinphoneStreamType)type);
}
std::string linphone::CallParams::getCustomSdpMediaAttribute(StreamType type, const std::string & attributeName) const {
	return StringUtilities::cStringToCpp(linphone_call_params_get_custom_sdp_media_attribute((::LinphoneCallParams *)mPrivPtr, (::LinphoneStreamType)type, StringUtilities::cppStringToC(attributeName)));
}




linphone::CallStats::CallStats(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






float linphone::CallStats::getSenderLossRate() const {
	return linphone_call_stats_get_sender_loss_rate((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getDownloadBandwidth() const {
	return linphone_call_stats_get_download_bandwidth((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getLocalLateRate() const {
	return linphone_call_stats_get_local_late_rate((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getReceiverInterarrivalJitter() const {
	return linphone_call_stats_get_receiver_interarrival_jitter((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getJitterBufferSizeMs() const {
	return linphone_call_stats_get_jitter_buffer_size_ms((::LinphoneCallStats *)mPrivPtr);
}
UpnpState linphone::CallStats::getUpnpState() const {
	return (UpnpState)linphone_call_stats_get_upnp_state((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getReceiverLossRate() const {
	return linphone_call_stats_get_receiver_loss_rate((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getLocalLossRate() const {
	return linphone_call_stats_get_local_loss_rate((::LinphoneCallStats *)mPrivPtr);
}
IceState linphone::CallStats::getIceState() const {
	return (IceState)linphone_call_stats_get_ice_state((::LinphoneCallStats *)mPrivPtr);
}
AddressFamily linphone::CallStats::getIpFamilyOfRemote() const {
	return (AddressFamily)linphone_call_stats_get_ip_family_of_remote((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getUploadBandwidth() const {
	return linphone_call_stats_get_upload_bandwidth((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getRoundTripDelay() const {
	return linphone_call_stats_get_round_trip_delay((::LinphoneCallStats *)mPrivPtr);
}
StreamType linphone::CallStats::getType() const {
	return (StreamType)linphone_call_stats_get_type((::LinphoneCallStats *)mPrivPtr);
}
uint64_t linphone::CallStats::getLatePacketsCumulativeNumber() const {
	return linphone_call_stats_get_late_packets_cumulative_number((::LinphoneCallStats *)mPrivPtr);
}
float linphone::CallStats::getSenderInterarrivalJitter() const {
	return linphone_call_stats_get_sender_interarrival_jitter((::LinphoneCallStats *)mPrivPtr);
}




linphone::Friend::Friend(void *ptr, bool takeRef): Object(ptr, takeRef) {
}






std::shared_ptr<Core> linphone::Friend::getCore() const {
	return Object::cPtrToSharedPtr<Core>(linphone_friend_get_core((::LinphoneFriend *)mPrivPtr));
}
std::list<std::shared_ptr<Address> > linphone::Friend::getAddresses() const {
	return ObjectBctbxListWrapper<Address>::bctbxListToCppList(linphone_friend_get_addresses((::LinphoneFriend *)mPrivPtr));
}
ConsolidatedPresence linphone::Friend::getConsolidatedPresence() const {
	return (ConsolidatedPresence)linphone_friend_get_consolidated_presence((::LinphoneFriend *)mPrivPtr);
}
std::shared_ptr<const PresenceModel> linphone::Friend::getPresenceModel() const {
	return Object::cPtrToSharedPtr<const PresenceModel>(linphone_friend_get_presence_model((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setPresenceModel(const std::shared_ptr<PresenceModel> & presence) {
	linphone_friend_set_presence_model((::LinphoneFriend *)mPrivPtr, (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceModel>(presence)));
}
std::string linphone::Friend::getName() const {
	return StringUtilities::cStringToCpp(linphone_friend_get_name((::LinphoneFriend *)mPrivPtr));
}
linphone::Status linphone::Friend::setName(const std::string & name) {
	return linphone_friend_set_name((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(name));
}
SubscribePolicy linphone::Friend::getIncSubscribePolicy() const {
	return (SubscribePolicy)linphone_friend_get_inc_subscribe_policy((::LinphoneFriend *)mPrivPtr);
}
linphone::Status linphone::Friend::setIncSubscribePolicy(SubscribePolicy pol) {
	return linphone_friend_set_inc_subscribe_policy((::LinphoneFriend *)mPrivPtr, (::LinphoneSubscribePolicy)pol);
}
bool linphone::Friend::isPresenceReceived() const {
	return (linphone_friend_is_presence_received((::LinphoneFriend *)mPrivPtr) != FALSE);
}
std::shared_ptr<const Address> linphone::Friend::getAddress() const {
	return Object::cPtrToSharedPtr<const Address>(linphone_friend_get_address((::LinphoneFriend *)mPrivPtr));
}
linphone::Status linphone::Friend::setAddress(const std::shared_ptr<const Address> & address) {
	return linphone_friend_set_address((::LinphoneFriend *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(address)));
}
std::string linphone::Friend::getRefKey() const {
	return StringUtilities::cStringToCpp(linphone_friend_get_ref_key((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setRefKey(const std::string & key) {
	linphone_friend_set_ref_key((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(key));
}
std::list<std::string > linphone::Friend::getPhoneNumbers() {
	return StringBctbxListWrapper::bctbxListToCppList(linphone_friend_get_phone_numbers((::LinphoneFriend *)mPrivPtr));
}
SubscriptionState linphone::Friend::getSubscriptionState() const {
	return (SubscriptionState)linphone_friend_get_subscription_state((::LinphoneFriend *)mPrivPtr);
}
std::shared_ptr<Vcard> linphone::Friend::getVcard() {
	return Object::cPtrToSharedPtr<Vcard>(linphone_friend_get_vcard((::LinphoneFriend *)mPrivPtr));
}
void linphone::Friend::setVcard(const std::shared_ptr<Vcard> & vcard) {
	linphone_friend_set_vcard((::LinphoneFriend *)mPrivPtr, (::LinphoneVcard *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Vcard>(vcard)));
}
bool linphone::Friend::subscribesEnabled() const {
	return (linphone_friend_subscribes_enabled((::LinphoneFriend *)mPrivPtr) != FALSE);
}
linphone::Status linphone::Friend::enableSubscribes(bool val) {
	return linphone_friend_enable_subscribes((::LinphoneFriend *)mPrivPtr, val);
}
void linphone::Friend::done() {
	linphone_friend_done((::LinphoneFriend *)mPrivPtr);
}
void linphone::Friend::setPresenceModelForUriOrTel(const std::string & uriOrTel, const std::shared_ptr<PresenceModel> & presence) {
	linphone_friend_set_presence_model_for_uri_or_tel((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(uriOrTel), (::LinphonePresenceModel *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,PresenceModel>(presence)));
}
void linphone::Friend::addPhoneNumber(const std::string & phone) {
	linphone_friend_add_phone_number((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(phone));
}
void linphone::Friend::addAddress(const std::shared_ptr<const Address> & addr) {
	linphone_friend_add_address((::LinphoneFriend *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(addr)));
}
void linphone::Friend::save(const std::shared_ptr<Core> & lc) {
	linphone_friend_save((::LinphoneFriend *)mPrivPtr, (::LinphoneCore *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Core>(lc)));
}
bool linphone::Friend::createVcard(const std::string & name) {
	return (linphone_friend_create_vcard((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(name)) != FALSE);
}
void linphone::Friend::edit() {
	linphone_friend_edit((::LinphoneFriend *)mPrivPtr);
}
bool linphone::Friend::inList() const {
	return (linphone_friend_in_list((::LinphoneFriend *)mPrivPtr) != FALSE);
}
std::shared_ptr<const PresenceModel> linphone::Friend::getPresenceModelForUriOrTel(const std::string & uriOrTel) const {
	return Object::cPtrToSharedPtr<const PresenceModel>(linphone_friend_get_presence_model_for_uri_or_tel((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(uriOrTel)));
}
void linphone::Friend::removeAddress(const std::shared_ptr<const Address> & addr) {
	linphone_friend_remove_address((::LinphoneFriend *)mPrivPtr, (::LinphoneAddress *)Object::sharedPtrToCPtr(std::static_pointer_cast<const Object,const Address>(addr)));
}
void linphone::Friend::removePhoneNumber(const std::string & phone) {
	linphone_friend_remove_phone_number((::LinphoneFriend *)mPrivPtr, StringUtilities::cppStringToC(phone));
}

std::shared_ptr<Friend> linphone::Friend::newFromVcard(const std::shared_ptr<Vcard> & vcard) {
	return Object::cPtrToSharedPtr<Friend>(linphone_friend_new_from_vcard((::LinphoneVcard *)Object::sharedPtrToCPtr(std::static_pointer_cast<Object,Vcard>(vcard))));
}

