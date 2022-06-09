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
    /// UserCreateRequest
    /// </summary>
    [DataContract]
    public partial class UserCreateRequest :  IEquatable<UserCreateRequest>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="UserCreateRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected UserCreateRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="UserCreateRequest" /> class.
        /// </summary>
        /// <param name="newcoinTicker">newcoinTicker.</param>
        /// <param name="lastName">lastName.</param>
        /// <param name="website">website.</param>
        /// <param name="consentPrivacyPolicy">consentPrivacyPolicy.</param>
        /// <param name="displayName">displayName.</param>
        /// <param name="latitude">latitude.</param>
        /// <param name="fullName">fullName.</param>
        /// <param name="tumblr">tumblr.</param>
        /// <param name="description">description.</param>
        /// <param name="instagram">instagram.</param>
        /// <param name="soundcloud">soundcloud.</param>
        /// <param name="firstName">firstName.</param>
        /// <param name="twitter">twitter.</param>
        /// <param name="consentTestgroup">consentTestgroup.</param>
        /// <param name="phone">phone (required).</param>
        /// <param name="tiktok">tiktok.</param>
        /// <param name="legacyToken">legacyToken.</param>
        /// <param name="consentEmail">consentEmail.</param>
        /// <param name="email">email.</param>
        /// <param name="longitude">longitude.</param>
        /// <param name="username">username (required).</param>
        public UserCreateRequest(string newcoinTicker = default(string), string lastName = default(string), string website = default(string), string consentPrivacyPolicy = default(string), string displayName = default(string), decimal? latitude = default(decimal?), string fullName = default(string), string tumblr = default(string), string description = default(string), string instagram = default(string), string soundcloud = default(string), string firstName = default(string), string twitter = default(string), string consentTestgroup = default(string), string phone = default(string), string tiktok = default(string), string legacyToken = default(string), string consentEmail = default(string), string email = default(string), decimal? longitude = default(decimal?), string username = default(string))
        {
            // to ensure "phone" is required (not null)
            if (phone == null)
            {
                throw new InvalidDataException("phone is a required property for UserCreateRequest and cannot be null");
            }
            else
            {
                this.Phone = phone;
            }
            // to ensure "username" is required (not null)
            if (username == null)
            {
                throw new InvalidDataException("username is a required property for UserCreateRequest and cannot be null");
            }
            else
            {
                this.Username = username;
            }
            this.NewcoinTicker = newcoinTicker;
            this.LastName = lastName;
            this.Website = website;
            this.ConsentPrivacyPolicy = consentPrivacyPolicy;
            this.DisplayName = displayName;
            this.Latitude = latitude;
            this.FullName = fullName;
            this.Tumblr = tumblr;
            this.Description = description;
            this.Instagram = instagram;
            this.Soundcloud = soundcloud;
            this.FirstName = firstName;
            this.Twitter = twitter;
            this.ConsentTestgroup = consentTestgroup;
            this.Tiktok = tiktok;
            this.LegacyToken = legacyToken;
            this.ConsentEmail = consentEmail;
            this.Email = email;
            this.Longitude = longitude;
        }
        
        /// <summary>
        /// Gets or Sets NewcoinTicker
        /// </summary>
        [DataMember(Name="newcoinTicker", EmitDefaultValue=false)]
        public string NewcoinTicker { get; set; }

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
        /// Gets or Sets ConsentTestgroup
        /// </summary>
        [DataMember(Name="consentTestgroup", EmitDefaultValue=false)]
        public string ConsentTestgroup { get; set; }

        /// <summary>
        /// Gets or Sets Phone
        /// </summary>
        [DataMember(Name="phone", EmitDefaultValue=false)]
        public string Phone { get; set; }

        /// <summary>
        /// Gets or Sets Tiktok
        /// </summary>
        [DataMember(Name="tiktok", EmitDefaultValue=false)]
        public string Tiktok { get; set; }

        /// <summary>
        /// Gets or Sets LegacyToken
        /// </summary>
        [DataMember(Name="legacyToken", EmitDefaultValue=false)]
        public string LegacyToken { get; set; }

        /// <summary>
        /// Gets or Sets ConsentEmail
        /// </summary>
        [DataMember(Name="consentEmail", EmitDefaultValue=false)]
        public string ConsentEmail { get; set; }

        /// <summary>
        /// Gets or Sets Email
        /// </summary>
        [DataMember(Name="email", EmitDefaultValue=false)]
        public string Email { get; set; }

        /// <summary>
        /// Gets or Sets Longitude
        /// </summary>
        [DataMember(Name="longitude", EmitDefaultValue=false)]
        public decimal? Longitude { get; set; }

        /// <summary>
        /// Gets or Sets Username
        /// </summary>
        [DataMember(Name="username", EmitDefaultValue=false)]
        public string Username { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class UserCreateRequest {\n");
            sb.Append("  NewcoinTicker: ").Append(NewcoinTicker).Append("\n");
            sb.Append("  LastName: ").Append(LastName).Append("\n");
            sb.Append("  Website: ").Append(Website).Append("\n");
            sb.Append("  ConsentPrivacyPolicy: ").Append(ConsentPrivacyPolicy).Append("\n");
            sb.Append("  DisplayName: ").Append(DisplayName).Append("\n");
            sb.Append("  Latitude: ").Append(Latitude).Append("\n");
            sb.Append("  FullName: ").Append(FullName).Append("\n");
            sb.Append("  Tumblr: ").Append(Tumblr).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  Instagram: ").Append(Instagram).Append("\n");
            sb.Append("  Soundcloud: ").Append(Soundcloud).Append("\n");
            sb.Append("  FirstName: ").Append(FirstName).Append("\n");
            sb.Append("  Twitter: ").Append(Twitter).Append("\n");
            sb.Append("  ConsentTestgroup: ").Append(ConsentTestgroup).Append("\n");
            sb.Append("  Phone: ").Append(Phone).Append("\n");
            sb.Append("  Tiktok: ").Append(Tiktok).Append("\n");
            sb.Append("  LegacyToken: ").Append(LegacyToken).Append("\n");
            sb.Append("  ConsentEmail: ").Append(ConsentEmail).Append("\n");
            sb.Append("  Email: ").Append(Email).Append("\n");
            sb.Append("  Longitude: ").Append(Longitude).Append("\n");
            sb.Append("  Username: ").Append(Username).Append("\n");
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
            return this.Equals(input as UserCreateRequest);
        }

        /// <summary>
        /// Returns true if UserCreateRequest instances are equal
        /// </summary>
        /// <param name="input">Instance of UserCreateRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(UserCreateRequest input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.NewcoinTicker == input.NewcoinTicker ||
                    (this.NewcoinTicker != null &&
                    this.NewcoinTicker.Equals(input.NewcoinTicker))
                ) && 
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
                    this.ConsentTestgroup == input.ConsentTestgroup ||
                    (this.ConsentTestgroup != null &&
                    this.ConsentTestgroup.Equals(input.ConsentTestgroup))
                ) && 
                (
                    this.Phone == input.Phone ||
                    (this.Phone != null &&
                    this.Phone.Equals(input.Phone))
                ) && 
                (
                    this.Tiktok == input.Tiktok ||
                    (this.Tiktok != null &&
                    this.Tiktok.Equals(input.Tiktok))
                ) && 
                (
                    this.LegacyToken == input.LegacyToken ||
                    (this.LegacyToken != null &&
                    this.LegacyToken.Equals(input.LegacyToken))
                ) && 
                (
                    this.ConsentEmail == input.ConsentEmail ||
                    (this.ConsentEmail != null &&
                    this.ConsentEmail.Equals(input.ConsentEmail))
                ) && 
                (
                    this.Email == input.Email ||
                    (this.Email != null &&
                    this.Email.Equals(input.Email))
                ) && 
                (
                    this.Longitude == input.Longitude ||
                    (this.Longitude != null &&
                    this.Longitude.Equals(input.Longitude))
                ) && 
                (
                    this.Username == input.Username ||
                    (this.Username != null &&
                    this.Username.Equals(input.Username))
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
                if (this.NewcoinTicker != null)
                    hashCode = hashCode * 59 + this.NewcoinTicker.GetHashCode();
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
                if (this.ConsentTestgroup != null)
                    hashCode = hashCode * 59 + this.ConsentTestgroup.GetHashCode();
                if (this.Phone != null)
                    hashCode = hashCode * 59 + this.Phone.GetHashCode();
                if (this.Tiktok != null)
                    hashCode = hashCode * 59 + this.Tiktok.GetHashCode();
                if (this.LegacyToken != null)
                    hashCode = hashCode * 59 + this.LegacyToken.GetHashCode();
                if (this.ConsentEmail != null)
                    hashCode = hashCode * 59 + this.ConsentEmail.GetHashCode();
                if (this.Email != null)
                    hashCode = hashCode * 59 + this.Email.GetHashCode();
                if (this.Longitude != null)
                    hashCode = hashCode * 59 + this.Longitude.GetHashCode();
                if (this.Username != null)
                    hashCode = hashCode * 59 + this.Username.GetHashCode();
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
            // Username (string) pattern
            Regex regexUsername = new Regex(@"^[a-z0-5\\.]{2,9}\\.io$", RegexOptions.CultureInvariant);
            if (false == regexUsername.Match(this.Username).Success)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Username, must match a pattern of " + regexUsername, new [] { "Username" });
            }

            yield break;
        }
    }

}
