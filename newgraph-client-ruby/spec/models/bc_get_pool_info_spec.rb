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

# Unit tests for SwaggerClient::BcGetPoolInfo
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'BcGetPoolInfo' do
  before do
    # run before each test
    @instance = SwaggerClient::BcGetPoolInfo.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of BcGetPoolInfo' do
    it 'should create an instance of BcGetPoolInfo' do
      expect(@instance).to be_instance_of(SwaggerClient::BcGetPoolInfo)
    end
  end
  describe 'test attribute "owner"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
