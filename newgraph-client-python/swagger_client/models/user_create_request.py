# coding: utf-8

"""
    newlife-creator-api-eu-dev

    No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)  # noqa: E501

    OpenAPI spec version: 2022-05-20T13:39:48Z
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six

from swagger_client.configuration import Configuration


class UserCreateRequest(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'newcoin_ticker': 'str',
        'last_name': 'str',
        'website': 'str',
        'consent_privacy_policy': 'str',
        'display_name': 'str',
        'latitude': 'float',
        'full_name': 'str',
        'tumblr': 'str',
        'description': 'str',
        'instagram': 'str',
        'soundcloud': 'str',
        'first_name': 'str',
        'twitter': 'str',
        'consent_testgroup': 'str',
        'phone': 'str',
        'tiktok': 'str',
        'legacy_token': 'str',
        'consent_email': 'str',
        'email': 'str',
        'longitude': 'float',
        'username': 'str'
    }

    attribute_map = {
        'newcoin_ticker': 'newcoinTicker',
        'last_name': 'lastName',
        'website': 'website',
        'consent_privacy_policy': 'consentPrivacyPolicy',
        'display_name': 'displayName',
        'latitude': 'latitude',
        'full_name': 'fullName',
        'tumblr': 'tumblr',
        'description': 'description',
        'instagram': 'instagram',
        'soundcloud': 'soundcloud',
        'first_name': 'firstName',
        'twitter': 'twitter',
        'consent_testgroup': 'consentTestgroup',
        'phone': 'phone',
        'tiktok': 'tiktok',
        'legacy_token': 'legacyToken',
        'consent_email': 'consentEmail',
        'email': 'email',
        'longitude': 'longitude',
        'username': 'username'
    }

    def __init__(self, newcoin_ticker=None, last_name=None, website=None, consent_privacy_policy=None, display_name=None, latitude=None, full_name=None, tumblr=None, description=None, instagram=None, soundcloud=None, first_name=None, twitter=None, consent_testgroup=None, phone=None, tiktok=None, legacy_token=None, consent_email=None, email=None, longitude=None, username=None, _configuration=None):  # noqa: E501
        """UserCreateRequest - a model defined in Swagger"""  # noqa: E501
        if _configuration is None:
            _configuration = Configuration()
        self._configuration = _configuration

        self._newcoin_ticker = None
        self._last_name = None
        self._website = None
        self._consent_privacy_policy = None
        self._display_name = None
        self._latitude = None
        self._full_name = None
        self._tumblr = None
        self._description = None
        self._instagram = None
        self._soundcloud = None
        self._first_name = None
        self._twitter = None
        self._consent_testgroup = None
        self._phone = None
        self._tiktok = None
        self._legacy_token = None
        self._consent_email = None
        self._email = None
        self._longitude = None
        self._username = None
        self.discriminator = None

        if newcoin_ticker is not None:
            self.newcoin_ticker = newcoin_ticker
        if last_name is not None:
            self.last_name = last_name
        if website is not None:
            self.website = website
        if consent_privacy_policy is not None:
            self.consent_privacy_policy = consent_privacy_policy
        if display_name is not None:
            self.display_name = display_name
        if latitude is not None:
            self.latitude = latitude
        if full_name is not None:
            self.full_name = full_name
        if tumblr is not None:
            self.tumblr = tumblr
        if description is not None:
            self.description = description
        if instagram is not None:
            self.instagram = instagram
        if soundcloud is not None:
            self.soundcloud = soundcloud
        if first_name is not None:
            self.first_name = first_name
        if twitter is not None:
            self.twitter = twitter
        if consent_testgroup is not None:
            self.consent_testgroup = consent_testgroup
        self.phone = phone
        if tiktok is not None:
            self.tiktok = tiktok
        if legacy_token is not None:
            self.legacy_token = legacy_token
        if consent_email is not None:
            self.consent_email = consent_email
        if email is not None:
            self.email = email
        if longitude is not None:
            self.longitude = longitude
        self.username = username

    @property
    def newcoin_ticker(self):
        """Gets the newcoin_ticker of this UserCreateRequest.  # noqa: E501


        :return: The newcoin_ticker of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._newcoin_ticker

    @newcoin_ticker.setter
    def newcoin_ticker(self, newcoin_ticker):
        """Sets the newcoin_ticker of this UserCreateRequest.


        :param newcoin_ticker: The newcoin_ticker of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._newcoin_ticker = newcoin_ticker

    @property
    def last_name(self):
        """Gets the last_name of this UserCreateRequest.  # noqa: E501


        :return: The last_name of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._last_name

    @last_name.setter
    def last_name(self, last_name):
        """Sets the last_name of this UserCreateRequest.


        :param last_name: The last_name of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._last_name = last_name

    @property
    def website(self):
        """Gets the website of this UserCreateRequest.  # noqa: E501


        :return: The website of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._website

    @website.setter
    def website(self, website):
        """Sets the website of this UserCreateRequest.


        :param website: The website of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._website = website

    @property
    def consent_privacy_policy(self):
        """Gets the consent_privacy_policy of this UserCreateRequest.  # noqa: E501


        :return: The consent_privacy_policy of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._consent_privacy_policy

    @consent_privacy_policy.setter
    def consent_privacy_policy(self, consent_privacy_policy):
        """Sets the consent_privacy_policy of this UserCreateRequest.


        :param consent_privacy_policy: The consent_privacy_policy of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._consent_privacy_policy = consent_privacy_policy

    @property
    def display_name(self):
        """Gets the display_name of this UserCreateRequest.  # noqa: E501


        :return: The display_name of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._display_name

    @display_name.setter
    def display_name(self, display_name):
        """Sets the display_name of this UserCreateRequest.


        :param display_name: The display_name of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._display_name = display_name

    @property
    def latitude(self):
        """Gets the latitude of this UserCreateRequest.  # noqa: E501


        :return: The latitude of this UserCreateRequest.  # noqa: E501
        :rtype: float
        """
        return self._latitude

    @latitude.setter
    def latitude(self, latitude):
        """Sets the latitude of this UserCreateRequest.


        :param latitude: The latitude of this UserCreateRequest.  # noqa: E501
        :type: float
        """

        self._latitude = latitude

    @property
    def full_name(self):
        """Gets the full_name of this UserCreateRequest.  # noqa: E501


        :return: The full_name of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._full_name

    @full_name.setter
    def full_name(self, full_name):
        """Sets the full_name of this UserCreateRequest.


        :param full_name: The full_name of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._full_name = full_name

    @property
    def tumblr(self):
        """Gets the tumblr of this UserCreateRequest.  # noqa: E501


        :return: The tumblr of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._tumblr

    @tumblr.setter
    def tumblr(self, tumblr):
        """Sets the tumblr of this UserCreateRequest.


        :param tumblr: The tumblr of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._tumblr = tumblr

    @property
    def description(self):
        """Gets the description of this UserCreateRequest.  # noqa: E501


        :return: The description of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this UserCreateRequest.


        :param description: The description of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def instagram(self):
        """Gets the instagram of this UserCreateRequest.  # noqa: E501


        :return: The instagram of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._instagram

    @instagram.setter
    def instagram(self, instagram):
        """Sets the instagram of this UserCreateRequest.


        :param instagram: The instagram of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._instagram = instagram

    @property
    def soundcloud(self):
        """Gets the soundcloud of this UserCreateRequest.  # noqa: E501


        :return: The soundcloud of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._soundcloud

    @soundcloud.setter
    def soundcloud(self, soundcloud):
        """Sets the soundcloud of this UserCreateRequest.


        :param soundcloud: The soundcloud of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._soundcloud = soundcloud

    @property
    def first_name(self):
        """Gets the first_name of this UserCreateRequest.  # noqa: E501


        :return: The first_name of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._first_name

    @first_name.setter
    def first_name(self, first_name):
        """Sets the first_name of this UserCreateRequest.


        :param first_name: The first_name of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._first_name = first_name

    @property
    def twitter(self):
        """Gets the twitter of this UserCreateRequest.  # noqa: E501


        :return: The twitter of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._twitter

    @twitter.setter
    def twitter(self, twitter):
        """Sets the twitter of this UserCreateRequest.


        :param twitter: The twitter of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._twitter = twitter

    @property
    def consent_testgroup(self):
        """Gets the consent_testgroup of this UserCreateRequest.  # noqa: E501


        :return: The consent_testgroup of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._consent_testgroup

    @consent_testgroup.setter
    def consent_testgroup(self, consent_testgroup):
        """Sets the consent_testgroup of this UserCreateRequest.


        :param consent_testgroup: The consent_testgroup of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._consent_testgroup = consent_testgroup

    @property
    def phone(self):
        """Gets the phone of this UserCreateRequest.  # noqa: E501


        :return: The phone of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._phone

    @phone.setter
    def phone(self, phone):
        """Sets the phone of this UserCreateRequest.


        :param phone: The phone of this UserCreateRequest.  # noqa: E501
        :type: str
        """
        if self._configuration.client_side_validation and phone is None:
            raise ValueError("Invalid value for `phone`, must not be `None`")  # noqa: E501

        self._phone = phone

    @property
    def tiktok(self):
        """Gets the tiktok of this UserCreateRequest.  # noqa: E501


        :return: The tiktok of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._tiktok

    @tiktok.setter
    def tiktok(self, tiktok):
        """Sets the tiktok of this UserCreateRequest.


        :param tiktok: The tiktok of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._tiktok = tiktok

    @property
    def legacy_token(self):
        """Gets the legacy_token of this UserCreateRequest.  # noqa: E501


        :return: The legacy_token of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._legacy_token

    @legacy_token.setter
    def legacy_token(self, legacy_token):
        """Sets the legacy_token of this UserCreateRequest.


        :param legacy_token: The legacy_token of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._legacy_token = legacy_token

    @property
    def consent_email(self):
        """Gets the consent_email of this UserCreateRequest.  # noqa: E501


        :return: The consent_email of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._consent_email

    @consent_email.setter
    def consent_email(self, consent_email):
        """Sets the consent_email of this UserCreateRequest.


        :param consent_email: The consent_email of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._consent_email = consent_email

    @property
    def email(self):
        """Gets the email of this UserCreateRequest.  # noqa: E501


        :return: The email of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._email

    @email.setter
    def email(self, email):
        """Sets the email of this UserCreateRequest.


        :param email: The email of this UserCreateRequest.  # noqa: E501
        :type: str
        """

        self._email = email

    @property
    def longitude(self):
        """Gets the longitude of this UserCreateRequest.  # noqa: E501


        :return: The longitude of this UserCreateRequest.  # noqa: E501
        :rtype: float
        """
        return self._longitude

    @longitude.setter
    def longitude(self, longitude):
        """Sets the longitude of this UserCreateRequest.


        :param longitude: The longitude of this UserCreateRequest.  # noqa: E501
        :type: float
        """

        self._longitude = longitude

    @property
    def username(self):
        """Gets the username of this UserCreateRequest.  # noqa: E501


        :return: The username of this UserCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._username

    @username.setter
    def username(self, username):
        """Sets the username of this UserCreateRequest.


        :param username: The username of this UserCreateRequest.  # noqa: E501
        :type: str
        """
        if self._configuration.client_side_validation and username is None:
            raise ValueError("Invalid value for `username`, must not be `None`")  # noqa: E501
        if (self._configuration.client_side_validation and
                username is not None and not re.search(r'^[a-z0-5\\.]{2,9}\\.io$', username)):  # noqa: E501
            raise ValueError(r"Invalid value for `username`, must be a follow pattern or equal to `/^[a-z0-5\\.]{2,9}\\.io$/`")  # noqa: E501

        self._username = username

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(UserCreateRequest, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, UserCreateRequest):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, UserCreateRequest):
            return True

        return self.to_dict() != other.to_dict()
