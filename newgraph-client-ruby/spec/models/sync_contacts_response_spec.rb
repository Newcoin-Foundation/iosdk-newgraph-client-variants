=begin
#newlife-creator-api-eu-dev

#No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)

OpenAPI spec version: 2022-05-20T13:39:48Z

Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.4.27

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for SwaggerClient::SyncContactsResponse
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'SyncContactsResponse' do
  before do
    # run before each test
    @instance = SwaggerClient::SyncContactsResponse.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of SyncContactsResponse' do
    it 'should create an instance of SyncContactsResponse' do
      expect(@instance).to be_instance_of(SwaggerClient::SyncContactsResponse)
    end
  end
end
