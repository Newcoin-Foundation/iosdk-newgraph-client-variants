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
 * BcStakeMainDAORequest.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BcStakeMainDAORequest_H_
#define IO_SWAGGER_CLIENT_MODEL_BcStakeMainDAORequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BcStakeMainDAORequest
    : public ModelBase
{
public:
    BcStakeMainDAORequest();
    virtual ~BcStakeMainDAORequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BcStakeMainDAORequest members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPayerPrvKey() const;
        void setPayerPrvKey(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAmt() const;
        void setAmt(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPayer() const;
        void setPayer(utility::string_t value);

protected:
    utility::string_t m_Payer_prv_key;
        utility::string_t m_Amt;
        utility::string_t m_Payer;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BcStakeMainDAORequest_H_ */
