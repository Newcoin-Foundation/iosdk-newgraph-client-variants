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


class BcCreateDaoResponse(object):
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
        'tx_id_create_dao': 'str',
        'dao_id': 'str'
    }

    attribute_map = {
        'tx_id_create_dao': 'TxID_createDao',
        'dao_id': 'dao_id'
    }

    def __init__(self, tx_id_create_dao=None, dao_id=None, _configuration=None):  # noqa: E501
        """BcCreateDaoResponse - a model defined in Swagger"""  # noqa: E501
        if _configuration is None:
            _configuration = Configuration()
        self._configuration = _configuration

        self._tx_id_create_dao = None
        self._dao_id = None
        self.discriminator = None

        if tx_id_create_dao is not None:
            self.tx_id_create_dao = tx_id_create_dao
        if dao_id is not None:
            self.dao_id = dao_id

    @property
    def tx_id_create_dao(self):
        """Gets the tx_id_create_dao of this BcCreateDaoResponse.  # noqa: E501


        :return: The tx_id_create_dao of this BcCreateDaoResponse.  # noqa: E501
        :rtype: str
        """
        return self._tx_id_create_dao

    @tx_id_create_dao.setter
    def tx_id_create_dao(self, tx_id_create_dao):
        """Sets the tx_id_create_dao of this BcCreateDaoResponse.


        :param tx_id_create_dao: The tx_id_create_dao of this BcCreateDaoResponse.  # noqa: E501
        :type: str
        """

        self._tx_id_create_dao = tx_id_create_dao

    @property
    def dao_id(self):
        """Gets the dao_id of this BcCreateDaoResponse.  # noqa: E501


        :return: The dao_id of this BcCreateDaoResponse.  # noqa: E501
        :rtype: str
        """
        return self._dao_id

    @dao_id.setter
    def dao_id(self, dao_id):
        """Sets the dao_id of this BcCreateDaoResponse.


        :param dao_id: The dao_id of this BcCreateDaoResponse.  # noqa: E501
        :type: str
        """

        self._dao_id = dao_id

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
        if issubclass(BcCreateDaoResponse, dict):
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
        if not isinstance(other, BcCreateDaoResponse):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, BcCreateDaoResponse):
            return True

        return self.to_dict() != other.to_dict()
