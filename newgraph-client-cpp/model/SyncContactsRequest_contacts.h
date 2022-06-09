/**
 * newlife-creator-api-eu-dev
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-05-20T13:39:48Z
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.27.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SyncContactsRequest_contacts.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_SyncContactsRequest_contacts_H_
#define IO_SWAGGER_CLIENT_MODEL_SyncContactsRequest_contacts_H_


#include "../ModelBase.h"

#include "SyncContactsRequest_phones.h"
#include <cpprest/details/basic_types.h>
#include "SyncContactsRequest_postalAddresses.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SyncContactsRequest_contacts
    : public ModelBase
{
public:
    SyncContactsRequest_contacts();
    virtual ~SyncContactsRequest_contacts();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SyncContactsRequest_contacts members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBirthday() const;
    bool birthdayIsSet() const;
    void unsetBirthday();
    void setBirthday(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIdentifier() const;
    bool identifierIsSet() const;
    void unsetIdentifier();
    void setIdentifier(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAndroidAccountName() const;
    bool androidAccountNameIsSet() const;
    void unsetAndroidAccountName();
    void setAndroidAccountName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetDisplayName();
    void setDisplayName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPrefix() const;
    bool prefixIsSet() const;
    void unsetPrefix();
    void setPrefix(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGivenName() const;
    bool givenNameIsSet() const;
    void unsetGivenName();
    void setGivenName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getJobTitle() const;
    bool jobTitleIsSet() const;
    void unsetJobTitle();
    void setJobTitle(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SyncContactsRequest_phones>>& getPhones();
    bool phonesIsSet() const;
    void unsetPhones();
    void setPhones(std::vector<std::shared_ptr<SyncContactsRequest_phones>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAvatar() const;
    bool avatarIsSet() const;
    void unsetAvatar();
    void setAvatar(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSuffix() const;
    bool suffixIsSet() const;
    void unsetSuffix();
    void setSuffix(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SyncContactsRequest_postalAddresses>>& getPostalAddresses();
    bool postalAddressesIsSet() const;
    void unsetPostalAddresses();
    void setPostalAddresses(std::vector<std::shared_ptr<SyncContactsRequest_postalAddresses>> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SyncContactsRequest_phones>>& getEmails();
    bool emailsIsSet() const;
    void unsetEmails();
    void setEmails(std::vector<std::shared_ptr<SyncContactsRequest_phones>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAndroidAccountType() const;
    bool androidAccountTypeIsSet() const;
    void unsetAndroidAccountType();
    void setAndroidAccountType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFamilyName() const;
    bool familyNameIsSet() const;
    void unsetFamilyName();
    void setFamilyName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMiddleName() const;
    bool middleNameIsSet() const;
    void unsetMiddleName();
    void setMiddleName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCompany() const;
    bool companyIsSet() const;
    void unsetCompany();
    void setCompany(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAndroidAccountTypeRaw() const;
    bool androidAccountTypeRawIsSet() const;
    void unsetAndroidAccountTypeRaw();
    void setAndroidAccountTypeRaw(utility::string_t value);

protected:
    utility::string_t m_Birthday;
    bool m_BirthdayIsSet;
    utility::string_t m_Identifier;
    bool m_IdentifierIsSet;
    utility::string_t m_AndroidAccountName;
    bool m_AndroidAccountNameIsSet;
    utility::string_t m_DisplayName;
    bool m_DisplayNameIsSet;
    utility::string_t m_Prefix;
    bool m_PrefixIsSet;
    utility::string_t m_GivenName;
    bool m_GivenNameIsSet;
    utility::string_t m_JobTitle;
    bool m_JobTitleIsSet;
    std::vector<std::shared_ptr<SyncContactsRequest_phones>> m_Phones;
    bool m_PhonesIsSet;
    utility::string_t m_Avatar;
    bool m_AvatarIsSet;
    utility::string_t m_Suffix;
    bool m_SuffixIsSet;
    std::vector<std::shared_ptr<SyncContactsRequest_postalAddresses>> m_PostalAddresses;
    bool m_PostalAddressesIsSet;
    std::vector<std::shared_ptr<SyncContactsRequest_phones>> m_Emails;
    bool m_EmailsIsSet;
    utility::string_t m_AndroidAccountType;
    bool m_AndroidAccountTypeIsSet;
    utility::string_t m_FamilyName;
    bool m_FamilyNameIsSet;
    utility::string_t m_MiddleName;
    bool m_MiddleNameIsSet;
    utility::string_t m_Company;
    bool m_CompanyIsSet;
    utility::string_t m_AndroidAccountTypeRaw;
    bool m_AndroidAccountTypeRawIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_SyncContactsRequest_contacts_H_ */
