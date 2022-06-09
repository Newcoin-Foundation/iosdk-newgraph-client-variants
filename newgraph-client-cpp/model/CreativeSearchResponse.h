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
 * CreativeSearchResponse.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_CreativeSearchResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_CreativeSearchResponse_H_


#include "../ModelBase.h"

#include "CreativeSearchResponse_hits.h"
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CreativeSearchResponse
    : public ModelBase
{
public:
    CreativeSearchResponse();
    virtual ~CreativeSearchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreativeSearchResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CreativeSearchResponse_hits>>& getHits();
    bool hitsIsSet() const;
    void unsetHits();
    void setHits(std::vector<std::shared_ptr<CreativeSearchResponse_hits>> value);

protected:
    std::vector<std::shared_ptr<CreativeSearchResponse_hits>> m_Hits;
    bool m_HitsIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_CreativeSearchResponse_H_ */
