/* 
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-05-20T13:39:48Z
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct BcApproveDaoProposalRequest {
  #[serde(rename = "approver")]
  approver: Option<String>,
  #[serde(rename = "proposal_author")]
  proposal_author: Option<String>,
  #[serde(rename = "proposal_id")]
  proposal_id: Option<String>,
  #[serde(rename = "dao_id")]
  dao_id: Option<f32>,
  #[serde(rename = "dao_owner")]
  dao_owner: Option<String>,
  #[serde(rename = "approver_prv_key")]
  approver_prv_key: Option<String>
}

impl BcApproveDaoProposalRequest {
  pub fn new() -> BcApproveDaoProposalRequest {
    BcApproveDaoProposalRequest {
      approver: None,
      proposal_author: None,
      proposal_id: None,
      dao_id: None,
      dao_owner: None,
      approver_prv_key: None
    }
  }

  pub fn set_approver(&mut self, approver: String) {
    self.approver = Some(approver);
  }

  pub fn with_approver(mut self, approver: String) -> BcApproveDaoProposalRequest {
    self.approver = Some(approver);
    self
  }

  pub fn approver(&self) -> Option<&String> {
    self.approver.as_ref()
  }

  pub fn reset_approver(&mut self) {
    self.approver = None;
  }

  pub fn set_proposal_author(&mut self, proposal_author: String) {
    self.proposal_author = Some(proposal_author);
  }

  pub fn with_proposal_author(mut self, proposal_author: String) -> BcApproveDaoProposalRequest {
    self.proposal_author = Some(proposal_author);
    self
  }

  pub fn proposal_author(&self) -> Option<&String> {
    self.proposal_author.as_ref()
  }

  pub fn reset_proposal_author(&mut self) {
    self.proposal_author = None;
  }

  pub fn set_proposal_id(&mut self, proposal_id: String) {
    self.proposal_id = Some(proposal_id);
  }

  pub fn with_proposal_id(mut self, proposal_id: String) -> BcApproveDaoProposalRequest {
    self.proposal_id = Some(proposal_id);
    self
  }

  pub fn proposal_id(&self) -> Option<&String> {
    self.proposal_id.as_ref()
  }

  pub fn reset_proposal_id(&mut self) {
    self.proposal_id = None;
  }

  pub fn set_dao_id(&mut self, dao_id: f32) {
    self.dao_id = Some(dao_id);
  }

  pub fn with_dao_id(mut self, dao_id: f32) -> BcApproveDaoProposalRequest {
    self.dao_id = Some(dao_id);
    self
  }

  pub fn dao_id(&self) -> Option<&f32> {
    self.dao_id.as_ref()
  }

  pub fn reset_dao_id(&mut self) {
    self.dao_id = None;
  }

  pub fn set_dao_owner(&mut self, dao_owner: String) {
    self.dao_owner = Some(dao_owner);
  }

  pub fn with_dao_owner(mut self, dao_owner: String) -> BcApproveDaoProposalRequest {
    self.dao_owner = Some(dao_owner);
    self
  }

  pub fn dao_owner(&self) -> Option<&String> {
    self.dao_owner.as_ref()
  }

  pub fn reset_dao_owner(&mut self) {
    self.dao_owner = None;
  }

  pub fn set_approver_prv_key(&mut self, approver_prv_key: String) {
    self.approver_prv_key = Some(approver_prv_key);
  }

  pub fn with_approver_prv_key(mut self, approver_prv_key: String) -> BcApproveDaoProposalRequest {
    self.approver_prv_key = Some(approver_prv_key);
    self
  }

  pub fn approver_prv_key(&self) -> Option<&String> {
    self.approver_prv_key.as_ref()
  }

  pub fn reset_approver_prv_key(&mut self) {
    self.approver_prv_key = None;
  }

}



