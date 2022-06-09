/**
 * newlife-creator-api-eu-dev
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-06-09T06:13:03Z
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.27.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "BcDaoWidthdrawVoteDepositRequest.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BcDaoWidthdrawVoteDepositRequest::BcDaoWidthdrawVoteDepositRequest()
{
    m_Vote_id = utility::conversions::to_string_t("");
    m_Vote_idIsSet = false;
}

BcDaoWidthdrawVoteDepositRequest::~BcDaoWidthdrawVoteDepositRequest()
{
}

void BcDaoWidthdrawVoteDepositRequest::validate()
{
    // TODO: implement validation
}

web::json::value BcDaoWidthdrawVoteDepositRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Vote_idIsSet)
    {
        val[utility::conversions::to_string_t("vote_id")] = ModelBase::toJson(m_Vote_id);
    }

    return val;
}

void BcDaoWidthdrawVoteDepositRequest::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("vote_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("vote_id")];
        if(!fieldValue.is_null())
        {
            setVoteId(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void BcDaoWidthdrawVoteDepositRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Vote_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("vote_id"), m_Vote_id));
        
    }
}

void BcDaoWidthdrawVoteDepositRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("vote_id")))
    {
        setVoteId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("vote_id"))));
    }
}

utility::string_t BcDaoWidthdrawVoteDepositRequest::getVoteId() const
{
    return m_Vote_id;
}


void BcDaoWidthdrawVoteDepositRequest::setVoteId(utility::string_t value)
{
    m_Vote_id = value;
    m_Vote_idIsSet = true;
}
bool BcDaoWidthdrawVoteDepositRequest::voteIdIsSet() const
{
    return m_Vote_idIsSet;
}

void BcDaoWidthdrawVoteDepositRequest::unsetVote_id()
{
    m_Vote_idIsSet = false;
}

}
}
}
}
