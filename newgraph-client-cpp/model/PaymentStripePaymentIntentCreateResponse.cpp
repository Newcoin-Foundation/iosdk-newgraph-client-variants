/**
 * newlife-creator-api-eu-dev
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-05-20T13:39:48Z
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.27.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "PaymentStripePaymentIntentCreateResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

PaymentStripePaymentIntentCreateResponse::PaymentStripePaymentIntentCreateResponse()
{
    m_Client_secret = utility::conversions::to_string_t("");
    m_Client_secretIsSet = false;
}

PaymentStripePaymentIntentCreateResponse::~PaymentStripePaymentIntentCreateResponse()
{
}

void PaymentStripePaymentIntentCreateResponse::validate()
{
    // TODO: implement validation
}

web::json::value PaymentStripePaymentIntentCreateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Client_secretIsSet)
    {
        val[utility::conversions::to_string_t("client_secret")] = ModelBase::toJson(m_Client_secret);
    }

    return val;
}

void PaymentStripePaymentIntentCreateResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("client_secret")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("client_secret")];
        if(!fieldValue.is_null())
        {
            setClientSecret(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void PaymentStripePaymentIntentCreateResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Client_secretIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("client_secret"), m_Client_secret));
        
    }
}

void PaymentStripePaymentIntentCreateResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("client_secret")))
    {
        setClientSecret(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("client_secret"))));
    }
}

utility::string_t PaymentStripePaymentIntentCreateResponse::getClientSecret() const
{
    return m_Client_secret;
}


void PaymentStripePaymentIntentCreateResponse::setClientSecret(utility::string_t value)
{
    m_Client_secret = value;
    m_Client_secretIsSet = true;
}
bool PaymentStripePaymentIntentCreateResponse::clientSecretIsSet() const
{
    return m_Client_secretIsSet;
}

void PaymentStripePaymentIntentCreateResponse::unsetClient_secret()
{
    m_Client_secretIsSet = false;
}

}
}
}
}
