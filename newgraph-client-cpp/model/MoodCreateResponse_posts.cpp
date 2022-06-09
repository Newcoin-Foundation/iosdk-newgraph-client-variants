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



#include "MoodCreateResponse_posts.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MoodCreateResponse_posts::MoodCreateResponse_posts()
{
    m_CoverContentUrl = utility::conversions::to_string_t("");
    m_CoverContentUrlIsSet = false;
    m_MoodId = utility::conversions::to_string_t("");
    m_MoodIdIsSet = false;
    m_Created = utility::conversions::to_string_t("");
    m_CreatedIsSet = false;
    m_AuthorIsSet = false;
    m_Latitude = 0.0;
    m_LatitudeIsSet = false;
    m_MoodsIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_AspectRatio = 0.0;
    m_AspectRatioIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_Content = utility::conversions::to_string_t("");
    m_ContentIsSet = false;
    m_TagsIsSet = false;
    m_License = utility::conversions::to_string_t("");
    m_LicenseIsSet = false;
    m_ContentUrl = utility::conversions::to_string_t("");
    m_ContentUrlIsSet = false;
    m_BlurHash = utility::conversions::to_string_t("");
    m_BlurHashIsSet = false;
    m_NewcoinMintTx = utility::conversions::to_string_t("");
    m_NewcoinMintTxIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_ConsentEmail = utility::conversions::to_string_t("");
    m_ConsentEmailIsSet = false;
    m_Updated = utility::conversions::to_string_t("");
    m_UpdatedIsSet = false;
    m_ContentType = utility::conversions::to_string_t("");
    m_ContentTypeIsSet = false;
    m_Longitude = 0.0;
    m_LongitudeIsSet = false;
}

MoodCreateResponse_posts::~MoodCreateResponse_posts()
{
}

void MoodCreateResponse_posts::validate()
{
    // TODO: implement validation
}

web::json::value MoodCreateResponse_posts::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_CoverContentUrlIsSet)
    {
        val[utility::conversions::to_string_t("coverContentUrl")] = ModelBase::toJson(m_CoverContentUrl);
    }
    if(m_MoodIdIsSet)
    {
        val[utility::conversions::to_string_t("moodId")] = ModelBase::toJson(m_MoodId);
    }
    if(m_CreatedIsSet)
    {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(m_Created);
    }
    if(m_AuthorIsSet)
    {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(m_Author);
    }
    if(m_LatitudeIsSet)
    {
        val[utility::conversions::to_string_t("latitude")] = ModelBase::toJson(m_Latitude);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Moods )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("moods")] = web::json::value::array(jsonArray);
        }
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_AspectRatioIsSet)
    {
        val[utility::conversions::to_string_t("aspectRatio")] = ModelBase::toJson(m_AspectRatio);
    }
    if(m_TitleIsSet)
    {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(m_Title);
    }
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(m_Content);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("tags")] = web::json::value::array(jsonArray);
        }
    }
    if(m_LicenseIsSet)
    {
        val[utility::conversions::to_string_t("license")] = ModelBase::toJson(m_License);
    }
    if(m_ContentUrlIsSet)
    {
        val[utility::conversions::to_string_t("contentUrl")] = ModelBase::toJson(m_ContentUrl);
    }
    if(m_BlurHashIsSet)
    {
        val[utility::conversions::to_string_t("blurHash")] = ModelBase::toJson(m_BlurHash);
    }
    if(m_NewcoinMintTxIsSet)
    {
        val[utility::conversions::to_string_t("newcoinMintTx")] = ModelBase::toJson(m_NewcoinMintTx);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ConsentEmailIsSet)
    {
        val[utility::conversions::to_string_t("consentEmail")] = ModelBase::toJson(m_ConsentEmail);
    }
    if(m_UpdatedIsSet)
    {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(m_Updated);
    }
    if(m_ContentTypeIsSet)
    {
        val[utility::conversions::to_string_t("contentType")] = ModelBase::toJson(m_ContentType);
    }
    if(m_LongitudeIsSet)
    {
        val[utility::conversions::to_string_t("longitude")] = ModelBase::toJson(m_Longitude);
    }

    return val;
}

void MoodCreateResponse_posts::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("coverContentUrl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("coverContentUrl")];
        if(!fieldValue.is_null())
        {
            setCoverContentUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moodId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("moodId")];
        if(!fieldValue.is_null())
        {
            setMoodId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("created")];
        if(!fieldValue.is_null())
        {
            setCreated(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("author")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<PagedRatedResponsePost_author> newItem(new PagedRatedResponsePost_author());
            newItem->fromJson(fieldValue);
            setAuthor( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latitude")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("latitude")];
        if(!fieldValue.is_null())
        {
            setLatitude(ModelBase::doubleFromJson(fieldValue));
        }
    }
    {
        m_Moods.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("moods")))
        {
        for( auto& item : val[utility::conversions::to_string_t("moods")].as_array() )
        {
            if(item.is_null())
            {
                m_Moods.push_back( std::shared_ptr<PagedRatedResponsePost_moods>(nullptr) );
            }
            else
            {
                std::shared_ptr<PagedRatedResponsePost_moods> newItem(new PagedRatedResponsePost_moods());
                newItem->fromJson(item);
                m_Moods.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("description")];
        if(!fieldValue.is_null())
        {
            setDescription(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("aspectRatio")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("aspectRatio")];
        if(!fieldValue.is_null())
        {
            setAspectRatio(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("title")];
        if(!fieldValue.is_null())
        {
            setTitle(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("content")];
        if(!fieldValue.is_null())
        {
            setContent(ModelBase::stringFromJson(fieldValue));
        }
    }
    {
        m_Tags.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("tags")))
        {
        for( auto& item : val[utility::conversions::to_string_t("tags")].as_array() )
        {
            if(item.is_null())
            {
                m_Tags.push_back( std::shared_ptr<PagedRatedResponsePost_tags>(nullptr) );
            }
            else
            {
                std::shared_ptr<PagedRatedResponsePost_tags> newItem(new PagedRatedResponsePost_tags());
                newItem->fromJson(item);
                m_Tags.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("license")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("license")];
        if(!fieldValue.is_null())
        {
            setLicense(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contentUrl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("contentUrl")];
        if(!fieldValue.is_null())
        {
            setContentUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blurHash")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("blurHash")];
        if(!fieldValue.is_null())
        {
            setBlurHash(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("newcoinMintTx")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("newcoinMintTx")];
        if(!fieldValue.is_null())
        {
            setNewcoinMintTx(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consentEmail")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("consentEmail")];
        if(!fieldValue.is_null())
        {
            setConsentEmail(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("contentType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("contentType")];
        if(!fieldValue.is_null())
        {
            setContentType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("longitude")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("longitude")];
        if(!fieldValue.is_null())
        {
            setLongitude(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void MoodCreateResponse_posts::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_CoverContentUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("coverContentUrl"), m_CoverContentUrl));
        
    }
    if(m_MoodIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("moodId"), m_MoodId));
        
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created"), m_Created));
        
    }
    if(m_AuthorIsSet)
    {
        if (m_Author.get())
        {
            m_Author->toMultipart(multipart, utility::conversions::to_string_t("author."));
        }
        
    }
    if(m_LatitudeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("latitude"), m_Latitude));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Moods )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("moods"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
        
    }
    if(m_AspectRatioIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("aspectRatio"), m_AspectRatio));
    }
    if(m_TitleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("title"), m_Title));
        
    }
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("content"), m_Content));
        
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Tags )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tags"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_LicenseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("license"), m_License));
        
    }
    if(m_ContentUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentUrl"), m_ContentUrl));
        
    }
    if(m_BlurHashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("blurHash"), m_BlurHash));
        
    }
    if(m_NewcoinMintTxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("newcoinMintTx"), m_NewcoinMintTx));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
        
    }
    if(m_ConsentEmailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("consentEmail"), m_ConsentEmail));
        
    }
    if(m_UpdatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("updated"), m_Updated));
        
    }
    if(m_ContentTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentType"), m_ContentType));
        
    }
    if(m_LongitudeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("longitude"), m_Longitude));
    }
}

void MoodCreateResponse_posts::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("coverContentUrl")))
    {
        setCoverContentUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("coverContentUrl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("moodId")))
    {
        setMoodId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("moodId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created")))
    {
        setCreated(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("created"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("author")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("author")))
        {
            std::shared_ptr<PagedRatedResponsePost_author> newItem(new PagedRatedResponsePost_author());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("author."));
            setAuthor( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("latitude")))
    {
        setLatitude(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("latitude"))));
    }
    {
        m_Moods.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("moods")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("moods"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Moods.push_back( std::shared_ptr<PagedRatedResponsePost_moods>(nullptr) );
            }
            else
            {
                std::shared_ptr<PagedRatedResponsePost_moods> newItem(new PagedRatedResponsePost_moods());
                newItem->fromJson(item);
                m_Moods.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("aspectRatio")))
    {
        setAspectRatio(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("aspectRatio"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("title")))
    {
        setTitle(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("title"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("content")))
    {
        setContent(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("content"))));
    }
    {
        m_Tags.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("tags")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("tags"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Tags.push_back( std::shared_ptr<PagedRatedResponsePost_tags>(nullptr) );
            }
            else
            {
                std::shared_ptr<PagedRatedResponsePost_tags> newItem(new PagedRatedResponsePost_tags());
                newItem->fromJson(item);
                m_Tags.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("license")))
    {
        setLicense(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("license"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("contentUrl")))
    {
        setContentUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentUrl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("blurHash")))
    {
        setBlurHash(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("blurHash"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("newcoinMintTx")))
    {
        setNewcoinMintTx(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("newcoinMintTx"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("consentEmail")))
    {
        setConsentEmail(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("consentEmail"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("updated")))
    {
        setUpdated(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("updated"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("contentType")))
    {
        setContentType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentType"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("longitude")))
    {
        setLongitude(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("longitude"))));
    }
}

utility::string_t MoodCreateResponse_posts::getCoverContentUrl() const
{
    return m_CoverContentUrl;
}


void MoodCreateResponse_posts::setCoverContentUrl(utility::string_t value)
{
    m_CoverContentUrl = value;
    m_CoverContentUrlIsSet = true;
}
bool MoodCreateResponse_posts::coverContentUrlIsSet() const
{
    return m_CoverContentUrlIsSet;
}

void MoodCreateResponse_posts::unsetCoverContentUrl()
{
    m_CoverContentUrlIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getMoodId() const
{
    return m_MoodId;
}


void MoodCreateResponse_posts::setMoodId(utility::string_t value)
{
    m_MoodId = value;
    m_MoodIdIsSet = true;
}
bool MoodCreateResponse_posts::moodIdIsSet() const
{
    return m_MoodIdIsSet;
}

void MoodCreateResponse_posts::unsetMoodId()
{
    m_MoodIdIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getCreated() const
{
    return m_Created;
}


void MoodCreateResponse_posts::setCreated(utility::string_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}
bool MoodCreateResponse_posts::createdIsSet() const
{
    return m_CreatedIsSet;
}

void MoodCreateResponse_posts::unsetCreated()
{
    m_CreatedIsSet = false;
}

std::shared_ptr<PagedRatedResponsePost_author> MoodCreateResponse_posts::getAuthor() const
{
    return m_Author;
}


void MoodCreateResponse_posts::setAuthor(std::shared_ptr<PagedRatedResponsePost_author> value)
{
    m_Author = value;
    m_AuthorIsSet = true;
}
bool MoodCreateResponse_posts::authorIsSet() const
{
    return m_AuthorIsSet;
}

void MoodCreateResponse_posts::unsetAuthor()
{
    m_AuthorIsSet = false;
}

double MoodCreateResponse_posts::getLatitude() const
{
    return m_Latitude;
}


void MoodCreateResponse_posts::setLatitude(double value)
{
    m_Latitude = value;
    m_LatitudeIsSet = true;
}
bool MoodCreateResponse_posts::latitudeIsSet() const
{
    return m_LatitudeIsSet;
}

void MoodCreateResponse_posts::unsetLatitude()
{
    m_LatitudeIsSet = false;
}

std::vector<std::shared_ptr<PagedRatedResponsePost_moods>>& MoodCreateResponse_posts::getMoods()
{
    return m_Moods;
}

void MoodCreateResponse_posts::setMoods(std::vector<std::shared_ptr<PagedRatedResponsePost_moods>> value)
{
    m_Moods = value;
    m_MoodsIsSet = true;
}
bool MoodCreateResponse_posts::moodsIsSet() const
{
    return m_MoodsIsSet;
}

void MoodCreateResponse_posts::unsetMoods()
{
    m_MoodsIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getDescription() const
{
    return m_Description;
}


void MoodCreateResponse_posts::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool MoodCreateResponse_posts::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void MoodCreateResponse_posts::unsetDescription()
{
    m_DescriptionIsSet = false;
}

double MoodCreateResponse_posts::getAspectRatio() const
{
    return m_AspectRatio;
}


void MoodCreateResponse_posts::setAspectRatio(double value)
{
    m_AspectRatio = value;
    m_AspectRatioIsSet = true;
}
bool MoodCreateResponse_posts::aspectRatioIsSet() const
{
    return m_AspectRatioIsSet;
}

void MoodCreateResponse_posts::unsetAspectRatio()
{
    m_AspectRatioIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getTitle() const
{
    return m_Title;
}


void MoodCreateResponse_posts::setTitle(utility::string_t value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool MoodCreateResponse_posts::titleIsSet() const
{
    return m_TitleIsSet;
}

void MoodCreateResponse_posts::unsetTitle()
{
    m_TitleIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getContent() const
{
    return m_Content;
}


void MoodCreateResponse_posts::setContent(utility::string_t value)
{
    m_Content = value;
    m_ContentIsSet = true;
}
bool MoodCreateResponse_posts::contentIsSet() const
{
    return m_ContentIsSet;
}

void MoodCreateResponse_posts::unsetContent()
{
    m_ContentIsSet = false;
}

std::vector<std::shared_ptr<PagedRatedResponsePost_tags>>& MoodCreateResponse_posts::getTags()
{
    return m_Tags;
}

void MoodCreateResponse_posts::setTags(std::vector<std::shared_ptr<PagedRatedResponsePost_tags>> value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}
bool MoodCreateResponse_posts::tagsIsSet() const
{
    return m_TagsIsSet;
}

void MoodCreateResponse_posts::unsetTags()
{
    m_TagsIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getLicense() const
{
    return m_License;
}


void MoodCreateResponse_posts::setLicense(utility::string_t value)
{
    m_License = value;
    m_LicenseIsSet = true;
}
bool MoodCreateResponse_posts::licenseIsSet() const
{
    return m_LicenseIsSet;
}

void MoodCreateResponse_posts::unsetLicense()
{
    m_LicenseIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getContentUrl() const
{
    return m_ContentUrl;
}


void MoodCreateResponse_posts::setContentUrl(utility::string_t value)
{
    m_ContentUrl = value;
    m_ContentUrlIsSet = true;
}
bool MoodCreateResponse_posts::contentUrlIsSet() const
{
    return m_ContentUrlIsSet;
}

void MoodCreateResponse_posts::unsetContentUrl()
{
    m_ContentUrlIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getBlurHash() const
{
    return m_BlurHash;
}


void MoodCreateResponse_posts::setBlurHash(utility::string_t value)
{
    m_BlurHash = value;
    m_BlurHashIsSet = true;
}
bool MoodCreateResponse_posts::blurHashIsSet() const
{
    return m_BlurHashIsSet;
}

void MoodCreateResponse_posts::unsetBlurHash()
{
    m_BlurHashIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getNewcoinMintTx() const
{
    return m_NewcoinMintTx;
}


void MoodCreateResponse_posts::setNewcoinMintTx(utility::string_t value)
{
    m_NewcoinMintTx = value;
    m_NewcoinMintTxIsSet = true;
}
bool MoodCreateResponse_posts::newcoinMintTxIsSet() const
{
    return m_NewcoinMintTxIsSet;
}

void MoodCreateResponse_posts::unsetNewcoinMintTx()
{
    m_NewcoinMintTxIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getId() const
{
    return m_Id;
}


void MoodCreateResponse_posts::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool MoodCreateResponse_posts::idIsSet() const
{
    return m_IdIsSet;
}

void MoodCreateResponse_posts::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getConsentEmail() const
{
    return m_ConsentEmail;
}


void MoodCreateResponse_posts::setConsentEmail(utility::string_t value)
{
    m_ConsentEmail = value;
    m_ConsentEmailIsSet = true;
}
bool MoodCreateResponse_posts::consentEmailIsSet() const
{
    return m_ConsentEmailIsSet;
}

void MoodCreateResponse_posts::unsetConsentEmail()
{
    m_ConsentEmailIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getUpdated() const
{
    return m_Updated;
}


void MoodCreateResponse_posts::setUpdated(utility::string_t value)
{
    m_Updated = value;
    m_UpdatedIsSet = true;
}
bool MoodCreateResponse_posts::updatedIsSet() const
{
    return m_UpdatedIsSet;
}

void MoodCreateResponse_posts::unsetUpdated()
{
    m_UpdatedIsSet = false;
}

utility::string_t MoodCreateResponse_posts::getContentType() const
{
    return m_ContentType;
}


void MoodCreateResponse_posts::setContentType(utility::string_t value)
{
    m_ContentType = value;
    m_ContentTypeIsSet = true;
}
bool MoodCreateResponse_posts::contentTypeIsSet() const
{
    return m_ContentTypeIsSet;
}

void MoodCreateResponse_posts::unsetContentType()
{
    m_ContentTypeIsSet = false;
}

double MoodCreateResponse_posts::getLongitude() const
{
    return m_Longitude;
}


void MoodCreateResponse_posts::setLongitude(double value)
{
    m_Longitude = value;
    m_LongitudeIsSet = true;
}
bool MoodCreateResponse_posts::longitudeIsSet() const
{
    return m_LongitudeIsSet;
}

void MoodCreateResponse_posts::unsetLongitude()
{
    m_LongitudeIsSet = false;
}

}
}
}
}

