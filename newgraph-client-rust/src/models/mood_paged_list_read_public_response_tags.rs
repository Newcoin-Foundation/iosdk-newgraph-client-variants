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
pub struct MoodPagedListReadPublicResponseTags {
  #[serde(rename = "_rel")]
  _rel: Option<Vec<::models::MoodPagedListReadPublicResponseRel>>,
  #[serde(rename = "id")]
  id: Option<String>,
  #[serde(rename = "value")]
  value: Option<String>
}

impl MoodPagedListReadPublicResponseTags {
  pub fn new() -> MoodPagedListReadPublicResponseTags {
    MoodPagedListReadPublicResponseTags {
      _rel: None,
      id: None,
      value: None
    }
  }

  pub fn set__rel(&mut self, _rel: Vec<::models::MoodPagedListReadPublicResponseRel>) {
    self._rel = Some(_rel);
  }

  pub fn with__rel(mut self, _rel: Vec<::models::MoodPagedListReadPublicResponseRel>) -> MoodPagedListReadPublicResponseTags {
    self._rel = Some(_rel);
    self
  }

  pub fn _rel(&self) -> Option<&Vec<::models::MoodPagedListReadPublicResponseRel>> {
    self._rel.as_ref()
  }

  pub fn reset__rel(&mut self) {
    self._rel = None;
  }

  pub fn set_id(&mut self, id: String) {
    self.id = Some(id);
  }

  pub fn with_id(mut self, id: String) -> MoodPagedListReadPublicResponseTags {
    self.id = Some(id);
    self
  }

  pub fn id(&self) -> Option<&String> {
    self.id.as_ref()
  }

  pub fn reset_id(&mut self) {
    self.id = None;
  }

  pub fn set_value(&mut self, value: String) {
    self.value = Some(value);
  }

  pub fn with_value(mut self, value: String) -> MoodPagedListReadPublicResponseTags {
    self.value = Some(value);
    self
  }

  pub fn value(&self) -> Option<&String> {
    self.value.as_ref()
  }

  pub fn reset_value(&mut self) {
    self.value = None;
  }

}



