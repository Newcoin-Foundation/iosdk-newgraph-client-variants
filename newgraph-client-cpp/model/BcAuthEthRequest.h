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
 * BcAuthEthRequest.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BcAuthEthRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_BcAuthEthRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BcAuthEthRequest
    : public ModelBase
{
public:
    BcAuthEthRequest();
    virtual ~BcAuthEthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BcAuthEthRequest members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNftIndex() const;
        void setNftIndex(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCollectionAddress() const;
        void setCollectionAddress(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAddress() const;
        void setAddress(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSignature() const;
        void setSignature(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNonce() const;
    bool nonceIsSet() const;
    void unsetNonce();
    void setNonce(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTimestamp() const;
        void setTimestamp(utility::string_t value);

protected:
    utility::string_t m_NftIndex;
        utility::string_t m_CollectionAddress;
        utility::string_t m_Address;
        utility::string_t m_Signature;
        utility::string_t m_Nonce;
    bool m_NonceIsSet;
    utility::string_t m_Timestamp;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BcAuthEthRequest_H_ */
