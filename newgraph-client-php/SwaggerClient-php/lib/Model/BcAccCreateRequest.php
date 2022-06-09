<?php
/**
 * BcAccCreateRequest
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * newlife-creator-api-eu-dev
 *
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-05-20T13:39:48Z
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 * Swagger Codegen version: 2.4.27
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;
use \Swagger\Client\ObjectSerializer;

/**
 * BcAccCreateRequest Class Doc Comment
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class BcAccCreateRequest implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $swaggerModelName = 'BcAccCreateRequest';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerTypes = [
        'newacc_pub_active_key' => 'string',
        'newacc_pub_owner_key' => 'string',
        'payer_prv_key' => 'string',
        'xfer' => 'bool',
        'stake_cpu' => 'string',
        'new_user' => 'string',
        'stake_ram' => 'float',
        'payer' => 'string',
        'stake_net' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerFormats = [
        'newacc_pub_active_key' => null,
        'newacc_pub_owner_key' => null,
        'payer_prv_key' => null,
        'xfer' => null,
        'stake_cpu' => null,
        'new_user' => null,
        'stake_ram' => null,
        'payer' => null,
        'stake_net' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function swaggerFormats()
    {
        return self::$swaggerFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'newacc_pub_active_key' => 'newacc_pub_active_key',
        'newacc_pub_owner_key' => 'newacc_pub_owner_key',
        'payer_prv_key' => 'payer_prv_key',
        'xfer' => 'xfer',
        'stake_cpu' => 'stake_cpu',
        'new_user' => 'newUser',
        'stake_ram' => 'stake_ram',
        'payer' => 'payer',
        'stake_net' => 'stake_net'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'newacc_pub_active_key' => 'setNewaccPubActiveKey',
        'newacc_pub_owner_key' => 'setNewaccPubOwnerKey',
        'payer_prv_key' => 'setPayerPrvKey',
        'xfer' => 'setXfer',
        'stake_cpu' => 'setStakeCpu',
        'new_user' => 'setNewUser',
        'stake_ram' => 'setStakeRam',
        'payer' => 'setPayer',
        'stake_net' => 'setStakeNet'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'newacc_pub_active_key' => 'getNewaccPubActiveKey',
        'newacc_pub_owner_key' => 'getNewaccPubOwnerKey',
        'payer_prv_key' => 'getPayerPrvKey',
        'xfer' => 'getXfer',
        'stake_cpu' => 'getStakeCpu',
        'new_user' => 'getNewUser',
        'stake_ram' => 'getStakeRam',
        'payer' => 'getPayer',
        'stake_net' => 'getStakeNet'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$swaggerModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['newacc_pub_active_key'] = isset($data['newacc_pub_active_key']) ? $data['newacc_pub_active_key'] : null;
        $this->container['newacc_pub_owner_key'] = isset($data['newacc_pub_owner_key']) ? $data['newacc_pub_owner_key'] : null;
        $this->container['payer_prv_key'] = isset($data['payer_prv_key']) ? $data['payer_prv_key'] : null;
        $this->container['xfer'] = isset($data['xfer']) ? $data['xfer'] : null;
        $this->container['stake_cpu'] = isset($data['stake_cpu']) ? $data['stake_cpu'] : null;
        $this->container['new_user'] = isset($data['new_user']) ? $data['new_user'] : null;
        $this->container['stake_ram'] = isset($data['stake_ram']) ? $data['stake_ram'] : null;
        $this->container['payer'] = isset($data['payer']) ? $data['payer'] : null;
        $this->container['stake_net'] = isset($data['stake_net']) ? $data['stake_net'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['newacc_pub_active_key'] === null) {
            $invalidProperties[] = "'newacc_pub_active_key' can't be null";
        }
        if ($this->container['newacc_pub_owner_key'] === null) {
            $invalidProperties[] = "'newacc_pub_owner_key' can't be null";
        }
        if ($this->container['payer_prv_key'] === null) {
            $invalidProperties[] = "'payer_prv_key' can't be null";
        }
        if ($this->container['new_user'] === null) {
            $invalidProperties[] = "'new_user' can't be null";
        }
        if ($this->container['payer'] === null) {
            $invalidProperties[] = "'payer' can't be null";
        }
        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets newacc_pub_active_key
     *
     * @return string
     */
    public function getNewaccPubActiveKey()
    {
        return $this->container['newacc_pub_active_key'];
    }

    /**
     * Sets newacc_pub_active_key
     *
     * @param string $newacc_pub_active_key newacc_pub_active_key
     *
     * @return $this
     */
    public function setNewaccPubActiveKey($newacc_pub_active_key)
    {
        $this->container['newacc_pub_active_key'] = $newacc_pub_active_key;

        return $this;
    }

    /**
     * Gets newacc_pub_owner_key
     *
     * @return string
     */
    public function getNewaccPubOwnerKey()
    {
        return $this->container['newacc_pub_owner_key'];
    }

    /**
     * Sets newacc_pub_owner_key
     *
     * @param string $newacc_pub_owner_key newacc_pub_owner_key
     *
     * @return $this
     */
    public function setNewaccPubOwnerKey($newacc_pub_owner_key)
    {
        $this->container['newacc_pub_owner_key'] = $newacc_pub_owner_key;

        return $this;
    }

    /**
     * Gets payer_prv_key
     *
     * @return string
     */
    public function getPayerPrvKey()
    {
        return $this->container['payer_prv_key'];
    }

    /**
     * Sets payer_prv_key
     *
     * @param string $payer_prv_key payer_prv_key
     *
     * @return $this
     */
    public function setPayerPrvKey($payer_prv_key)
    {
        $this->container['payer_prv_key'] = $payer_prv_key;

        return $this;
    }

    /**
     * Gets xfer
     *
     * @return bool
     */
    public function getXfer()
    {
        return $this->container['xfer'];
    }

    /**
     * Sets xfer
     *
     * @param bool $xfer xfer
     *
     * @return $this
     */
    public function setXfer($xfer)
    {
        $this->container['xfer'] = $xfer;

        return $this;
    }

    /**
     * Gets stake_cpu
     *
     * @return string
     */
    public function getStakeCpu()
    {
        return $this->container['stake_cpu'];
    }

    /**
     * Sets stake_cpu
     *
     * @param string $stake_cpu stake_cpu
     *
     * @return $this
     */
    public function setStakeCpu($stake_cpu)
    {
        $this->container['stake_cpu'] = $stake_cpu;

        return $this;
    }

    /**
     * Gets new_user
     *
     * @return string
     */
    public function getNewUser()
    {
        return $this->container['new_user'];
    }

    /**
     * Sets new_user
     *
     * @param string $new_user new_user
     *
     * @return $this
     */
    public function setNewUser($new_user)
    {
        $this->container['new_user'] = $new_user;

        return $this;
    }

    /**
     * Gets stake_ram
     *
     * @return float
     */
    public function getStakeRam()
    {
        return $this->container['stake_ram'];
    }

    /**
     * Sets stake_ram
     *
     * @param float $stake_ram stake_ram
     *
     * @return $this
     */
    public function setStakeRam($stake_ram)
    {
        $this->container['stake_ram'] = $stake_ram;

        return $this;
    }

    /**
     * Gets payer
     *
     * @return string
     */
    public function getPayer()
    {
        return $this->container['payer'];
    }

    /**
     * Sets payer
     *
     * @param string $payer payer
     *
     * @return $this
     */
    public function setPayer($payer)
    {
        $this->container['payer'] = $payer;

        return $this;
    }

    /**
     * Gets stake_net
     *
     * @return string
     */
    public function getStakeNet()
    {
        return $this->container['stake_net'];
    }

    /**
     * Sets stake_net
     *
     * @param string $stake_net stake_net
     *
     * @return $this
     */
    public function setStakeNet($stake_net)
    {
        $this->container['stake_net'] = $stake_net;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(
                ObjectSerializer::sanitizeForSerialization($this),
                JSON_PRETTY_PRINT
            );
        }

        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


