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
import java.io.IOException;

/**
 * BcCreateWhitelistDaoProposal Model
 */
@ApiModel(description = "BcCreateWhitelistDaoProposal Model")
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-06-09T15:29:41.671Z")
public class BcCreateWhitelistDaoProposal {
  @SerializedName("quantity")
  private String quantity = null;

  @SerializedName("proposer")
  private String proposer = null;

  @SerializedName("vote_start")
  private String voteStart = null;

  @SerializedName("dao_id")
  private String daoId = null;

  @SerializedName("dao_owner")
  private String daoOwner = null;

  @SerializedName("vote_end")
  private String voteEnd = null;

  @SerializedName("user")
  private String user = null;

  @SerializedName("proposer_prv_key")
  private String proposerPrvKey = null;

  public BcCreateWhitelistDaoProposal quantity(String quantity) {
    this.quantity = quantity;
    return this;
  }

   /**
   * Get quantity
   * @return quantity
  **/
  @ApiModelProperty(value = "")
  public String getQuantity() {
    return quantity;
  }

  public void setQuantity(String quantity) {
    this.quantity = quantity;
  }

  public BcCreateWhitelistDaoProposal proposer(String proposer) {
    this.proposer = proposer;
    return this;
  }

   /**
   * Get proposer
   * @return proposer
  **/
  @ApiModelProperty(value = "")
  public String getProposer() {
    return proposer;
  }

  public void setProposer(String proposer) {
    this.proposer = proposer;
  }

  public BcCreateWhitelistDaoProposal voteStart(String voteStart) {
    this.voteStart = voteStart;
    return this;
  }

   /**
   * Get voteStart
   * @return voteStart
  **/
  @ApiModelProperty(value = "")
  public String getVoteStart() {
    return voteStart;
  }

  public void setVoteStart(String voteStart) {
    this.voteStart = voteStart;
  }

  public BcCreateWhitelistDaoProposal daoId(String daoId) {
    this.daoId = daoId;
    return this;
  }

   /**
   * Get daoId
   * @return daoId
  **/
  @ApiModelProperty(value = "")
  public String getDaoId() {
    return daoId;
  }

  public void setDaoId(String daoId) {
    this.daoId = daoId;
  }

  public BcCreateWhitelistDaoProposal daoOwner(String daoOwner) {
    this.daoOwner = daoOwner;
    return this;
  }

   /**
   * Get daoOwner
   * @return daoOwner
  **/
  @ApiModelProperty(value = "")
  public String getDaoOwner() {
    return daoOwner;
  }

  public void setDaoOwner(String daoOwner) {
    this.daoOwner = daoOwner;
  }

  public BcCreateWhitelistDaoProposal voteEnd(String voteEnd) {
    this.voteEnd = voteEnd;
    return this;
  }

   /**
   * Get voteEnd
   * @return voteEnd
  **/
  @ApiModelProperty(value = "")
  public String getVoteEnd() {
    return voteEnd;
  }

  public void setVoteEnd(String voteEnd) {
    this.voteEnd = voteEnd;
  }

  public BcCreateWhitelistDaoProposal user(String user) {
    this.user = user;
    return this;
  }

   /**
   * Get user
   * @return user
  **/
  @ApiModelProperty(value = "")
  public String getUser() {
    return user;
  }

  public void setUser(String user) {
    this.user = user;
  }

  public BcCreateWhitelistDaoProposal proposerPrvKey(String proposerPrvKey) {
    this.proposerPrvKey = proposerPrvKey;
    return this;
  }

   /**
   * Get proposerPrvKey
   * @return proposerPrvKey
  **/
  @ApiModelProperty(value = "")
  public String getProposerPrvKey() {
    return proposerPrvKey;
  }

  public void setProposerPrvKey(String proposerPrvKey) {
    this.proposerPrvKey = proposerPrvKey;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BcCreateWhitelistDaoProposal bcCreateWhitelistDaoProposal = (BcCreateWhitelistDaoProposal) o;
    return Objects.equals(this.quantity, bcCreateWhitelistDaoProposal.quantity) &&
        Objects.equals(this.proposer, bcCreateWhitelistDaoProposal.proposer) &&
        Objects.equals(this.voteStart, bcCreateWhitelistDaoProposal.voteStart) &&
        Objects.equals(this.daoId, bcCreateWhitelistDaoProposal.daoId) &&
        Objects.equals(this.daoOwner, bcCreateWhitelistDaoProposal.daoOwner) &&
        Objects.equals(this.voteEnd, bcCreateWhitelistDaoProposal.voteEnd) &&
        Objects.equals(this.user, bcCreateWhitelistDaoProposal.user) &&
        Objects.equals(this.proposerPrvKey, bcCreateWhitelistDaoProposal.proposerPrvKey);
  }

  @Override
  public int hashCode() {
    return Objects.hash(quantity, proposer, voteStart, daoId, daoOwner, voteEnd, user, proposerPrvKey);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BcCreateWhitelistDaoProposal {\n");
    
    sb.append("    quantity: ").append(toIndentedString(quantity)).append("\n");
    sb.append("    proposer: ").append(toIndentedString(proposer)).append("\n");
    sb.append("    voteStart: ").append(toIndentedString(voteStart)).append("\n");
    sb.append("    daoId: ").append(toIndentedString(daoId)).append("\n");
    sb.append("    daoOwner: ").append(toIndentedString(daoOwner)).append("\n");
    sb.append("    voteEnd: ").append(toIndentedString(voteEnd)).append("\n");
    sb.append("    user: ").append(toIndentedString(user)).append("\n");
    sb.append("    proposerPrvKey: ").append(toIndentedString(proposerPrvKey)).append("\n");
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
