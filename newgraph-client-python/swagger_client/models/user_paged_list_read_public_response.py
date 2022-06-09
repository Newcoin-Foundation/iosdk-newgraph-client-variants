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


class UserPagedListReadPublicResponse(object):
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
        'value': 'list[MoodPagedListReadPublicResponseAuthor]',
        'done': 'bool'
    }

    attribute_map = {
        'value': 'value',
        'done': 'done'
    }

    def __init__(self, value=None, done=None, _configuration=None):  # noqa: E501
        """UserPagedListReadPublicResponse - a model defined in Swagger"""  # noqa: E501
        if _configuration is None:
            _configuration = Configuration()
        self._configuration = _configuration

        self._value = None
        self._done = None
        self.discriminator = None

        if value is not None:
            self.value = value
        if done is not None:
            self.done = done

    @property
    def value(self):
        """Gets the value of this UserPagedListReadPublicResponse.  # noqa: E501


        :return: The value of this UserPagedListReadPublicResponse.  # noqa: E501
        :rtype: list[MoodPagedListReadPublicResponseAuthor]
        """
        return self._value

    @value.setter
    def value(self, value):
        """Sets the value of this UserPagedListReadPublicResponse.


        :param value: The value of this UserPagedListReadPublicResponse.  # noqa: E501
        :type: list[MoodPagedListReadPublicResponseAuthor]
        """

        self._value = value

    @property
    def done(self):
        """Gets the done of this UserPagedListReadPublicResponse.  # noqa: E501


        :return: The done of this UserPagedListReadPublicResponse.  # noqa: E501
        :rtype: bool
        """
        return self._done

    @done.setter
    def done(self, done):
        """Sets the done of this UserPagedListReadPublicResponse.


        :param done: The done of this UserPagedListReadPublicResponse.  # noqa: E501
        :type: bool
        """

        self._done = done

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
        if issubclass(UserPagedListReadPublicResponse, dict):
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
        if not isinstance(other, UserPagedListReadPublicResponse):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, UserPagedListReadPublicResponse):
            return True

        return self.to_dict() != other.to_dict()