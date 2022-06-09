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
    /// MoodCreateResponse
    /// </summary>
    [DataContract]
    public partial class MoodCreateResponse :  IEquatable<MoodCreateResponse>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="MoodCreateResponse" /> class.
        /// </summary>
        /// <param name="created">created.</param>
        /// <param name="author">author.</param>
        /// <param name="latitude">latitude.</param>
        /// <param name="description">description.</param>
        /// <param name="aspectRatio">aspectRatio.</param>
        /// <param name="title">title.</param>
        /// <param name="posts">posts.</param>
        /// <param name="content">content.</param>
        /// <param name="stakeToAccess">stakeToAccess.</param>
        /// <param name="tags">tags.</param>
        /// <param name="contentUrl">contentUrl.</param>
        /// <param name="postsCount">postsCount.</param>
        /// <param name="blurHash">blurHash.</param>
        /// <param name="id">id.</param>
        /// <param name="updated">updated.</param>
        /// <param name="contentType">contentType.</param>
        /// <param name="longitude">longitude.</param>
        public MoodCreateResponse(string created = default(string), PagedRatedResponsePostAuthor author = default(PagedRatedResponsePostAuthor), decimal? latitude = default(decimal?), string description = default(string), decimal? aspectRatio = default(decimal?), string title = default(string), List<MoodCreateResponsePosts> posts = default(List<MoodCreateResponsePosts>), string content = default(string), decimal? stakeToAccess = default(decimal?), List<PagedRatedResponsePostTags> tags = default(List<PagedRatedResponsePostTags>), string contentUrl = default(string), decimal? postsCount = default(decimal?), string blurHash = default(string), string id = default(string), string updated = default(string), string contentType = default(string), decimal? longitude = default(decimal?))
        {
            this.Created = created;
            this.Author = author;
            this.Latitude = latitude;
            this.Description = description;
            this.AspectRatio = aspectRatio;
            this.Title = title;
            this.Posts = posts;
            this.Content = content;
            this.StakeToAccess = stakeToAccess;
            this.Tags = tags;
            this.ContentUrl = contentUrl;
            this.PostsCount = postsCount;
            this.BlurHash = blurHash;
            this.Id = id;
            this.Updated = updated;
            this.ContentType = contentType;
            this.Longitude = longitude;
        }
        
        /// <summary>
        /// Gets or Sets Created
        /// </summary>
        [DataMember(Name="created", EmitDefaultValue=false)]
        public string Created { get; set; }

        /// <summary>
        /// Gets or Sets Author
        /// </summary>
        [DataMember(Name="author", EmitDefaultValue=false)]
        public PagedRatedResponsePostAuthor Author { get; set; }

        /// <summary>
        /// Gets or Sets Latitude
        /// </summary>
        [DataMember(Name="latitude", EmitDefaultValue=false)]
        public decimal? Latitude { get; set; }

        /// <summary>
        /// Gets or Sets Description
        /// </summary>
        [DataMember(Name="description", EmitDefaultValue=false)]
        public string Description { get; set; }

        /// <summary>
        /// Gets or Sets AspectRatio
        /// </summary>
        [DataMember(Name="aspectRatio", EmitDefaultValue=false)]
        public decimal? AspectRatio { get; set; }

        /// <summary>
        /// Gets or Sets Title
        /// </summary>
        [DataMember(Name="title", EmitDefaultValue=false)]
        public string Title { get; set; }

        /// <summary>
        /// Gets or Sets Posts
        /// </summary>
        [DataMember(Name="posts", EmitDefaultValue=false)]
        public List<MoodCreateResponsePosts> Posts { get; set; }

        /// <summary>
        /// Gets or Sets Content
        /// </summary>
        [DataMember(Name="content", EmitDefaultValue=false)]
        public string Content { get; set; }

        /// <summary>
        /// Gets or Sets StakeToAccess
        /// </summary>
        [DataMember(Name="stakeToAccess", EmitDefaultValue=false)]
        public decimal? StakeToAccess { get; set; }

        /// <summary>
        /// Gets or Sets Tags
        /// </summary>
        [DataMember(Name="tags", EmitDefaultValue=false)]
        public List<PagedRatedResponsePostTags> Tags { get; set; }

        /// <summary>
        /// Gets or Sets ContentUrl
        /// </summary>
        [DataMember(Name="contentUrl", EmitDefaultValue=false)]
        public string ContentUrl { get; set; }

        /// <summary>
        /// Gets or Sets PostsCount
        /// </summary>
        [DataMember(Name="postsCount", EmitDefaultValue=false)]
        public decimal? PostsCount { get; set; }

        /// <summary>
        /// Gets or Sets BlurHash
        /// </summary>
        [DataMember(Name="blurHash", EmitDefaultValue=false)]
        public string BlurHash { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets Updated
        /// </summary>
        [DataMember(Name="updated", EmitDefaultValue=false)]
        public string Updated { get; set; }

        /// <summary>
        /// Gets or Sets ContentType
        /// </summary>
        [DataMember(Name="contentType", EmitDefaultValue=false)]
        public string ContentType { get; set; }

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
            sb.Append("class MoodCreateResponse {\n");
            sb.Append("  Created: ").Append(Created).Append("\n");
            sb.Append("  Author: ").Append(Author).Append("\n");
            sb.Append("  Latitude: ").Append(Latitude).Append("\n");
            sb.Append("  Description: ").Append(Description).Append("\n");
            sb.Append("  AspectRatio: ").Append(AspectRatio).Append("\n");
            sb.Append("  Title: ").Append(Title).Append("\n");
            sb.Append("  Posts: ").Append(Posts).Append("\n");
            sb.Append("  Content: ").Append(Content).Append("\n");
            sb.Append("  StakeToAccess: ").Append(StakeToAccess).Append("\n");
            sb.Append("  Tags: ").Append(Tags).Append("\n");
            sb.Append("  ContentUrl: ").Append(ContentUrl).Append("\n");
            sb.Append("  PostsCount: ").Append(PostsCount).Append("\n");
            sb.Append("  BlurHash: ").Append(BlurHash).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Updated: ").Append(Updated).Append("\n");
            sb.Append("  ContentType: ").Append(ContentType).Append("\n");
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
            return this.Equals(input as MoodCreateResponse);
        }

        /// <summary>
        /// Returns true if MoodCreateResponse instances are equal
        /// </summary>
        /// <param name="input">Instance of MoodCreateResponse to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(MoodCreateResponse input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Created == input.Created ||
                    (this.Created != null &&
                    this.Created.Equals(input.Created))
                ) && 
                (
                    this.Author == input.Author ||
                    (this.Author != null &&
                    this.Author.Equals(input.Author))
                ) && 
                (
                    this.Latitude == input.Latitude ||
                    (this.Latitude != null &&
                    this.Latitude.Equals(input.Latitude))
                ) && 
                (
                    this.Description == input.Description ||
                    (this.Description != null &&
                    this.Description.Equals(input.Description))
                ) && 
                (
                    this.AspectRatio == input.AspectRatio ||
                    (this.AspectRatio != null &&
                    this.AspectRatio.Equals(input.AspectRatio))
                ) && 
                (
                    this.Title == input.Title ||
                    (this.Title != null &&
                    this.Title.Equals(input.Title))
                ) && 
                (
                    this.Posts == input.Posts ||
                    this.Posts != null &&
                    this.Posts.SequenceEqual(input.Posts)
                ) && 
                (
                    this.Content == input.Content ||
                    (this.Content != null &&
                    this.Content.Equals(input.Content))
                ) && 
                (
                    this.StakeToAccess == input.StakeToAccess ||
                    (this.StakeToAccess != null &&
                    this.StakeToAccess.Equals(input.StakeToAccess))
                ) && 
                (
                    this.Tags == input.Tags ||
                    this.Tags != null &&
                    this.Tags.SequenceEqual(input.Tags)
                ) && 
                (
                    this.ContentUrl == input.ContentUrl ||
                    (this.ContentUrl != null &&
                    this.ContentUrl.Equals(input.ContentUrl))
                ) && 
                (
                    this.PostsCount == input.PostsCount ||
                    (this.PostsCount != null &&
                    this.PostsCount.Equals(input.PostsCount))
                ) && 
                (
                    this.BlurHash == input.BlurHash ||
                    (this.BlurHash != null &&
                    this.BlurHash.Equals(input.BlurHash))
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Updated == input.Updated ||
                    (this.Updated != null &&
                    this.Updated.Equals(input.Updated))
                ) && 
                (
                    this.ContentType == input.ContentType ||
                    (this.ContentType != null &&
                    this.ContentType.Equals(input.ContentType))
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
                if (this.Created != null)
                    hashCode = hashCode * 59 + this.Created.GetHashCode();
                if (this.Author != null)
                    hashCode = hashCode * 59 + this.Author.GetHashCode();
                if (this.Latitude != null)
                    hashCode = hashCode * 59 + this.Latitude.GetHashCode();
                if (this.Description != null)
                    hashCode = hashCode * 59 + this.Description.GetHashCode();
                if (this.AspectRatio != null)
                    hashCode = hashCode * 59 + this.AspectRatio.GetHashCode();
                if (this.Title != null)
                    hashCode = hashCode * 59 + this.Title.GetHashCode();
                if (this.Posts != null)
                    hashCode = hashCode * 59 + this.Posts.GetHashCode();
                if (this.Content != null)
                    hashCode = hashCode * 59 + this.Content.GetHashCode();
                if (this.StakeToAccess != null)
                    hashCode = hashCode * 59 + this.StakeToAccess.GetHashCode();
                if (this.Tags != null)
                    hashCode = hashCode * 59 + this.Tags.GetHashCode();
                if (this.ContentUrl != null)
                    hashCode = hashCode * 59 + this.ContentUrl.GetHashCode();
                if (this.PostsCount != null)
                    hashCode = hashCode * 59 + this.PostsCount.GetHashCode();
                if (this.BlurHash != null)
                    hashCode = hashCode * 59 + this.BlurHash.GetHashCode();
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.Updated != null)
                    hashCode = hashCode * 59 + this.Updated.GetHashCode();
                if (this.ContentType != null)
                    hashCode = hashCode * 59 + this.ContentType.GetHashCode();
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
