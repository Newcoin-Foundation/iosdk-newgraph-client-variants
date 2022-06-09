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



#include "PagedRatedResponseUser_rating.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PagedRatedResponseUser_rating::PagedRatedResponseUser_rating()
{
    m_Created = utility::conversions::to_string_t("");
    m_CreatedIsSet = false;
    m_Value = 0.0;
    m_ValueIsSet = false;
    m_Updated = utility::conversions::to_string_t("");
    m_UpdatedIsSet = false;
}

PagedRatedResponseUser_rating::~PagedRatedResponseUser_rating()
{
}

void PagedRatedResponseUser_rating::validate()
{
    // TODO: implement validation
}

web::json::value PagedRatedResponseUser_rating::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CreatedIsSet)
    {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(m_Created);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }
    if(m_UpdatedIsSet)
    {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(m_Updated);
    }

    return val;
}

void PagedRatedResponseUser_rating::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("created")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("created")];
        if(!fieldValue.is_null())
        {
            setCreated(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("value")];
        if(!fieldValue.is_null())
        {
            setValue(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("updated")];
        if(!fieldValue.is_null())
        {
            setUpdated(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void PagedRatedResponseUser_rating::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created"), m_Created));
        
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
    if(m_UpdatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updated"), m_Updated));
        
    }
}

void PagedRatedResponseUser_rating::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("created")))
    {
        setCreated(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("value"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated")))
    {
        setUpdated(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated"))));
    }
}

utility::string_t PagedRatedResponseUser_rating::getCreated() const
{
    return m_Created;
}


void PagedRatedResponseUser_rating::setCreated(utility::string_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}
bool PagedRatedResponseUser_rating::createdIsSet() const
{
    return m_CreatedIsSet;
}

void PagedRatedResponseUser_rating::unsetCreated()
{
    m_CreatedIsSet = false;
}

double PagedRatedResponseUser_rating::getValue() const
{
    return m_Value;
}


void PagedRatedResponseUser_rating::setValue(double value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool PagedRatedResponseUser_rating::valueIsSet() const
{
    return m_ValueIsSet;
}

void PagedRatedResponseUser_rating::unsetValue()
{
    m_ValueIsSet = false;
}

utility::string_t PagedRatedResponseUser_rating::getUpdated() const
{
    return m_Updated;
}


void PagedRatedResponseUser_rating::setUpdated(utility::string_t value)
{
    m_Updated = value;
    m_UpdatedIsSet = true;
}
bool PagedRatedResponseUser_rating::updatedIsSet() const
{
    return m_UpdatedIsSet;
}

void PagedRatedResponseUser_rating::unsetUpdated()
{
    m_UpdatedIsSet = false;
}

}
}
}
}

