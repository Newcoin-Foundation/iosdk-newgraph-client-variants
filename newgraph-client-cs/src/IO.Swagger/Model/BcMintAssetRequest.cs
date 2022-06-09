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
    /// BcMintAssetRequest
    /// </summary>
    [DataContract]
    public partial class BcMintAssetRequest :  IEquatable<BcMintAssetRequest>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BcMintAssetRequest" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected BcMintAssetRequest() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="BcMintAssetRequest" /> class.
        /// </summary>
        /// <param name="immutableData">immutableData.</param>
        /// <param name="tplName">tplName.</param>
        /// <param name="payerPrvKey">payerPrvKey (required).</param>
        /// <param name="creator">creator (required).</param>
        /// <param name="schName">schName.</param>
        /// <param name="mutableData">mutableData.</param>
        /// <param name="colName">colName.</param>
        /// <param name="payer">payer (required).</param>
        /// <param name="payerPublicKey">payerPublicKey (required).</param>
        public BcMintAssetRequest(List<BcMintAssetRequestImmutableData> immutableData = default(List<BcMintAssetRequestImmutableData>), string tplName = default(string), string payerPrvKey = default(string), string creator = default(string), string schName = default(string), List<BcMintAssetRequestImmutableData> mutableData = default(List<BcMintAssetRequestImmutableData>), string colName = default(string), string payer = default(string), string payerPublicKey = default(string))
        {
            // to ensure "payerPrvKey" is required (not null)
            if (payerPrvKey == null)
            {
                throw new InvalidDataException("payerPrvKey is a required property for BcMintAssetRequest and cannot be null");
            }
            else
            {
                this.PayerPrvKey = payerPrvKey;
            }
            // to ensure "creator" is required (not null)
            if (creator == null)
            {
                throw new InvalidDataException("creator is a required property for BcMintAssetRequest and cannot be null");
            }
            else
            {
                this.Creator = creator;
            }
            // to ensure "payer" is required (not null)
            if (payer == null)
            {
                throw new InvalidDataException("payer is a required property for BcMintAssetRequest and cannot be null");
            }
            else
            {
                this.Payer = payer;
            }
            // to ensure "payerPublicKey" is required (not null)
            if (payerPublicKey == null)
            {
                throw new InvalidDataException("payerPublicKey is a required property for BcMintAssetRequest and cannot be null");
            }
            else
            {
                this.PayerPublicKey = payerPublicKey;
            }
            this.ImmutableData = immutableData;
            this.TplName = tplName;
            this.SchName = schName;
            this.MutableData = mutableData;
            this.ColName = colName;
        }
        
        /// <summary>
        /// Gets or Sets ImmutableData
        /// </summary>
        [DataMember(Name="immutable_data", EmitDefaultValue=false)]
        public List<BcMintAssetRequestImmutableData> ImmutableData { get; set; }

        /// <summary>
        /// Gets or Sets TplName
        /// </summary>
        [DataMember(Name="tpl_name", EmitDefaultValue=false)]
        public string TplName { get; set; }

        /// <summary>
        /// Gets or Sets PayerPrvKey
        /// </summary>
        [DataMember(Name="payer_prv_key", EmitDefaultValue=false)]
        public string PayerPrvKey { get; set; }

        /// <summary>
        /// Gets or Sets Creator
        /// </summary>
        [DataMember(Name="creator", EmitDefaultValue=false)]
        public string Creator { get; set; }

        /// <summary>
        /// Gets or Sets SchName
        /// </summary>
        [DataMember(Name="sch_name", EmitDefaultValue=false)]
        public string SchName { get; set; }

        /// <summary>
        /// Gets or Sets MutableData
        /// </summary>
        [DataMember(Name="mutable_data", EmitDefaultValue=false)]
        public List<BcMintAssetRequestImmutableData> MutableData { get; set; }

        /// <summary>
        /// Gets or Sets ColName
        /// </summary>
        [DataMember(Name="col_name", EmitDefaultValue=false)]
        public string ColName { get; set; }

        /// <summary>
        /// Gets or Sets Payer
        /// </summary>
        [DataMember(Name="payer", EmitDefaultValue=false)]
        public string Payer { get; set; }

        /// <summary>
        /// Gets or Sets PayerPublicKey
        /// </summary>
        [DataMember(Name="payer_public_key", EmitDefaultValue=false)]
        public string PayerPublicKey { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BcMintAssetRequest {\n");
            sb.Append("  ImmutableData: ").Append(ImmutableData).Append("\n");
            sb.Append("  TplName: ").Append(TplName).Append("\n");
            sb.Append("  PayerPrvKey: ").Append(PayerPrvKey).Append("\n");
            sb.Append("  Creator: ").Append(Creator).Append("\n");
            sb.Append("  SchName: ").Append(SchName).Append("\n");
            sb.Append("  MutableData: ").Append(MutableData).Append("\n");
            sb.Append("  ColName: ").Append(ColName).Append("\n");
            sb.Append("  Payer: ").Append(Payer).Append("\n");
            sb.Append("  PayerPublicKey: ").Append(PayerPublicKey).Append("\n");
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
            return this.Equals(input as BcMintAssetRequest);
        }

        /// <summary>
        /// Returns true if BcMintAssetRequest instances are equal
        /// </summary>
        /// <param name="input">Instance of BcMintAssetRequest to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BcMintAssetRequest input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ImmutableData == input.ImmutableData ||
                    this.ImmutableData != null &&
                    this.ImmutableData.SequenceEqual(input.ImmutableData)
                ) && 
                (
                    this.TplName == input.TplName ||
                    (this.TplName != null &&
                    this.TplName.Equals(input.TplName))
                ) && 
                (
                    this.PayerPrvKey == input.PayerPrvKey ||
                    (this.PayerPrvKey != null &&
                    this.PayerPrvKey.Equals(input.PayerPrvKey))
                ) && 
                (
                    this.Creator == input.Creator ||
                    (this.Creator != null &&
                    this.Creator.Equals(input.Creator))
                ) && 
                (
                    this.SchName == input.SchName ||
                    (this.SchName != null &&
                    this.SchName.Equals(input.SchName))
                ) && 
                (
                    this.MutableData == input.MutableData ||
                    this.MutableData != null &&
                    this.MutableData.SequenceEqual(input.MutableData)
                ) && 
                (
                    this.ColName == input.ColName ||
                    (this.ColName != null &&
                    this.ColName.Equals(input.ColName))
                ) && 
                (
                    this.Payer == input.Payer ||
                    (this.Payer != null &&
                    this.Payer.Equals(input.Payer))
                ) && 
                (
                    this.PayerPublicKey == input.PayerPublicKey ||
                    (this.PayerPublicKey != null &&
                    this.PayerPublicKey.Equals(input.PayerPublicKey))
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
                if (this.ImmutableData != null)
                    hashCode = hashCode * 59 + this.ImmutableData.GetHashCode();
                if (this.TplName != null)
                    hashCode = hashCode * 59 + this.TplName.GetHashCode();
                if (this.PayerPrvKey != null)
                    hashCode = hashCode * 59 + this.PayerPrvKey.GetHashCode();
                if (this.Creator != null)
                    hashCode = hashCode * 59 + this.Creator.GetHashCode();
                if (this.SchName != null)
                    hashCode = hashCode * 59 + this.SchName.GetHashCode();
                if (this.MutableData != null)
                    hashCode = hashCode * 59 + this.MutableData.GetHashCode();
                if (this.ColName != null)
                    hashCode = hashCode * 59 + this.ColName.GetHashCode();
                if (this.Payer != null)
                    hashCode = hashCode * 59 + this.Payer.GetHashCode();
                if (this.PayerPublicKey != null)
                    hashCode = hashCode * 59 + this.PayerPublicKey.GetHashCode();
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