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

#ifndef _LINPHONE_PLAYER_HH
#define _LINPHONE_PLAYER_HH

#include <string>
#include "enums.hh"
#include "player_listener.hh"
#include "object.hh"





struct _LinphonePlayer;


namespace linphone {


	/**
	 * @brief Player interface. 
	 */
	class Player: public ListenableObject {
	
		public:
			Player(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphonePlayer *cPtr() {return (_LinphonePlayer *)mPrivPtr;}
			
			LINPHONECXX_PUBLIC void setListener(const std::shared_ptr<PlayerListener> &listener);

	
		public:
			
		
			/**
			 * @brief Get the duration of the opened file. 
			 */
			LINPHONECXX_PUBLIC int getDuration();
			
			/**
			 * @brief Get the current state of a player. 
			 */
			LINPHONECXX_PUBLIC PlayerState getState();
			
			/**
			 * @brief Get the current position in the opened file. 
			 */
			LINPHONECXX_PUBLIC int getCurrentPosition();
			
			/**
			 * @brief Open a file for playing. 
			 */
			LINPHONECXX_PUBLIC linphone::Status open(const std::string & filename);
			
			/**
			 * @brief Start playing a file that has been opened with linphone_player_open(). 
			 */
			LINPHONECXX_PUBLIC linphone::Status start();
			
			/**
			 * @brief Pause the playing of a file. 
			 */
			LINPHONECXX_PUBLIC linphone::Status pause();
			
			/**
			 * @brief Seek in an opened file. 
			 */
			LINPHONECXX_PUBLIC linphone::Status seek(int timeMs);
			
			/**
			 * @brief Close the opened file. 
			 */
			LINPHONECXX_PUBLIC void close();
			

		
		
		
	};

};

#endif // _LINPHONE_PLAYER_HH
