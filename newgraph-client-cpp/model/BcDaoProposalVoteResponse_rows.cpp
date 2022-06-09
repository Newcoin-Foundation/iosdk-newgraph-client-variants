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



#include "BcDaoProposalVoteResponse_rows.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BcDaoProposalVoteResponse_rows::BcDaoProposalVoteResponse_rows()
{
    m_Proposal_type = utility::conversions::to_string_t("");
    m_Proposal_typeIsSet = false;
    m_QuantityIsSet = false;
    m_Proposal_id = 0.0;
    m_Proposal_idIsSet = false;
    m_Dao_id = 0.0;
    m_Dao_idIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
}

BcDaoProposalVoteResponse_rows::~BcDaoProposalVoteResponse_rows()
{
}

void BcDaoProposalVoteResponse_rows::validate()
{
    // TODO: implement validation
}

web::json::value BcDaoProposalVoteResponse_rows::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Proposal_typeIsSet)
    {
        val[utility::conversions::to_string_t("proposal_type")] = ModelBase::toJson(m_Proposal_type);
    }
    if(m_QuantityIsSet)
    {
        val[utility::conversions::to_string_t("quantity")] = ModelBase::toJson(m_Quantity);
    }
    if(m_Proposal_idIsSet)
    {
        val[utility::conversions::to_string_t("proposal_id")] = ModelBase::toJson(m_Proposal_id);
    }
    if(m_Dao_idIsSet)
    {
        val[utility::conversions::to_string_t("dao_id")] = ModelBase::toJson(m_Dao_id);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }

    return val;
}

void BcDaoProposalVoteResponse_rows::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("proposal_type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("proposal_type")];
        if(!fieldValue.is_null())
        {
            setProposalType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quantity")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("quantity")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BcListDaoProposalsResponse_vote_no> newItem(new BcListDaoProposalsResponse_vote_no());
            newItem->fromJson(fieldValue);
            setQuantity( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proposal_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("proposal_id")];
        if(!fieldValue.is_null())
        {
            setProposalId(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dao_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("dao_id")];
        if(!fieldValue.is_null())
        {
            setDaoId(ModelBase::doubleFromJson(fieldValue));
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
}

void BcDaoProposalVoteResponse_rows::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Proposal_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("proposal_type"), m_Proposal_type));
        
    }
    if(m_QuantityIsSet)
    {
        if (m_Quantity.get())
        {
            m_Quantity->toMultipart(multipart, utility::conversions::to_string_t("quantity."));
        }
        
    }
    if(m_Proposal_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("proposal_id"), m_Proposal_id));
    }
    if(m_Dao_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dao_id"), m_Dao_id));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
        
    }
}

void BcDaoProposalVoteResponse_rows::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("proposal_type")))
    {
        setProposalType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("proposal_type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("quantity")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("quantity")))
        {
            std::shared_ptr<BcListDaoProposalsResponse_vote_no> newItem(new BcListDaoProposalsResponse_vote_no());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("quantity."));
            setQuantity( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("proposal_id")))
    {
        setProposalId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("proposal_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dao_id")))
    {
        setDaoId(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("dao_id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
}

utility::string_t BcDaoProposalVoteResponse_rows::getProposalType() const
{
    return m_Proposal_type;
}


void BcDaoProposalVoteResponse_rows::setProposalType(utility::string_t value)
{
    m_Proposal_type = value;
    m_Proposal_typeIsSet = true;
}
bool BcDaoProposalVoteResponse_rows::proposalTypeIsSet() const
{
    return m_Proposal_typeIsSet;
}

void BcDaoProposalVoteResponse_rows::unsetProposal_type()
{
    m_Proposal_typeIsSet = false;
}

std::shared_ptr<BcListDaoProposalsResponse_vote_no> BcDaoProposalVoteResponse_rows::getQuantity() const
{
    return m_Quantity;
}


void BcDaoProposalVoteResponse_rows::setQuantity(std::shared_ptr<BcListDaoProposalsResponse_vote_no> value)
{
    m_Quantity = value;
    m_QuantityIsSet = true;
}
bool BcDaoProposalVoteResponse_rows::quantityIsSet() const
{
    return m_QuantityIsSet;
}

void BcDaoProposalVoteResponse_rows::unsetQuantity()
{
    m_QuantityIsSet = false;
}

double BcDaoProposalVoteResponse_rows::getProposalId() const
{
    return m_Proposal_id;
}


void BcDaoProposalVoteResponse_rows::setProposalId(double value)
{
    m_Proposal_id = value;
    m_Proposal_idIsSet = true;
}
bool BcDaoProposalVoteResponse_rows::proposalIdIsSet() const
{
    return m_Proposal_idIsSet;
}

void BcDaoProposalVoteResponse_rows::unsetProposal_id()
{
    m_Proposal_idIsSet = false;
}

double BcDaoProposalVoteResponse_rows::getDaoId() const
{
    return m_Dao_id;
}


void BcDaoProposalVoteResponse_rows::setDaoId(double value)
{
    m_Dao_id = value;
    m_Dao_idIsSet = true;
}
bool BcDaoProposalVoteResponse_rows::daoIdIsSet() const
{
    return m_Dao_idIsSet;
}

void BcDaoProposalVoteResponse_rows::unsetDao_id()
{
    m_Dao_idIsSet = false;
}

utility::string_t BcDaoProposalVoteResponse_rows::getId() const
{
    return m_Id;
}


void BcDaoProposalVoteResponse_rows::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool BcDaoProposalVoteResponse_rows::idIsSet() const
{
    return m_IdIsSet;
}

void BcDaoProposalVoteResponse_rows::unsetId()
{
    m_IdIsSet = false;
}

}
}
}
}

