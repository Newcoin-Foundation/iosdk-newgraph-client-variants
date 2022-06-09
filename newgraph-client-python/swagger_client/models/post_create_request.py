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


class PostCreateRequest(object):
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
        'license': 'str',
        'do_mint': 'str',
        'description': 'str',
        'title': 'str',
        'content_type': 'str',
        'content': 'str'
    }

    attribute_map = {
        'license': 'license',
        'do_mint': 'doMint',
        'description': 'description',
        'title': 'title',
        'content_type': 'contentType',
        'content': 'content'
    }

    def __init__(self, license=None, do_mint=None, description=None, title=None, content_type=None, content=None, _configuration=None):  # noqa: E501
        """PostCreateRequest - a model defined in Swagger"""  # noqa: E501
        if _configuration is None:
            _configuration = Configuration()
        self._configuration = _configuration

        self._license = None
        self._do_mint = None
        self._description = None
        self._title = None
        self._content_type = None
        self._content = None
        self.discriminator = None

        if license is not None:
            self.license = license
        if do_mint is not None:
            self.do_mint = do_mint
        if description is not None:
            self.description = description
        if title is not None:
            self.title = title
        if content_type is not None:
            self.content_type = content_type
        if content is not None:
            self.content = content

    @property
    def license(self):
        """Gets the license of this PostCreateRequest.  # noqa: E501


        :return: The license of this PostCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._license

    @license.setter
    def license(self, license):
        """Sets the license of this PostCreateRequest.


        :param license: The license of this PostCreateRequest.  # noqa: E501
        :type: str
        """

        self._license = license

    @property
    def do_mint(self):
        """Gets the do_mint of this PostCreateRequest.  # noqa: E501


        :return: The do_mint of this PostCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._do_mint

    @do_mint.setter
    def do_mint(self, do_mint):
        """Sets the do_mint of this PostCreateRequest.


        :param do_mint: The do_mint of this PostCreateRequest.  # noqa: E501
        :type: str
        """

        self._do_mint = do_mint

    @property
    def description(self):
        """Gets the description of this PostCreateRequest.  # noqa: E501


        :return: The description of this PostCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this PostCreateRequest.


        :param description: The description of this PostCreateRequest.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def title(self):
        """Gets the title of this PostCreateRequest.  # noqa: E501


        :return: The title of this PostCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._title

    @title.setter
    def title(self, title):
        """Sets the title of this PostCreateRequest.


        :param title: The title of this PostCreateRequest.  # noqa: E501
        :type: str
        """

        self._title = title

    @property
    def content_type(self):
        """Gets the content_type of this PostCreateRequest.  # noqa: E501


        :return: The content_type of this PostCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._content_type

    @content_type.setter
    def content_type(self, content_type):
        """Sets the content_type of this PostCreateRequest.


        :param content_type: The content_type of this PostCreateRequest.  # noqa: E501
        :type: str
        """

        self._content_type = content_type

    @property
    def content(self):
        """Gets the content of this PostCreateRequest.  # noqa: E501


        :return: The content of this PostCreateRequest.  # noqa: E501
        :rtype: str
        """
        return self._content

    @content.setter
    def content(self, content):
        """Sets the content of this PostCreateRequest.


        :param content: The content of this PostCreateRequest.  # noqa: E501
        :type: str
        """

        self._content = content

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
        if issubclass(PostCreateRequest, dict):
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
        if not isinstance(other, PostCreateRequest):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, PostCreateRequest):
            return True

        return self.to_dict() != other.to_dict()
