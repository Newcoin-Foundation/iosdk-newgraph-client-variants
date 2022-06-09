/* 
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-05-20T13:39:48Z
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

/// PostTagsSearchPublicResponse : PostTagsSearchPublicResponse Model

#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct PostTagsSearchPublicResponse {
  #[serde(rename = "done")]
  done: Option<Value>,
  #[serde(rename = "value")]
  value: Option<Vec<::models::PostTagsSearchPublicResponseValue>>
}

impl PostTagsSearchPublicResponse {
  /// PostTagsSearchPublicResponse Model
  pub fn new() -> PostTagsSearchPublicResponse {
    PostTagsSearchPublicResponse {
      done: None,
      value: None
    }
  }

  pub fn set_done(&mut self, done: Value) {
    self.done = Some(done);
  }

  pub fn with_done(mut self, done: Value) -> PostTagsSearchPublicResponse {
    self.done = Some(done);
    self
  }

  pub fn done(&self) -> Option<&Value> {
    self.done.as_ref()
  }

  pub fn reset_done(&mut self) {
    self.done = None;
  }

  pub fn set_value(&mut self, value: Vec<::models::PostTagsSearchPublicResponseValue>) {
    self.value = Some(value);
  }

  pub fn with_value(mut self, value: Vec<::models::PostTagsSearchPublicResponseValue>) -> PostTagsSearchPublicResponse {
    self.value = Some(value);
    self
  }

  pub fn value(&self) -> Option<&Vec<::models::PostTagsSearchPublicResponseValue>> {
    self.value.as_ref()
  }

  pub fn reset_value(&mut self) {
    self.value = None;
  }

}


