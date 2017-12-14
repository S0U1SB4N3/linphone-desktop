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

#ifndef _LINPHONE_VCARD_HH
#define _LINPHONE_VCARD_HH

#include <string>
#include <list>
#include <memory>
#include "address.hh"
#include "object.hh"


#include <belcard/belcard.hpp>




struct _LinphoneVcard;


namespace linphone {


	/**
	 * @brief The LinphoneVcard object. 
	 */
	class Vcard: public Object {
	
		public:
			Vcard(void *ptr, bool takeRef=true);
			LINPHONECXX_PUBLIC _LinphoneVcard *cPtr() {return (_LinphoneVcard *)mPrivPtr;}
			

	
		public:
			LINPHONECXX_PUBLIC std::shared_ptr<belcard::BelCard> &getVcard();
			
		
			/**
			 * @brief Returns the family name in the N attribute of the vCard, or NULL if it
			 * isn't set yet. 
			 */
			LINPHONECXX_PUBLIC std::string getFamilyName() const;
			
			/**
			 * @brief Sets the family name in the N attribute of the vCard. 
			 */
			LINPHONECXX_PUBLIC void setFamilyName(const std::string & name);
			
			/**
			 * @brief Returns the list of SIP addresses (as LinphoneAddress) in the vCard (all
			 * the IMPP attributes that has an URI value starting by "sip:") or NULL. 
			 */
			LINPHONECXX_PUBLIC std::list<std::shared_ptr<Address> > getSipAddresses();
			
			/**
			 * @brief Returns the FN attribute of the vCard, or NULL if it isn't set yet. 
			 */
			LINPHONECXX_PUBLIC std::string getFullName() const;
			
			/**
			 * @brief Sets the FN attribute of the vCard (which is mandatory). 
			 */
			LINPHONECXX_PUBLIC void setFullName(const std::string & name);
			
			/**
			 * @brief Gets the URL of the vCard. 
			 */
			LINPHONECXX_PUBLIC std::string getUrl() const;
			
			/**
			 * @brief Sets the URL of the vCard. 
			 */
			LINPHONECXX_PUBLIC void setUrl(const std::string & url);
			
			/**
			 * @brief Gets the eTag of the vCard. 
			 */
			LINPHONECXX_PUBLIC std::string getEtag() const;
			
			/**
			 * @brief Sets the eTAG of the vCard. 
			 */
			LINPHONECXX_PUBLIC void setEtag(const std::string & etag);
			
			/**
			 * @brief Returns the given name in the N attribute of the vCard, or NULL if it
			 * isn't set yet. 
			 */
			LINPHONECXX_PUBLIC std::string getGivenName() const;
			
			/**
			 * @brief Sets the given name in the N attribute of the vCard. 
			 */
			LINPHONECXX_PUBLIC void setGivenName(const std::string & name);
			
			/**
			 * @brief Returns the skipFieldValidation property of the vcard. 
			 */
			LINPHONECXX_PUBLIC bool getSkipValidation() const;
			
			/**
			 * @brief Sets the skipFieldValidation property of the vcard. 
			 */
			LINPHONECXX_PUBLIC void setSkipValidation(bool skip);
			
			/**
			 * @brief Gets the Organization of the vCard. 
			 */
			LINPHONECXX_PUBLIC std::string getOrganization() const;
			
			/**
			 * @brief Fills the Organization field of the vCard. 
			 */
			LINPHONECXX_PUBLIC void setOrganization(const std::string & organization);
			
			/**
			 * @brief Returns the list of phone numbers (as string) in the vCard (all the TEL
			 * attributes) or NULL. 
			 */
			LINPHONECXX_PUBLIC std::list<std::string > getPhoneNumbers() const;
			
			/**
			 * @brief Gets the UID of the vCard. 
			 */
			LINPHONECXX_PUBLIC std::string getUid() const;
			
			/**
			 * @brief Sets the unique ID of the vCard. 
			 */
			LINPHONECXX_PUBLIC void setUid(const std::string & uid);
			
			/**
			 * @brief Generates a random unique id for the vCard. 
			 */
			LINPHONECXX_PUBLIC bool generateUniqueId();
			
			/**
			 * @brief Removes a SIP address in the vCard (if it exists), using the IMPP
			 * property. 
			 */
			LINPHONECXX_PUBLIC void removeSipAddress(const std::string & sipAddress);
			
			/**
			 * @brief Removes a phone number in the vCard (if it exists), using the TEL
			 * property. 
			 */
			LINPHONECXX_PUBLIC void removePhoneNumber(const std::string & phone);
			
			/**
			 * @brief Adds a phone number in the vCard, using the TEL property. 
			 */
			LINPHONECXX_PUBLIC void addPhoneNumber(const std::string & phone);
			
			/**
			 * @brief Clone a #LinphoneVcard. 
			 */
			LINPHONECXX_PUBLIC std::shared_ptr<Vcard> clone() const;
			
			/**
			 * @brief Adds a SIP address in the vCard, using the IMPP property. 
			 */
			LINPHONECXX_PUBLIC void addSipAddress(const std::string & sipAddress);
			
			/**
			 * @brief Edits the preferred SIP address in the vCard (or the first one), using
			 * the IMPP property. 
			 */
			LINPHONECXX_PUBLIC void editMainSipAddress(const std::string & sipAddress);
			
			/**
			 * @brief Returns the vCard4 representation of the LinphoneVcard. 
			 */
			LINPHONECXX_PUBLIC std::string asVcard4String();
			

		
		
		
	};

};

#endif // _LINPHONE_VCARD_HH
