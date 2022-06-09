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



#include "BcCreateDaoResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BcCreateDaoResponse::BcCreateDaoResponse()
{
    m_TxID_createDao = utility::conversions::to_string_t("");
    m_TxID_createDaoIsSet = false;
    m_Dao_id = utility::conversions::to_string_t("");
    m_Dao_idIsSet = false;
}

BcCreateDaoResponse::~BcCreateDaoResponse()
{
}

void BcCreateDaoResponse::validate()
{
    // TODO: implement validation
}

web::json::value BcCreateDaoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TxID_createDaoIsSet)
    {
        val[utility::conversions::to_string_t("TxID_createDao")] = ModelBase::toJson(m_TxID_createDao);
    }
    if(m_Dao_idIsSet)
    {
        val[utility::conversions::to_string_t("dao_id")] = ModelBase::toJson(m_Dao_id);
    }

    return val;
}

void BcCreateDaoResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("TxID_createDao")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TxID_createDao")];
        if(!fieldValue.is_null())
        {
            setTxIDCreateDao(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dao_id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("dao_id")];
        if(!fieldValue.is_null())
        {
            setDaoId(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void BcCreateDaoResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_TxID_createDaoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TxID_createDao"), m_TxID_createDao));
        
    }
    if(m_Dao_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("dao_id"), m_Dao_id));
        
    }
}

void BcCreateDaoResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("TxID_createDao")))
    {
        setTxIDCreateDao(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TxID_createDao"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("dao_id")))
    {
        setDaoId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("dao_id"))));
    }
}

utility::string_t BcCreateDaoResponse::getTxIDCreateDao() const
{
    return m_TxID_createDao;
}


void BcCreateDaoResponse::setTxIDCreateDao(utility::string_t value)
{
    m_TxID_createDao = value;
    m_TxID_createDaoIsSet = true;
}
bool BcCreateDaoResponse::txIDCreateDaoIsSet() const
{
    return m_TxID_createDaoIsSet;
}

void BcCreateDaoResponse::unsetTxID_createDao()
{
    m_TxID_createDaoIsSet = false;
}

utility::string_t BcCreateDaoResponse::getDaoId() const
{
    return m_Dao_id;
}


void BcCreateDaoResponse::setDaoId(utility::string_t value)
{
    m_Dao_id = value;
    m_Dao_idIsSet = true;
}
bool BcCreateDaoResponse::daoIdIsSet() const
{
    return m_Dao_idIsSet;
}

void BcCreateDaoResponse::unsetDao_id()
{
    m_Dao_idIsSet = false;
}

}
}
}
}

