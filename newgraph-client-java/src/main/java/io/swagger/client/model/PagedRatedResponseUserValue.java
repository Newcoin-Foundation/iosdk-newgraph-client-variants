/*
 * newlife-creator-api-eu-dev
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-06-09T06:13:03Z
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
import io.swagger.client.model.PagedRatedResponseUserRating;
import java.io.IOException;
import java.math.BigDecimal;

/**
 * PagedRatedResponseUserValue
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-06-09T15:29:41.671Z")
public class PagedRatedResponseUserValue {
  @SerializedName("powered")
  private BigDecimal powered = null;

  @SerializedName("displayName")
  private String displayName = null;

  @SerializedName("newcoinAccTx")
  private String newcoinAccTx = null;

  @SerializedName("latitude")
  private BigDecimal latitude = null;

  @SerializedName("rating")
  private PagedRatedResponseUserRating rating = null;

  @SerializedName("tumblr")
  private String tumblr = null;

  @SerializedName("description")
  private String description = null;

  @SerializedName("newcoinPoolId")
  private String newcoinPoolId = null;

  @SerializedName("aspectRatio")
  private BigDecimal aspectRatio = null;

  @SerializedName("instagram")
  private String instagram = null;

  @SerializedName("soundcloud")
  private String soundcloud = null;

  @SerializedName("newcoinActivePublicKey")
  private String newcoinActivePublicKey = null;

  @SerializedName("newcoinPublicKey")
  private String newcoinPublicKey = null;

  @SerializedName("powering")
  private BigDecimal powering = null;

  @SerializedName("twitter")
  private String twitter = null;

  @SerializedName("newcoinOwnerPublicKey")
  private String newcoinOwnerPublicKey = null;

  @SerializedName("tiktok")
  private String tiktok = null;

  @SerializedName("id")
  private String id = null;

  @SerializedName("newcoinPoolStake")
  private BigDecimal newcoinPoolStake = null;

  @SerializedName("contentType")
  private String contentType = null;

  @SerializedName("longitude")
  private BigDecimal longitude = null;

  @SerializedName("newcoinPublisherPublicKey")
  private String newcoinPublisherPublicKey = null;

  @SerializedName("website")
  private String website = null;

  @SerializedName("created")
  private String created = null;

  @SerializedName("fullName")
  private String fullName = null;

  @SerializedName("newcoinPoolTx")
  private String newcoinPoolTx = null;

  @SerializedName("license")
  private String license = null;

  @SerializedName("contentUrl")
  private String contentUrl = null;

  @SerializedName("blurHash")
  private String blurHash = null;

  @SerializedName("consentEmail")
  private String consentEmail = null;

  @SerializedName("updated")
  private String updated = null;

  @SerializedName("username")
  private String username = null;

  public PagedRatedResponseUserValue powered(BigDecimal powered) {
    this.powered = powered;
    return this;
  }

   /**
   * Get powered
   * @return powered
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPowered() {
    return powered;
  }

  public void setPowered(BigDecimal powered) {
    this.powered = powered;
  }

  public PagedRatedResponseUserValue displayName(String displayName) {
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

  public PagedRatedResponseUserValue newcoinAccTx(String newcoinAccTx) {
    this.newcoinAccTx = newcoinAccTx;
    return this;
  }

   /**
   * Get newcoinAccTx
   * @return newcoinAccTx
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinAccTx() {
    return newcoinAccTx;
  }

  public void setNewcoinAccTx(String newcoinAccTx) {
    this.newcoinAccTx = newcoinAccTx;
  }

  public PagedRatedResponseUserValue latitude(BigDecimal latitude) {
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

  public PagedRatedResponseUserValue rating(PagedRatedResponseUserRating rating) {
    this.rating = rating;
    return this;
  }

   /**
   * Get rating
   * @return rating
  **/
  @ApiModelProperty(value = "")
  public PagedRatedResponseUserRating getRating() {
    return rating;
  }

  public void setRating(PagedRatedResponseUserRating rating) {
    this.rating = rating;
  }

  public PagedRatedResponseUserValue tumblr(String tumblr) {
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

  public PagedRatedResponseUserValue description(String description) {
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

  public PagedRatedResponseUserValue newcoinPoolId(String newcoinPoolId) {
    this.newcoinPoolId = newcoinPoolId;
    return this;
  }

   /**
   * Get newcoinPoolId
   * @return newcoinPoolId
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinPoolId() {
    return newcoinPoolId;
  }

  public void setNewcoinPoolId(String newcoinPoolId) {
    this.newcoinPoolId = newcoinPoolId;
  }

  public PagedRatedResponseUserValue aspectRatio(BigDecimal aspectRatio) {
    this.aspectRatio = aspectRatio;
    return this;
  }

   /**
   * Get aspectRatio
   * @return aspectRatio
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getAspectRatio() {
    return aspectRatio;
  }

  public void setAspectRatio(BigDecimal aspectRatio) {
    this.aspectRatio = aspectRatio;
  }

  public PagedRatedResponseUserValue instagram(String instagram) {
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

  public PagedRatedResponseUserValue soundcloud(String soundcloud) {
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

  public PagedRatedResponseUserValue newcoinActivePublicKey(String newcoinActivePublicKey) {
    this.newcoinActivePublicKey = newcoinActivePublicKey;
    return this;
  }

   /**
   * Get newcoinActivePublicKey
   * @return newcoinActivePublicKey
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinActivePublicKey() {
    return newcoinActivePublicKey;
  }

  public void setNewcoinActivePublicKey(String newcoinActivePublicKey) {
    this.newcoinActivePublicKey = newcoinActivePublicKey;
  }

  public PagedRatedResponseUserValue newcoinPublicKey(String newcoinPublicKey) {
    this.newcoinPublicKey = newcoinPublicKey;
    return this;
  }

   /**
   * Get newcoinPublicKey
   * @return newcoinPublicKey
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinPublicKey() {
    return newcoinPublicKey;
  }

  public void setNewcoinPublicKey(String newcoinPublicKey) {
    this.newcoinPublicKey = newcoinPublicKey;
  }

  public PagedRatedResponseUserValue powering(BigDecimal powering) {
    this.powering = powering;
    return this;
  }

   /**
   * Get powering
   * @return powering
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPowering() {
    return powering;
  }

  public void setPowering(BigDecimal powering) {
    this.powering = powering;
  }

  public PagedRatedResponseUserValue twitter(String twitter) {
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

  public PagedRatedResponseUserValue newcoinOwnerPublicKey(String newcoinOwnerPublicKey) {
    this.newcoinOwnerPublicKey = newcoinOwnerPublicKey;
    return this;
  }

   /**
   * Get newcoinOwnerPublicKey
   * @return newcoinOwnerPublicKey
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinOwnerPublicKey() {
    return newcoinOwnerPublicKey;
  }

  public void setNewcoinOwnerPublicKey(String newcoinOwnerPublicKey) {
    this.newcoinOwnerPublicKey = newcoinOwnerPublicKey;
  }

  public PagedRatedResponseUserValue tiktok(String tiktok) {
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

  public PagedRatedResponseUserValue id(String id) {
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public PagedRatedResponseUserValue newcoinPoolStake(BigDecimal newcoinPoolStake) {
    this.newcoinPoolStake = newcoinPoolStake;
    return this;
  }

   /**
   * Get newcoinPoolStake
   * @return newcoinPoolStake
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getNewcoinPoolStake() {
    return newcoinPoolStake;
  }

  public void setNewcoinPoolStake(BigDecimal newcoinPoolStake) {
    this.newcoinPoolStake = newcoinPoolStake;
  }

  public PagedRatedResponseUserValue contentType(String contentType) {
    this.contentType = contentType;
    return this;
  }

   /**
   * Get contentType
   * @return contentType
  **/
  @ApiModelProperty(value = "")
  public String getContentType() {
    return contentType;
  }

  public void setContentType(String contentType) {
    this.contentType = contentType;
  }

  public PagedRatedResponseUserValue longitude(BigDecimal longitude) {
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

  public PagedRatedResponseUserValue newcoinPublisherPublicKey(String newcoinPublisherPublicKey) {
    this.newcoinPublisherPublicKey = newcoinPublisherPublicKey;
    return this;
  }

   /**
   * Get newcoinPublisherPublicKey
   * @return newcoinPublisherPublicKey
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinPublisherPublicKey() {
    return newcoinPublisherPublicKey;
  }

  public void setNewcoinPublisherPublicKey(String newcoinPublisherPublicKey) {
    this.newcoinPublisherPublicKey = newcoinPublisherPublicKey;
  }

  public PagedRatedResponseUserValue website(String website) {
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

  public PagedRatedResponseUserValue created(String created) {
    this.created = created;
    return this;
  }

   /**
   * Get created
   * @return created
  **/
  @ApiModelProperty(value = "")
  public String getCreated() {
    return created;
  }

  public void setCreated(String created) {
    this.created = created;
  }

  public PagedRatedResponseUserValue fullName(String fullName) {
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

  public PagedRatedResponseUserValue newcoinPoolTx(String newcoinPoolTx) {
    this.newcoinPoolTx = newcoinPoolTx;
    return this;
  }

   /**
   * Get newcoinPoolTx
   * @return newcoinPoolTx
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinPoolTx() {
    return newcoinPoolTx;
  }

  public void setNewcoinPoolTx(String newcoinPoolTx) {
    this.newcoinPoolTx = newcoinPoolTx;
  }

  public PagedRatedResponseUserValue license(String license) {
    this.license = license;
    return this;
  }

   /**
   * Get license
   * @return license
  **/
  @ApiModelProperty(value = "")
  public String getLicense() {
    return license;
  }

  public void setLicense(String license) {
    this.license = license;
  }

  public PagedRatedResponseUserValue contentUrl(String contentUrl) {
    this.contentUrl = contentUrl;
    return this;
  }

   /**
   * Get contentUrl
   * @return contentUrl
  **/
  @ApiModelProperty(value = "")
  public String getContentUrl() {
    return contentUrl;
  }

  public void setContentUrl(String contentUrl) {
    this.contentUrl = contentUrl;
  }

  public PagedRatedResponseUserValue blurHash(String blurHash) {
    this.blurHash = blurHash;
    return this;
  }

   /**
   * Get blurHash
   * @return blurHash
  **/
  @ApiModelProperty(value = "")
  public String getBlurHash() {
    return blurHash;
  }

  public void setBlurHash(String blurHash) {
    this.blurHash = blurHash;
  }

  public PagedRatedResponseUserValue consentEmail(String consentEmail) {
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

  public PagedRatedResponseUserValue updated(String updated) {
    this.updated = updated;
    return this;
  }

   /**
   * Get updated
   * @return updated
  **/
  @ApiModelProperty(value = "")
  public String getUpdated() {
    return updated;
  }

  public void setUpdated(String updated) {
    this.updated = updated;
  }

  public PagedRatedResponseUserValue username(String username) {
    this.username = username;
    return this;
  }

   /**
   * Get username
   * @return username
  **/
  @ApiModelProperty(value = "")
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
    PagedRatedResponseUserValue pagedRatedResponseUserValue = (PagedRatedResponseUserValue) o;
    return Objects.equals(this.powered, pagedRatedResponseUserValue.powered) &&
        Objects.equals(this.displayName, pagedRatedResponseUserValue.displayName) &&
        Objects.equals(this.newcoinAccTx, pagedRatedResponseUserValue.newcoinAccTx) &&
        Objects.equals(this.latitude, pagedRatedResponseUserValue.latitude) &&
        Objects.equals(this.rating, pagedRatedResponseUserValue.rating) &&
        Objects.equals(this.tumblr, pagedRatedResponseUserValue.tumblr) &&
        Objects.equals(this.description, pagedRatedResponseUserValue.description) &&
        Objects.equals(this.newcoinPoolId, pagedRatedResponseUserValue.newcoinPoolId) &&
        Objects.equals(this.aspectRatio, pagedRatedResponseUserValue.aspectRatio) &&
        Objects.equals(this.instagram, pagedRatedResponseUserValue.instagram) &&
        Objects.equals(this.soundcloud, pagedRatedResponseUserValue.soundcloud) &&
        Objects.equals(this.newcoinActivePublicKey, pagedRatedResponseUserValue.newcoinActivePublicKey) &&
        Objects.equals(this.newcoinPublicKey, pagedRatedResponseUserValue.newcoinPublicKey) &&
        Objects.equals(this.powering, pagedRatedResponseUserValue.powering) &&
        Objects.equals(this.twitter, pagedRatedResponseUserValue.twitter) &&
        Objects.equals(this.newcoinOwnerPublicKey, pagedRatedResponseUserValue.newcoinOwnerPublicKey) &&
        Objects.equals(this.tiktok, pagedRatedResponseUserValue.tiktok) &&
        Objects.equals(this.id, pagedRatedResponseUserValue.id) &&
        Objects.equals(this.newcoinPoolStake, pagedRatedResponseUserValue.newcoinPoolStake) &&
        Objects.equals(this.contentType, pagedRatedResponseUserValue.contentType) &&
        Objects.equals(this.longitude, pagedRatedResponseUserValue.longitude) &&
        Objects.equals(this.newcoinPublisherPublicKey, pagedRatedResponseUserValue.newcoinPublisherPublicKey) &&
        Objects.equals(this.website, pagedRatedResponseUserValue.website) &&
        Objects.equals(this.created, pagedRatedResponseUserValue.created) &&
        Objects.equals(this.fullName, pagedRatedResponseUserValue.fullName) &&
        Objects.equals(this.newcoinPoolTx, pagedRatedResponseUserValue.newcoinPoolTx) &&
        Objects.equals(this.license, pagedRatedResponseUserValue.license) &&
        Objects.equals(this.contentUrl, pagedRatedResponseUserValue.contentUrl) &&
        Objects.equals(this.blurHash, pagedRatedResponseUserValue.blurHash) &&
        Objects.equals(this.consentEmail, pagedRatedResponseUserValue.consentEmail) &&
        Objects.equals(this.updated, pagedRatedResponseUserValue.updated) &&
        Objects.equals(this.username, pagedRatedResponseUserValue.username);
  }

  @Override
  public int hashCode() {
    return Objects.hash(powered, displayName, newcoinAccTx, latitude, rating, tumblr, description, newcoinPoolId, aspectRatio, instagram, soundcloud, newcoinActivePublicKey, newcoinPublicKey, powering, twitter, newcoinOwnerPublicKey, tiktok, id, newcoinPoolStake, contentType, longitude, newcoinPublisherPublicKey, website, created, fullName, newcoinPoolTx, license, contentUrl, blurHash, consentEmail, updated, username);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PagedRatedResponseUserValue {\n");
    
    sb.append("    powered: ").append(toIndentedString(powered)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    newcoinAccTx: ").append(toIndentedString(newcoinAccTx)).append("\n");
    sb.append("    latitude: ").append(toIndentedString(latitude)).append("\n");
    sb.append("    rating: ").append(toIndentedString(rating)).append("\n");
    sb.append("    tumblr: ").append(toIndentedString(tumblr)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    newcoinPoolId: ").append(toIndentedString(newcoinPoolId)).append("\n");
    sb.append("    aspectRatio: ").append(toIndentedString(aspectRatio)).append("\n");
    sb.append("    instagram: ").append(toIndentedString(instagram)).append("\n");
    sb.append("    soundcloud: ").append(toIndentedString(soundcloud)).append("\n");
    sb.append("    newcoinActivePublicKey: ").append(toIndentedString(newcoinActivePublicKey)).append("\n");
    sb.append("    newcoinPublicKey: ").append(toIndentedString(newcoinPublicKey)).append("\n");
    sb.append("    powering: ").append(toIndentedString(powering)).append("\n");
    sb.append("    twitter: ").append(toIndentedString(twitter)).append("\n");
    sb.append("    newcoinOwnerPublicKey: ").append(toIndentedString(newcoinOwnerPublicKey)).append("\n");
    sb.append("    tiktok: ").append(toIndentedString(tiktok)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    newcoinPoolStake: ").append(toIndentedString(newcoinPoolStake)).append("\n");
    sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
    sb.append("    longitude: ").append(toIndentedString(longitude)).append("\n");
    sb.append("    newcoinPublisherPublicKey: ").append(toIndentedString(newcoinPublisherPublicKey)).append("\n");
    sb.append("    website: ").append(toIndentedString(website)).append("\n");
    sb.append("    created: ").append(toIndentedString(created)).append("\n");
    sb.append("    fullName: ").append(toIndentedString(fullName)).append("\n");
    sb.append("    newcoinPoolTx: ").append(toIndentedString(newcoinPoolTx)).append("\n");
    sb.append("    license: ").append(toIndentedString(license)).append("\n");
    sb.append("    contentUrl: ").append(toIndentedString(contentUrl)).append("\n");
    sb.append("    blurHash: ").append(toIndentedString(blurHash)).append("\n");
    sb.append("    consentEmail: ").append(toIndentedString(consentEmail)).append("\n");
    sb.append("    updated: ").append(toIndentedString(updated)).append("\n");
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

