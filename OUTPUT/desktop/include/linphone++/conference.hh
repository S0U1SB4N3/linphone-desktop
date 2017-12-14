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

#ifndef _LINPHONE_CONFERENCE_HH
#define _LINPHONE_CONFERENCE_HH

#include <list>
#include <memory>
#include "address.hh"
#include "call_params.hh"
#include "object.hh"





struct _LinphoneConference;


namespace linphone {


	/**
	 * @brief LinphoneConference class The _LinphoneConference struct does not exists,
	 * it's the Conference C++ class that is used behind. 
	 */
	class Conference: public Object {
	
		public:
			Conference(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneConference *cPtr() {return (_LinphoneConference *)mPrivPtr;}
			

	
		public:
			
		
			/**
			 * @brief Get URIs of all participants of one conference The returned bctbx_list_t
			 * contains URIs of all participant. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<Address> > getParticipants() const;
			
			/**
			 * @brief Remove a participant from a conference. 
			 */
			LINPHONECXX_PUBLIC linphone::Status removeParticipant(const std::shared_ptr<const Address> & uri);
			
			/**
			 * @brief Invite participants to the conference, by supplying a list of
			 * LinphoneAddress. 
			 */
			LINPHONECXX_PUBLIC linphone::Status inviteParticipants(const std::list<std::shared_ptr<Address> > & addresses, const std::shared_ptr<const CallParams> & params);
			

		
		
		
	};

};

#endif // _LINPHONE_CONFERENCE_HH
