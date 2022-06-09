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
pub struct SyncContactsRequestPostalAddresses {
  #[serde(rename = "country")]
  country: Option<String>,
  #[serde(rename = "city")]
  city: Option<String>,
  #[serde(rename = "street")]
  street: Option<String>,
  #[serde(rename = "postcode")]
  postcode: Option<String>,
  #[serde(rename = "label")]
  label: Option<String>,
  #[serde(rename = "region")]
  region: Option<String>
}

impl SyncContactsRequestPostalAddresses {
  pub fn new() -> SyncContactsRequestPostalAddresses {
    SyncContactsRequestPostalAddresses {
      country: None,
      city: None,
      street: None,
      postcode: None,
      label: None,
      region: None
    }
  }

  pub fn set_country(&mut self, country: String) {
    self.country = Some(country);
  }

  pub fn with_country(mut self, country: String) -> SyncContactsRequestPostalAddresses {
    self.country = Some(country);
    self
  }

  pub fn country(&self) -> Option<&String> {
    self.country.as_ref()
  }

  pub fn reset_country(&mut self) {
    self.country = None;
  }

  pub fn set_city(&mut self, city: String) {
    self.city = Some(city);
  }

  pub fn with_city(mut self, city: String) -> SyncContactsRequestPostalAddresses {
    self.city = Some(city);
    self
  }

  pub fn city(&self) -> Option<&String> {
    self.city.as_ref()
  }

  pub fn reset_city(&mut self) {
    self.city = None;
  }

  pub fn set_street(&mut self, street: String) {
    self.street = Some(street);
  }

  pub fn with_street(mut self, street: String) -> SyncContactsRequestPostalAddresses {
    self.street = Some(street);
    self
  }

  pub fn street(&self) -> Option<&String> {
    self.street.as_ref()
  }

  pub fn reset_street(&mut self) {
    self.street = None;
  }

  pub fn set_postcode(&mut self, postcode: String) {
    self.postcode = Some(postcode);
  }

  pub fn with_postcode(mut self, postcode: String) -> SyncContactsRequestPostalAddresses {
    self.postcode = Some(postcode);
    self
  }

  pub fn postcode(&self) -> Option<&String> {
    self.postcode.as_ref()
  }

  pub fn reset_postcode(&mut self) {
    self.postcode = None;
  }

  pub fn set_label(&mut self, label: String) {
    self.label = Some(label);
  }

  pub fn with_label(mut self, label: String) -> SyncContactsRequestPostalAddresses {
    self.label = Some(label);
    self
  }

  pub fn label(&self) -> Option<&String> {
    self.label.as_ref()
  }

  pub fn reset_label(&mut self) {
    self.label = None;
  }

  pub fn set_region(&mut self, region: String) {
    self.region = Some(region);
  }

  pub fn with_region(mut self, region: String) -> SyncContactsRequestPostalAddresses {
    self.region = Some(region);
    self
  }

  pub fn region(&self) -> Option<&String> {
    self.region.as_ref()
  }

  pub fn reset_region(&mut self) {
    self.region = None;
  }

}


