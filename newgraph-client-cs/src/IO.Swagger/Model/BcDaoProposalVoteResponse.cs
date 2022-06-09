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
    /// BcDaoProposalVoteResponse
    /// </summary>
    [DataContract]
    public partial class BcDaoProposalVoteResponse :  IEquatable<BcDaoProposalVoteResponse>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BcDaoProposalVoteResponse" /> class.
        /// </summary>
        /// <param name="daoId">daoId.</param>
        /// <param name="more">more.</param>
        /// <param name="nextKey">nextKey.</param>
        /// <param name="rows">rows.</param>
        public BcDaoProposalVoteResponse(string daoId = default(string), Object more = default(Object), string nextKey = default(string), List<BcDaoProposalVoteResponseRows> rows = default(List<BcDaoProposalVoteResponseRows>))
        {
            this.DaoId = daoId;
            this.More = more;
            this.NextKey = nextKey;
            this.Rows = rows;
        }
        
        /// <summary>
        /// Gets or Sets DaoId
        /// </summary>
        [DataMember(Name="daoId", EmitDefaultValue=false)]
        public string DaoId { get; set; }

        /// <summary>
        /// Gets or Sets More
        /// </summary>
        [DataMember(Name="more", EmitDefaultValue=false)]
        public Object More { get; set; }

        /// <summary>
        /// Gets or Sets NextKey
        /// </summary>
        [DataMember(Name="next_key", EmitDefaultValue=false)]
        public string NextKey { get; set; }

        /// <summary>
        /// Gets or Sets Rows
        /// </summary>
        [DataMember(Name="rows", EmitDefaultValue=false)]
        public List<BcDaoProposalVoteResponseRows> Rows { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BcDaoProposalVoteResponse {\n");
            sb.Append("  DaoId: ").Append(DaoId).Append("\n");
            sb.Append("  More: ").Append(More).Append("\n");
            sb.Append("  NextKey: ").Append(NextKey).Append("\n");
            sb.Append("  Rows: ").Append(Rows).Append("\n");
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
            return this.Equals(input as BcDaoProposalVoteResponse);
        }

        /// <summary>
        /// Returns true if BcDaoProposalVoteResponse instances are equal
        /// </summary>
        /// <param name="input">Instance of BcDaoProposalVoteResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BcDaoProposalVoteResponse input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DaoId == input.DaoId ||
                    (this.DaoId != null &&
                    this.DaoId.Equals(input.DaoId))
                ) && 
                (
                    this.More == input.More ||
                    (this.More != null &&
                    this.More.Equals(input.More))
                ) && 
                (
                    this.NextKey == input.NextKey ||
                    (this.NextKey != null &&
                    this.NextKey.Equals(input.NextKey))
                ) && 
                (
                    this.Rows == input.Rows ||
                    this.Rows != null &&
                    this.Rows.SequenceEqual(input.Rows)
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
                if (this.DaoId != null)
                    hashCode = hashCode * 59 + this.DaoId.GetHashCode();
                if (this.More != null)
                    hashCode = hashCode * 59 + this.More.GetHashCode();
                if (this.NextKey != null)
                    hashCode = hashCode * 59 + this.NextKey.GetHashCode();
                if (this.Rows != null)
                    hashCode = hashCode * 59 + this.Rows.GetHashCode();
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
