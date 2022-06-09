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


class PaymentStripeWebhookRequest(object):
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
        'request': 'object',
        'livemode': 'bool',
        'data': 'PaymentStripeWebhookRequestData',
        'created': 'int',
        'id': 'str',
        'type': 'str',
        'api_version': 'str',
        'pending_webhooks': 'int',
        'object': 'str'
    }

    attribute_map = {
        'request': 'request',
        'livemode': 'livemode',
        'data': 'data',
        'created': 'created',
        'id': 'id',
        'type': 'type',
        'api_version': 'api_version',
        'pending_webhooks': 'pending_webhooks',
        'object': 'object'
    }

    def __init__(self, request=None, livemode=None, data=None, created=None, id=None, type=None, api_version=None, pending_webhooks=None, object=None, _configuration=None):  # noqa: E501
        """PaymentStripeWebhookRequest - a model defined in Swagger"""  # noqa: E501
        if _configuration is None:
            _configuration = Configuration()
        self._configuration = _configuration

        self._request = None
        self._livemode = None
        self._data = None
        self._created = None
        self._id = None
        self._type = None
        self._api_version = None
        self._pending_webhooks = None
        self._object = None
        self.discriminator = None

        if request is not None:
            self.request = request
        if livemode is not None:
            self.livemode = livemode
        if data is not None:
            self.data = data
        if created is not None:
            self.created = created
        if id is not None:
            self.id = id
        if type is not None:
            self.type = type
        if api_version is not None:
            self.api_version = api_version
        if pending_webhooks is not None:
            self.pending_webhooks = pending_webhooks
        if object is not None:
            self.object = object

    @property
    def request(self):
        """Gets the request of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The request of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: object
        """
        return self._request

    @request.setter
    def request(self, request):
        """Sets the request of this PaymentStripeWebhookRequest.


        :param request: The request of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: object
        """

        self._request = request

    @property
    def livemode(self):
        """Gets the livemode of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The livemode of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: bool
        """
        return self._livemode

    @livemode.setter
    def livemode(self, livemode):
        """Sets the livemode of this PaymentStripeWebhookRequest.


        :param livemode: The livemode of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: bool
        """

        self._livemode = livemode

    @property
    def data(self):
        """Gets the data of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The data of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: PaymentStripeWebhookRequestData
        """
        return self._data

    @data.setter
    def data(self, data):
        """Sets the data of this PaymentStripeWebhookRequest.


        :param data: The data of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: PaymentStripeWebhookRequestData
        """

        self._data = data

    @property
    def created(self):
        """Gets the created of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The created of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: int
        """
        return self._created

    @created.setter
    def created(self, created):
        """Sets the created of this PaymentStripeWebhookRequest.


        :param created: The created of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: int
        """

        self._created = created

    @property
    def id(self):
        """Gets the id of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The id of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this PaymentStripeWebhookRequest.


        :param id: The id of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: str
        """

        self._id = id

    @property
    def type(self):
        """Gets the type of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The type of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this PaymentStripeWebhookRequest.


        :param type: The type of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: str
        """

        self._type = type

    @property
    def api_version(self):
        """Gets the api_version of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The api_version of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: str
        """
        return self._api_version

    @api_version.setter
    def api_version(self, api_version):
        """Sets the api_version of this PaymentStripeWebhookRequest.


        :param api_version: The api_version of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: str
        """

        self._api_version = api_version

    @property
    def pending_webhooks(self):
        """Gets the pending_webhooks of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The pending_webhooks of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: int
        """
        return self._pending_webhooks

    @pending_webhooks.setter
    def pending_webhooks(self, pending_webhooks):
        """Sets the pending_webhooks of this PaymentStripeWebhookRequest.


        :param pending_webhooks: The pending_webhooks of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: int
        """

        self._pending_webhooks = pending_webhooks

    @property
    def object(self):
        """Gets the object of this PaymentStripeWebhookRequest.  # noqa: E501


        :return: The object of this PaymentStripeWebhookRequest.  # noqa: E501
        :rtype: str
        """
        return self._object

    @object.setter
    def object(self, object):
        """Sets the object of this PaymentStripeWebhookRequest.


        :param object: The object of this PaymentStripeWebhookRequest.  # noqa: E501
        :type: str
        """

        self._object = object

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
        if issubclass(PaymentStripeWebhookRequest, dict):
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
        if not isinstance(other, PaymentStripeWebhookRequest):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, PaymentStripeWebhookRequest):
            return True

        return self.to_dict() != other.to_dict()