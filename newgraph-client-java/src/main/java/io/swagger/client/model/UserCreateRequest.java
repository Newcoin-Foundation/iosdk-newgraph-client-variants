/*
 * newlife-creator-api-eu-dev
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-05-20T13:39:48Z
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;

/**
 * UserCreateRequest
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-05-24T15:32:28.129Z")
public class UserCreateRequest {
  @SerializedName("newcoinTicker")
  private String newcoinTicker = null;

  @SerializedName("lastName")
  private String lastName = null;

  @SerializedName("website")
  private String website = null;

  @SerializedName("consentPrivacyPolicy")
  private String consentPrivacyPolicy = null;

  @SerializedName("displayName")
  private String displayName = null;

  @SerializedName("latitude")
  private BigDecimal latitude = null;

  @SerializedName("fullName")
  private String fullName = null;

  @SerializedName("tumblr")
  private String tumblr = null;

  @SerializedName("description")
  private String description = null;

  @SerializedName("instagram")
  private String instagram = null;

  @SerializedName("soundcloud")
  private String soundcloud = null;

  @SerializedName("firstName")
  private String firstName = null;

  @SerializedName("twitter")
  private String twitter = null;

  @SerializedName("consentTestgroup")
  private String consentTestgroup = null;

  @SerializedName("phone")
  private String phone = null;

  @SerializedName("tiktok")
  private String tiktok = null;

  @SerializedName("legacyToken")
  private String legacyToken = null;

  @SerializedName("consentEmail")
  private String consentEmail = null;

  @SerializedName("email")
  private String email = null;

  @SerializedName("longitude")
  private BigDecimal longitude = null;

  @SerializedName("username")
  private String username = null;

  public UserCreateRequest newcoinTicker(String newcoinTicker) {
    this.newcoinTicker = newcoinTicker;
    return this;
  }

   /**
   * Get newcoinTicker
   * @return newcoinTicker
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinTicker() {
    return newcoinTicker;
  }

  public void setNewcoinTicker(String newcoinTicker) {
    this.newcoinTicker = newcoinTicker;
  }

  public UserCreateRequest lastName(String lastName) {
    this.lastName = lastName;
    return this;
  }

   /**
   * Get lastName
   * @return lastName
  **/
  @ApiModelProperty(value = "")
  public String getLastName() {
    return lastName;
  }

  public void setLastName(String lastName) {
    this.lastName = lastName;
  }

  public UserCreateRequest website(String website) {
    this.website = website;
    return this;
  }

   /**
   * Get website
   * @return website
  **/
  @ApiModelProperty(value = "")
  public String getWebsite() {
    return website;
  }

  public void setWebsite(String website) {
    this.website = website;
  }

  public UserCreateRequest consentPrivacyPolicy(String consentPrivacyPolicy) {
    this.consentPrivacyPolicy = consentPrivacyPolicy;
    return this;
  }

   /**
   * Get consentPrivacyPolicy
   * @return consentPrivacyPolicy
  **/
  @ApiModelProperty(value = "")
  public String getConsentPrivacyPolicy() {
    return consentPrivacyPolicy;
  }

  public void setConsentPrivacyPolicy(String consentPrivacyPolicy) {
    this.consentPrivacyPolicy = consentPrivacyPolicy;
  }

  public UserCreateRequest displayName(String displayName) {
    this.displayName = displayName;
    return this;
  }

   /**
   * Get displayName
   * @return displayName
  **/
  @ApiModelProperty(value = "")
  public String getDisplayName() {
    return displayName;
  }

  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  public UserCreateRequest latitude(BigDecimal latitude) {
    this.latitude = latitude;
    return this;
  }

   /**
   * Get latitude
   * @return latitude
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getLatitude() {
    return latitude;
  }

  public void setLatitude(BigDecimal latitude) {
    this.latitude = latitude;
  }

  public UserCreateRequest fullName(String fullName) {
    this.fullName = fullName;
    return this;
  }

   /**
   * Get fullName
   * @return fullName
  **/
  @ApiModelProperty(value = "")
  public String getFullName() {
    return fullName;
  }

  public void setFullName(String fullName) {
    this.fullName = fullName;
  }

  public UserCreateRequest tumblr(String tumblr) {
    this.tumblr = tumblr;
    return this;
  }

   /**
   * Get tumblr
   * @return tumblr
  **/
  @ApiModelProperty(value = "")
  public String getTumblr() {
    return tumblr;
  }

  public void setTumblr(String tumblr) {
    this.tumblr = tumblr;
  }

  public UserCreateRequest description(String description) {
    this.description = description;
    return this;
  }

   /**
   * Get description
   * @return description
  **/
  @ApiModelProperty(value = "")
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public UserCreateRequest instagram(String instagram) {
    this.instagram = instagram;
    return this;
  }

   /**
   * Get instagram
   * @return instagram
  **/
  @ApiModelProperty(value = "")
  public String getInstagram() {
    return instagram;
  }

  public void setInstagram(String instagram) {
    this.instagram = instagram;
  }

  public UserCreateRequest soundcloud(String soundcloud) {
    this.soundcloud = soundcloud;
    return this;
  }

   /**
   * Get soundcloud
   * @return soundcloud
  **/
  @ApiModelProperty(value = "")
  public String getSoundcloud() {
    return soundcloud;
  }

  public void setSoundcloud(String soundcloud) {
    this.soundcloud = soundcloud;
  }

  public UserCreateRequest firstName(String firstName) {
    this.firstName = firstName;
    return this;
  }

   /**
   * Get firstName
   * @return firstName
  **/
  @ApiModelProperty(value = "")
  public String getFirstName() {
    return firstName;
  }

  public void setFirstName(String firstName) {
    this.firstName = firstName;
  }

  public UserCreateRequest twitter(String twitter) {
    this.twitter = twitter;
    return this;
  }

   /**
   * Get twitter
   * @return twitter
  **/
  @ApiModelProperty(value = "")
  public String getTwitter() {
    return twitter;
  }

  public void setTwitter(String twitter) {
    this.twitter = twitter;
  }

  public UserCreateRequest consentTestgroup(String consentTestgroup) {
    this.consentTestgroup = consentTestgroup;
    return this;
  }

   /**
   * Get consentTestgroup
   * @return consentTestgroup
  **/
  @ApiModelProperty(value = "")
  public String getConsentTestgroup() {
    return consentTestgroup;
  }

  public void setConsentTestgroup(String consentTestgroup) {
    this.consentTestgroup = consentTestgroup;
  }

  public UserCreateRequest phone(String phone) {
    this.phone = phone;
    return this;
  }

   /**
   * Get phone
   * @return phone
  **/
  @ApiModelProperty(required = true, value = "")
  public String getPhone() {
    return phone;
  }

  public void setPhone(String phone) {
    this.phone = phone;
  }

  public UserCreateRequest tiktok(String tiktok) {
    this.tiktok = tiktok;
    return this;
  }

   /**
   * Get tiktok
   * @return tiktok
  **/
  @ApiModelProperty(value = "")
  public String getTiktok() {
    return tiktok;
  }

  public void setTiktok(String tiktok) {
    this.tiktok = tiktok;
  }

  public UserCreateRequest legacyToken(String legacyToken) {
    this.legacyToken = legacyToken;
    return this;
  }

   /**
   * Get legacyToken
   * @return legacyToken
  **/
  @ApiModelProperty(value = "")
  public String getLegacyToken() {
    return legacyToken;
  }

  public void setLegacyToken(String legacyToken) {
    this.legacyToken = legacyToken;
  }

  public UserCreateRequest consentEmail(String consentEmail) {
    this.consentEmail = consentEmail;
    return this;
  }

   /**
   * Get consentEmail
   * @return consentEmail
  **/
  @ApiModelProperty(value = "")
  public String getConsentEmail() {
    return consentEmail;
  }

  public void setConsentEmail(String consentEmail) {
    this.consentEmail = consentEmail;
  }

  public UserCreateRequest email(String email) {
    this.email = email;
    return this;
  }

   /**
   * Get email
   * @return email
  **/
  @ApiModelProperty(value = "")
  public String getEmail() {
    return email;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  public UserCreateRequest longitude(BigDecimal longitude) {
    this.longitude = longitude;
    return this;
  }

   /**
   * Get longitude
   * @return longitude
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getLongitude() {
    return longitude;
  }

  public void setLongitude(BigDecimal longitude) {
    this.longitude = longitude;
  }

  public UserCreateRequest username(String username) {
    this.username = username;
    return this;
  }

   /**
   * Get username
   * @return username
  **/
  @ApiModelProperty(required = true, value = "")
  public String getUsername() {
    return username;
  }

  public void setUsername(String username) {
    this.username = username;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    UserCreateRequest userCreateRequest = (UserCreateRequest) o;
    return Objects.equals(this.newcoinTicker, userCreateRequest.newcoinTicker) &&
        Objects.equals(this.lastName, userCreateRequest.lastName) &&
        Objects.equals(this.website, userCreateRequest.website) &&
        Objects.equals(this.consentPrivacyPolicy, userCreateRequest.consentPrivacyPolicy) &&
        Objects.equals(this.displayName, userCreateRequest.displayName) &&
        Objects.equals(this.latitude, userCreateRequest.latitude) &&
        Objects.equals(this.fullName, userCreateRequest.fullName) &&
        Objects.equals(this.tumblr, userCreateRequest.tumblr) &&
        Objects.equals(this.description, userCreateRequest.description) &&
        Objects.equals(this.instagram, userCreateRequest.instagram) &&
        Objects.equals(this.soundcloud, userCreateRequest.soundcloud) &&
        Objects.equals(this.firstName, userCreateRequest.firstName) &&
        Objects.equals(this.twitter, userCreateRequest.twitter) &&
        Objects.equals(this.consentTestgroup, userCreateRequest.consentTestgroup) &&
        Objects.equals(this.phone, userCreateRequest.phone) &&
        Objects.equals(this.tiktok, userCreateRequest.tiktok) &&
        Objects.equals(this.legacyToken, userCreateRequest.legacyToken) &&
        Objects.equals(this.consentEmail, userCreateRequest.consentEmail) &&
        Objects.equals(this.email, userCreateRequest.email) &&
        Objects.equals(this.longitude, userCreateRequest.longitude) &&
        Objects.equals(this.username, userCreateRequest.username);
  }

  @Override
  public int hashCode() {
    return Objects.hash(newcoinTicker, lastName, website, consentPrivacyPolicy, displayName, latitude, fullName, tumblr, description, instagram, soundcloud, firstName, twitter, consentTestgroup, phone, tiktok, legacyToken, consentEmail, email, longitude, username);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UserCreateRequest {\n");
    
    sb.append("    newcoinTicker: ").append(toIndentedString(newcoinTicker)).append("\n");
    sb.append("    lastName: ").append(toIndentedString(lastName)).append("\n");
    sb.append("    website: ").append(toIndentedString(website)).append("\n");
    sb.append("    consentPrivacyPolicy: ").append(toIndentedString(consentPrivacyPolicy)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    latitude: ").append(toIndentedString(latitude)).append("\n");
    sb.append("    fullName: ").append(toIndentedString(fullName)).append("\n");
    sb.append("    tumblr: ").append(toIndentedString(tumblr)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    instagram: ").append(toIndentedString(instagram)).append("\n");
    sb.append("    soundcloud: ").append(toIndentedString(soundcloud)).append("\n");
    sb.append("    firstName: ").append(toIndentedString(firstName)).append("\n");
    sb.append("    twitter: ").append(toIndentedString(twitter)).append("\n");
    sb.append("    consentTestgroup: ").append(toIndentedString(consentTestgroup)).append("\n");
    sb.append("    phone: ").append(toIndentedString(phone)).append("\n");
    sb.append("    tiktok: ").append(toIndentedString(tiktok)).append("\n");
    sb.append("    legacyToken: ").append(toIndentedString(legacyToken)).append("\n");
    sb.append("    consentEmail: ").append(toIndentedString(consentEmail)).append("\n");
    sb.append("    email: ").append(toIndentedString(email)).append("\n");
    sb.append("    longitude: ").append(toIndentedString(longitude)).append("\n");
    sb.append("    username: ").append(toIndentedString(username)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

