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

#ifndef _LINPHONE_CALL_STATS_HH
#define _LINPHONE_CALL_STATS_HH

#include <cstdint>
#include "enums.hh"
#include "object.hh"





struct _LinphoneCallStats;


namespace linphone {


	/**
	 * @brief The LinphoneCallStats objects carries various statistic informations
	 * regarding quality of audio or video streams. 
	 */
	class CallStats: public Object {
	
		public:
			CallStats(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneCallStats *cPtr() {return (_LinphoneCallStats *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get the local loss rate since last report. 
			 */
			LINPHONECXX_PUBLIC float getSenderLossRate() const;
			
			/**
			 * @brief Get the bandwidth measurement of the received stream, expressed in
			 * kbit/s, including IP/UDP/RTP headers. 
			 */
			LINPHONECXX_PUBLIC float getDownloadBandwidth() const;
			
			/**
			 * @brief Gets the local late rate since last report. 
			 */
			LINPHONECXX_PUBLIC float getLocalLateRate() const;
			
			/**
			 * @brief Gets the remote reported interarrival jitter. 
			 */
			LINPHONECXX_PUBLIC float getReceiverInterarrivalJitter() const;
			
			/**
			 * @brief Get the jitter buffer size in ms. 
			 */
			LINPHONECXX_PUBLIC float getJitterBufferSizeMs() const;
			
			/**
			 * @brief Get the state of uPnP processing. 
			 */
			LINPHONECXX_PUBLIC UpnpState getUpnpState() const;
			
			/**
			 * @brief Gets the remote reported loss rate since last report. 
			 */
			LINPHONECXX_PUBLIC float getReceiverLossRate() const;
			
			/**
			 * @brief Get the local loss rate since last report. 
			 */
			LINPHONECXX_PUBLIC float getLocalLossRate() const;
			
			/**
			 * @brief Get the state of ICE processing. 
			 */
			LINPHONECXX_PUBLIC IceState getIceState() const;
			
			/**
			 * @brief Get the IP address family of the remote peer. 
			 */
			LINPHONECXX_PUBLIC AddressFamily getIpFamilyOfRemote() const;
			
			/**
			 * @brief Get the bandwidth measurement of the sent stream, expressed in kbit/s,
			 * including IP/UDP/RTP headers. 
			 */
			LINPHONECXX_PUBLIC float getUploadBandwidth() const;
			
			/**
			 * @brief Get the round trip delay in s. 
			 */
			LINPHONECXX_PUBLIC float getRoundTripDelay() const;
			
			/**
			 * @brief Get the type of the stream the stats refer to. 
			 */
			LINPHONECXX_PUBLIC StreamType getType() const;
			
			/**
			 * @brief Gets the cumulative number of late packets. 
			 */
			LINPHONECXX_PUBLIC uint64_t getLatePacketsCumulativeNumber() const;
			
			/**
			 * @brief Gets the local interarrival jitter. 
			 */
			LINPHONECXX_PUBLIC float getSenderInterarrivalJitter() const;
			

		
		
		
	};

};

#endif // _LINPHONE_CALL_STATS_HH
