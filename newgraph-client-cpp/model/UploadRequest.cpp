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



#include "UploadRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

UploadRequest::UploadRequest()
{
    m_Filename = utility::conversions::to_string_t("");
    m_TargetId = utility::conversions::to_string_t("");
    m_TargetModel = utility::conversions::to_string_t("");
    m_ContentType = utility::conversions::to_string_t("");
}

UploadRequest::~UploadRequest()
{
}

void UploadRequest::validate()
{
    // TODO: implement validation
}

web::json::value UploadRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("filename")] = ModelBase::toJson(m_Filename);
    val[utility::conversions::to_string_t("targetId")] = ModelBase::toJson(m_TargetId);
    val[utility::conversions::to_string_t("targetModel")] = ModelBase::toJson(m_TargetModel);
    val[utility::conversions::to_string_t("contentType")] = ModelBase::toJson(m_ContentType);

    return val;
}

void UploadRequest::fromJson(web::json::value& val)
{
    setFilename(ModelBase::stringFromJson(val[utility::conversions::to_string_t("filename")]));
    setTargetId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("targetId")]));
    setTargetModel(ModelBase::stringFromJson(val[utility::conversions::to_string_t("targetModel")]));
    setContentType(ModelBase::stringFromJson(val[utility::conversions::to_string_t("contentType")]));
}

void UploadRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("filename"), m_Filename));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("targetId"), m_TargetId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("targetModel"), m_TargetModel));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentType"), m_ContentType));
}

void UploadRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setFilename(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("filename"))));
    setTargetId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("targetId"))));
    setTargetModel(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("targetModel"))));
    setContentType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentType"))));
}

utility::string_t UploadRequest::getFilename() const
{
    return m_Filename;
}


void UploadRequest::setFilename(utility::string_t value)
{
    m_Filename = value;
    
}
utility::string_t UploadRequest::getTargetId() const
{
    return m_TargetId;
}


void UploadRequest::setTargetId(utility::string_t value)
{
    m_TargetId = value;
    
}
utility::string_t UploadRequest::getTargetModel() const
{
    return m_TargetModel;
}


void UploadRequest::setTargetModel(utility::string_t value)
{
    m_TargetModel = value;
    
}
utility::string_t UploadRequest::getContentType() const
{
    return m_ContentType;
}


void UploadRequest::setContentType(utility::string_t value)
{
    m_ContentType = value;
    
}
}
}
}
}
