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
 * MoodPagedListReadPublicResponse__rel.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_MoodPagedListReadPublicResponse__rel_H_
#define IO_SWAGGER_CLIENT_MODEL_MoodPagedListReadPublicResponse__rel_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MoodPagedListReadPublicResponse__rel
    : public ModelBase
{
public:
    MoodPagedListReadPublicResponse__rel();
    virtual ~MoodPagedListReadPublicResponse__rel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MoodPagedListReadPublicResponse__rel members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisplayValue() const;
    bool displayValueIsSet() const;
    void unsetDisplayValue();
    void setDisplayValue(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getScore() const;
    bool scoreIsSet() const;
    void unsetScore();
    void setScore(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPolygons() const;
    bool polygonsIsSet() const;
    void unsetPolygons();
    void setPolygons(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSource() const;
    bool sourceIsSet() const;
    void unsetSource();
    void setSource(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCategory() const;
    bool categoryIsSet() const;
    void unsetCategory();
    void setCategory(utility::string_t value);

protected:
    utility::string_t m_DisplayValue;
    bool m_DisplayValueIsSet;
    double m_Score;
    bool m_ScoreIsSet;
    utility::string_t m_Polygons;
    bool m_PolygonsIsSet;
    utility::string_t m_Source;
    bool m_SourceIsSet;
    utility::string_t m_Category;
    bool m_CategoryIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_MoodPagedListReadPublicResponse__rel_H_ */
