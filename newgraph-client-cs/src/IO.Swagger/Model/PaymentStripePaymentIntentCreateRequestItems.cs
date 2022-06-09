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
    /// PaymentStripePaymentIntentCreateRequestItems
    /// </summary>
    [DataContract]
    public partial class PaymentStripePaymentIntentCreateRequestItems :  IEquatable<PaymentStripePaymentIntentCreateRequestItems>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="PaymentStripePaymentIntentCreateRequestItems" /> class.
        /// </summary>
        /// <param name="productId">productId.</param>
        /// <param name="priceId">priceId.</param>
        public PaymentStripePaymentIntentCreateRequestItems(string productId = default(string), string priceId = default(string))
        {
            this.ProductId = productId;
            this.PriceId = priceId;
        }
        
        /// <summary>
        /// Gets or Sets ProductId
        /// </summary>
        [DataMember(Name="productId", EmitDefaultValue=false)]
        public string ProductId { get; set; }

        /// <summary>
        /// Gets or Sets PriceId
        /// </summary>
        [DataMember(Name="priceId", EmitDefaultValue=false)]
        public string PriceId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PaymentStripePaymentIntentCreateRequestItems {\n");
            sb.Append("  ProductId: ").Append(ProductId).Append("\n");
            sb.Append("  PriceId: ").Append(PriceId).Append("\n");
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
            return this.Equals(input as PaymentStripePaymentIntentCreateRequestItems);
        }

        /// <summary>
        /// Returns true if PaymentStripePaymentIntentCreateRequestItems instances are equal
        /// </summary>
        /// <param name="input">Instance of PaymentStripePaymentIntentCreateRequestItems to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(PaymentStripePaymentIntentCreateRequestItems input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.ProductId == input.ProductId ||
                    (this.ProductId != null &&
                    this.ProductId.Equals(input.ProductId))
                ) && 
                (
                    this.PriceId == input.PriceId ||
                    (this.PriceId != null &&
                    this.PriceId.Equals(input.PriceId))
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
                if (this.ProductId != null)
                    hashCode = hashCode * 59 + this.ProductId.GetHashCode();
                if (this.PriceId != null)
                    hashCode = hashCode * 59 + this.PriceId.GetHashCode();
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