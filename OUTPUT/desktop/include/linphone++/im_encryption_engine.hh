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

#ifndef _LINPHONE_IM_ENCRYPTION_ENGINE_HH
#define _LINPHONE_IM_ENCRYPTION_ENGINE_HH

#include <memory>
#include "core.hh"
#include "im_encryption_engine_listener.hh"
#include "object.hh"





struct _LinphoneImEncryptionEngine;


namespace linphone {


	/**
	 * @brief IM encryption engine. 
	 */
	class ImEncryptionEngine: public ListenableObject {
	
		public:
			ImEncryptionEngine(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneImEncryptionEngine *cPtr() {return (_LinphoneImEncryptionEngine *)mPrivPtr;}
			
			LINPHONECXX_PUBLIC void setListener(const std::shared_ptr<ImEncryptionEngineListener> &listener);

	
		public:
			
		
			/**
			 * @brief Gets the LinphoneCore object that created the IM encryption engine. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Core> getCore();
			

		
		
		
	};

};

#endif // _LINPHONE_IM_ENCRYPTION_ENGINE_HH
