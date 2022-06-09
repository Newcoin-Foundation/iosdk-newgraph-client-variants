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
 * BcDaoProposalVoteResponse_rows.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_BcDaoProposalVoteResponse_rows_H_
#define IO_SWAGGER_CLIENT_MODEL_BcDaoProposalVoteResponse_rows_H_


#include "../ModelBase.h"

#include "BcListDaoProposalsResponse_vote_no.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BcDaoProposalVoteResponse_rows
    : public ModelBase
{
public:
    BcDaoProposalVoteResponse_rows();
    virtual ~BcDaoProposalVoteResponse_rows();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BcDaoProposalVoteResponse_rows members

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
    std::shared_ptr<BcListDaoProposalsResponse_vote_no> getQuantity() const;
    bool quantityIsSet() const;
    void unsetQuantity();
    void setQuantity(std::shared_ptr<BcListDaoProposalsResponse_vote_no> value);
    /// <summary>
    /// 
    /// </summary>
    double getProposalId() const;
    bool proposalIdIsSet() const;
    void unsetProposal_id();
    void setProposalId(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDaoId() const;
    bool daoIdIsSet() const;
    void unsetDao_id();
    void setDaoId(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);

protected:
    utility::string_t m_Proposal_type;
    bool m_Proposal_typeIsSet;
    std::shared_ptr<BcListDaoProposalsResponse_vote_no> m_Quantity;
    bool m_QuantityIsSet;
    double m_Proposal_id;
    bool m_Proposal_idIsSet;
    double m_Dao_id;
    bool m_Dao_idIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_BcDaoProposalVoteResponse_rows_H_ */
