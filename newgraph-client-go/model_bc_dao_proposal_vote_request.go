/*
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: 2022-06-09T06:13:03Z
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

// BcDaoProposalVoteRequest Model
type BcDaoProposalVoteRequest struct {
	ProposalType string `json:"proposal_type,omitempty"`
	Quantity string `json:"quantity"`
	ProposalId string `json:"proposal_id"`
	DaoId string `json:"dao_id,omitempty"`
	DaoOwner string `json:"dao_owner,omitempty"`
	Voter string `json:"voter"`
	Option string `json:"option"`
}
