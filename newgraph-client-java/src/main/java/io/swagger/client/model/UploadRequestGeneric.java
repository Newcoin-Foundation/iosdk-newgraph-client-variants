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
 * UploadRequestGeneric Model
 */
@ApiModel(description = "UploadRequestGeneric Model")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-05-24T15:32:28.129Z")
public class UploadRequestGeneric {
  @SerializedName("filename")
  private String filename = null;

  @SerializedName("targetId")
  private String targetId = null;

  @SerializedName("contentType")
  private String contentType = null;

  public UploadRequestGeneric filename(String filename) {
    this.filename = filename;
    return this;
  }

   /**
   * Get filename
   * @return filename
  **/
  @ApiModelProperty(required = true, value = "")
  public String getFilename() {
    return filename;
  }

  public void setFilename(String filename) {
    this.filename = filename;
  }

  public UploadRequestGeneric targetId(String targetId) {
    this.targetId = targetId;
    return this;
  }

   /**
   * Get targetId
   * @return targetId
  **/
  @ApiModelProperty(required = true, value = "")
  public String getTargetId() {
    return targetId;
  }

  public void setTargetId(String targetId) {
    this.targetId = targetId;
  }

  public UploadRequestGeneric contentType(String contentType) {
    this.contentType = contentType;
    return this;
  }

   /**
   * Get contentType
   * @return contentType
  **/
  @ApiModelProperty(required = true, value = "")
  public String getContentType() {
    return contentType;
  }

  public void setContentType(String contentType) {
    this.contentType = contentType;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    UploadRequestGeneric uploadRequestGeneric = (UploadRequestGeneric) o;
    return Objects.equals(this.filename, uploadRequestGeneric.filename) &&
        Objects.equals(this.targetId, uploadRequestGeneric.targetId) &&
        Objects.equals(this.contentType, uploadRequestGeneric.contentType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(filename, targetId, contentType);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class UploadRequestGeneric {\n");
    
    sb.append("    filename: ").append(toIndentedString(filename)).append("\n");
    sb.append("    targetId: ").append(toIndentedString(targetId)).append("\n");
    sb.append("    contentType: ").append(toIndentedString(contentType)).append("\n");
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

