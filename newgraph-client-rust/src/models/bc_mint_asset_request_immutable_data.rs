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
pub struct BcMintAssetRequestImmutableData {
  #[serde(rename = "value")]
  value: Vec<String>,
  #[serde(rename = "key")]
  key: String
}

impl BcMintAssetRequestImmutableData {
  pub fn new(value: Vec<String>, key: String) -> BcMintAssetRequestImmutableData {
    BcMintAssetRequestImmutableData {
      value: value,
      key: key
    }
  }

  pub fn set_value(&mut self, value: Vec<String>) {
    self.value = value;
  }

  pub fn with_value(mut self, value: Vec<String>) -> BcMintAssetRequestImmutableData {
    self.value = value;
    self
  }

  pub fn value(&self) -> &Vec<String> {
    &self.value
  }


  pub fn set_key(&mut self, key: String) {
    self.key = key;
  }

  pub fn with_key(mut self, key: String) -> BcMintAssetRequestImmutableData {
    self.key = key;
    self
  }

  pub fn key(&self) -> &String {
    &self.key
  }


}



