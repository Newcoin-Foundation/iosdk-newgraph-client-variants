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
pub struct BcAuthEthResponse {
  #[serde(rename = "result")]
  result: bool,
  #[serde(rename = "signedAddr")]
  signed_addr: Option<String>,
  #[serde(rename = "comment")]
  comment: Option<String>,
  #[serde(rename = "owningAddr")]
  owning_addr: Option<String>
}

impl BcAuthEthResponse {
  pub fn new(result: bool) -> BcAuthEthResponse {
    BcAuthEthResponse {
      result: result,
      signed_addr: None,
      comment: None,
      owning_addr: None
    }
  }

  pub fn set_result(&mut self, result: bool) {
    self.result = result;
  }

  pub fn with_result(mut self, result: bool) -> BcAuthEthResponse {
    self.result = result;
    self
  }

  pub fn result(&self) -> &bool {
    &self.result
  }


  pub fn set_signed_addr(&mut self, signed_addr: String) {
    self.signed_addr = Some(signed_addr);
  }

  pub fn with_signed_addr(mut self, signed_addr: String) -> BcAuthEthResponse {
    self.signed_addr = Some(signed_addr);
    self
  }

  pub fn signed_addr(&self) -> Option<&String> {
    self.signed_addr.as_ref()
  }

  pub fn reset_signed_addr(&mut self) {
    self.signed_addr = None;
  }

  pub fn set_comment(&mut self, comment: String) {
    self.comment = Some(comment);
  }

  pub fn with_comment(mut self, comment: String) -> BcAuthEthResponse {
    self.comment = Some(comment);
    self
  }

  pub fn comment(&self) -> Option<&String> {
    self.comment.as_ref()
  }

  pub fn reset_comment(&mut self) {
    self.comment = None;
  }

  pub fn set_owning_addr(&mut self, owning_addr: String) {
    self.owning_addr = Some(owning_addr);
  }

  pub fn with_owning_addr(mut self, owning_addr: String) -> BcAuthEthResponse {
    self.owning_addr = Some(owning_addr);
    self
  }

  pub fn owning_addr(&self) -> Option<&String> {
    self.owning_addr.as_ref()
  }

  pub fn reset_owning_addr(&mut self) {
    self.owning_addr = None;
  }

}


