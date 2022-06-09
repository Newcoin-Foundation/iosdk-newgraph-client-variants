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
 * BcCreateDaoRequest
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-05-24T15:32:28.129Z")
public class BcCreateDaoRequest {
  @SerializedName("descr")
  private String descr = null;

  @SerializedName("authpr_prv_key")
  private String authprPrvKey = null;

  @SerializedName("author")
  private String author = null;

  @SerializedName("token")
  private String token = null;

  public BcCreateDaoRequest descr(String descr) {
    this.descr = descr;
    return this;
  }

   /**
   * Get descr
   * @return descr
  **/
  @ApiModelProperty(value = "")
  public String getDescr() {
    return descr;
  }

  public void setDescr(String descr) {
    this.descr = descr;
  }

  public BcCreateDaoRequest authprPrvKey(String authprPrvKey) {
    this.authprPrvKey = authprPrvKey;
    return this;
  }

   /**
   * Get authprPrvKey
   * @return authprPrvKey
  **/
  @ApiModelProperty(value = "")
  public String getAuthprPrvKey() {
    return authprPrvKey;
  }

  public void setAuthprPrvKey(String authprPrvKey) {
    this.authprPrvKey = authprPrvKey;
  }

  public BcCreateDaoRequest author(String author) {
    this.author = author;
    return this;
  }

   /**
   * Get author
   * @return author
  **/
  @ApiModelProperty(value = "")
  public String getAuthor() {
    return author;
  }

  public void setAuthor(String author) {
    this.author = author;
  }

  public BcCreateDaoRequest token(String token) {
    this.token = token;
    return this;
  }

   /**
   * Get token
   * @return token
  **/
  @ApiModelProperty(value = "")
  public String getToken() {
    return token;
  }

  public void setToken(String token) {
    this.token = token;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BcCreateDaoRequest bcCreateDaoRequest = (BcCreateDaoRequest) o;
    return Objects.equals(this.descr, bcCreateDaoRequest.descr) &&
        Objects.equals(this.authprPrvKey, bcCreateDaoRequest.authprPrvKey) &&
        Objects.equals(this.author, bcCreateDaoRequest.author) &&
        Objects.equals(this.token, bcCreateDaoRequest.token);
  }

  @Override
  public int hashCode() {
    return Objects.hash(descr, authprPrvKey, author, token);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BcCreateDaoRequest {\n");
    
    sb.append("    descr: ").append(toIndentedString(descr)).append("\n");
    sb.append("    authprPrvKey: ").append(toIndentedString(authprPrvKey)).append("\n");
    sb.append("    author: ").append(toIndentedString(author)).append("\n");
    sb.append("    token: ").append(toIndentedString(token)).append("\n");
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
