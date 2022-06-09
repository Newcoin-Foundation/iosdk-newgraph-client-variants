/* 
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-05-20T13:39:48Z
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// UserUpdateRequest
    /// </summary>
    [DataContract]
    public partial class UserUpdateRequest :  IEquatable<UserUpdateRequest>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="UserUpdateRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected UserUpdateRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="UserUpdateRequest" /> class.
        /// </summary>
        /// <param name="lastName">lastName.</param>
        /// <param name="website">website.</param>
        /// <param name="consentPrivacyPolicy">consentPrivacyPolicy.</param>
        /// <param name="displayName">displayName.</param>
        /// <param name="latitude">latitude.</param>
        /// <param name="newcoinCreateAccount">newcoinCreateAccount.</param>
        /// <param name="fullName">fullName.</param>
        /// <param name="tumblr">tumblr.</param>
        /// <param name="description">description.</param>
        /// <param name="instagram">instagram.</param>
        /// <param name="soundcloud">soundcloud.</param>
        /// <param name="firstName">firstName.</param>
        /// <param name="twitter">twitter.</param>
        /// <param name="tiktok">tiktok.</param>
        /// <param name="id">id (required).</param>
        /// <param name="consentEmail">consentEmail.</param>
        /// <param name="longitude">longitude.</param>
        public UserUpdateRequest(string lastName = default(string), string website = default(string), string consentPrivacyPolicy = default(string), string displayName = default(string), decimal? latitude = default(decimal?), string newcoinCreateAccount = default(string), string fullName = default(string), string tumblr = default(string), string description = default(string), string instagram = default(string), string soundcloud = default(string), string firstName = default(string), string twitter = default(string), string tiktok = default(string), string id = default(string), string consentEmail = default(string), decimal? longitude = default(decimal?))
        {
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for UserUpdateRequest and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            this.LastName = lastName;
            this.Website = website;
            this.ConsentPrivacyPolicy = consentPrivacyPolicy;
            this.DisplayName = displayName;
            this.Latitude = latitude;
            this.NewcoinCreateAccount = newcoinCreateAccount;
            this.FullName = fullName;
            this.Tumblr = tumblr;
            this.Description = description;
            this.Instagram = instagram;
            this.Soundcloud = soundcloud;
            this.FirstName = firstName;
            this.Twitter = twitter;
            this.Tiktok = tiktok;
            this.ConsentEmail = consentEmail;
            this.Longitude = longitude;
        }
        
        /// <summary>
        /// Gets or Sets LastName
        /// </summary>
        [DataMember(Name="lastName", EmitDefaultValue=false)]
        public string LastName { get; set; }

        /// <summary>
        /// Gets or Sets Website
        /// </summary>
        [DataMember(Name="website", EmitDefaultValue=false)]
        public string Website { get; set; }

        /// <summary>
        /// Gets or Sets ConsentPrivacyPolicy
        /// </summary>
        [DataMember(Name="consentPrivacyPolicy", EmitDefaultValue=false)]
        public string ConsentPrivacyPolicy { get; set; }

        /// <summary>
        /// Gets or Sets DisplayName
        /// </summary>
        [DataMember(Name="displayName", EmitDefaultValue=false)]
        public string DisplayName { get; set; }

        /// <summary>
        /// Gets or Sets Latitude
        /// </summary>
        [DataMember(Name="latitude", EmitDefaultValue=false)]
        public decimal? Latitude { get; set; }

        /// <summary>
        /// Gets or Sets NewcoinCreateAccount
        /// </summary>
        [DataMember(Name="newcoinCreateAccount", EmitDefaultValue=false)]
        public string NewcoinCreateAccount { get; set; }

        /// <summary>
        /// Gets or Sets FullName
        /// </summary>
        [DataMember(Name="fullName", EmitDefaultValue=false)]
        public string FullName { get; set; }

        /// <summary>
        /// Gets or Sets Tumblr
        /// </summary>
        [DataMember(Name="tumblr", EmitDefaultValue=false)]
        public string Tumblr { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description", EmitDefaultValue=false)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets Instagram
        /// </summary>
        [DataMember(Name="instagram", EmitDefaultValue=false)]
        public string Instagram { get; set; }

        /// <summary>
        /// Gets or Sets Soundcloud
        /// </summary>
        [DataMember(Name="soundcloud", EmitDefaultValue=false)]
        public string Soundcloud { get; set; }

        /// <summary>
        /// Gets or Sets FirstName
        /// </summary>
        [DataMember(Name="firstName", EmitDefaultValue=false)]
        public string FirstName { get; set; }

        /// <summary>
        /// Gets or Sets Twitter
        /// </summary>
        [DataMember(Name="twitter", EmitDefaultValue=false)]
        public string Twitter { get; set; }

        /// <summary>
        /// Gets or Sets Tiktok
        /// </summary>
        [DataMember(Name="tiktok", EmitDefaultValue=false)]
        public string Tiktok { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets ConsentEmail
        /// </summary>
        [DataMember(Name="consentEmail", EmitDefaultValue=false)]
        public string ConsentEmail { get; set; }

        /// <summary>
        /// Gets or Sets Longitude
        /// </summary>
        [DataMember(Name="longitude", EmitDefaultValue=false)]
        public decimal? Longitude { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class UserUpdateRequest {\n");
            sb.Append("  LastName: ").Append(LastName).Append("\n");
            sb.Append("  Website: ").Append(Website).Append("\n");
            sb.Append("  ConsentPrivacyPolicy: ").Append(ConsentPrivacyPolicy).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  Latitude: ").Append(Latitude).Append("\n");
            sb.Append("  NewcoinCreateAccount: ").Append(NewcoinCreateAccount).Append("\n");
            sb.Append("  FullName: ").Append(FullName).Append("\n");
            sb.Append("  Tumblr: ").Append(Tumblr).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Instagram: ").Append(Instagram).Append("\n");
            sb.Append("  Soundcloud: ").Append(Soundcloud).Append("\n");
            sb.Append("  FirstName: ").Append(FirstName).Append("\n");
            sb.Append("  Twitter: ").Append(Twitter).Append("\n");
            sb.Append("  Tiktok: ").Append(Tiktok).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  ConsentEmail: ").Append(ConsentEmail).Append("\n");
            sb.Append("  Longitude: ").Append(Longitude).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as UserUpdateRequest);
        }

        /// <summary>
        /// Returns true if UserUpdateRequest instances are equal
        /// </summary>
        /// <param name="input">Instance of UserUpdateRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(UserUpdateRequest input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.LastName == input.LastName ||
                    (this.LastName != null &&
                    this.LastName.Equals(input.LastName))
                ) && 
                (
                    this.Website == input.Website ||
                    (this.Website != null &&
                    this.Website.Equals(input.Website))
                ) && 
                (
                    this.ConsentPrivacyPolicy == input.ConsentPrivacyPolicy ||
                    (this.ConsentPrivacyPolicy != null &&
                    this.ConsentPrivacyPolicy.Equals(input.ConsentPrivacyPolicy))
                ) && 
                (
                    this.DisplayName == input.DisplayName ||
                    (this.DisplayName != null &&
                    this.DisplayName.Equals(input.DisplayName))
                ) && 
                (
                    this.Latitude == input.Latitude ||
                    (this.Latitude != null &&
                    this.Latitude.Equals(input.Latitude))
                ) && 
                (
                    this.NewcoinCreateAccount == input.NewcoinCreateAccount ||
                    (this.NewcoinCreateAccount != null &&
                    this.NewcoinCreateAccount.Equals(input.NewcoinCreateAccount))
                ) && 
                (
                    this.FullName == input.FullName ||
                    (this.FullName != null &&
                    this.FullName.Equals(input.FullName))
                ) && 
                (
                    this.Tumblr == input.Tumblr ||
                    (this.Tumblr != null &&
                    this.Tumblr.Equals(input.Tumblr))
                ) && 
                (
                    this.Description == input.Description ||
                    (this.Description != null &&
                    this.Description.Equals(input.Description))
                ) && 
                (
                    this.Instagram == input.Instagram ||
                    (this.Instagram != null &&
                    this.Instagram.Equals(input.Instagram))
                ) && 
                (
                    this.Soundcloud == input.Soundcloud ||
                    (this.Soundcloud != null &&
                    this.Soundcloud.Equals(input.Soundcloud))
                ) && 
                (
                    this.FirstName == input.FirstName ||
                    (this.FirstName != null &&
                    this.FirstName.Equals(input.FirstName))
                ) && 
                (
                    this.Twitter == input.Twitter ||
                    (this.Twitter != null &&
                    this.Twitter.Equals(input.Twitter))
                ) && 
                (
                    this.Tiktok == input.Tiktok ||
                    (this.Tiktok != null &&
                    this.Tiktok.Equals(input.Tiktok))
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.ConsentEmail == input.ConsentEmail ||
                    (this.ConsentEmail != null &&
                    this.ConsentEmail.Equals(input.ConsentEmail))
                ) && 
                (
                    this.Longitude == input.Longitude ||
                    (this.Longitude != null &&
                    this.Longitude.Equals(input.Longitude))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.LastName != null)
                    hashCode = hashCode * 59 + this.LastName.GetHashCode();
                if (this.Website != null)
                    hashCode = hashCode * 59 + this.Website.GetHashCode();
                if (this.ConsentPrivacyPolicy != null)
                    hashCode = hashCode * 59 + this.ConsentPrivacyPolicy.GetHashCode();
                if (this.DisplayName != null)
                    hashCode = hashCode * 59 + this.DisplayName.GetHashCode();
                if (this.Latitude != null)
                    hashCode = hashCode * 59 + this.Latitude.GetHashCode();
                if (this.NewcoinCreateAccount != null)
                    hashCode = hashCode * 59 + this.NewcoinCreateAccount.GetHashCode();
                if (this.FullName != null)
                    hashCode = hashCode * 59 + this.FullName.GetHashCode();
                if (this.Tumblr != null)
                    hashCode = hashCode * 59 + this.Tumblr.GetHashCode();
                if (this.Description != null)
                    hashCode = hashCode * 59 + this.Description.GetHashCode();
                if (this.Instagram != null)
                    hashCode = hashCode * 59 + this.Instagram.GetHashCode();
                if (this.Soundcloud != null)
                    hashCode = hashCode * 59 + this.Soundcloud.GetHashCode();
                if (this.FirstName != null)
                    hashCode = hashCode * 59 + this.FirstName.GetHashCode();
                if (this.Twitter != null)
                    hashCode = hashCode * 59 + this.Twitter.GetHashCode();
                if (this.Tiktok != null)
                    hashCode = hashCode * 59 + this.Tiktok.GetHashCode();
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.ConsentEmail != null)
                    hashCode = hashCode * 59 + this.ConsentEmail.GetHashCode();
                if (this.Longitude != null)
                    hashCode = hashCode * 59 + this.Longitude.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
