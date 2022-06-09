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
import io.swagger.client.model.SyncContactsRequestPhones;
import io.swagger.client.model.SyncContactsRequestPostalAddresses;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

/**
 * SyncContactsRequestContacts
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2022-05-24T15:32:28.129Z")
public class SyncContactsRequestContacts {
  @SerializedName("birthday")
  private String birthday = null;

  @SerializedName("identifier")
  private String identifier = null;

  @SerializedName("androidAccountName")
  private String androidAccountName = null;

  @SerializedName("displayName")
  private String displayName = null;

  @SerializedName("prefix")
  private String prefix = null;

  @SerializedName("givenName")
  private String givenName = null;

  @SerializedName("jobTitle")
  private String jobTitle = null;

  @SerializedName("phones")
  private List<SyncContactsRequestPhones> phones = null;

  @SerializedName("avatar")
  private String avatar = null;

  @SerializedName("suffix")
  private String suffix = null;

  @SerializedName("postalAddresses")
  private List<SyncContactsRequestPostalAddresses> postalAddresses = null;

  @SerializedName("emails")
  private List<SyncContactsRequestPhones> emails = null;

  @SerializedName("androidAccountType")
  private String androidAccountType = null;

  @SerializedName("familyName")
  private String familyName = null;

  @SerializedName("middleName")
  private String middleName = null;

  @SerializedName("company")
  private String company = null;

  @SerializedName("androidAccountTypeRaw")
  private String androidAccountTypeRaw = null;

  public SyncContactsRequestContacts birthday(String birthday) {
    this.birthday = birthday;
    return this;
  }

   /**
   * Get birthday
   * @return birthday
  **/
  @ApiModelProperty(value = "")
  public String getBirthday() {
    return birthday;
  }

  public void setBirthday(String birthday) {
    this.birthday = birthday;
  }

  public SyncContactsRequestContacts identifier(String identifier) {
    this.identifier = identifier;
    return this;
  }

   /**
   * Get identifier
   * @return identifier
  **/
  @ApiModelProperty(value = "")
  public String getIdentifier() {
    return identifier;
  }

  public void setIdentifier(String identifier) {
    this.identifier = identifier;
  }

  public SyncContactsRequestContacts androidAccountName(String androidAccountName) {
    this.androidAccountName = androidAccountName;
    return this;
  }

   /**
   * Get androidAccountName
   * @return androidAccountName
  **/
  @ApiModelProperty(value = "")
  public String getAndroidAccountName() {
    return androidAccountName;
  }

  public void setAndroidAccountName(String androidAccountName) {
    this.androidAccountName = androidAccountName;
  }

  public SyncContactsRequestContacts displayName(String displayName) {
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

  public SyncContactsRequestContacts prefix(String prefix) {
    this.prefix = prefix;
    return this;
  }

   /**
   * Get prefix
   * @return prefix
  **/
  @ApiModelProperty(value = "")
  public String getPrefix() {
    return prefix;
  }

  public void setPrefix(String prefix) {
    this.prefix = prefix;
  }

  public SyncContactsRequestContacts givenName(String givenName) {
    this.givenName = givenName;
    return this;
  }

   /**
   * Get givenName
   * @return givenName
  **/
  @ApiModelProperty(value = "")
  public String getGivenName() {
    return givenName;
  }

  public void setGivenName(String givenName) {
    this.givenName = givenName;
  }

  public SyncContactsRequestContacts jobTitle(String jobTitle) {
    this.jobTitle = jobTitle;
    return this;
  }

   /**
   * Get jobTitle
   * @return jobTitle
  **/
  @ApiModelProperty(value = "")
  public String getJobTitle() {
    return jobTitle;
  }

  public void setJobTitle(String jobTitle) {
    this.jobTitle = jobTitle;
  }

  public SyncContactsRequestContacts phones(List<SyncContactsRequestPhones> phones) {
    this.phones = phones;
    return this;
  }

  public SyncContactsRequestContacts addPhonesItem(SyncContactsRequestPhones phonesItem) {
    if (this.phones == null) {
      this.phones = new ArrayList<SyncContactsRequestPhones>();
    }
    this.phones.add(phonesItem);
    return this;
  }

   /**
   * Get phones
   * @return phones
  **/
  @ApiModelProperty(value = "")
  public List<SyncContactsRequestPhones> getPhones() {
    return phones;
  }

  public void setPhones(List<SyncContactsRequestPhones> phones) {
    this.phones = phones;
  }

  public SyncContactsRequestContacts avatar(String avatar) {
    this.avatar = avatar;
    return this;
  }

   /**
   * Get avatar
   * @return avatar
  **/
  @ApiModelProperty(value = "")
  public String getAvatar() {
    return avatar;
  }

  public void setAvatar(String avatar) {
    this.avatar = avatar;
  }

  public SyncContactsRequestContacts suffix(String suffix) {
    this.suffix = suffix;
    return this;
  }

   /**
   * Get suffix
   * @return suffix
  **/
  @ApiModelProperty(value = "")
  public String getSuffix() {
    return suffix;
  }

  public void setSuffix(String suffix) {
    this.suffix = suffix;
  }

  public SyncContactsRequestContacts postalAddresses(List<SyncContactsRequestPostalAddresses> postalAddresses) {
    this.postalAddresses = postalAddresses;
    return this;
  }

  public SyncContactsRequestContacts addPostalAddressesItem(SyncContactsRequestPostalAddresses postalAddressesItem) {
    if (this.postalAddresses == null) {
      this.postalAddresses = new ArrayList<SyncContactsRequestPostalAddresses>();
    }
    this.postalAddresses.add(postalAddressesItem);
    return this;
  }

   /**
   * Get postalAddresses
   * @return postalAddresses
  **/
  @ApiModelProperty(value = "")
  public List<SyncContactsRequestPostalAddresses> getPostalAddresses() {
    return postalAddresses;
  }

  public void setPostalAddresses(List<SyncContactsRequestPostalAddresses> postalAddresses) {
    this.postalAddresses = postalAddresses;
  }

  public SyncContactsRequestContacts emails(List<SyncContactsRequestPhones> emails) {
    this.emails = emails;
    return this;
  }

  public SyncContactsRequestContacts addEmailsItem(SyncContactsRequestPhones emailsItem) {
    if (this.emails == null) {
      this.emails = new ArrayList<SyncContactsRequestPhones>();
    }
    this.emails.add(emailsItem);
    return this;
  }

   /**
   * Get emails
   * @return emails
  **/
  @ApiModelProperty(value = "")
  public List<SyncContactsRequestPhones> getEmails() {
    return emails;
  }

  public void setEmails(List<SyncContactsRequestPhones> emails) {
    this.emails = emails;
  }

  public SyncContactsRequestContacts androidAccountType(String androidAccountType) {
    this.androidAccountType = androidAccountType;
    return this;
  }

   /**
   * Get androidAccountType
   * @return androidAccountType
  **/
  @ApiModelProperty(value = "")
  public String getAndroidAccountType() {
    return androidAccountType;
  }

  public void setAndroidAccountType(String androidAccountType) {
    this.androidAccountType = androidAccountType;
  }

  public SyncContactsRequestContacts familyName(String familyName) {
    this.familyName = familyName;
    return this;
  }

   /**
   * Get familyName
   * @return familyName
  **/
  @ApiModelProperty(value = "")
  public String getFamilyName() {
    return familyName;
  }

  public void setFamilyName(String familyName) {
    this.familyName = familyName;
  }

  public SyncContactsRequestContacts middleName(String middleName) {
    this.middleName = middleName;
    return this;
  }

   /**
   * Get middleName
   * @return middleName
  **/
  @ApiModelProperty(value = "")
  public String getMiddleName() {
    return middleName;
  }

  public void setMiddleName(String middleName) {
    this.middleName = middleName;
  }

  public SyncContactsRequestContacts company(String company) {
    this.company = company;
    return this;
  }

   /**
   * Get company
   * @return company
  **/
  @ApiModelProperty(value = "")
  public String getCompany() {
    return company;
  }

  public void setCompany(String company) {
    this.company = company;
  }

  public SyncContactsRequestContacts androidAccountTypeRaw(String androidAccountTypeRaw) {
    this.androidAccountTypeRaw = androidAccountTypeRaw;
    return this;
  }

   /**
   * Get androidAccountTypeRaw
   * @return androidAccountTypeRaw
  **/
  @ApiModelProperty(value = "")
  public String getAndroidAccountTypeRaw() {
    return androidAccountTypeRaw;
  }

  public void setAndroidAccountTypeRaw(String androidAccountTypeRaw) {
    this.androidAccountTypeRaw = androidAccountTypeRaw;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    SyncContactsRequestContacts syncContactsRequestContacts = (SyncContactsRequestContacts) o;
    return Objects.equals(this.birthday, syncContactsRequestContacts.birthday) &&
        Objects.equals(this.identifier, syncContactsRequestContacts.identifier) &&
        Objects.equals(this.androidAccountName, syncContactsRequestContacts.androidAccountName) &&
        Objects.equals(this.displayName, syncContactsRequestContacts.displayName) &&
        Objects.equals(this.prefix, syncContactsRequestContacts.prefix) &&
        Objects.equals(this.givenName, syncContactsRequestContacts.givenName) &&
        Objects.equals(this.jobTitle, syncContactsRequestContacts.jobTitle) &&
        Objects.equals(this.phones, syncContactsRequestContacts.phones) &&
        Objects.equals(this.avatar, syncContactsRequestContacts.avatar) &&
        Objects.equals(this.suffix, syncContactsRequestContacts.suffix) &&
        Objects.equals(this.postalAddresses, syncContactsRequestContacts.postalAddresses) &&
        Objects.equals(this.emails, syncContactsRequestContacts.emails) &&
        Objects.equals(this.androidAccountType, syncContactsRequestContacts.androidAccountType) &&
        Objects.equals(this.familyName, syncContactsRequestContacts.familyName) &&
        Objects.equals(this.middleName, syncContactsRequestContacts.middleName) &&
        Objects.equals(this.company, syncContactsRequestContacts.company) &&
        Objects.equals(this.androidAccountTypeRaw, syncContactsRequestContacts.androidAccountTypeRaw);
  }

  @Override
  public int hashCode() {
    return Objects.hash(birthday, identifier, androidAccountName, displayName, prefix, givenName, jobTitle, phones, avatar, suffix, postalAddresses, emails, androidAccountType, familyName, middleName, company, androidAccountTypeRaw);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class SyncContactsRequestContacts {\n");
    
    sb.append("    birthday: ").append(toIndentedString(birthday)).append("\n");
    sb.append("    identifier: ").append(toIndentedString(identifier)).append("\n");
    sb.append("    androidAccountName: ").append(toIndentedString(androidAccountName)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    prefix: ").append(toIndentedString(prefix)).append("\n");
    sb.append("    givenName: ").append(toIndentedString(givenName)).append("\n");
    sb.append("    jobTitle: ").append(toIndentedString(jobTitle)).append("\n");
    sb.append("    phones: ").append(toIndentedString(phones)).append("\n");
    sb.append("    avatar: ").append(toIndentedString(avatar)).append("\n");
    sb.append("    suffix: ").append(toIndentedString(suffix)).append("\n");
    sb.append("    postalAddresses: ").append(toIndentedString(postalAddresses)).append("\n");
    sb.append("    emails: ").append(toIndentedString(emails)).append("\n");
    sb.append("    androidAccountType: ").append(toIndentedString(androidAccountType)).append("\n");
    sb.append("    familyName: ").append(toIndentedString(familyName)).append("\n");
    sb.append("    middleName: ").append(toIndentedString(middleName)).append("\n");
    sb.append("    company: ").append(toIndentedString(company)).append("\n");
    sb.append("    androidAccountTypeRaw: ").append(toIndentedString(androidAccountTypeRaw)).append("\n");
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

