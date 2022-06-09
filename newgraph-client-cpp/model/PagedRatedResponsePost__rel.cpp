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



#include "PagedRatedResponsePost__rel.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PagedRatedResponsePost__rel::PagedRatedResponsePost__rel()
{
    m_Score = 0.0;
    m_ScoreIsSet = false;
    m_Source = utility::conversions::to_string_t("");
    m_SourceIsSet = false;
    m_Category = utility::conversions::to_string_t("");
    m_CategoryIsSet = false;
}

PagedRatedResponsePost__rel::~PagedRatedResponsePost__rel()
{
}

void PagedRatedResponsePost__rel::validate()
{
    // TODO: implement validation
}

web::json::value PagedRatedResponsePost__rel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ScoreIsSet)
    {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(m_Score);
    }
    if(m_SourceIsSet)
    {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(m_Source);
    }
    if(m_CategoryIsSet)
    {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(m_Category);
    }

    return val;
}

void PagedRatedResponsePost__rel::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("score")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("score")];
        if(!fieldValue.is_null())
        {
            setScore(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("source")];
        if(!fieldValue.is_null())
        {
            setSource(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("category")];
        if(!fieldValue.is_null())
        {
            setCategory(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void PagedRatedResponsePost__rel::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ScoreIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("score"), m_Score));
    }
    if(m_SourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("source"), m_Source));
        
    }
    if(m_CategoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("category"), m_Category));
        
    }
}

void PagedRatedResponsePost__rel::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("score")))
    {
        setScore(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("score"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("source")))
    {
        setSource(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("source"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("category")))
    {
        setCategory(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("category"))));
    }
}

double PagedRatedResponsePost__rel::getScore() const
{
    return m_Score;
}


void PagedRatedResponsePost__rel::setScore(double value)
{
    m_Score = value;
    m_ScoreIsSet = true;
}
bool PagedRatedResponsePost__rel::scoreIsSet() const
{
    return m_ScoreIsSet;
}

void PagedRatedResponsePost__rel::unsetScore()
{
    m_ScoreIsSet = false;
}

utility::string_t PagedRatedResponsePost__rel::getSource() const
{
    return m_Source;
}


void PagedRatedResponsePost__rel::setSource(utility::string_t value)
{
    m_Source = value;
    m_SourceIsSet = true;
}
bool PagedRatedResponsePost__rel::sourceIsSet() const
{
    return m_SourceIsSet;
}

void PagedRatedResponsePost__rel::unsetSource()
{
    m_SourceIsSet = false;
}

utility::string_t PagedRatedResponsePost__rel::getCategory() const
{
    return m_Category;
}


void PagedRatedResponsePost__rel::setCategory(utility::string_t value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}
bool PagedRatedResponsePost__rel::categoryIsSet() const
{
    return m_CategoryIsSet;
}

void PagedRatedResponsePost__rel::unsetCategory()
{
    m_CategoryIsSet = false;
}

}
}
}
}

