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

#ifndef _ENUMS_HH
#define _ENUMS_HH

namespace linphone {
	
	/**
	 * @brief Enum describing language checking. 
	 * 
	 */
	enum AccountCreatorLanguageStatus {
		/**
		 * @brief Language ok. 
		 */
		AccountCreatorLanguageStatusOk
	};

	/**
	 * @brief The state of a LinphonePlayer. 
	 * 
	 */
	enum PlayerState {
		/**
		 * @brief No file is opened for playing. 
		 */
		PlayerStateClosed,
		/**
		 * @brief The player is paused. 
		 */
		PlayerStatePaused,
		/**
		 * @brief The player is playing. 
		 */
		PlayerStatePlaying
	};

	/**
	 * @brief Enum representing the direction of a call. 
	 * 
	 */
	enum CallDir {
		/**
		 * @brief outgoing calls 
		 */
		CallDirOutgoing,
		/**
		 * @brief incoming calls 
		 */
		CallDirIncoming
	};

	/**
	 * @brief Enum describing Password checking. 
	 * 
	 */
	enum AccountCreatorPasswordStatus {
		/**
		 * @brief Password ok. 
		 */
		AccountCreatorPasswordStatusOk,
		/**
		 * @brief Password too short. 
		 */
		AccountCreatorPasswordStatusTooShort,
		/**
		 * @brief Password too long. 
		 */
		AccountCreatorPasswordStatusTooLong,
		/**
		 * @brief Contain invalid characters. 
		 */
		AccountCreatorPasswordStatusInvalidCharacters,
		/**
		 * @brief Missing specific characters. 
		 */
		AccountCreatorPasswordStatusMissingCharacters
	};

	/**
	 * @brief Enum controlling behavior for incoming subscription request. 
	 * 
	 */
	enum SubscribePolicy {
		/**
		 * @brief Does not automatically accept an incoming subscription request. 
		 */
		SubscribePolicySPWait,
		/**
		 * @brief Rejects incoming subscription request. 
		 */
		SubscribePolicySPDeny,
		/**
		 * @brief Automatically accepts a subscription request. 
		 */
		SubscribePolicySPAccept
	};

	/**
	 * @brief Enum describing the status of a LinphoneXmlRpcRequest. 
	 * 
	 */
	enum XmlRpcStatus {
		/**
		 */
		XmlRpcStatusPending,
		/**
		 */
		XmlRpcStatusOk,
		/**
		 */
		XmlRpcStatusFailed
	};

	/**
	 * @brief Indicates for a given media the stream direction. 
	 * 
	 */
	enum MediaDirection {
		/**
		 */
		MediaDirectionInvalid = -1,
		/**
		 */
		MediaDirectionInactive,
		/**
		 * @brief No active media not supported yet. 
		 */
		MediaDirectionSendOnly,
		/**
		 * @brief Send only mode. 
		 */
		MediaDirectionRecvOnly,
		/**
		 * @brief recv only mode 
		 */
		MediaDirectionSendRecv
	};

	/**
	 * @brief Enum describing type of audio route. 
	 * 
	 */
	enum AudioRoute {
		/**
		 */
		AudioRouteEarpiece,
		/**
		 */
		AudioRouteSpeaker
	};

	/**
	 * @brief Enum describing the stream types. 
	 * 
	 */
	enum StreamType {
		/**
		 */
		StreamTypeAudio,
		/**
		 */
		StreamTypeVideo,
		/**
		 */
		StreamTypeText,
		/**
		 */
		StreamTypeUnknown
	};

	/**
	 * @brief Enum for subscription states. 
	 * 
	 */
	enum SubscriptionState {
		/**
		 * @brief Initial state, should not be used. 
		 */
		SubscriptionStateNone,
		/**
		 * @brief An outgoing subcription was sent. 
		 */
		SubscriptionStateOutgoingProgress,
		/**
		 * @brief An incoming subcription is received. 
		 */
		SubscriptionStateIncomingReceived,
		/**
		 * @brief Subscription is pending, waiting for user approval. 
		 */
		SubscriptionStatePending,
		/**
		 * @brief Subscription is accepted. 
		 */
		SubscriptionStateActive,
		/**
		 * @brief Subscription is terminated normally. 
		 */
		SubscriptionStateTerminated,
		/**
		 * @brief Subscription was terminated by an error, indicated by
		 * linphone_event_get_reason() 
		 */
		SubscriptionStateError,
		/**
		 * @brief Subscription is about to expire, only sent if
		 * [sip]->refresh_generic_subscribe property is set to 0. 
		 */
		SubscriptionStateExpiring
	};

	/**
	 * @brief Enum describing RTP AVPF activation modes. 
	 * 
	 */
	enum AVPFMode {
		/**
		 * @brief Use default value defined at upper level. 
		 */
		AVPFModeDefault = -1,
		/**
		 * @brief AVPF is disabled. 
		 */
		AVPFModeDisabled,
		/**
		 * @brief AVPF is enabled. 
		 */
		AVPFModeEnabled
	};

	/**
	 * @brief Enum describing various failure reasons or contextual information for
	 * some events. 
	 * 
	 */
	enum Reason {
		/**
		 * @brief No reason has been set by the core. 
		 */
		ReasonNone,
		/**
		 * @brief No response received from remote. 
		 */
		ReasonNoResponse,
		/**
		 * @brief Authentication failed due to bad credentials or resource forbidden. 
		 */
		ReasonForbidden,
		/**
		 * @brief The call has been declined. 
		 */
		ReasonDeclined,
		/**
		 * @brief Destination of the call was not found. 
		 */
		ReasonNotFound,
		/**
		 * @brief The call was not answered in time (request timeout) 
		 */
		ReasonNotAnswered,
		/**
		 * @brief Phone line was busy. 
		 */
		ReasonBusy,
		/**
		 * @brief Unsupported content. 
		 */
		ReasonUnsupportedContent,
		/**
		 * @brief Transport error: connection failures, disconnections etc... 
		 */
		ReasonIOError,
		/**
		 * @brief Do not disturb reason. 
		 */
		ReasonDoNotDisturb,
		/**
		 * @brief Operation is unauthorized because missing credential. 
		 */
		ReasonUnauthorized,
		/**
		 * @brief Operation is rejected due to incompatible or unsupported media
		 * parameters. 
		 */
		ReasonNotAcceptable,
		/**
		 * @brief Operation could not be executed by server or remote client because it
		 * didn't have any context for it. 
		 */
		ReasonNoMatch,
		/**
		 * @brief Resource moved permanently. 
		 */
		ReasonMovedPermanently,
		/**
		 * @brief Resource no longer exists. 
		 */
		ReasonGone,
		/**
		 * @brief Temporarily unavailable. 
		 */
		ReasonTemporarilyUnavailable,
		/**
		 * @brief Address incomplete. 
		 */
		ReasonAddressIncomplete,
		/**
		 * @brief Not implemented. 
		 */
		ReasonNotImplemented,
		/**
		 * @brief Bad gateway. 
		 */
		ReasonBadGateway,
		/**
		 * @brief Server timeout. 
		 */
		ReasonServerTimeout,
		/**
		 * @brief Unknown reason. 
		 */
		ReasonUnknown
	};

	/**
	 * @brief Enum describing the status of server request. 
	 * 
	 */
	enum AccountCreatorStatus {
		/**
		 * @brief Request status. 
		 */
		AccountCreatorStatusRequestOk,
		/**
		 * @brief Request failed. 
		 */
		AccountCreatorStatusRequestFailed,
		/**
		 * @brief Request failed due to missing argument(s) 
		 */
		AccountCreatorStatusMissingArguments,
		/**
		 * @brief Request failed due to missing callback(s) 
		 */
		AccountCreatorStatusMissingCallbacks,
		/**
		 * @brief Account status. 
		 */
		AccountCreatorStatusAccountCreated,
		/**
		 * @brief Account not created. 
		 */
		AccountCreatorStatusAccountNotCreated,
		/**
		 * @brief Account exist. 
		 */
		AccountCreatorStatusAccountExist,
		/**
		 * @brief Account exist with alias. 
		 */
		AccountCreatorStatusAccountExistWithAlias,
		/**
		 * @brief Account not exist. 
		 */
		AccountCreatorStatusAccountNotExist,
		/**
		 * @brief Account was created with Alias. 
		 */
		AccountCreatorStatusAliasIsAccount,
		/**
		 * @brief Alias exist. 
		 */
		AccountCreatorStatusAliasExist,
		/**
		 * @brief Alias not exist. 
		 */
		AccountCreatorStatusAliasNotExist,
		/**
		 * @brief Account activated. 
		 */
		AccountCreatorStatusAccountActivated,
		/**
		 * @brief Account already activated. 
		 */
		AccountCreatorStatusAccountAlreadyActivated,
		/**
		 * @brief Account not activated. 
		 */
		AccountCreatorStatusAccountNotActivated,
		/**
		 * @brief Account linked. 
		 */
		AccountCreatorStatusAccountLinked,
		/**
		 * @brief Account not linked. 
		 */
		AccountCreatorStatusAccountNotLinked,
		/**
		 * @brief Server. 
		 */
		AccountCreatorStatusServerError
	};

	/**
	 * @brief Enum describing the authentication methods. 
	 * 
	 */
	enum AuthMethod {
		/**
		 * @brief Digest authentication requested. 
		 */
		AuthMethodHttpDigest,
		/**
		 * @brief Client certificate requested. 
		 */
		AuthMethodTls
	};

	/**
	 * @brief LinphoneCoreLogCollectionUploadState is used to notify if log collection
	 * upload have been succesfully delivered or not. 
	 * 
	 */
	enum CoreLogCollectionUploadState {
		/**
		 * @brief Delivery in progress. 
		 */
		CoreLogCollectionUploadStateInProgress,
		/**
		 * @brief Log collection upload successfully delivered and acknowledged by remote
		 * end point. 
		 */
		CoreLogCollectionUploadStateDelivered,
		/**
		 * @brief Log collection upload was not delivered. 
		 */
		CoreLogCollectionUploadStateNotDelivered
	};

	/**
	 * @brief Enum describing type of media encryption types. 
	 * 
	 */
	enum MediaEncryption {
		/**
		 * @brief No media encryption is used. 
		 */
		MediaEncryptionNone,
		/**
		 * @brief Use SRTP media encryption. 
		 */
		MediaEncryptionSRTP,
		/**
		 * @brief Use ZRTP media encryption. 
		 */
		MediaEncryptionZRTP,
		/**
		 * @brief Use DTLS media encryption. 
		 */
		MediaEncryptionDTLS
	};

	/**
	 * @brief Basic status as defined in section 4.1.4 of RFC 3863. 
	 * 
	 */
	enum PresenceBasicStatus {
		/**
		 * @brief This value means that the associated contact element, if any, is ready
		 * to accept communication. 
		 */
		PresenceBasicStatusOpen,
		/**
		 * @brief This value means that the associated contact element, if any, is unable
		 * to accept communication. 
		 */
		PresenceBasicStatusClosed
	};

	/**
	 * @brief Enum for subscription direction (incoming or outgoing). 
	 * 
	 */
	enum SubscriptionDir {
		/**
		 * @brief Incoming subscription. 
		 */
		SubscriptionDirIncoming,
		/**
		 * @brief Outgoing subscription. 
		 */
		SubscriptionDirOutgoing,
		/**
		 * @brief Invalid subscription direction. 
		 */
		SubscriptionDirInvalidDir
	};

	/**
	 * @brief Enum describing transport type for LinphoneAddress. 
	 * 
	 */
	enum TransportType {
		/**
		 */
		TransportTypeUdp,
		/**
		 */
		TransportTypeTcp,
		/**
		 */
		TransportTypeTls,
		/**
		 */
		TransportTypeDtls
	};

	/**
	 * @brief LinphoneChatMessageState is used to notify if messages have been
	 * succesfully delivered or not. 
	 * 
	 */
	enum ChatMessageState {
		/**
		 * @brief Initial state. 
		 */
		ChatMessageStateIdle,
		/**
		 * @brief Delivery in progress. 
		 */
		ChatMessageStateInProgress,
		/**
		 * @brief Message successfully delivered and acknowledged by server. 
		 */
		ChatMessageStateDelivered,
		/**
		 * @brief Message was not delivered. 
		 */
		ChatMessageStateNotDelivered,
		/**
		 * @brief Message was received(and acknowledged) but cannot get file from server. 
		 */
		ChatMessageStateFileTransferError,
		/**
		 * @brief File transfer has been completed successfully. 
		 */
		ChatMessageStateFileTransferDone,
		/**
		 * @brief Message successfully delivered and acknowledged to destination. 
		 */
		ChatMessageStateDeliveredToUser,
		/**
		 * @brief Message displayed to the remote user. 
		 */
		ChatMessageStateDisplayed
	};

	/**
	 * @brief Enum describing Phone number checking. 
	 * 
	 */
	enum AccountCreatorPhoneNumberStatus {
		/**
		 * @brief Phone number ok. 
		 */
		AccountCreatorPhoneNumberStatusOk = 1,
		/**
		 * @brief Phone number too short. 
		 */
		AccountCreatorPhoneNumberStatusTooShort = 2,
		/**
		 * @brief Phone number too long. 
		 */
		AccountCreatorPhoneNumberStatusTooLong = 4,
		/**
		 * @brief Country code invalid. 
		 */
		AccountCreatorPhoneNumberStatusInvalidCountryCode = 8,
		/**
		 * @brief Phone number invalid. 
		 */
		AccountCreatorPhoneNumberStatusInvalid = 16
	};

	/**
	 * @brief Consolidated presence information: 'online' means the user is open for
	 * communication, 'busy' means the user is open for communication but involved in
	 * an other activity, 'do not disturb' means the user is not open for
	 * communication, and 'offline' means that no presence information is available. 
	 * 
	 */
	enum ConsolidatedPresence {
		/**
		 */
		ConsolidatedPresenceOnline,
		/**
		 */
		ConsolidatedPresenceBusy,
		/**
		 */
		ConsolidatedPresenceDoNotDisturb,
		/**
		 */
		ConsolidatedPresenceOffline
	};

	/**
	 * @brief Enum describing Transport checking. 
	 * 
	 */
	enum AccountCreatorTransportStatus {
		/**
		 * @brief Transport ok. 
		 */
		AccountCreatorTransportStatusOk,
		/**
		 * @brief Transport invalid. 
		 */
		AccountCreatorTransportStatusUnsupported
	};

	/**
	 * @brief Enum describing the result of a version update check. 
	 * 
	 */
	enum VersionUpdateCheckResult {
		/**
		 */
		VersionUpdateCheckResultUpToDate,
		/**
		 */
		VersionUpdateCheckResultNewVersionAvailable,
		/**
		 */
		VersionUpdateCheckResultError
	};

	/**
	 * @brief LinphoneGlobalState describes the global state of the LinphoneCore
	 * object. 
	 * 
	 */
	enum ConfiguringState {
		/**
		 */
		ConfiguringStateSuccessful,
		/**
		 */
		ConfiguringStateFailed,
		/**
		 */
		ConfiguringStateSkipped
	};

	/**
	 * @brief Enum describing uPnP states. 
	 * 
	 */
	enum UpnpState {
		/**
		 * @brief uPnP is not activate 
		 */
		UpnpStateIdle,
		/**
		 * @brief uPnP process is in progress 
		 */
		UpnpStatePending,
		/**
		 * @brief Internal use: Only used by port binding. 
		 */
		UpnpStateAdding,
		/**
		 * @brief Internal use: Only used by port binding. 
		 */
		UpnpStateRemoving,
		/**
		 * @brief uPnP is not available 
		 */
		UpnpStateNotAvailable,
		/**
		 * @brief uPnP is enabled 
		 */
		UpnpStateOk,
		/**
		 * @brief uPnP processing has failed 
		 */
		UpnpStateKo,
		/**
		 * @brief IGD router is blacklisted. 
		 */
		UpnpStateBlacklisted
	};

	/**
	 * 
	 */
	enum LimeState {
		/**
		 * @brief Lime is not used at all. 
		 */
		LimeStateDisabled,
		/**
		 * @brief Lime is always used. 
		 */
		LimeStateMandatory,
		/**
		 * @brief Lime is used only if we already shared a secret with remote. 
		 */
		LimeStatePreferred
	};

	/**
	 * @brief Enum describing Username checking. 
	 * 
	 */
	enum AccountCreatorUsernameStatus {
		/**
		 * @brief Username ok. 
		 */
		AccountCreatorUsernameStatusOk,
		/**
		 * @brief Username too short. 
		 */
		AccountCreatorUsernameStatusTooShort,
		/**
		 * @brief Username too long. 
		 */
		AccountCreatorUsernameStatusTooLong,
		/**
		 * @brief Contain invalid characters. 
		 */
		AccountCreatorUsernameStatusInvalidCharacters,
		/**
		 * @brief Invalid username. 
		 */
		AccountCreatorUsernameStatusInvalid
	};

	/**
	 * @brief Enum describing ICE states. 
	 * 
	 */
	enum IceState {
		/**
		 * @brief ICE has not been activated for this call or stream. 
		 */
		IceStateNotActivated,
		/**
		 * @brief ICE processing has failed. 
		 */
		IceStateFailed,
		/**
		 * @brief ICE process is in progress. 
		 */
		IceStateInProgress,
		/**
		 * @brief ICE has established a direct connection to the remote host. 
		 */
		IceStateHostConnection,
		/**
		 * @brief ICE has established a connection to the remote host through one or
		 * several NATs. 
		 */
		IceStateReflexiveConnection,
		/**
		 * @brief ICE has established a connection through a relay. 
		 */
		IceStateRelayConnection
	};

	/**
	 * @brief LinphoneGlobalState describes the global state of the LinphoneCore
	 * object. 
	 * 
	 */
	enum GlobalState {
		/**
		 */
		GlobalStateOff,
		/**
		 */
		GlobalStateStartup,
		/**
		 */
		GlobalStateOn,
		/**
		 */
		GlobalStateShutdown,
		/**
		 */
		GlobalStateConfiguring
	};

	/**
	 * @brief LinphoneRegistrationState describes proxy registration states. 
	 * 
	 */
	enum RegistrationState {
		/**
		 * @brief Initial state for registrations. 
		 */
		RegistrationStateNone,
		/**
		 * @brief Registration is in progress. 
		 */
		RegistrationStateProgress,
		/**
		 * @brief Registration is successful. 
		 */
		RegistrationStateOk,
		/**
		 * @brief Unregistration succeeded. 
		 */
		RegistrationStateCleared,
		/**
		 * @brief Registration failed. 
		 */
		RegistrationStateFailed
	};

	/**
	 * @brief Enum describing the types of argument for LinphoneXmlRpcRequest. 
	 * 
	 */
	enum XmlRpcArgType {
		/**
		 */
		XmlRpcArgTypeNone,
		/**
		 */
		XmlRpcArgTypeInt,
		/**
		 */
		XmlRpcArgTypeString
	};

	/**
	 * @brief Enum describing the status of a LinphoneFriendList operation. 
	 * 
	 */
	enum FriendListStatus {
		/**
		 */
		FriendListStatusOK,
		/**
		 */
		FriendListStatusNonExistentFriend,
		/**
		 */
		FriendListStatusInvalidFriend
	};

	/**
	 * @brief Defines privacy policy to apply as described by rfc3323. 
	 * 
	 */
	enum Privacy {
		/**
		 * @brief Privacy services must not perform any privacy function. 
		 */
		PrivacyNone = 0,
		/**
		 * @brief Request that privacy services provide a user-level privacy function. 
		 */
		PrivacyUser = 1,
		/**
		 * @brief Request that privacy services modify headers that cannot be set
		 * arbitrarily by the user (Contact/Via). 
		 */
		PrivacyHeader = 2,
		/**
		 * @brief Request that privacy services provide privacy for session media. 
		 */
		PrivacySession = 4,
		/**
		 * @brief rfc3325 The presence of this privacy type in a Privacy header field
		 * indicates that the user would like the Network Asserted Identity to be kept
		 * private with respect to SIP entities outside the Trust Domain with which the
		 * user authenticated. 
		 */
		PrivacyId = 8,
		/**
		 * @brief Privacy service must perform the specified services or fail the request. 
		 */
		PrivacyCritical = 16,
		/**
		 * @brief Special keyword to use privacy as defined either globally or by proxy
		 * using linphone_proxy_config_set_privacy() 
		 */
		PrivacyDefault = 32768
	};

	/**
	 * @brief Enum for publish states. 
	 * 
	 */
	enum PublishState {
		/**
		 * @brief Initial state, do not use. 
		 */
		PublishStateNone,
		/**
		 * @brief An outgoing publish was created and submitted. 
		 */
		PublishStateProgress,
		/**
		 * @brief Publish is accepted. 
		 */
		PublishStateOk,
		/**
		 * @brief Publish encoutered an error, linphone_event_get_reason() gives reason
		 * code. 
		 */
		PublishStateError,
		/**
		 * @brief Publish is about to expire, only sent if [sip]->refresh_generic_publish
		 * property is set to 0. 
		 */
		PublishStateExpiring,
		/**
		 * @brief Event has been un published. 
		 */
		PublishStateCleared
	};

	/**
	 * @brief Enum describing the tunnel modes. 
	 * 
	 */
	enum TunnelMode {
		/**
		 * @brief The tunnel is disabled. 
		 */
		TunnelModeDisable,
		/**
		 * @brief The tunnel is enabled. 
		 */
		TunnelModeEnable,
		/**
		 * @brief The tunnel is enabled automatically if it is required. 
		 */
		TunnelModeAuto
	};

	/**
	 * @brief Enum representing the status of a call. 
	 * 
	 */
	enum CallStatus {
		/**
		 * @brief The call was sucessful. 
		 */
		CallStatusSuccess,
		/**
		 * @brief The call was aborted. 
		 */
		CallStatusAborted,
		/**
		 * @brief The call was missed (unanswered) 
		 */
		CallStatusMissed,
		/**
		 * @brief The call was declined, either locally or by remote end. 
		 */
		CallStatusDeclined,
		/**
		 * @brief The call was aborted before being advertised to the application - for
		 * protocol reasons. 
		 */
		CallStatusEarlyAborted
	};

	/**
	 * @brief Enum describing Ip family. 
	 * 
	 */
	enum AddressFamily {
		/**
		 * @brief IpV4. 
		 */
		AddressFamilyInet,
		/**
		 * @brief IpV6. 
		 */
		AddressFamilyInet6,
		/**
		 * @brief Unknown. 
		 */
		AddressFamilyUnspec
	};

	/**
	 * @brief Activities as defined in section 3.2 of RFC 4480. 
	 * 
	 */
	enum PresenceActivityType {
		/**
		 * @brief The person has a calendar appointment, without specifying exactly of
		 * what type. 
		 */
		PresenceActivityTypeAppointment,
		/**
		 * @brief The person is physically away from all interactive communication
		 * devices. 
		 */
		PresenceActivityTypeAway,
		/**
		 * @brief The person is eating the first meal of the day, usually eaten in the
		 * morning. 
		 */
		PresenceActivityTypeBreakfast,
		/**
		 * @brief The person is busy, without further details. 
		 */
		PresenceActivityTypeBusy,
		/**
		 * @brief The person is having his or her main meal of the day, eaten in the
		 * evening or at midday. 
		 */
		PresenceActivityTypeDinner,
		/**
		 * @brief This is a scheduled national or local holiday. 
		 */
		PresenceActivityTypeHoliday,
		/**
		 * @brief The person is riding in a vehicle, such as a car, but not steering. 
		 */
		PresenceActivityTypeInTransit,
		/**
		 * @brief The person is looking for (paid) work. 
		 */
		PresenceActivityTypeLookingForWork,
		/**
		 * @brief The person is eating his or her midday meal. 
		 */
		PresenceActivityTypeLunch,
		/**
		 * @brief The person is scheduled for a meal, without specifying whether it is
		 * breakfast, lunch, or dinner, or some other meal. 
		 */
		PresenceActivityTypeMeal,
		/**
		 * @brief The person is in an assembly or gathering of people, as for a business,
		 * social, or religious purpose. 
		 */
		PresenceActivityTypeMeeting,
		/**
		 * @brief The person is talking on the telephone. 
		 */
		PresenceActivityTypeOnThePhone,
		/**
		 * @brief The person is engaged in an activity with no defined representation. 
		 */
		PresenceActivityTypeOther,
		/**
		 * @brief A performance is a sub-class of an appointment and includes musical,
		 * theatrical, and cinematic performances as well as lectures. 
		 */
		PresenceActivityTypePerformance,
		/**
		 * @brief The person will not return for the foreseeable future, e.g., because it
		 * is no longer working for the company. 
		 */
		PresenceActivityTypePermanentAbsence,
		/**
		 * @brief The person is occupying himself or herself in amusement, sport, or other
		 * recreation. 
		 */
		PresenceActivityTypePlaying,
		/**
		 * @brief The person is giving a presentation, lecture, or participating in a
		 * formal round-table discussion. 
		 */
		PresenceActivityTypePresentation,
		/**
		 * @brief The person is visiting stores in search of goods or services. 
		 */
		PresenceActivityTypeShopping,
		/**
		 * @brief The person is sleeping. 
		 */
		PresenceActivityTypeSleeping,
		/**
		 * @brief The person is observing an event, such as a sports event. 
		 */
		PresenceActivityTypeSpectator,
		/**
		 * @brief The person is controlling a vehicle, watercraft, or plane. 
		 */
		PresenceActivityTypeSteering,
		/**
		 * @brief The person is on a business or personal trip, but not necessarily
		 * in-transit. 
		 */
		PresenceActivityTypeTravel,
		/**
		 * @brief The person is watching television. 
		 */
		PresenceActivityTypeTV,
		/**
		 * @brief The activity of the person is unknown. 
		 */
		PresenceActivityTypeUnknown,
		/**
		 * @brief A period of time devoted to pleasure, rest, or relaxation. 
		 */
		PresenceActivityTypeVacation,
		/**
		 * @brief The person is engaged in, typically paid, labor, as part of a profession
		 * or job. 
		 */
		PresenceActivityTypeWorking,
		/**
		 * @brief The person is participating in religious rites. 
		 */
		PresenceActivityTypeWorship
	};

	/**
	 * @brief Enum describing Activation code checking. 
	 * 
	 */
	enum AccountCreatorActivationCodeStatus {
		/**
		 * @brief Activation code ok. 
		 */
		AccountCreatorActivationCodeStatusOk,
		/**
		 * @brief Activation code too short. 
		 */
		AccountCreatorActivationCodeStatusTooShort,
		/**
		 * @brief Activation code too long. 
		 */
		AccountCreatorActivationCodeStatusTooLong,
		/**
		 * @brief Contain invalid characters. 
		 */
		AccountCreatorActivationCodeStatusInvalidCharacters
	};

	/**
	 * @brief Enum describing the status of a CardDAV synchronization. 
	 * 
	 */
	enum FriendListSyncStatus {
		/**
		 */
		FriendListSyncStatusStarted,
		/**
		 */
		FriendListSyncStatusSuccessful,
		/**
		 */
		FriendListSyncStatusFailure
	};

	/**
	 * @brief LinphoneCallState enum represents the different state a call can reach
	 * into. 
	 * 
	 */
	enum CallState {
		/**
		 * @brief Initial call state. 
		 */
		CallStateIdle,
		/**
		 * @brief This is a new incoming call. 
		 */
		CallStateIncomingReceived,
		/**
		 * @brief An outgoing call is started. 
		 */
		CallStateOutgoingInit,
		/**
		 * @brief An outgoing call is in progress. 
		 */
		CallStateOutgoingProgress,
		/**
		 * @brief An outgoing call is ringing at remote end. 
		 */
		CallStateOutgoingRinging,
		/**
		 * @brief An outgoing call is proposed early media. 
		 */
		CallStateOutgoingEarlyMedia,
		/**
		 * @brief Connected, the call is answered. 
		 */
		CallStateConnected,
		/**
		 * @brief The media streams are established and running. 
		 */
		CallStateStreamsRunning,
		/**
		 * @brief The call is pausing at the initiative of local end. 
		 */
		CallStatePausing,
		/**
		 * @brief The call is paused, remote end has accepted the pause. 
		 */
		CallStatePaused,
		/**
		 * @brief The call is being resumed by local end. 
		 */
		CallStateResuming,
		/**
		 * @brief The call is being transfered to another party, resulting in a new
		 * outgoing call to follow immediately. 
		 */
		CallStateRefered,
		/**
		 * @brief The call encountered an error. 
		 */
		CallStateError,
		/**
		 * @brief The call ended normally. 
		 */
		CallStateEnd,
		/**
		 * @brief The call is paused by remote end. 
		 */
		CallStatePausedByRemote,
		/**
		 * @brief The call's parameters change is requested by remote end, used for
		 * example when video is added by remote. 
		 */
		CallStateUpdatedByRemote,
		/**
		 * @brief We are proposing early media to an incoming call. 
		 */
		CallStateIncomingEarlyMedia,
		/**
		 * @brief A call update has been initiated by us. 
		 */
		CallStateUpdating,
		/**
		 * @brief The call object is no more retained by the core. 
		 */
		CallStateReleased,
		/**
		 * @brief The call is updated by remote while not yet answered (early dialog SIP
		 * UPDATE received) 
		 */
		CallStateEarlyUpdatedByRemote,
		/**
		 * @brief We are updating the call while not yet answered (early dialog SIP UPDATE
		 * sent) 
		 */
		CallStateEarlyUpdating
	};

	/**
	 * @brief Enum describing Email checking. 
	 * 
	 */
	enum AccountCreatorEmailStatus {
		/**
		 * @brief Email ok. 
		 */
		AccountCreatorEmailStatusOk,
		/**
		 * @brief Email malformed. 
		 */
		AccountCreatorEmailStatusMalformed,
		/**
		 * @brief Contain invalid characters. 
		 */
		AccountCreatorEmailStatusInvalidCharacters
	};

	/**
	 * @brief Enum describing Domain checking. 
	 * 
	 */
	enum AccountCreatorDomainStatus {
		/**
		 * @brief Domain ok. 
		 */
		AccountCreatorDomainStatusOk,
		/**
		 * @brief Domain invalid. 
		 */
		AccountCreatorDomainStatusInvalid
	};

	/**
	 * 
	 */
	enum LogCollectionState {
		/**
		 */
		LogCollectionStateDisabled,
		/**
		 */
		LogCollectionStateEnabled,
		/**
		 */
		LogCollectionStateEnabledWithoutPreviousLogHandler
	};

	/**
	 * @brief Enum listing frequent telephony tones. 
	 * 
	 */
	enum ToneID {
		/**
		 * @brief Not a tone. 
		 */
		ToneIDUndefined,
		/**
		 * @brief Busy tone. 
		 */
		ToneIDBusy,
		/**
		 */
		ToneIDCallWaiting,
		/**
		 * @brief Call waiting tone. 
		 */
		ToneIDCallOnHold,
		/**
		 * @brief Call on hold tone. 
		 */
		ToneIDCallLost
	};

	
	typedef int Status;
};

#endif //_ENUMS_HH
