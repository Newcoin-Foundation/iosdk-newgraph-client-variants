/*
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * API version: 2022-06-09T06:13:03Z
 * Generated by: Swagger Codegen (https://github.com/swagger-api/swagger-codegen.git)
 */

package swagger

type UserPreRegisterRequest struct {
	ConsentTestgroup string `json:"consentTestgroup,omitempty"`
	ConsentPrivacyPolicy string `json:"consentPrivacyPolicy,omitempty"`
	Phone string `json:"phone"`
	FullName string `json:"fullName,omitempty"`
	ConsentEmail string `json:"consentEmail,omitempty"`
	Email string `json:"email,omitempty"`
}
