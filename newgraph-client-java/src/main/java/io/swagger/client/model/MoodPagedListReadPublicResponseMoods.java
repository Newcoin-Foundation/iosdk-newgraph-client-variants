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
import io.swagger.client.model.MoodPagedListReadPublicResponseTags;
import java.io.IOException;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;

/**
 * MoodPagedListReadPublicResponseMoods
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-05-24T15:32:28.129Z")
public class MoodPagedListReadPublicResponseMoods {
  @SerializedName("created")
  private String created = null;

  @SerializedName("author")
  private MoodPagedListReadPublicResponseAuthor author = null;

  @SerializedName("latitude")
  private BigDecimal latitude = null;

  @SerializedName("description")
  private String description = null;

  @SerializedName("aspectRatio")
  private BigDecimal aspectRatio = null;

  @SerializedName("title")
  private String title = null;

  @SerializedName("content")
  private String content = null;

  @SerializedName("stakeToAccess")
  private BigDecimal stakeToAccess = null;

  @SerializedName("tags")
  private List<MoodPagedListReadPublicResponseTags> tags = null;

  @SerializedName("contentUrl")
  private String contentUrl = null;

  @SerializedName("postsCount")
  private BigDecimal postsCount = null;

  @SerializedName("blurHash")
  private String blurHash = null;

  @SerializedName("id")
  private String id = null;

  @SerializedName("updated")
  private String updated = null;

  @SerializedName("contentType")
  private String contentType = null;

  @SerializedName("longitude")
  private BigDecimal longitude = null;

  public MoodPagedListReadPublicResponseMoods created(String created) {
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

  public MoodPagedListReadPublicResponseMoods author(MoodPagedListReadPublicResponseAuthor author) {
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

  public MoodPagedListReadPublicResponseMoods latitude(BigDecimal latitude) {
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

  public MoodPagedListReadPublicResponseMoods description(String description) {
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

  public MoodPagedListReadPublicResponseMoods aspectRatio(BigDecimal aspectRatio) {
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

  public MoodPagedListReadPublicResponseMoods title(String title) {
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

  public MoodPagedListReadPublicResponseMoods content(String content) {
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

  public MoodPagedListReadPublicResponseMoods stakeToAccess(BigDecimal stakeToAccess) {
    this.stakeToAccess = stakeToAccess;
    return this;
  }

   /**
   * Get stakeToAccess
   * @return stakeToAccess
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getStakeToAccess() {
    return stakeToAccess;
  }

  public void setStakeToAccess(BigDecimal stakeToAccess) {
    this.stakeToAccess = stakeToAccess;
  }

  public MoodPagedListReadPublicResponseMoods tags(List<MoodPagedListReadPublicResponseTags> tags) {
    this.tags = tags;
    return this;
  }

  public MoodPagedListReadPublicResponseMoods addTagsItem(MoodPagedListReadPublicResponseTags tagsItem) {
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

  public MoodPagedListReadPublicResponseMoods contentUrl(String contentUrl) {
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

  public MoodPagedListReadPublicResponseMoods postsCount(BigDecimal postsCount) {
    this.postsCount = postsCount;
    return this;
  }

   /**
   * Get postsCount
   * @return postsCount
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPostsCount() {
    return postsCount;
  }

  public void setPostsCount(BigDecimal postsCount) {
    this.postsCount = postsCount;
  }

  public MoodPagedListReadPublicResponseMoods blurHash(String blurHash) {
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

  public MoodPagedListReadPublicResponseMoods id(String id) {
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

  public MoodPagedListReadPublicResponseMoods updated(String updated) {
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

  public MoodPagedListReadPublicResponseMoods contentType(String contentType) {
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

  public MoodPagedListReadPublicResponseMoods longitude(BigDecimal longitude) {
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
    MoodPagedListReadPublicResponseMoods moodPagedListReadPublicResponseMoods = (MoodPagedListReadPublicResponseMoods) o;
    return Objects.equals(this.created, moodPagedListReadPublicResponseMoods.created) &&
        Objects.equals(this.author, moodPagedListReadPublicResponseMoods.author) &&
        Objects.equals(this.latitude, moodPagedListReadPublicResponseMoods.latitude) &&
        Objects.equals(this.description, moodPagedListReadPublicResponseMoods.description) &&
        Objects.equals(this.aspectRatio, moodPagedListReadPublicResponseMoods.aspectRatio) &&
        Objects.equals(this.title, moodPagedListReadPublicResponseMoods.title) &&
        Objects.equals(this.content, moodPagedListReadPublicResponseMoods.content) &&
        Objects.equals(this.stakeToAccess, moodPagedListReadPublicResponseMoods.stakeToAccess) &&
        Objects.equals(this.tags, moodPagedListReadPublicResponseMoods.tags) &&
        Objects.equals(this.contentUrl, moodPagedListReadPublicResponseMoods.contentUrl) &&
        Objects.equals(this.postsCount, moodPagedListReadPublicResponseMoods.postsCount) &&
        Objects.equals(this.blurHash, moodPagedListReadPublicResponseMoods.blurHash) &&
        Objects.equals(this.id, moodPagedListReadPublicResponseMoods.id) &&
        Objects.equals(this.updated, moodPagedListReadPublicResponseMoods.updated) &&
        Objects.equals(this.contentType, moodPagedListReadPublicResponseMoods.contentType) &&
        Objects.equals(this.longitude, moodPagedListReadPublicResponseMoods.longitude);
  }

  @Override
  public int hashCode() {
    return Objects.hash(created, author, latitude, description, aspectRatio, title, content, stakeToAccess, tags, contentUrl, postsCount, blurHash, id, updated, contentType, longitude);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MoodPagedListReadPublicResponseMoods {\n");
    
    sb.append("    created: ").append(toIndentedString(created)).append("\n");
    sb.append("    author: ").append(toIndentedString(author)).append("\n");
    sb.append("    latitude: ").append(toIndentedString(latitude)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    aspectRatio: ").append(toIndentedString(aspectRatio)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    content: ").append(toIndentedString(content)).append("\n");
    sb.append("    stakeToAccess: ").append(toIndentedString(stakeToAccess)).append("\n");
    sb.append("    tags: ").append(toIndentedString(tags)).append("\n");
    sb.append("    contentUrl: ").append(toIndentedString(contentUrl)).append("\n");
    sb.append("    postsCount: ").append(toIndentedString(postsCount)).append("\n");
    sb.append("    blurHash: ").append(toIndentedString(blurHash)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
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

