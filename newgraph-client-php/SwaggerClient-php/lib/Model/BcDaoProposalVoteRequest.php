<?php
/**
 * BcDaoProposalVoteRequest
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
 * BcDaoProposalVoteRequest Class Doc Comment
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class BcDaoProposalVoteRequest implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $swaggerModelName = 'BcDaoProposalVoteRequest';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerTypes = [
        'proposal_type' => 'string',
        'quantity' => 'string',
        'proposal_id' => 'string',
        'dao_id' => 'string',
        'dao_owner' => 'string',
        'voter' => 'string',
        'option' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerFormats = [
        'proposal_type' => null,
        'quantity' => null,
        'proposal_id' => null,
        'dao_id' => null,
        'dao_owner' => null,
        'voter' => null,
        'option' => null
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
        'proposal_type' => 'proposal_type',
        'quantity' => 'quantity',
        'proposal_id' => 'proposal_id',
        'dao_id' => 'dao_id',
        'dao_owner' => 'dao_owner',
        'voter' => 'voter',
        'option' => 'option'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'proposal_type' => 'setProposalType',
        'quantity' => 'setQuantity',
        'proposal_id' => 'setProposalId',
        'dao_id' => 'setDaoId',
        'dao_owner' => 'setDaoOwner',
        'voter' => 'setVoter',
        'option' => 'setOption'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'proposal_type' => 'getProposalType',
        'quantity' => 'getQuantity',
        'proposal_id' => 'getProposalId',
        'dao_id' => 'getDaoId',
        'dao_owner' => 'getDaoOwner',
        'voter' => 'getVoter',
        'option' => 'getOption'
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
        $this->container['proposal_type'] = isset($data['proposal_type']) ? $data['proposal_type'] : null;
        $this->container['quantity'] = isset($data['quantity']) ? $data['quantity'] : null;
        $this->container['proposal_id'] = isset($data['proposal_id']) ? $data['proposal_id'] : null;
        $this->container['dao_id'] = isset($data['dao_id']) ? $data['dao_id'] : null;
        $this->container['dao_owner'] = isset($data['dao_owner']) ? $data['dao_owner'] : null;
        $this->container['voter'] = isset($data['voter']) ? $data['voter'] : null;
        $this->container['option'] = isset($data['option']) ? $data['option'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['quantity'] === null) {
            $invalidProperties[] = "'quantity' can't be null";
        }
        if ($this->container['proposal_id'] === null) {
            $invalidProperties[] = "'proposal_id' can't be null";
        }
        if ($this->container['voter'] === null) {
            $invalidProperties[] = "'voter' can't be null";
        }
        if ($this->container['option'] === null) {
            $invalidProperties[] = "'option' can't be null";
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
     * Gets proposal_type
     *
     * @return string
     */
    public function getProposalType()
    {
        return $this->container['proposal_type'];
    }

    /**
     * Sets proposal_type
     *
     * @param string $proposal_type proposal_type
     *
     * @return $this
     */
    public function setProposalType($proposal_type)
    {
        $this->container['proposal_type'] = $proposal_type;

        return $this;
    }

    /**
     * Gets quantity
     *
     * @return string
     */
    public function getQuantity()
    {
        return $this->container['quantity'];
    }

    /**
     * Sets quantity
     *
     * @param string $quantity quantity
     *
     * @return $this
     */
    public function setQuantity($quantity)
    {
        $this->container['quantity'] = $quantity;

        return $this;
    }

    /**
     * Gets proposal_id
     *
     * @return string
     */
    public function getProposalId()
    {
        return $this->container['proposal_id'];
    }

    /**
     * Sets proposal_id
     *
     * @param string $proposal_id proposal_id
     *
     * @return $this
     */
    public function setProposalId($proposal_id)
    {
        $this->container['proposal_id'] = $proposal_id;

        return $this;
    }

    /**
     * Gets dao_id
     *
     * @return string
     */
    public function getDaoId()
    {
        return $this->container['dao_id'];
    }

    /**
     * Sets dao_id
     *
     * @param string $dao_id dao_id
     *
     * @return $this
     */
    public function setDaoId($dao_id)
    {
        $this->container['dao_id'] = $dao_id;

        return $this;
    }

    /**
     * Gets dao_owner
     *
     * @return string
     */
    public function getDaoOwner()
    {
        return $this->container['dao_owner'];
    }

    /**
     * Sets dao_owner
     *
     * @param string $dao_owner dao_owner
     *
     * @return $this
     */
    public function setDaoOwner($dao_owner)
    {
        $this->container['dao_owner'] = $dao_owner;

        return $this;
    }

    /**
     * Gets voter
     *
     * @return string
     */
    public function getVoter()
    {
        return $this->container['voter'];
    }

    /**
     * Sets voter
     *
     * @param string $voter voter
     *
     * @return $this
     */
    public function setVoter($voter)
    {
        $this->container['voter'] = $voter;

        return $this;
    }

    /**
     * Gets option
     *
     * @return string
     */
    public function getOption()
    {
        return $this->container['option'];
    }

    /**
     * Sets option
     *
     * @param string $option option
     *
     * @return $this
     */
    public function setOption($option)
    {
        $this->container['option'] = $option;

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


