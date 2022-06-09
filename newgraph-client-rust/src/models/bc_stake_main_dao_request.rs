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
pub struct BcStakeMainDaoRequest {
  #[serde(rename = "payer_prv_key")]
  payer_prv_key: String,
  #[serde(rename = "amt")]
  amt: String,
  #[serde(rename = "payer")]
  payer: String
}

impl BcStakeMainDaoRequest {
  pub fn new(payer_prv_key: String, amt: String, payer: String) -> BcStakeMainDaoRequest {
    BcStakeMainDaoRequest {
      payer_prv_key: payer_prv_key,
      amt: amt,
      payer: payer
    }
  }

  pub fn set_payer_prv_key(&mut self, payer_prv_key: String) {
    self.payer_prv_key = payer_prv_key;
  }

  pub fn with_payer_prv_key(mut self, payer_prv_key: String) -> BcStakeMainDaoRequest {
    self.payer_prv_key = payer_prv_key;
    self
  }

  pub fn payer_prv_key(&self) -> &String {
    &self.payer_prv_key
  }


  pub fn set_amt(&mut self, amt: String) {
    self.amt = amt;
  }

  pub fn with_amt(mut self, amt: String) -> BcStakeMainDaoRequest {
    self.amt = amt;
    self
  }

  pub fn amt(&self) -> &String {
    &self.amt
  }


  pub fn set_payer(&mut self, payer: String) {
    self.payer = payer;
  }

  pub fn with_payer(mut self, payer: String) -> BcStakeMainDaoRequest {
    self.payer = payer;
    self
  }

  pub fn payer(&self) -> &String {
    &self.payer
  }


}


