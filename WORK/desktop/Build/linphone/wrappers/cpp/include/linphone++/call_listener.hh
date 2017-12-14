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

#ifndef _LINPHONE_CALL_LISTENER_HH
#define _LINPHONE_CALL_LISTENER_HH

#include <memory>
#include <string>
#include "enums.hh"
#include "info_message.hh"
#include "headers.hh"
#include "call_stats.hh"
#include "object.hh"







namespace linphone {

	class Call;

	class CallListener: public Listener {
	
		public:
			

	
		public:
			
		
			LINPHONECXX_PUBLIC virtual void onStateChanged(const std::shared_ptr<Call> & call, CallState cstate, const std::string & message) {}
			
			LINPHONECXX_PUBLIC virtual void onTransferStateChanged(const std::shared_ptr<Call> & call, CallState cstate) {}
			
			LINPHONECXX_PUBLIC virtual void onInfoMessageReceived(const std::shared_ptr<Call> & call, const std::shared_ptr<const InfoMessage> & msg) {}
			
			LINPHONECXX_PUBLIC virtual void onEncryptionChanged(const std::shared_ptr<Call> & call, bool on, const std::string & authenticationToken) {}
			
			LINPHONECXX_PUBLIC virtual void onAckProcessing(const std::shared_ptr<Call> & call, const std::shared_ptr<Headers> & ack, bool isReceived) {}
			
			LINPHONECXX_PUBLIC virtual void onDtmfReceived(const std::shared_ptr<Call> & call, int dtmf) {}
			
			LINPHONECXX_PUBLIC virtual void onStatsUpdated(const std::shared_ptr<Call> & call, const std::shared_ptr<const CallStats> & stats) {}
			

		
		
		
	};

};

#endif // _LINPHONE_CALL_LISTENER_HH
