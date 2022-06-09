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

/*
 * PaymentStripeWebhookRequest.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_PaymentStripeWebhookRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_PaymentStripeWebhookRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"
#include "PaymentStripeWebhookRequest_data.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  PaymentStripeWebhookRequest
    : public ModelBase
{
public:
    PaymentStripeWebhookRequest();
    virtual ~PaymentStripeWebhookRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PaymentStripeWebhookRequest members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getRequest() const;
    bool requestIsSet() const;
    void unsetRequest();
    void setRequest(std::shared_ptr<Object> value);
    /// <summary>
    /// 
    /// </summary>
    bool isLivemode() const;
    bool livemodeIsSet() const;
    void unsetLivemode();
    void setLivemode(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PaymentStripeWebhookRequest_data> getData() const;
    bool dataIsSet() const;
    void unsetData();
    void setData(std::shared_ptr<PaymentStripeWebhookRequest_data> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getCreated() const;
    bool createdIsSet() const;
    void unsetCreated();
    void setCreated(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetApi_version();
    void setApiVersion(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getPendingWebhooks() const;
    bool pendingWebhooksIsSet() const;
    void unsetPending_webhooks();
    void setPendingWebhooks(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(utility::string_t value);

protected:
    std::shared_ptr<Object> m_Request;
    bool m_RequestIsSet;
    bool m_Livemode;
    bool m_LivemodeIsSet;
    std::shared_ptr<PaymentStripeWebhookRequest_data> m_Data;
    bool m_DataIsSet;
    int32_t m_Created;
    bool m_CreatedIsSet;
    utility::string_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Api_version;
    bool m_Api_versionIsSet;
    int32_t m_Pending_webhooks;
    bool m_Pending_webhooksIsSet;
    utility::string_t m_object;
    bool m_objectIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_PaymentStripeWebhookRequest_H_ */
