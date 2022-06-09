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

/**
 * PostCreateRequest Model
 */
@ApiModel(description = "PostCreateRequest Model")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-05-24T15:32:28.129Z")
public class PostCreateRequest {
  @SerializedName("license")
  private String license = null;

  @SerializedName("doMint")
  private String doMint = null;

  @SerializedName("description")
  private String description = null;

  @SerializedName("title")
  private String title = null;

  @SerializedName("contentType")
  private String contentType = null;

  @SerializedName("content")
  private String content = null;

  public PostCreateRequest license(String license) {
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

  public PostCreateRequest doMint(String doMint) {
    this.doMint = doMint;
    return this;
  }

   /**
   * Get doMint
   * @return doMint
  **/
  @ApiModelProperty(value = "")
  public String getDoMint() {
    return doMint;
  }

  public void setDoMint(String doMint) {
    this.doMint = doMint;
  }

  public PostCreateRequest description(String description) {
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

  public PostCreateRequest title(String title) {
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

  public PostCreateRequest contentType(String contentType) {
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

  public PostCreateRequest content(String content) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PostCreateRequest postCreateRequest = (PostCreateRequest) o;
    return Objects.equals(this.license, postCreateRequest.license) &&
        Objects.equals(this.doMint, postCreateRequest.doMint) &&
        Objects.equals(this.description, postCreateRequest.description) &&
        Objects.equals(this.title, postCreateRequest.title) &&
        Objects.equals(this.contentType, postCreateRequest.contentType) &&
        Objects.equals(this.content, postCreateRequest.content);
  }

  @Override
  public int hashCode() {
    return Objects.hash(license, doMint, description, title, contentType, content);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PostCreateRequest {\n");
    
    sb.append("    license: ").append(toIndentedString(license)).append("\n");
    sb.append("    doMint: ").append(toIndentedString(doMint)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    title: ").append(toIndentedString(title)).append("\n");
    sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
    sb.append("    content: ").append(toIndentedString(content)).append("\n");
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

