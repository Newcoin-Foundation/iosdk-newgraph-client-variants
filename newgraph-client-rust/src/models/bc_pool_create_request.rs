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
pub struct BcPoolCreateRequest {
  #[serde(rename = "owner")]
  owner: String,
  #[serde(rename = "owner_prv_active_key")]
  owner_prv_active_key: Option<String>,
  #[serde(rename = "payer")]
  payer: Option<String>
}

impl BcPoolCreateRequest {
  pub fn new(owner: String) -> BcPoolCreateRequest {
    BcPoolCreateRequest {
      owner: owner,
      owner_prv_active_key: None,
      payer: None
    }
  }

  pub fn set_owner(&mut self, owner: String) {
    self.owner = owner;
  }

  pub fn with_owner(mut self, owner: String) -> BcPoolCreateRequest {
    self.owner = owner;
    self
  }

  pub fn owner(&self) -> &String {
    &self.owner
  }


  pub fn set_owner_prv_active_key(&mut self, owner_prv_active_key: String) {
    self.owner_prv_active_key = Some(owner_prv_active_key);
  }

  pub fn with_owner_prv_active_key(mut self, owner_prv_active_key: String) -> BcPoolCreateRequest {
    self.owner_prv_active_key = Some(owner_prv_active_key);
    self
  }

  pub fn owner_prv_active_key(&self) -> Option<&String> {
    self.owner_prv_active_key.as_ref()
  }

  pub fn reset_owner_prv_active_key(&mut self) {
    self.owner_prv_active_key = None;
  }

  pub fn set_payer(&mut self, payer: String) {
    self.payer = Some(payer);
  }

  pub fn with_payer(mut self, payer: String) -> BcPoolCreateRequest {
    self.payer = Some(payer);
    self
  }

  pub fn payer(&self) -> Option<&String> {
    self.payer.as_ref()
  }

  pub fn reset_payer(&mut self) {
    self.payer = None;
  }

}



