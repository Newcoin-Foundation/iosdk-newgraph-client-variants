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
    /// BcStakeMainDAORequest
    /// </summary>
    [DataContract]
    public partial class BcStakeMainDAORequest :  IEquatable<BcStakeMainDAORequest>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BcStakeMainDAORequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected BcStakeMainDAORequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="BcStakeMainDAORequest" /> class.
        /// </summary>
        /// <param name="payerPrvKey">payerPrvKey (required).</param>
        /// <param name="amt">amt (required).</param>
        /// <param name="payer">payer (required).</param>
        public BcStakeMainDAORequest(string payerPrvKey = default(string), string amt = default(string), string payer = default(string))
        {
            // to ensure "payerPrvKey" is required (not null)
            if (payerPrvKey == null)
            {
                throw new InvalidDataException("payerPrvKey is a required property for BcStakeMainDAORequest and cannot be null");
            }
            else
            {
                this.PayerPrvKey = payerPrvKey;
            }
            // to ensure "amt" is required (not null)
            if (amt == null)
            {
                throw new InvalidDataException("amt is a required property for BcStakeMainDAORequest and cannot be null");
            }
            else
            {
                this.Amt = amt;
            }
            // to ensure "payer" is required (not null)
            if (payer == null)
            {
                throw new InvalidDataException("payer is a required property for BcStakeMainDAORequest and cannot be null");
            }
            else
            {
                this.Payer = payer;
            }
        }
        
        /// <summary>
        /// Gets or Sets PayerPrvKey
        /// </summary>
        [DataMember(Name="payer_prv_key", EmitDefaultValue=false)]
        public string PayerPrvKey { get; set; }

        /// <summary>
        /// Gets or Sets Amt
        /// </summary>
        [DataMember(Name="amt", EmitDefaultValue=false)]
        public string Amt { get; set; }

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
            sb.Append("class BcStakeMainDAORequest {\n");
            sb.Append("  PayerPrvKey: ").Append(PayerPrvKey).Append("\n");
            sb.Append("  Amt: ").Append(Amt).Append("\n");
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
            return this.Equals(input as BcStakeMainDAORequest);
        }

        /// <summary>
        /// Returns true if BcStakeMainDAORequest instances are equal
        /// </summary>
        /// <param name="input">Instance of BcStakeMainDAORequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BcStakeMainDAORequest input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.PayerPrvKey == input.PayerPrvKey ||
                    (this.PayerPrvKey != null &&
                    this.PayerPrvKey.Equals(input.PayerPrvKey))
                ) && 
                (
                    this.Amt == input.Amt ||
                    (this.Amt != null &&
                    this.Amt.Equals(input.Amt))
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
                if (this.PayerPrvKey != null)
                    hashCode = hashCode * 59 + this.PayerPrvKey.GetHashCode();
                if (this.Amt != null)
                    hashCode = hashCode * 59 + this.Amt.GetHashCode();
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
