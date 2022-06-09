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



#include "OkResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

OkResponse::OkResponse()
{
    m_Ok = false;
    m_OkIsSet = false;
}

OkResponse::~OkResponse()
{
}

void OkResponse::validate()
{
    // TODO: implement validation
}

web::json::value OkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_OkIsSet)
    {
        val[utility::conversions::to_string_t("ok")] = ModelBase::toJson(m_Ok);
    }

    return val;
}

void OkResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ok")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ok")];
        if(!fieldValue.is_null())
        {
            setOk(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void OkResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_OkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ok"), m_Ok));
    }
}

void OkResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ok")))
    {
        setOk(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ok"))));
    }
}

bool OkResponse::isOk() const
{
    return m_Ok;
}


void OkResponse::setOk(bool value)
{
    m_Ok = value;
    m_OkIsSet = true;
}
bool OkResponse::okIsSet() const
{
    return m_OkIsSet;
}

void OkResponse::unsetOk()
{
    m_OkIsSet = false;
}

}
}
}
}

