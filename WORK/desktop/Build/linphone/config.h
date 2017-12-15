/***************************************************************************
* config.h.cmake
* Copyright (C) 2014  Belledonne Communications, Grenoble France
*
****************************************************************************
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*
****************************************************************************/

#define LINPHONE_MAJOR_VERSION 3
#define LINPHONE_MINOR_VERSION 12
#define LINPHONE_MICRO_VERSION 0
#define LINPHONE_VERSION "3.12.0"
#define LIBLINPHONE_VERSION "3.12.0"

#define LINPHONE_ALL_LANGS "ar cs de es fi fr he hu it ja lt nb_NO nl pl pt_BR ru sr sv tr zh_CN zh_TW"

#define LINPHONE_PLUGINS_DIR "./lib/liblinphone/plugins"
#define LINPHONE_CONFIG_DIR ""

#define GETTEXT_PACKAGE "linphone"

#define PACKAGE_LOCALE_DIR "./share/locale"
#define PACKAGE_DATA_DIR "./share"
#define PACKAGE_SOUND_DIR "./share/sounds/linphone"
#define PACKAGE_RING_DIR "./share/sounds/linphone/rings"

/* #undef BUILD_WIZARD */
/* #undef HAVE_GTK_OSX */
/* #undef HAVE_NOTIFY4 */
#define HAVE_ZLIB 1
/* #undef HAVE_CU_GET_SUITE */
/* #undef HAVE_CU_CURSES */
/* #undef HAVE_LIBUDEV_H */
#define HAVE_LIME
/* #undef ENABLE_NLS */
/* #undef ENABLE_UPDATE_CHECK */
