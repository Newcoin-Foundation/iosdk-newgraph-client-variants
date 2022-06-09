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
 * BcAuthEthResponse
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-05-24T15:32:28.129Z")
public class BcAuthEthResponse {
  @SerializedName("result")
  private Boolean result = null;

  @SerializedName("signedAddr")
  private String signedAddr = null;

  @SerializedName("comment")
  private String comment = null;

  @SerializedName("owningAddr")
  private String owningAddr = null;

  public BcAuthEthResponse result(Boolean result) {
    this.result = result;
    return this;
  }

   /**
   * Get result
   * @return result
  **/
  @ApiModelProperty(required = true, value = "")
  public Boolean isResult() {
    return result;
  }

  public void setResult(Boolean result) {
    this.result = result;
  }

  public BcAuthEthResponse signedAddr(String signedAddr) {
    this.signedAddr = signedAddr;
    return this;
  }

   /**
   * Get signedAddr
   * @return signedAddr
  **/
  @ApiModelProperty(value = "")
  public String getSignedAddr() {
    return signedAddr;
  }

  public void setSignedAddr(String signedAddr) {
    this.signedAddr = signedAddr;
  }

  public BcAuthEthResponse comment(String comment) {
    this.comment = comment;
    return this;
  }

   /**
   * Get comment
   * @return comment
  **/
  @ApiModelProperty(value = "")
  public String getComment() {
    return comment;
  }

  public void setComment(String comment) {
    this.comment = comment;
  }

  public BcAuthEthResponse owningAddr(String owningAddr) {
    this.owningAddr = owningAddr;
    return this;
  }

   /**
   * Get owningAddr
   * @return owningAddr
  **/
  @ApiModelProperty(value = "")
  public String getOwningAddr() {
    return owningAddr;
  }

  public void setOwningAddr(String owningAddr) {
    this.owningAddr = owningAddr;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BcAuthEthResponse bcAuthEthResponse = (BcAuthEthResponse) o;
    return Objects.equals(this.result, bcAuthEthResponse.result) &&
        Objects.equals(this.signedAddr, bcAuthEthResponse.signedAddr) &&
        Objects.equals(this.comment, bcAuthEthResponse.comment) &&
        Objects.equals(this.owningAddr, bcAuthEthResponse.owningAddr);
  }

  @Override
  public int hashCode() {
    return Objects.hash(result, signedAddr, comment, owningAddr);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BcAuthEthResponse {\n");
    
    sb.append("    result: ").append(toIndentedString(result)).append("\n");
    sb.append("    signedAddr: ").append(toIndentedString(signedAddr)).append("\n");
    sb.append("    comment: ").append(toIndentedString(comment)).append("\n");
    sb.append("    owningAddr: ").append(toIndentedString(owningAddr)).append("\n");
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
