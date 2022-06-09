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



#include "MoodPagedListReadPublicResponse__rel.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MoodPagedListReadPublicResponse__rel::MoodPagedListReadPublicResponse__rel()
{
    m_DisplayValue = utility::conversions::to_string_t("");
    m_DisplayValueIsSet = false;
    m_Score = 0.0;
    m_ScoreIsSet = false;
    m_Polygons = utility::conversions::to_string_t("");
    m_PolygonsIsSet = false;
    m_Source = utility::conversions::to_string_t("");
    m_SourceIsSet = false;
    m_Category = utility::conversions::to_string_t("");
    m_CategoryIsSet = false;
}

MoodPagedListReadPublicResponse__rel::~MoodPagedListReadPublicResponse__rel()
{
}

void MoodPagedListReadPublicResponse__rel::validate()
{
    // TODO: implement validation
}

web::json::value MoodPagedListReadPublicResponse__rel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DisplayValueIsSet)
    {
        val[utility::conversions::to_string_t("displayValue")] = ModelBase::toJson(m_DisplayValue);
    }
    if(m_ScoreIsSet)
    {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(m_Score);
    }
    if(m_PolygonsIsSet)
    {
        val[utility::conversions::to_string_t("polygons")] = ModelBase::toJson(m_Polygons);
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

void MoodPagedListReadPublicResponse__rel::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("displayValue")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("displayValue")];
        if(!fieldValue.is_null())
        {
            setDisplayValue(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("score")];
        if(!fieldValue.is_null())
        {
            setScore(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polygons")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("polygons")];
        if(!fieldValue.is_null())
        {
            setPolygons(ModelBase::stringFromJson(fieldValue));
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

void MoodPagedListReadPublicResponse__rel::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_DisplayValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayValue"), m_DisplayValue));
        
    }
    if(m_ScoreIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("score"), m_Score));
    }
    if(m_PolygonsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("polygons"), m_Polygons));
        
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

void MoodPagedListReadPublicResponse__rel::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("displayValue")))
    {
        setDisplayValue(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayValue"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("score")))
    {
        setScore(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("score"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("polygons")))
    {
        setPolygons(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("polygons"))));
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

utility::string_t MoodPagedListReadPublicResponse__rel::getDisplayValue() const
{
    return m_DisplayValue;
}


void MoodPagedListReadPublicResponse__rel::setDisplayValue(utility::string_t value)
{
    m_DisplayValue = value;
    m_DisplayValueIsSet = true;
}
bool MoodPagedListReadPublicResponse__rel::displayValueIsSet() const
{
    return m_DisplayValueIsSet;
}

void MoodPagedListReadPublicResponse__rel::unsetDisplayValue()
{
    m_DisplayValueIsSet = false;
}

double MoodPagedListReadPublicResponse__rel::getScore() const
{
    return m_Score;
}


void MoodPagedListReadPublicResponse__rel::setScore(double value)
{
    m_Score = value;
    m_ScoreIsSet = true;
}
bool MoodPagedListReadPublicResponse__rel::scoreIsSet() const
{
    return m_ScoreIsSet;
}

void MoodPagedListReadPublicResponse__rel::unsetScore()
{
    m_ScoreIsSet = false;
}

utility::string_t MoodPagedListReadPublicResponse__rel::getPolygons() const
{
    return m_Polygons;
}


void MoodPagedListReadPublicResponse__rel::setPolygons(utility::string_t value)
{
    m_Polygons = value;
    m_PolygonsIsSet = true;
}
bool MoodPagedListReadPublicResponse__rel::polygonsIsSet() const
{
    return m_PolygonsIsSet;
}

void MoodPagedListReadPublicResponse__rel::unsetPolygons()
{
    m_PolygonsIsSet = false;
}

utility::string_t MoodPagedListReadPublicResponse__rel::getSource() const
{
    return m_Source;
}


void MoodPagedListReadPublicResponse__rel::setSource(utility::string_t value)
{
    m_Source = value;
    m_SourceIsSet = true;
}
bool MoodPagedListReadPublicResponse__rel::sourceIsSet() const
{
    return m_SourceIsSet;
}

void MoodPagedListReadPublicResponse__rel::unsetSource()
{
    m_SourceIsSet = false;
}

utility::string_t MoodPagedListReadPublicResponse__rel::getCategory() const
{
    return m_Category;
}


void MoodPagedListReadPublicResponse__rel::setCategory(utility::string_t value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}
bool MoodPagedListReadPublicResponse__rel::categoryIsSet() const
{
    return m_CategoryIsSet;
}

void MoodPagedListReadPublicResponse__rel::unsetCategory()
{
    m_CategoryIsSet = false;
}

}
}
}
}

