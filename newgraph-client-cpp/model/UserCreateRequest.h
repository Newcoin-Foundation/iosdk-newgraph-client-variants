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
 * UserCreateRequest.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_UserCreateRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_UserCreateRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UserCreateRequest
    : public ModelBase
{
public:
    UserCreateRequest();
    virtual ~UserCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserCreateRequest members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNewcoinTicker() const;
    bool newcoinTickerIsSet() const;
    void unsetNewcoinTicker();
    void setNewcoinTicker(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();
    void setLastName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWebsite() const;
    bool websiteIsSet() const;
    void unsetWebsite();
    void setWebsite(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConsentPrivacyPolicy() const;
    bool consentPrivacyPolicyIsSet() const;
    void unsetConsentPrivacyPolicy();
    void setConsentPrivacyPolicy(utility::string_t value);
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
    double getLatitude() const;
    bool latitudeIsSet() const;
    void unsetLatitude();
    void setLatitude(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFullName() const;
    bool fullNameIsSet() const;
    void unsetFullName();
    void setFullName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTumblr() const;
    bool tumblrIsSet() const;
    void unsetTumblr();
    void setTumblr(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInstagram() const;
    bool instagramIsSet() const;
    void unsetInstagram();
    void setInstagram(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSoundcloud() const;
    bool soundcloudIsSet() const;
    void unsetSoundcloud();
    void setSoundcloud(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();
    void setFirstName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTwitter() const;
    bool twitterIsSet() const;
    void unsetTwitter();
    void setTwitter(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConsentTestgroup() const;
    bool consentTestgroupIsSet() const;
    void unsetConsentTestgroup();
    void setConsentTestgroup(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhone() const;
        void setPhone(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTiktok() const;
    bool tiktokIsSet() const;
    void unsetTiktok();
    void setTiktok(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLegacyToken() const;
    bool legacyTokenIsSet() const;
    void unsetLegacyToken();
    void setLegacyToken(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConsentEmail() const;
    bool consentEmailIsSet() const;
    void unsetConsentEmail();
    void setConsentEmail(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();
    void setEmail(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getLongitude() const;
    bool longitudeIsSet() const;
    void unsetLongitude();
    void setLongitude(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUsername() const;
        void setUsername(utility::string_t value);

protected:
    utility::string_t m_NewcoinTicker;
    bool m_NewcoinTickerIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
    utility::string_t m_Website;
    bool m_WebsiteIsSet;
    utility::string_t m_ConsentPrivacyPolicy;
    bool m_ConsentPrivacyPolicyIsSet;
    utility::string_t m_DisplayName;
    bool m_DisplayNameIsSet;
    double m_Latitude;
    bool m_LatitudeIsSet;
    utility::string_t m_FullName;
    bool m_FullNameIsSet;
    utility::string_t m_Tumblr;
    bool m_TumblrIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Instagram;
    bool m_InstagramIsSet;
    utility::string_t m_Soundcloud;
    bool m_SoundcloudIsSet;
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_Twitter;
    bool m_TwitterIsSet;
    utility::string_t m_ConsentTestgroup;
    bool m_ConsentTestgroupIsSet;
    utility::string_t m_Phone;
        utility::string_t m_Tiktok;
    bool m_TiktokIsSet;
    utility::string_t m_LegacyToken;
    bool m_LegacyTokenIsSet;
    utility::string_t m_ConsentEmail;
    bool m_ConsentEmailIsSet;
    utility::string_t m_Email;
    bool m_EmailIsSet;
    double m_Longitude;
    bool m_LongitudeIsSet;
    utility::string_t m_Username;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_UserCreateRequest_H_ */