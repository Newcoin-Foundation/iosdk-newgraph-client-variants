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



#include "BcTxResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

BcTxResponse::BcTxResponse()
{
    m_TxID_createTpl = utility::conversions::to_string_t("");
    m_TxID_createTplIsSet = false;
    m_TxID_createPool = utility::conversions::to_string_t("");
    m_TxID_createPoolIsSet = false;
    m_TxID_createAcc = utility::conversions::to_string_t("");
    m_TxID_createAccIsSet = false;
    m_TxID_createCol = utility::conversions::to_string_t("");
    m_TxID_createColIsSet = false;
    m_TxID_createSch = utility::conversions::to_string_t("");
    m_TxID_createSchIsSet = false;
    m_TxID_stakeToPool = utility::conversions::to_string_t("");
    m_TxID_stakeToPoolIsSet = false;
    m_TxID_mintAsset = utility::conversions::to_string_t("");
    m_TxID_mintAssetIsSet = false;
}

BcTxResponse::~BcTxResponse()
{
}

void BcTxResponse::validate()
{
    // TODO: implement validation
}

web::json::value BcTxResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TxID_createTplIsSet)
    {
        val[utility::conversions::to_string_t("TxID_createTpl")] = ModelBase::toJson(m_TxID_createTpl);
    }
    if(m_TxID_createPoolIsSet)
    {
        val[utility::conversions::to_string_t("TxID_createPool")] = ModelBase::toJson(m_TxID_createPool);
    }
    if(m_TxID_createAccIsSet)
    {
        val[utility::conversions::to_string_t("TxID_createAcc")] = ModelBase::toJson(m_TxID_createAcc);
    }
    if(m_TxID_createColIsSet)
    {
        val[utility::conversions::to_string_t("TxID_createCol")] = ModelBase::toJson(m_TxID_createCol);
    }
    if(m_TxID_createSchIsSet)
    {
        val[utility::conversions::to_string_t("TxID_createSch")] = ModelBase::toJson(m_TxID_createSch);
    }
    if(m_TxID_stakeToPoolIsSet)
    {
        val[utility::conversions::to_string_t("TxID_stakeToPool")] = ModelBase::toJson(m_TxID_stakeToPool);
    }
    if(m_TxID_mintAssetIsSet)
    {
        val[utility::conversions::to_string_t("TxID_mintAsset")] = ModelBase::toJson(m_TxID_mintAsset);
    }

    return val;
}

void BcTxResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("TxID_createTpl")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TxID_createTpl")];
        if(!fieldValue.is_null())
        {
            setTxIDCreateTpl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TxID_createPool")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TxID_createPool")];
        if(!fieldValue.is_null())
        {
            setTxIDCreatePool(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TxID_createAcc")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TxID_createAcc")];
        if(!fieldValue.is_null())
        {
            setTxIDCreateAcc(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TxID_createCol")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TxID_createCol")];
        if(!fieldValue.is_null())
        {
            setTxIDCreateCol(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TxID_createSch")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TxID_createSch")];
        if(!fieldValue.is_null())
        {
            setTxIDCreateSch(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TxID_stakeToPool")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TxID_stakeToPool")];
        if(!fieldValue.is_null())
        {
            setTxIDStakeToPool(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("TxID_mintAsset")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("TxID_mintAsset")];
        if(!fieldValue.is_null())
        {
            setTxIDMintAsset(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void BcTxResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_TxID_createTplIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TxID_createTpl"), m_TxID_createTpl));
        
    }
    if(m_TxID_createPoolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TxID_createPool"), m_TxID_createPool));
        
    }
    if(m_TxID_createAccIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TxID_createAcc"), m_TxID_createAcc));
        
    }
    if(m_TxID_createColIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TxID_createCol"), m_TxID_createCol));
        
    }
    if(m_TxID_createSchIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TxID_createSch"), m_TxID_createSch));
        
    }
    if(m_TxID_stakeToPoolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TxID_stakeToPool"), m_TxID_stakeToPool));
        
    }
    if(m_TxID_mintAssetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("TxID_mintAsset"), m_TxID_mintAsset));
        
    }
}

void BcTxResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("TxID_createTpl")))
    {
        setTxIDCreateTpl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TxID_createTpl"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TxID_createPool")))
    {
        setTxIDCreatePool(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TxID_createPool"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TxID_createAcc")))
    {
        setTxIDCreateAcc(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TxID_createAcc"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TxID_createCol")))
    {
        setTxIDCreateCol(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TxID_createCol"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TxID_createSch")))
    {
        setTxIDCreateSch(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TxID_createSch"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TxID_stakeToPool")))
    {
        setTxIDStakeToPool(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TxID_stakeToPool"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("TxID_mintAsset")))
    {
        setTxIDMintAsset(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("TxID_mintAsset"))));
    }
}

utility::string_t BcTxResponse::getTxIDCreateTpl() const
{
    return m_TxID_createTpl;
}


void BcTxResponse::setTxIDCreateTpl(utility::string_t value)
{
    m_TxID_createTpl = value;
    m_TxID_createTplIsSet = true;
}
bool BcTxResponse::txIDCreateTplIsSet() const
{
    return m_TxID_createTplIsSet;
}

void BcTxResponse::unsetTxID_createTpl()
{
    m_TxID_createTplIsSet = false;
}

utility::string_t BcTxResponse::getTxIDCreatePool() const
{
    return m_TxID_createPool;
}


void BcTxResponse::setTxIDCreatePool(utility::string_t value)
{
    m_TxID_createPool = value;
    m_TxID_createPoolIsSet = true;
}
bool BcTxResponse::txIDCreatePoolIsSet() const
{
    return m_TxID_createPoolIsSet;
}

void BcTxResponse::unsetTxID_createPool()
{
    m_TxID_createPoolIsSet = false;
}

utility::string_t BcTxResponse::getTxIDCreateAcc() const
{
    return m_TxID_createAcc;
}


void BcTxResponse::setTxIDCreateAcc(utility::string_t value)
{
    m_TxID_createAcc = value;
    m_TxID_createAccIsSet = true;
}
bool BcTxResponse::txIDCreateAccIsSet() const
{
    return m_TxID_createAccIsSet;
}

void BcTxResponse::unsetTxID_createAcc()
{
    m_TxID_createAccIsSet = false;
}

utility::string_t BcTxResponse::getTxIDCreateCol() const
{
    return m_TxID_createCol;
}


void BcTxResponse::setTxIDCreateCol(utility::string_t value)
{
    m_TxID_createCol = value;
    m_TxID_createColIsSet = true;
}
bool BcTxResponse::txIDCreateColIsSet() const
{
    return m_TxID_createColIsSet;
}

void BcTxResponse::unsetTxID_createCol()
{
    m_TxID_createColIsSet = false;
}

utility::string_t BcTxResponse::getTxIDCreateSch() const
{
    return m_TxID_createSch;
}


void BcTxResponse::setTxIDCreateSch(utility::string_t value)
{
    m_TxID_createSch = value;
    m_TxID_createSchIsSet = true;
}
bool BcTxResponse::txIDCreateSchIsSet() const
{
    return m_TxID_createSchIsSet;
}

void BcTxResponse::unsetTxID_createSch()
{
    m_TxID_createSchIsSet = false;
}

utility::string_t BcTxResponse::getTxIDStakeToPool() const
{
    return m_TxID_stakeToPool;
}


void BcTxResponse::setTxIDStakeToPool(utility::string_t value)
{
    m_TxID_stakeToPool = value;
    m_TxID_stakeToPoolIsSet = true;
}
bool BcTxResponse::txIDStakeToPoolIsSet() const
{
    return m_TxID_stakeToPoolIsSet;
}

void BcTxResponse::unsetTxID_stakeToPool()
{
    m_TxID_stakeToPoolIsSet = false;
}

utility::string_t BcTxResponse::getTxIDMintAsset() const
{
    return m_TxID_mintAsset;
}


void BcTxResponse::setTxIDMintAsset(utility::string_t value)
{
    m_TxID_mintAsset = value;
    m_TxID_mintAssetIsSet = true;
}
bool BcTxResponse::txIDMintAssetIsSet() const
{
    return m_TxID_mintAssetIsSet;
}

void BcTxResponse::unsetTxID_mintAsset()
{
    m_TxID_mintAssetIsSet = false;
}

}
}
}
}

