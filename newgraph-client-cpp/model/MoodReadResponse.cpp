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



#include "MoodReadResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

MoodReadResponse::MoodReadResponse()
{
    m_Created = utility::conversions::to_string_t("");
    m_CreatedIsSet = false;
    m_AuthorIsSet = false;
    m_Latitude = 0.0;
    m_LatitudeIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_AspectRatio = 0.0;
    m_AspectRatioIsSet = false;
    m_Title = utility::conversions::to_string_t("");
    m_TitleIsSet = false;
    m_PostsIsSet = false;
    m_Content = utility::conversions::to_string_t("");
    m_ContentIsSet = false;
    m_StakeToAccess = 0.0;
    m_StakeToAccessIsSet = false;
    m_TagsIsSet = false;
    m_ContentUrl = utility::conversions::to_string_t("");
    m_ContentUrlIsSet = false;
    m_PostsCount = 0.0;
    m_PostsCountIsSet = false;
    m_BlurHash = utility::conversions::to_string_t("");
    m_BlurHashIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Updated = utility::conversions::to_string_t("");
    m_UpdatedIsSet = false;
    m_ContentType = utility::conversions::to_string_t("");
    m_ContentTypeIsSet = false;
    m_Longitude = 0.0;
    m_LongitudeIsSet = false;
}

MoodReadResponse::~MoodReadResponse()
{
}

void MoodReadResponse::validate()
{
    // TODO: implement validation
}

web::json::value MoodReadResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Posts )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("posts")] = web::json::value::array(jsonArray);
        }
    }
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(m_Content);
    }
    if(m_StakeToAccessIsSet)
    {
        val[utility::conversions::to_string_t("stakeToAccess")] = ModelBase::toJson(m_StakeToAccess);
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
    if(m_ContentUrlIsSet)
    {
        val[utility::conversions::to_string_t("contentUrl")] = ModelBase::toJson(m_ContentUrl);
    }
    if(m_PostsCountIsSet)
    {
        val[utility::conversions::to_string_t("postsCount")] = ModelBase::toJson(m_PostsCount);
    }
    if(m_BlurHashIsSet)
    {
        val[utility::conversions::to_string_t("blurHash")] = ModelBase::toJson(m_BlurHash);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
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

void MoodReadResponse::fromJson(web::json::value& val)
{
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
    {
        m_Posts.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("posts")))
        {
        for( auto& item : val[utility::conversions::to_string_t("posts")].as_array() )
        {
            if(item.is_null())
            {
                m_Posts.push_back( std::shared_ptr<MoodCreateResponse_posts>(nullptr) );
            }
            else
            {
                std::shared_ptr<MoodCreateResponse_posts> newItem(new MoodCreateResponse_posts());
                newItem->fromJson(item);
                m_Posts.push_back( newItem );
            }
        }
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
    if(val.has_field(utility::conversions::to_string_t("stakeToAccess")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("stakeToAccess")];
        if(!fieldValue.is_null())
        {
            setStakeToAccess(ModelBase::doubleFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("contentUrl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("contentUrl")];
        if(!fieldValue.is_null())
        {
            setContentUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("postsCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("postsCount")];
        if(!fieldValue.is_null())
        {
            setPostsCount(ModelBase::doubleFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::stringFromJson(fieldValue));
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

void MoodReadResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Posts )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("posts"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("content"), m_Content));
        
    }
    if(m_StakeToAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("stakeToAccess"), m_StakeToAccess));
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
    if(m_ContentUrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contentUrl"), m_ContentUrl));
        
    }
    if(m_PostsCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("postsCount"), m_PostsCount));
    }
    if(m_BlurHashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("blurHash"), m_BlurHash));
        
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
        
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

void MoodReadResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    {
        m_Posts.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("posts")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("posts"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Posts.push_back( std::shared_ptr<MoodCreateResponse_posts>(nullptr) );
            }
            else
            {
                std::shared_ptr<MoodCreateResponse_posts> newItem(new MoodCreateResponse_posts());
                newItem->fromJson(item);
                m_Posts.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("content")))
    {
        setContent(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("content"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("stakeToAccess")))
    {
        setStakeToAccess(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("stakeToAccess"))));
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
    if(multipart->hasContent(utility::conversions::to_string_t("contentUrl")))
    {
        setContentUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contentUrl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("postsCount")))
    {
        setPostsCount(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("postsCount"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("blurHash")))
    {
        setBlurHash(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("blurHash"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
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

utility::string_t MoodReadResponse::getCreated() const
{
    return m_Created;
}


void MoodReadResponse::setCreated(utility::string_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}
bool MoodReadResponse::createdIsSet() const
{
    return m_CreatedIsSet;
}

void MoodReadResponse::unsetCreated()
{
    m_CreatedIsSet = false;
}

std::shared_ptr<PagedRatedResponsePost_author> MoodReadResponse::getAuthor() const
{
    return m_Author;
}


void MoodReadResponse::setAuthor(std::shared_ptr<PagedRatedResponsePost_author> value)
{
    m_Author = value;
    m_AuthorIsSet = true;
}
bool MoodReadResponse::authorIsSet() const
{
    return m_AuthorIsSet;
}

void MoodReadResponse::unsetAuthor()
{
    m_AuthorIsSet = false;
}

double MoodReadResponse::getLatitude() const
{
    return m_Latitude;
}


void MoodReadResponse::setLatitude(double value)
{
    m_Latitude = value;
    m_LatitudeIsSet = true;
}
bool MoodReadResponse::latitudeIsSet() const
{
    return m_LatitudeIsSet;
}

void MoodReadResponse::unsetLatitude()
{
    m_LatitudeIsSet = false;
}

utility::string_t MoodReadResponse::getDescription() const
{
    return m_Description;
}


void MoodReadResponse::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool MoodReadResponse::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void MoodReadResponse::unsetDescription()
{
    m_DescriptionIsSet = false;
}

double MoodReadResponse::getAspectRatio() const
{
    return m_AspectRatio;
}


void MoodReadResponse::setAspectRatio(double value)
{
    m_AspectRatio = value;
    m_AspectRatioIsSet = true;
}
bool MoodReadResponse::aspectRatioIsSet() const
{
    return m_AspectRatioIsSet;
}

void MoodReadResponse::unsetAspectRatio()
{
    m_AspectRatioIsSet = false;
}

utility::string_t MoodReadResponse::getTitle() const
{
    return m_Title;
}


void MoodReadResponse::setTitle(utility::string_t value)
{
    m_Title = value;
    m_TitleIsSet = true;
}
bool MoodReadResponse::titleIsSet() const
{
    return m_TitleIsSet;
}

void MoodReadResponse::unsetTitle()
{
    m_TitleIsSet = false;
}

std::vector<std::shared_ptr<MoodCreateResponse_posts>>& MoodReadResponse::getPosts()
{
    return m_Posts;
}

void MoodReadResponse::setPosts(std::vector<std::shared_ptr<MoodCreateResponse_posts>> value)
{
    m_Posts = value;
    m_PostsIsSet = true;
}
bool MoodReadResponse::postsIsSet() const
{
    return m_PostsIsSet;
}

void MoodReadResponse::unsetPosts()
{
    m_PostsIsSet = false;
}

utility::string_t MoodReadResponse::getContent() const
{
    return m_Content;
}


void MoodReadResponse::setContent(utility::string_t value)
{
    m_Content = value;
    m_ContentIsSet = true;
}
bool MoodReadResponse::contentIsSet() const
{
    return m_ContentIsSet;
}

void MoodReadResponse::unsetContent()
{
    m_ContentIsSet = false;
}

double MoodReadResponse::getStakeToAccess() const
{
    return m_StakeToAccess;
}


void MoodReadResponse::setStakeToAccess(double value)
{
    m_StakeToAccess = value;
    m_StakeToAccessIsSet = true;
}
bool MoodReadResponse::stakeToAccessIsSet() const
{
    return m_StakeToAccessIsSet;
}

void MoodReadResponse::unsetStakeToAccess()
{
    m_StakeToAccessIsSet = false;
}

std::vector<std::shared_ptr<PagedRatedResponsePost_tags>>& MoodReadResponse::getTags()
{
    return m_Tags;
}

void MoodReadResponse::setTags(std::vector<std::shared_ptr<PagedRatedResponsePost_tags>> value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}
bool MoodReadResponse::tagsIsSet() const
{
    return m_TagsIsSet;
}

void MoodReadResponse::unsetTags()
{
    m_TagsIsSet = false;
}

utility::string_t MoodReadResponse::getContentUrl() const
{
    return m_ContentUrl;
}


void MoodReadResponse::setContentUrl(utility::string_t value)
{
    m_ContentUrl = value;
    m_ContentUrlIsSet = true;
}
bool MoodReadResponse::contentUrlIsSet() const
{
    return m_ContentUrlIsSet;
}

void MoodReadResponse::unsetContentUrl()
{
    m_ContentUrlIsSet = false;
}

double MoodReadResponse::getPostsCount() const
{
    return m_PostsCount;
}


void MoodReadResponse::setPostsCount(double value)
{
    m_PostsCount = value;
    m_PostsCountIsSet = true;
}
bool MoodReadResponse::postsCountIsSet() const
{
    return m_PostsCountIsSet;
}

void MoodReadResponse::unsetPostsCount()
{
    m_PostsCountIsSet = false;
}

utility::string_t MoodReadResponse::getBlurHash() const
{
    return m_BlurHash;
}


void MoodReadResponse::setBlurHash(utility::string_t value)
{
    m_BlurHash = value;
    m_BlurHashIsSet = true;
}
bool MoodReadResponse::blurHashIsSet() const
{
    return m_BlurHashIsSet;
}

void MoodReadResponse::unsetBlurHash()
{
    m_BlurHashIsSet = false;
}

utility::string_t MoodReadResponse::getId() const
{
    return m_Id;
}


void MoodReadResponse::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool MoodReadResponse::idIsSet() const
{
    return m_IdIsSet;
}

void MoodReadResponse::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t MoodReadResponse::getUpdated() const
{
    return m_Updated;
}


void MoodReadResponse::setUpdated(utility::string_t value)
{
    m_Updated = value;
    m_UpdatedIsSet = true;
}
bool MoodReadResponse::updatedIsSet() const
{
    return m_UpdatedIsSet;
}

void MoodReadResponse::unsetUpdated()
{
    m_UpdatedIsSet = false;
}

utility::string_t MoodReadResponse::getContentType() const
{
    return m_ContentType;
}


void MoodReadResponse::setContentType(utility::string_t value)
{
    m_ContentType = value;
    m_ContentTypeIsSet = true;
}
bool MoodReadResponse::contentTypeIsSet() const
{
    return m_ContentTypeIsSet;
}

void MoodReadResponse::unsetContentType()
{
    m_ContentTypeIsSet = false;
}

double MoodReadResponse::getLongitude() const
{
    return m_Longitude;
}


void MoodReadResponse::setLongitude(double value)
{
    m_Longitude = value;
    m_LongitudeIsSet = true;
}
bool MoodReadResponse::longitudeIsSet() const
{
    return m_LongitudeIsSet;
}

void MoodReadResponse::unsetLongitude()
{
    m_LongitudeIsSet = false;
}

}
}
}
}

