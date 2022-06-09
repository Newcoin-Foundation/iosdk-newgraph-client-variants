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
import io.swagger.client.model.MoodPagedListReadPublicResponseAuthor;
import io.swagger.client.model.MoodPagedListReadPublicResponseMoods;
import io.swagger.client.model.MoodPagedListReadPublicResponseTags;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;

/**
 * MoodPagedListReadPublicResponsePosts
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-05-24T15:32:28.129Z")
public class MoodPagedListReadPublicResponsePosts {
  @SerializedName("coverContentUrl")
  private String coverContentUrl = null;

  @SerializedName("moodId")
  private String moodId = null;

  @SerializedName("created")
  private String created = null;

  @SerializedName("author")
  private MoodPagedListReadPublicResponseAuthor author = null;

  @SerializedName("latitude")
  private BigDecimal latitude = null;

  @SerializedName("moods")
  private List<MoodPagedListReadPublicResponseMoods> moods = null;

  @SerializedName("description")
  private String description = null;

  @SerializedName("aspectRatio")
  private BigDecimal aspectRatio = null;

  @SerializedName("title")
  private String title = null;

  @SerializedName("content")
  private String content = null;

  @SerializedName("tags")
  private List<MoodPagedListReadPublicResponseTags> tags = null;

  @SerializedName("license")
  private String license = null;

  @SerializedName("contentUrl")
  private String contentUrl = null;

  @SerializedName("blurHash")
  private String blurHash = null;

  @SerializedName("newcoinMintTx")
  private String newcoinMintTx = null;

  @SerializedName("id")
  private String id = null;

  @SerializedName("consentEmail")
  private String consentEmail = null;

  @SerializedName("updated")
  private String updated = null;

  @SerializedName("contentType")
  private String contentType = null;

  @SerializedName("longitude")
  private BigDecimal longitude = null;

  public MoodPagedListReadPublicResponsePosts coverContentUrl(String coverContentUrl) {
    this.coverContentUrl = coverContentUrl;
    return this;
  }

   /**
   * Get coverContentUrl
   * @return coverContentUrl
  **/
  @ApiModelProperty(value = "")
  public String getCoverContentUrl() {
    return coverContentUrl;
  }

  public void setCoverContentUrl(String coverContentUrl) {
    this.coverContentUrl = coverContentUrl;
  }

  public MoodPagedListReadPublicResponsePosts moodId(String moodId) {
    this.moodId = moodId;
    return this;
  }

   /**
   * Get moodId
   * @return moodId
  **/
  @ApiModelProperty(value = "")
  public String getMoodId() {
    return moodId;
  }

  public void setMoodId(String moodId) {
    this.moodId = moodId;
  }

  public MoodPagedListReadPublicResponsePosts created(String created) {
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

  public MoodPagedListReadPublicResponsePosts author(MoodPagedListReadPublicResponseAuthor author) {
    this.author = author;
    return this;
  }

   /**
   * Get author
   * @return author
  **/
  @ApiModelProperty(value = "")
  public MoodPagedListReadPublicResponseAuthor getAuthor() {
    return author;
  }

  public void setAuthor(MoodPagedListReadPublicResponseAuthor author) {
    this.author = author;
  }

  public MoodPagedListReadPublicResponsePosts latitude(BigDecimal latitude) {
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

  public MoodPagedListReadPublicResponsePosts moods(List<MoodPagedListReadPublicResponseMoods> moods) {
    this.moods = moods;
    return this;
  }

  public MoodPagedListReadPublicResponsePosts addMoodsItem(MoodPagedListReadPublicResponseMoods moodsItem) {
    if (this.moods == null) {
      this.moods = new ArrayList<MoodPagedListReadPublicResponseMoods>();
    }
    this.moods.add(moodsItem);
    return this;
  }

   /**
   * Get moods
   * @return moods
  **/
  @ApiModelProperty(value = "")
  public List<MoodPagedListReadPublicResponseMoods> getMoods() {
    return moods;
  }

  public void setMoods(List<MoodPagedListReadPublicResponseMoods> moods) {
    this.moods = moods;
  }

  public MoodPagedListReadPublicResponsePosts description(String description) {
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

  public MoodPagedListReadPublicResponsePosts aspectRatio(BigDecimal aspectRatio) {
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

  public MoodPagedListReadPublicResponsePosts title(String title) {
    this.title = title;
    return this;
  }

   /**
   * Get title
   * @return title
  **/
  @ApiModelProperty(value = "")
  public String getTitle() {
    return title;
  }

  public void setTitle(String title) {
    this.title = title;
  }

  public MoodPagedListReadPublicResponsePosts content(String content) {
    this.content = content;
    return this;
  }

   /**
   * Get content
   * @return content
  **/
  @ApiModelProperty(value = "")
  public String getContent() {
    return content;
  }

  public void setContent(String content) {
    this.content = content;
  }

  public MoodPagedListReadPublicResponsePosts tags(List<MoodPagedListReadPublicResponseTags> tags) {
    this.tags = tags;
    return this;
  }

  public MoodPagedListReadPublicResponsePosts addTagsItem(MoodPagedListReadPublicResponseTags tagsItem) {
    if (this.tags == null) {
      this.tags = new ArrayList<MoodPagedListReadPublicResponseTags>();
    }
    this.tags.add(tagsItem);
    return this;
  }

   /**
   * Get tags
   * @return tags
  **/
  @ApiModelProperty(value = "")
  public List<MoodPagedListReadPublicResponseTags> getTags() {
    return tags;
  }

  public void setTags(List<MoodPagedListReadPublicResponseTags> tags) {
    this.tags = tags;
  }

  public MoodPagedListReadPublicResponsePosts license(String license) {
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

  public MoodPagedListReadPublicResponsePosts contentUrl(String contentUrl) {
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

  public MoodPagedListReadPublicResponsePosts blurHash(String blurHash) {
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

  public MoodPagedListReadPublicResponsePosts newcoinMintTx(String newcoinMintTx) {
    this.newcoinMintTx = newcoinMintTx;
    return this;
  }

   /**
   * Get newcoinMintTx
   * @return newcoinMintTx
  **/
  @ApiModelProperty(value = "")
  public String getNewcoinMintTx() {
    return newcoinMintTx;
  }

  public void setNewcoinMintTx(String newcoinMintTx) {
    this.newcoinMintTx = newcoinMintTx;
  }

  public MoodPagedListReadPublicResponsePosts id(String id) {
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

  public MoodPagedListReadPublicResponsePosts consentEmail(String consentEmail) {
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

  public MoodPagedListReadPublicResponsePosts updated(String updated) {
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

  public MoodPagedListReadPublicResponsePosts contentType(String contentType) {
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

  public MoodPagedListReadPublicResponsePosts longitude(BigDecimal longitude) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MoodPagedListReadPublicResponsePosts moodPagedListReadPublicResponsePosts = (MoodPagedListReadPublicResponsePosts) o;
    return Objects.equals(this.coverContentUrl, moodPagedListReadPublicResponsePosts.coverContentUrl) &&
        Objects.equals(this.moodId, moodPagedListReadPublicResponsePosts.moodId) &&
        Objects.equals(this.created, moodPagedListReadPublicResponsePosts.created) &&
        Objects.equals(this.author, moodPagedListReadPublicResponsePosts.author) &&
        Objects.equals(this.latitude, moodPagedListReadPublicResponsePosts.latitude) &&
        Objects.equals(this.moods, moodPagedListReadPublicResponsePosts.moods) &&
        Objects.equals(this.description, moodPagedListReadPublicResponsePosts.description) &&
        Objects.equals(this.aspectRatio, moodPagedListReadPublicResponsePosts.aspectRatio) &&
        Objects.equals(this.title, moodPagedListReadPublicResponsePosts.title) &&
        Objects.equals(this.content, moodPagedListReadPublicResponsePosts.content) &&
        Objects.equals(this.tags, moodPagedListReadPublicResponsePosts.tags) &&
        Objects.equals(this.license, moodPagedListReadPublicResponsePosts.license) &&
        Objects.equals(this.contentUrl, moodPagedListReadPublicResponsePosts.contentUrl) &&
        Objects.equals(this.blurHash, moodPagedListReadPublicResponsePosts.blurHash) &&
        Objects.equals(this.newcoinMintTx, moodPagedListReadPublicResponsePosts.newcoinMintTx) &&
        Objects.equals(this.id, moodPagedListReadPublicResponsePosts.id) &&
        Objects.equals(this.consentEmail, moodPagedListReadPublicResponsePosts.consentEmail) &&
        Objects.equals(this.updated, moodPagedListReadPublicResponsePosts.updated) &&
        Objects.equals(this.contentType, moodPagedListReadPublicResponsePosts.contentType) &&
        Objects.equals(this.longitude, moodPagedListReadPublicResponsePosts.longitude);
  }

  @Override
  public int hashCode() {
    return Objects.hash(coverContentUrl, moodId, created, author, latitude, moods, description, aspectRatio, title, content, tags, license, contentUrl, blurHash, newcoinMintTx, id, consentEmail, updated, contentType, longitude);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MoodPagedListReadPublicResponsePosts {\n");
    
    sb.append("    coverContentUrl: ").append(toIndentedString(coverContentUrl)).append("\n");
    sb.append("    moodId: ").append(toIndentedString(moodId)).append("\n");
    sb.append("    created: ").append(toIndentedString(created)).append("\n");
    sb.append("    author: ").append(toIndentedString(author)).append("\n");
    sb.append("    latitude: ").append(toIndentedString(latitude)).append("\n");
    sb.append("    moods: ").append(toIndentedString(moods)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    aspectRatio: ").append(toIndentedString(aspectRatio)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    content: ").append(toIndentedString(content)).append("\n");
    sb.append("    tags: ").append(toIndentedString(tags)).append("\n");
    sb.append("    license: ").append(toIndentedString(license)).append("\n");
    sb.append("    contentUrl: ").append(toIndentedString(contentUrl)).append("\n");
    sb.append("    blurHash: ").append(toIndentedString(blurHash)).append("\n");
    sb.append("    newcoinMintTx: ").append(toIndentedString(newcoinMintTx)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    consentEmail: ").append(toIndentedString(consentEmail)).append("\n");
    sb.append("    updated: ").append(toIndentedString(updated)).append("\n");
    sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
    sb.append("    longitude: ").append(toIndentedString(longitude)).append("\n");
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

