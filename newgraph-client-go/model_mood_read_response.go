/*
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: 2022-05-20T13:39:48Z
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type MoodReadResponse struct {
	Created string `json:"created,omitempty"`
	Author *PagedRatedResponsePostAuthor `json:"author,omitempty"`
	Latitude float32 `json:"latitude,omitempty"`
	Description string `json:"description,omitempty"`
	AspectRatio float32 `json:"aspectRatio,omitempty"`
	Title string `json:"title,omitempty"`
	Posts []MoodCreateResponsePosts `json:"posts,omitempty"`
	Content string `json:"content,omitempty"`
	StakeToAccess float32 `json:"stakeToAccess,omitempty"`
	Tags []PagedRatedResponsePostTags `json:"tags,omitempty"`
	ContentUrl string `json:"contentUrl,omitempty"`
	PostsCount float32 `json:"postsCount,omitempty"`
	BlurHash string `json:"blurHash,omitempty"`
	Id string `json:"id,omitempty"`
	Updated string `json:"updated,omitempty"`
	ContentType string `json:"contentType,omitempty"`
	Longitude float32 `json:"longitude,omitempty"`
}
