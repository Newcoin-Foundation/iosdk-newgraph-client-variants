/*
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: 2022-05-20T13:39:48Z
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type PagedRatedResponsePostRel struct {
	Score float32 `json:"score,omitempty"`
	Source string `json:"source,omitempty"`
	Category string `json:"category,omitempty"`
}