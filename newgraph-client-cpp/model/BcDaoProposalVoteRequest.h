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
 * BcDaoProposalVoteRequest.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BcDaoProposalVoteRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_BcDaoProposalVoteRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BcDaoProposalVoteRequest
    : public ModelBase
{
public:
    BcDaoProposalVoteRequest();
    virtual ~BcDaoProposalVoteRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BcDaoProposalVoteRequest members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProposalType() const;
    bool proposalTypeIsSet() const;
    void unsetProposal_type();
    void setProposalType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQuantity() const;
        void setQuantity(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProposalId() const;
        void setProposalId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDaoId() const;
    bool daoIdIsSet() const;
    void unsetDao_id();
    void setDaoId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDaoOwner() const;
    bool daoOwnerIsSet() const;
    void unsetDao_owner();
    void setDaoOwner(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getVoter() const;
        void setVoter(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOption() const;
        void setOption(utility::string_t value);

protected:
    utility::string_t m_Proposal_type;
    bool m_Proposal_typeIsSet;
    utility::string_t m_Quantity;
        utility::string_t m_Proposal_id;
        utility::string_t m_Dao_id;
    bool m_Dao_idIsSet;
    utility::string_t m_Dao_owner;
    bool m_Dao_ownerIsSet;
    utility::string_t m_Voter;
        utility::string_t m_Option;
    };

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BcDaoProposalVoteRequest_H_ */