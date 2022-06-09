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
    /// BcPoolCreateRequest
    /// </summary>
    [DataContract]
    public partial class BcPoolCreateRequest :  IEquatable<BcPoolCreateRequest>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BcPoolCreateRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected BcPoolCreateRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="BcPoolCreateRequest" /> class.
        /// </summary>
        /// <param name="owner">owner (required).</param>
        /// <param name="ownerPrvActiveKey">ownerPrvActiveKey.</param>
        /// <param name="payer">payer.</param>
        public BcPoolCreateRequest(string owner = default(string), string ownerPrvActiveKey = default(string), string payer = default(string))
        {
            // to ensure "owner" is required (not null)
            if (owner == null)
            {
                throw new InvalidDataException("owner is a required property for BcPoolCreateRequest and cannot be null");
            }
            else
            {
                this.Owner = owner;
            }
            this.OwnerPrvActiveKey = ownerPrvActiveKey;
            this.Payer = payer;
        }
        
        /// <summary>
        /// Gets or Sets Owner
        /// </summary>
        [DataMember(Name="owner", EmitDefaultValue=false)]
        public string Owner { get; set; }

        /// <summary>
        /// Gets or Sets OwnerPrvActiveKey
        /// </summary>
        [DataMember(Name="owner_prv_active_key", EmitDefaultValue=false)]
        public string OwnerPrvActiveKey { get; set; }

        /// <summary>
        /// Gets or Sets Payer
        /// </summary>
        [DataMember(Name="payer", EmitDefaultValue=false)]
        public string Payer { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BcPoolCreateRequest {\n");
            sb.Append("  Owner: ").Append(Owner).Append("\n");
            sb.Append("  OwnerPrvActiveKey: ").Append(OwnerPrvActiveKey).Append("\n");
            sb.Append("  Payer: ").Append(Payer).Append("\n");
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
            return this.Equals(input as BcPoolCreateRequest);
        }

        /// <summary>
        /// Returns true if BcPoolCreateRequest instances are equal
        /// </summary>
        /// <param name="input">Instance of BcPoolCreateRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BcPoolCreateRequest input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Owner == input.Owner ||
                    (this.Owner != null &&
                    this.Owner.Equals(input.Owner))
                ) && 
                (
                    this.OwnerPrvActiveKey == input.OwnerPrvActiveKey ||
                    (this.OwnerPrvActiveKey != null &&
                    this.OwnerPrvActiveKey.Equals(input.OwnerPrvActiveKey))
                ) && 
                (
                    this.Payer == input.Payer ||
                    (this.Payer != null &&
                    this.Payer.Equals(input.Payer))
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
                if (this.Owner != null)
                    hashCode = hashCode * 59 + this.Owner.GetHashCode();
                if (this.OwnerPrvActiveKey != null)
                    hashCode = hashCode * 59 + this.OwnerPrvActiveKey.GetHashCode();
                if (this.Payer != null)
                    hashCode = hashCode * 59 + this.Payer.GetHashCode();
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