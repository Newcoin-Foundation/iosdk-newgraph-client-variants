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



#include "MoodAttachRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MoodAttachRequest::MoodAttachRequest()
{
    m_TargetId = utility::conversions::to_string_t("");
    m_Id = utility::conversions::to_string_t("");
}

MoodAttachRequest::~MoodAttachRequest()
{
}

void MoodAttachRequest::validate()
{
    // TODO: implement validation
}

web::json::value MoodAttachRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("targetId")] = ModelBase::toJson(m_TargetId);
    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);

    return val;
}

void MoodAttachRequest::fromJson(web::json::value& val)
{
    setTargetId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("targetId")]));
    setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
}

void MoodAttachRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("targetId"), m_TargetId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
}

void MoodAttachRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setTargetId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("targetId"))));
    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
}

utility::string_t MoodAttachRequest::getTargetId() const
{
    return m_TargetId;
}


void MoodAttachRequest::setTargetId(utility::string_t value)
{
    m_TargetId = value;
    
}
utility::string_t MoodAttachRequest::getId() const
{
    return m_Id;
}


void MoodAttachRequest::setId(utility::string_t value)
{
    m_Id = value;
    
}
}
}
}
}

