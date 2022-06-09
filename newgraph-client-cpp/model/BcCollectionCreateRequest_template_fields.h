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
 * BcCollectionCreateRequest_template_fields.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BcCollectionCreateRequest_template_fields_H_
#define IO_SWAGGER_CLIENT_MODEL_BcCollectionCreateRequest_template_fields_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BcCollectionCreateRequest_template_fields
    : public ModelBase
{
public:
    BcCollectionCreateRequest_template_fields();
    virtual ~BcCollectionCreateRequest_template_fields();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BcCollectionCreateRequest_template_fields members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
        void setType(utility::string_t value);

protected:
    utility::string_t m_Name;
        utility::string_t m_Type;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BcCollectionCreateRequest_template_fields_H_ */
