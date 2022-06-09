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
 * BcPoolCreateRequest.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BcPoolCreateRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_BcPoolCreateRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BcPoolCreateRequest
    : public ModelBase
{
public:
    BcPoolCreateRequest();
    virtual ~BcPoolCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BcPoolCreateRequest members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOwner() const;
        void setOwner(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOwnerPrvActiveKey() const;
    bool ownerPrvActiveKeyIsSet() const;
    void unsetOwner_prv_active_key();
    void setOwnerPrvActiveKey(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPayer() const;
    bool payerIsSet() const;
    void unsetPayer();
    void setPayer(utility::string_t value);

protected:
    utility::string_t m_Owner;
        utility::string_t m_Owner_prv_active_key;
    bool m_Owner_prv_active_keyIsSet;
    utility::string_t m_Payer;
    bool m_PayerIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BcPoolCreateRequest_H_ */
