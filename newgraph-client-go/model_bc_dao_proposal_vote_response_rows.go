/*
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: 2022-05-20T13:39:48Z
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type BcDaoProposalVoteResponseRows struct {
	ProposalType string `json:"proposal_type,omitempty"`
	Quantity *BcListDaoProposalsResponseVoteNo `json:"quantity,omitempty"`
	ProposalId float32 `json:"proposal_id,omitempty"`
	DaoId float32 `json:"dao_id,omitempty"`
	Id string `json:"id,omitempty"`
}
