<?php
/**
 * UserCreateRequest
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
 * UserCreateRequest Class Doc Comment
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class UserCreateRequest implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $swaggerModelName = 'UserCreateRequest';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerTypes = [
        'newcoin_ticker' => 'string',
        'last_name' => 'string',
        'website' => 'string',
        'consent_privacy_policy' => 'string',
        'display_name' => 'string',
        'latitude' => 'float',
        'full_name' => 'string',
        'tumblr' => 'string',
        'description' => 'string',
        'instagram' => 'string',
        'soundcloud' => 'string',
        'first_name' => 'string',
        'twitter' => 'string',
        'consent_testgroup' => 'string',
        'phone' => 'string',
        'tiktok' => 'string',
        'legacy_token' => 'string',
        'consent_email' => 'string',
        'email' => 'string',
        'longitude' => 'float',
        'username' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerFormats = [
        'newcoin_ticker' => null,
        'last_name' => null,
        'website' => null,
        'consent_privacy_policy' => null,
        'display_name' => null,
        'latitude' => null,
        'full_name' => null,
        'tumblr' => null,
        'description' => null,
        'instagram' => null,
        'soundcloud' => null,
        'first_name' => null,
        'twitter' => null,
        'consent_testgroup' => null,
        'phone' => null,
        'tiktok' => null,
        'legacy_token' => null,
        'consent_email' => null,
        'email' => null,
        'longitude' => null,
        'username' => null
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
        'newcoin_ticker' => 'newcoinTicker',
        'last_name' => 'lastName',
        'website' => 'website',
        'consent_privacy_policy' => 'consentPrivacyPolicy',
        'display_name' => 'displayName',
        'latitude' => 'latitude',
        'full_name' => 'fullName',
        'tumblr' => 'tumblr',
        'description' => 'description',
        'instagram' => 'instagram',
        'soundcloud' => 'soundcloud',
        'first_name' => 'firstName',
        'twitter' => 'twitter',
        'consent_testgroup' => 'consentTestgroup',
        'phone' => 'phone',
        'tiktok' => 'tiktok',
        'legacy_token' => 'legacyToken',
        'consent_email' => 'consentEmail',
        'email' => 'email',
        'longitude' => 'longitude',
        'username' => 'username'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'newcoin_ticker' => 'setNewcoinTicker',
        'last_name' => 'setLastName',
        'website' => 'setWebsite',
        'consent_privacy_policy' => 'setConsentPrivacyPolicy',
        'display_name' => 'setDisplayName',
        'latitude' => 'setLatitude',
        'full_name' => 'setFullName',
        'tumblr' => 'setTumblr',
        'description' => 'setDescription',
        'instagram' => 'setInstagram',
        'soundcloud' => 'setSoundcloud',
        'first_name' => 'setFirstName',
        'twitter' => 'setTwitter',
        'consent_testgroup' => 'setConsentTestgroup',
        'phone' => 'setPhone',
        'tiktok' => 'setTiktok',
        'legacy_token' => 'setLegacyToken',
        'consent_email' => 'setConsentEmail',
        'email' => 'setEmail',
        'longitude' => 'setLongitude',
        'username' => 'setUsername'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'newcoin_ticker' => 'getNewcoinTicker',
        'last_name' => 'getLastName',
        'website' => 'getWebsite',
        'consent_privacy_policy' => 'getConsentPrivacyPolicy',
        'display_name' => 'getDisplayName',
        'latitude' => 'getLatitude',
        'full_name' => 'getFullName',
        'tumblr' => 'getTumblr',
        'description' => 'getDescription',
        'instagram' => 'getInstagram',
        'soundcloud' => 'getSoundcloud',
        'first_name' => 'getFirstName',
        'twitter' => 'getTwitter',
        'consent_testgroup' => 'getConsentTestgroup',
        'phone' => 'getPhone',
        'tiktok' => 'getTiktok',
        'legacy_token' => 'getLegacyToken',
        'consent_email' => 'getConsentEmail',
        'email' => 'getEmail',
        'longitude' => 'getLongitude',
        'username' => 'getUsername'
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
        $this->container['newcoin_ticker'] = isset($data['newcoin_ticker']) ? $data['newcoin_ticker'] : null;
        $this->container['last_name'] = isset($data['last_name']) ? $data['last_name'] : null;
        $this->container['website'] = isset($data['website']) ? $data['website'] : null;
        $this->container['consent_privacy_policy'] = isset($data['consent_privacy_policy']) ? $data['consent_privacy_policy'] : null;
        $this->container['display_name'] = isset($data['display_name']) ? $data['display_name'] : null;
        $this->container['latitude'] = isset($data['latitude']) ? $data['latitude'] : null;
        $this->container['full_name'] = isset($data['full_name']) ? $data['full_name'] : null;
        $this->container['tumblr'] = isset($data['tumblr']) ? $data['tumblr'] : null;
        $this->container['description'] = isset($data['description']) ? $data['description'] : null;
        $this->container['instagram'] = isset($data['instagram']) ? $data['instagram'] : null;
        $this->container['soundcloud'] = isset($data['soundcloud']) ? $data['soundcloud'] : null;
        $this->container['first_name'] = isset($data['first_name']) ? $data['first_name'] : null;
        $this->container['twitter'] = isset($data['twitter']) ? $data['twitter'] : null;
        $this->container['consent_testgroup'] = isset($data['consent_testgroup']) ? $data['consent_testgroup'] : null;
        $this->container['phone'] = isset($data['phone']) ? $data['phone'] : null;
        $this->container['tiktok'] = isset($data['tiktok']) ? $data['tiktok'] : null;
        $this->container['legacy_token'] = isset($data['legacy_token']) ? $data['legacy_token'] : null;
        $this->container['consent_email'] = isset($data['consent_email']) ? $data['consent_email'] : null;
        $this->container['email'] = isset($data['email']) ? $data['email'] : null;
        $this->container['longitude'] = isset($data['longitude']) ? $data['longitude'] : null;
        $this->container['username'] = isset($data['username']) ? $data['username'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['phone'] === null) {
            $invalidProperties[] = "'phone' can't be null";
        }
        if ($this->container['username'] === null) {
            $invalidProperties[] = "'username' can't be null";
        }
        if (!preg_match("/^[a-z0-5\\.]{2,9}\\.io$/", $this->container['username'])) {
            $invalidProperties[] = "invalid value for 'username', must be conform to the pattern /^[a-z0-5\\.]{2,9}\\.io$/.";
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
     * Gets newcoin_ticker
     *
     * @return string
     */
    public function getNewcoinTicker()
    {
        return $this->container['newcoin_ticker'];
    }

    /**
     * Sets newcoin_ticker
     *
     * @param string $newcoin_ticker newcoin_ticker
     *
     * @return $this
     */
    public function setNewcoinTicker($newcoin_ticker)
    {
        $this->container['newcoin_ticker'] = $newcoin_ticker;

        return $this;
    }

    /**
     * Gets last_name
     *
     * @return string
     */
    public function getLastName()
    {
        return $this->container['last_name'];
    }

    /**
     * Sets last_name
     *
     * @param string $last_name last_name
     *
     * @return $this
     */
    public function setLastName($last_name)
    {
        $this->container['last_name'] = $last_name;

        return $this;
    }

    /**
     * Gets website
     *
     * @return string
     */
    public function getWebsite()
    {
        return $this->container['website'];
    }

    /**
     * Sets website
     *
     * @param string $website website
     *
     * @return $this
     */
    public function setWebsite($website)
    {
        $this->container['website'] = $website;

        return $this;
    }

    /**
     * Gets consent_privacy_policy
     *
     * @return string
     */
    public function getConsentPrivacyPolicy()
    {
        return $this->container['consent_privacy_policy'];
    }

    /**
     * Sets consent_privacy_policy
     *
     * @param string $consent_privacy_policy consent_privacy_policy
     *
     * @return $this
     */
    public function setConsentPrivacyPolicy($consent_privacy_policy)
    {
        $this->container['consent_privacy_policy'] = $consent_privacy_policy;

        return $this;
    }

    /**
     * Gets display_name
     *
     * @return string
     */
    public function getDisplayName()
    {
        return $this->container['display_name'];
    }

    /**
     * Sets display_name
     *
     * @param string $display_name display_name
     *
     * @return $this
     */
    public function setDisplayName($display_name)
    {
        $this->container['display_name'] = $display_name;

        return $this;
    }

    /**
     * Gets latitude
     *
     * @return float
     */
    public function getLatitude()
    {
        return $this->container['latitude'];
    }

    /**
     * Sets latitude
     *
     * @param float $latitude latitude
     *
     * @return $this
     */
    public function setLatitude($latitude)
    {
        $this->container['latitude'] = $latitude;

        return $this;
    }

    /**
     * Gets full_name
     *
     * @return string
     */
    public function getFullName()
    {
        return $this->container['full_name'];
    }

    /**
     * Sets full_name
     *
     * @param string $full_name full_name
     *
     * @return $this
     */
    public function setFullName($full_name)
    {
        $this->container['full_name'] = $full_name;

        return $this;
    }

    /**
     * Gets tumblr
     *
     * @return string
     */
    public function getTumblr()
    {
        return $this->container['tumblr'];
    }

    /**
     * Sets tumblr
     *
     * @param string $tumblr tumblr
     *
     * @return $this
     */
    public function setTumblr($tumblr)
    {
        $this->container['tumblr'] = $tumblr;

        return $this;
    }

    /**
     * Gets description
     *
     * @return string
     */
    public function getDescription()
    {
        return $this->container['description'];
    }

    /**
     * Sets description
     *
     * @param string $description description
     *
     * @return $this
     */
    public function setDescription($description)
    {
        $this->container['description'] = $description;

        return $this;
    }

    /**
     * Gets instagram
     *
     * @return string
     */
    public function getInstagram()
    {
        return $this->container['instagram'];
    }

    /**
     * Sets instagram
     *
     * @param string $instagram instagram
     *
     * @return $this
     */
    public function setInstagram($instagram)
    {
        $this->container['instagram'] = $instagram;

        return $this;
    }

    /**
     * Gets soundcloud
     *
     * @return string
     */
    public function getSoundcloud()
    {
        return $this->container['soundcloud'];
    }

    /**
     * Sets soundcloud
     *
     * @param string $soundcloud soundcloud
     *
     * @return $this
     */
    public function setSoundcloud($soundcloud)
    {
        $this->container['soundcloud'] = $soundcloud;

        return $this;
    }

    /**
     * Gets first_name
     *
     * @return string
     */
    public function getFirstName()
    {
        return $this->container['first_name'];
    }

    /**
     * Sets first_name
     *
     * @param string $first_name first_name
     *
     * @return $this
     */
    public function setFirstName($first_name)
    {
        $this->container['first_name'] = $first_name;

        return $this;
    }

    /**
     * Gets twitter
     *
     * @return string
     */
    public function getTwitter()
    {
        return $this->container['twitter'];
    }

    /**
     * Sets twitter
     *
     * @param string $twitter twitter
     *
     * @return $this
     */
    public function setTwitter($twitter)
    {
        $this->container['twitter'] = $twitter;

        return $this;
    }

    /**
     * Gets consent_testgroup
     *
     * @return string
     */
    public function getConsentTestgroup()
    {
        return $this->container['consent_testgroup'];
    }

    /**
     * Sets consent_testgroup
     *
     * @param string $consent_testgroup consent_testgroup
     *
     * @return $this
     */
    public function setConsentTestgroup($consent_testgroup)
    {
        $this->container['consent_testgroup'] = $consent_testgroup;

        return $this;
    }

    /**
     * Gets phone
     *
     * @return string
     */
    public function getPhone()
    {
        return $this->container['phone'];
    }

    /**
     * Sets phone
     *
     * @param string $phone phone
     *
     * @return $this
     */
    public function setPhone($phone)
    {
        $this->container['phone'] = $phone;

        return $this;
    }

    /**
     * Gets tiktok
     *
     * @return string
     */
    public function getTiktok()
    {
        return $this->container['tiktok'];
    }

    /**
     * Sets tiktok
     *
     * @param string $tiktok tiktok
     *
     * @return $this
     */
    public function setTiktok($tiktok)
    {
        $this->container['tiktok'] = $tiktok;

        return $this;
    }

    /**
     * Gets legacy_token
     *
     * @return string
     */
    public function getLegacyToken()
    {
        return $this->container['legacy_token'];
    }

    /**
     * Sets legacy_token
     *
     * @param string $legacy_token legacy_token
     *
     * @return $this
     */
    public function setLegacyToken($legacy_token)
    {
        $this->container['legacy_token'] = $legacy_token;

        return $this;
    }

    /**
     * Gets consent_email
     *
     * @return string
     */
    public function getConsentEmail()
    {
        return $this->container['consent_email'];
    }

    /**
     * Sets consent_email
     *
     * @param string $consent_email consent_email
     *
     * @return $this
     */
    public function setConsentEmail($consent_email)
    {
        $this->container['consent_email'] = $consent_email;

        return $this;
    }

    /**
     * Gets email
     *
     * @return string
     */
    public function getEmail()
    {
        return $this->container['email'];
    }

    /**
     * Sets email
     *
     * @param string $email email
     *
     * @return $this
     */
    public function setEmail($email)
    {
        $this->container['email'] = $email;

        return $this;
    }

    /**
     * Gets longitude
     *
     * @return float
     */
    public function getLongitude()
    {
        return $this->container['longitude'];
    }

    /**
     * Sets longitude
     *
     * @param float $longitude longitude
     *
     * @return $this
     */
    public function setLongitude($longitude)
    {
        $this->container['longitude'] = $longitude;

        return $this;
    }

    /**
     * Gets username
     *
     * @return string
     */
    public function getUsername()
    {
        return $this->container['username'];
    }

    /**
     * Sets username
     *
     * @param string $username username
     *
     * @return $this
     */
    public function setUsername($username)
    {

        if ((!preg_match("/^[a-z0-5\\.]{2,9}\\.io$/", $username))) {
            throw new \InvalidArgumentException("invalid value for $username when calling UserCreateRequest., must conform to the pattern /^[a-z0-5\\.]{2,9}\\.io$/.");
        }

        $this->container['username'] = $username;

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

