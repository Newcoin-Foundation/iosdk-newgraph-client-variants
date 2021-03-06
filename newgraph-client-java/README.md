# swagger-java-client

newlife-creator-api-eu-dev
- API version: 2022-05-20T13:39:48Z
  - Build date: 2022-05-24T13:27:29.274Z

No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)


*Automatically generated by the [Swagger Codegen](https://github.com/swagger-api/swagger-codegen)*


## Requirements

Building the API client library requires:
1. Java 1.7+
2. Maven/Gradle

## Installation

To install the API client library to your local Maven repository, simply execute:

```shell
mvn clean install
```

To deploy it to a remote Maven repository instead, configure the settings of the repository and execute:

```shell
mvn clean deploy
```

Refer to the [OSSRH Guide](http://central.sonatype.org/pages/ossrh-guide.html) for more information.

### Maven users

Add this dependency to your project's POM:

```xml
<dependency>
  <groupId>io.swagger</groupId>
  <artifactId>swagger-java-client</artifactId>
  <version>1.0.0</version>
  <scope>compile</scope>
</dependency>
```

### Gradle users

Add this dependency to your project's build file:

```groovy
compile "io.swagger:swagger-java-client:1.0.0"
```

### Others

At first generate the JAR by executing:

```shell
mvn clean package
```

Then manually install the following JARs:

* `target/swagger-java-client-1.0.0.jar`
* `target/lib/*.jar`

## Getting Started

Please follow the [installation](#installation) instruction and execute the following Java code:

```java

import io.swagger.client.*;
import io.swagger.client.auth.*;
import io.swagger.client.model.*;
import io.swagger.client.api.DefaultApi;

import java.io.File;
import java.util.*;

public class DefaultApiExample {

    public static void main(String[] args) {
        
        DefaultApi apiInstance = new DefaultApi();
        String path = "path_example"; // String | 
        try {
            apiInstance.authCallbackPathGet(path);
        } catch (ApiException e) {
            System.err.println("Exception when calling DefaultApi#authCallbackPathGet");
            e.printStackTrace();
        }
    }
}

```

## Documentation for API Endpoints

All URIs are relative to *https://api-eu-dev.newlife.io/creator*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*DefaultApi* | [**authCallbackPathGet**](docs/DefaultApi.md#authCallbackPathGet) | **GET** /auth/callback/{path+} | 
*DefaultApi* | [**authCallbackPathOptions**](docs/DefaultApi.md#authCallbackPathOptions) | **OPTIONS** /auth/callback/{path+} | 
*DefaultApi* | [**authProviderPathGet**](docs/DefaultApi.md#authProviderPathGet) | **GET** /auth/provider/{path+} | 
*DefaultApi* | [**authProviderPathOptions**](docs/DefaultApi.md#authProviderPathOptions) | **OPTIONS** /auth/provider/{path+} | 
*DefaultApi* | [**bcmaindaodldunstakeOptions**](docs/DefaultApi.md#bcmaindaodldunstakeOptions) | **OPTIONS** /bcmaindaodldunstake | 
*DefaultApi* | [**bcmaindaodldunstakePost**](docs/DefaultApi.md#bcmaindaodldunstakePost) | **POST** /bcmaindaodldunstake | 
*DefaultApi* | [**bcmaindaoinstunstakeOptions**](docs/DefaultApi.md#bcmaindaoinstunstakeOptions) | **OPTIONS** /bcmaindaoinstunstake | 
*DefaultApi* | [**bcmaindaoinstunstakePost**](docs/DefaultApi.md#bcmaindaoinstunstakePost) | **POST** /bcmaindaoinstunstake | 
*DefaultApi* | [**bcmaindaostakeOptions**](docs/DefaultApi.md#bcmaindaostakeOptions) | **OPTIONS** /bcmaindaostake | 
*DefaultApi* | [**bcmaindaostakePost**](docs/DefaultApi.md#bcmaindaostakePost) | **POST** /bcmaindaostake | 
*DefaultApi* | [**folderGet**](docs/DefaultApi.md#folderGet) | **GET** /folder | 
*DefaultApi* | [**folderOptions**](docs/DefaultApi.md#folderOptions) | **OPTIONS** /folder | 
*DefaultApi* | [**infoAuthGet**](docs/DefaultApi.md#infoAuthGet) | **GET** /info-auth | 
*DefaultApi* | [**infoAuthOptions**](docs/DefaultApi.md#infoAuthOptions) | **OPTIONS** /info-auth | 
*DefaultApi* | [**infoGet**](docs/DefaultApi.md#infoGet) | **GET** /info | 
*DefaultApi* | [**infoOptions**](docs/DefaultApi.md#infoOptions) | **OPTIONS** /info | 
*DefaultApi* | [**moodAttachPostOptions**](docs/DefaultApi.md#moodAttachPostOptions) | **OPTIONS** /mood/attach/post | 
*DefaultApi* | [**moodAttachPostPut**](docs/DefaultApi.md#moodAttachPostPut) | **PUT** /mood/attach/post | 
*DefaultApi* | [**moodGet**](docs/DefaultApi.md#moodGet) | **GET** /mood | 
*DefaultApi* | [**moodListTopGet**](docs/DefaultApi.md#moodListTopGet) | **GET** /mood/list/top | 
*DefaultApi* | [**moodListTopOptions**](docs/DefaultApi.md#moodListTopOptions) | **OPTIONS** /mood/list/top | 
*DefaultApi* | [**moodOptions**](docs/DefaultApi.md#moodOptions) | **OPTIONS** /mood | 
*DefaultApi* | [**moodPost**](docs/DefaultApi.md#moodPost) | **POST** /mood | 
*DefaultApi* | [**moodPostsGet**](docs/DefaultApi.md#moodPostsGet) | **GET** /mood/posts | 
*DefaultApi* | [**moodPostsOptions**](docs/DefaultApi.md#moodPostsOptions) | **OPTIONS** /mood/posts | 
*DefaultApi* | [**moodPut**](docs/DefaultApi.md#moodPut) | **PUT** /mood | 
*DefaultApi* | [**moodRateOptions**](docs/DefaultApi.md#moodRateOptions) | **OPTIONS** /mood/rate | 
*DefaultApi* | [**moodRatePost**](docs/DefaultApi.md#moodRatePost) | **POST** /mood/rate | 
*DefaultApi* | [**moodUploadOptions**](docs/DefaultApi.md#moodUploadOptions) | **OPTIONS** /mood/upload | 
*DefaultApi* | [**moodUploadPost**](docs/DefaultApi.md#moodUploadPost) | **POST** /mood/upload | 
*DefaultApi* | [**newcoinBcaccopenOptions**](docs/DefaultApi.md#newcoinBcaccopenOptions) | **OPTIONS** /newcoin/bcaccopen | 
*DefaultApi* | [**newcoinBcaccopenPost**](docs/DefaultApi.md#newcoinBcaccopenPost) | **POST** /newcoin/bcaccopen | 
*DefaultApi* | [**newcoinBcauthethOptions**](docs/DefaultApi.md#newcoinBcauthethOptions) | **OPTIONS** /newcoin/bcautheth | 
*DefaultApi* | [**newcoinBcauthethPost**](docs/DefaultApi.md#newcoinBcauthethPost) | **POST** /newcoin/bcautheth | 
*DefaultApi* | [**newcoinBccolcreateOptions**](docs/DefaultApi.md#newcoinBccolcreateOptions) | **OPTIONS** /newcoin/bccolcreate | 
*DefaultApi* | [**newcoinBccolcreatePost**](docs/DefaultApi.md#newcoinBccolcreatePost) | **POST** /newcoin/bccolcreate | 
*DefaultApi* | [**newcoinBcgetaccOptions**](docs/DefaultApi.md#newcoinBcgetaccOptions) | **OPTIONS** /newcoin/bcgetacc | 
*DefaultApi* | [**newcoinBcgetaccPost**](docs/DefaultApi.md#newcoinBcgetaccPost) | **POST** /newcoin/bcgetacc | 
*DefaultApi* | [**newcoinBcgetpoolOptions**](docs/DefaultApi.md#newcoinBcgetpoolOptions) | **OPTIONS** /newcoin/bcgetpool | 
*DefaultApi* | [**newcoinBcgetpoolPost**](docs/DefaultApi.md#newcoinBcgetpoolPost) | **POST** /newcoin/bcgetpool | 
*DefaultApi* | [**newcoinBckeypairOptions**](docs/DefaultApi.md#newcoinBckeypairOptions) | **OPTIONS** /newcoin/bckeypair | 
*DefaultApi* | [**newcoinBckeypairPost**](docs/DefaultApi.md#newcoinBckeypairPost) | **POST** /newcoin/bckeypair | 
*DefaultApi* | [**newcoinBcmintassetOptions**](docs/DefaultApi.md#newcoinBcmintassetOptions) | **OPTIONS** /newcoin/bcmintasset | 
*DefaultApi* | [**newcoinBcmintassetPost**](docs/DefaultApi.md#newcoinBcmintassetPost) | **POST** /newcoin/bcmintasset | 
*DefaultApi* | [**newcoinBcpoolcreateOptions**](docs/DefaultApi.md#newcoinBcpoolcreateOptions) | **OPTIONS** /newcoin/bcpoolcreate | 
*DefaultApi* | [**newcoinBcpoolcreatePost**](docs/DefaultApi.md#newcoinBcpoolcreatePost) | **POST** /newcoin/bcpoolcreate | 
*DefaultApi* | [**newcoinBcpoolstakeOptions**](docs/DefaultApi.md#newcoinBcpoolstakeOptions) | **OPTIONS** /newcoin/bcpoolstake | 
*DefaultApi* | [**newcoinBcpoolstakePost**](docs/DefaultApi.md#newcoinBcpoolstakePost) | **POST** /newcoin/bcpoolstake | 
*DefaultApi* | [**newcoinDaoCreateOptions**](docs/DefaultApi.md#newcoinDaoCreateOptions) | **OPTIONS** /newcoin/dao/create | 
*DefaultApi* | [**newcoinDaoCreatePost**](docs/DefaultApi.md#newcoinDaoCreatePost) | **POST** /newcoin/dao/create | 
*DefaultApi* | [**newcoinDaoProposalApproveOptions**](docs/DefaultApi.md#newcoinDaoProposalApproveOptions) | **OPTIONS** /newcoin/dao/proposal/approve | 
*DefaultApi* | [**newcoinDaoProposalApprovePost**](docs/DefaultApi.md#newcoinDaoProposalApprovePost) | **POST** /newcoin/dao/proposal/approve | 
*DefaultApi* | [**newcoinDaoProposalListGet**](docs/DefaultApi.md#newcoinDaoProposalListGet) | **GET** /newcoin/dao/proposal/list | 
*DefaultApi* | [**newcoinDaoProposalListOptions**](docs/DefaultApi.md#newcoinDaoProposalListOptions) | **OPTIONS** /newcoin/dao/proposal/list | 
*DefaultApi* | [**newcoinDaoProposalOptions**](docs/DefaultApi.md#newcoinDaoProposalOptions) | **OPTIONS** /newcoin/dao/proposal | 
*DefaultApi* | [**newcoinDaoProposalPost**](docs/DefaultApi.md#newcoinDaoProposalPost) | **POST** /newcoin/dao/proposal | 
*DefaultApi* | [**newcoinDaoProposalVoteOptions**](docs/DefaultApi.md#newcoinDaoProposalVoteOptions) | **OPTIONS** /newcoin/dao/proposal/vote | 
*DefaultApi* | [**newcoinDaoProposalVotePost**](docs/DefaultApi.md#newcoinDaoProposalVotePost) | **POST** /newcoin/dao/proposal/vote | 
*DefaultApi* | [**newcoinDaoProposalVotesGet**](docs/DefaultApi.md#newcoinDaoProposalVotesGet) | **GET** /newcoin/dao/proposal/votes | 
*DefaultApi* | [**newcoinDaoProposalVotesOptions**](docs/DefaultApi.md#newcoinDaoProposalVotesOptions) | **OPTIONS** /newcoin/dao/proposal/votes | 
*DefaultApi* | [**paymentStripeIntentOptions**](docs/DefaultApi.md#paymentStripeIntentOptions) | **OPTIONS** /payment/stripe/intent | 
*DefaultApi* | [**paymentStripeIntentPost**](docs/DefaultApi.md#paymentStripeIntentPost) | **POST** /payment/stripe/intent | 
*DefaultApi* | [**paymentStripeSubscriptionPaymentOptions**](docs/DefaultApi.md#paymentStripeSubscriptionPaymentOptions) | **OPTIONS** /payment/stripe/subscription/payment | 
*DefaultApi* | [**paymentStripeSubscriptionPaymentPost**](docs/DefaultApi.md#paymentStripeSubscriptionPaymentPost) | **POST** /payment/stripe/subscription/payment | 
*DefaultApi* | [**paymentStripeWebhookOptions**](docs/DefaultApi.md#paymentStripeWebhookOptions) | **OPTIONS** /payment/stripe/webhook | 
*DefaultApi* | [**paymentStripeWebhookPost**](docs/DefaultApi.md#paymentStripeWebhookPost) | **POST** /payment/stripe/webhook | 
*DefaultApi* | [**postGet**](docs/DefaultApi.md#postGet) | **GET** /post | 
*DefaultApi* | [**postListSearchGet**](docs/DefaultApi.md#postListSearchGet) | **GET** /post/list/search | 
*DefaultApi* | [**postListSearchOptions**](docs/DefaultApi.md#postListSearchOptions) | **OPTIONS** /post/list/search | 
*DefaultApi* | [**postListTagsSearchGet**](docs/DefaultApi.md#postListTagsSearchGet) | **GET** /post/list/tags-search | 
*DefaultApi* | [**postListTagsSearchOptions**](docs/DefaultApi.md#postListTagsSearchOptions) | **OPTIONS** /post/list/tags-search | 
*DefaultApi* | [**postListTopGet**](docs/DefaultApi.md#postListTopGet) | **GET** /post/list/top | 
*DefaultApi* | [**postListTopOptions**](docs/DefaultApi.md#postListTopOptions) | **OPTIONS** /post/list/top | 
*DefaultApi* | [**postOptions**](docs/DefaultApi.md#postOptions) | **OPTIONS** /post | 
*DefaultApi* | [**postPost**](docs/DefaultApi.md#postPost) | **POST** /post | 
*DefaultApi* | [**postPut**](docs/DefaultApi.md#postPut) | **PUT** /post | 
*DefaultApi* | [**postRateOptions**](docs/DefaultApi.md#postRateOptions) | **OPTIONS** /post/rate | 
*DefaultApi* | [**postRatePost**](docs/DefaultApi.md#postRatePost) | **POST** /post/rate | 
*DefaultApi* | [**postReportOptions**](docs/DefaultApi.md#postReportOptions) | **OPTIONS** /post/report | 
*DefaultApi* | [**postReportPost**](docs/DefaultApi.md#postReportPost) | **POST** /post/report | 
*DefaultApi* | [**postUploadOptions**](docs/DefaultApi.md#postUploadOptions) | **OPTIONS** /post/upload | 
*DefaultApi* | [**postUploadPost**](docs/DefaultApi.md#postUploadPost) | **POST** /post/upload | 
*DefaultApi* | [**searchCreativeGet**](docs/DefaultApi.md#searchCreativeGet) | **GET** /search/creative | 
*DefaultApi* | [**searchCreativeOptions**](docs/DefaultApi.md#searchCreativeOptions) | **OPTIONS** /search/creative | 
*DefaultApi* | [**uploadNodeOptions**](docs/DefaultApi.md#uploadNodeOptions) | **OPTIONS** /upload/node | 
*DefaultApi* | [**uploadNodePost**](docs/DefaultApi.md#uploadNodePost) | **POST** /upload/node | 
*DefaultApi* | [**userActivityStreamGet**](docs/DefaultApi.md#userActivityStreamGet) | **GET** /user/activityStream | 
*DefaultApi* | [**userActivityStreamOptions**](docs/DefaultApi.md#userActivityStreamOptions) | **OPTIONS** /user/activityStream | 
*DefaultApi* | [**userAvailabilityGet**](docs/DefaultApi.md#userAvailabilityGet) | **GET** /user/availability | 
*DefaultApi* | [**userAvailabilityOptions**](docs/DefaultApi.md#userAvailabilityOptions) | **OPTIONS** /user/availability | 
*DefaultApi* | [**userCurrentGet**](docs/DefaultApi.md#userCurrentGet) | **GET** /user/current | 
*DefaultApi* | [**userCurrentOptions**](docs/DefaultApi.md#userCurrentOptions) | **OPTIONS** /user/current | 
*DefaultApi* | [**userDelete**](docs/DefaultApi.md#userDelete) | **DELETE** /user | 
*DefaultApi* | [**userGet**](docs/DefaultApi.md#userGet) | **GET** /user | 
*DefaultApi* | [**userInviteOptions**](docs/DefaultApi.md#userInviteOptions) | **OPTIONS** /user/invite | 
*DefaultApi* | [**userInvitePost**](docs/DefaultApi.md#userInvitePost) | **POST** /user/invite | 
*DefaultApi* | [**userListSearchGet**](docs/DefaultApi.md#userListSearchGet) | **GET** /user/list/search | 
*DefaultApi* | [**userListSearchOptions**](docs/DefaultApi.md#userListSearchOptions) | **OPTIONS** /user/list/search | 
*DefaultApi* | [**userListTopGet**](docs/DefaultApi.md#userListTopGet) | **GET** /user/list/top | 
*DefaultApi* | [**userListTopOptions**](docs/DefaultApi.md#userListTopOptions) | **OPTIONS** /user/list/top | 
*DefaultApi* | [**userMoodsGet**](docs/DefaultApi.md#userMoodsGet) | **GET** /user/moods | 
*DefaultApi* | [**userMoodsOptions**](docs/DefaultApi.md#userMoodsOptions) | **OPTIONS** /user/moods | 
*DefaultApi* | [**userOptions**](docs/DefaultApi.md#userOptions) | **OPTIONS** /user | 
*DefaultApi* | [**userPost**](docs/DefaultApi.md#userPost) | **POST** /user | 
*DefaultApi* | [**userPreregisterOptions**](docs/DefaultApi.md#userPreregisterOptions) | **OPTIONS** /user/preregister | 
*DefaultApi* | [**userPreregisterPost**](docs/DefaultApi.md#userPreregisterPost) | **POST** /user/preregister | 
*DefaultApi* | [**userPut**](docs/DefaultApi.md#userPut) | **PUT** /user | 
*DefaultApi* | [**userRatedInGet**](docs/DefaultApi.md#userRatedInGet) | **GET** /user/rated/in | 
*DefaultApi* | [**userRatedInOptions**](docs/DefaultApi.md#userRatedInOptions) | **OPTIONS** /user/rated/in | 
*DefaultApi* | [**userRatedOutPostsGet**](docs/DefaultApi.md#userRatedOutPostsGet) | **GET** /user/rated/out/posts | 
*DefaultApi* | [**userRatedOutPostsOptions**](docs/DefaultApi.md#userRatedOutPostsOptions) | **OPTIONS** /user/rated/out/posts | 
*DefaultApi* | [**userRatedOutUsersGet**](docs/DefaultApi.md#userRatedOutUsersGet) | **GET** /user/rated/out/users | 
*DefaultApi* | [**userRatedOutUsersOptions**](docs/DefaultApi.md#userRatedOutUsersOptions) | **OPTIONS** /user/rated/out/users | 
*DefaultApi* | [**userStakeOptions**](docs/DefaultApi.md#userStakeOptions) | **OPTIONS** /user/stake | 
*DefaultApi* | [**userStakePost**](docs/DefaultApi.md#userStakePost) | **POST** /user/stake | 
*DefaultApi* | [**userSyncContactsOptions**](docs/DefaultApi.md#userSyncContactsOptions) | **OPTIONS** /user/syncContacts | 
*DefaultApi* | [**userSyncContactsPost**](docs/DefaultApi.md#userSyncContactsPost) | **POST** /user/syncContacts | 
*DefaultApi* | [**userUploadOptions**](docs/DefaultApi.md#userUploadOptions) | **OPTIONS** /user/upload | 
*DefaultApi* | [**userUploadPost**](docs/DefaultApi.md#userUploadPost) | **POST** /user/upload | 
*DefaultApi* | [**userUserRateOptions**](docs/DefaultApi.md#userUserRateOptions) | **OPTIONS** /user/userRate | 
*DefaultApi* | [**userUserRatePost**](docs/DefaultApi.md#userUserRatePost) | **POST** /user/userRate | 


## Documentation for Models

 - [AnyResponse](docs/AnyResponse.md)
 - [BcAccCreateRequest](docs/BcAccCreateRequest.md)
 - [BcApproveDaoProposalRequest](docs/BcApproveDaoProposalRequest.md)
 - [BcAuthEthRequest](docs/BcAuthEthRequest.md)
 - [BcAuthEthResponse](docs/BcAuthEthResponse.md)
 - [BcCollectionCreateRequest](docs/BcCollectionCreateRequest.md)
 - [BcCollectionCreateRequestTemplateFields](docs/BcCollectionCreateRequestTemplateFields.md)
 - [BcCreateDaoProposal](docs/BcCreateDaoProposal.md)
 - [BcCreateDaoRequest](docs/BcCreateDaoRequest.md)
 - [BcCreateDaoResponse](docs/BcCreateDaoResponse.md)
 - [BcDaoProposalVoteRequest](docs/BcDaoProposalVoteRequest.md)
 - [BcDaoProposalVoteResponse](docs/BcDaoProposalVoteResponse.md)
 - [BcDaoProposalVoteResponseRows](docs/BcDaoProposalVoteResponseRows.md)
 - [BcGetAccountInfo](docs/BcGetAccountInfo.md)
 - [BcGetInfoResp](docs/BcGetInfoResp.md)
 - [BcGetPoolInfo](docs/BcGetPoolInfo.md)
 - [BcKeyPairCreateRequest](docs/BcKeyPairCreateRequest.md)
 - [BcKeyPairCreateResponse](docs/BcKeyPairCreateResponse.md)
 - [BcListDaoProposalsResponse](docs/BcListDaoProposalsResponse.md)
 - [BcListDaoProposalsResponseRows](docs/BcListDaoProposalsResponseRows.md)
 - [BcListDaoProposalsResponseVoteNo](docs/BcListDaoProposalsResponseVoteNo.md)
 - [BcMintAssetRequest](docs/BcMintAssetRequest.md)
 - [BcMintAssetRequestImmutableData](docs/BcMintAssetRequestImmutableData.md)
 - [BcPoolCreateRequest](docs/BcPoolCreateRequest.md)
 - [BcStakeMainDAORequest](docs/BcStakeMainDAORequest.md)
 - [BcStakePoolRequest](docs/BcStakePoolRequest.md)
 - [BcTxResponse](docs/BcTxResponse.md)
 - [CreativeSearchResponse](docs/CreativeSearchResponse.md)
 - [CreativeSearchResponseHits](docs/CreativeSearchResponseHits.md)
 - [CreativeSearchResponseSource](docs/CreativeSearchResponseSource.md)
 - [CreativeSearchResponseSourceMeta](docs/CreativeSearchResponseSourceMeta.md)
 - [ErrorResponse](docs/ErrorResponse.md)
 - [MoodAttachRequest](docs/MoodAttachRequest.md)
 - [MoodCreateRequest](docs/MoodCreateRequest.md)
 - [MoodCreateResponse](docs/MoodCreateResponse.md)
 - [MoodCreateResponsePosts](docs/MoodCreateResponsePosts.md)
 - [MoodListAttachedPostsResponse](docs/MoodListAttachedPostsResponse.md)
 - [MoodPagedListReadPublicResponse](docs/MoodPagedListReadPublicResponse.md)
 - [MoodPagedListReadPublicResponseAuthor](docs/MoodPagedListReadPublicResponseAuthor.md)
 - [MoodPagedListReadPublicResponseMoods](docs/MoodPagedListReadPublicResponseMoods.md)
 - [MoodPagedListReadPublicResponsePosts](docs/MoodPagedListReadPublicResponsePosts.md)
 - [MoodPagedListReadPublicResponseRel](docs/MoodPagedListReadPublicResponseRel.md)
 - [MoodPagedListReadPublicResponseTags](docs/MoodPagedListReadPublicResponseTags.md)
 - [MoodPagedListReadPublicResponseValue](docs/MoodPagedListReadPublicResponseValue.md)
 - [MoodReadResponse](docs/MoodReadResponse.md)
 - [MoodUpdateRequest](docs/MoodUpdateRequest.md)
 - [OkResponse](docs/OkResponse.md)
 - [PagedRatedResponsePost](docs/PagedRatedResponsePost.md)
 - [PagedRatedResponsePostAuthor](docs/PagedRatedResponsePostAuthor.md)
 - [PagedRatedResponsePostMoods](docs/PagedRatedResponsePostMoods.md)
 - [PagedRatedResponsePostRel](docs/PagedRatedResponsePostRel.md)
 - [PagedRatedResponsePostTags](docs/PagedRatedResponsePostTags.md)
 - [PagedRatedResponsePostValue](docs/PagedRatedResponsePostValue.md)
 - [PagedRatedResponseUser](docs/PagedRatedResponseUser.md)
 - [PagedRatedResponseUserRating](docs/PagedRatedResponseUserRating.md)
 - [PagedRatedResponseUserValue](docs/PagedRatedResponseUserValue.md)
 - [PaymentStripePaymentIntentCreateRequest](docs/PaymentStripePaymentIntentCreateRequest.md)
 - [PaymentStripePaymentIntentCreateRequestItems](docs/PaymentStripePaymentIntentCreateRequestItems.md)
 - [PaymentStripePaymentIntentCreateResponse](docs/PaymentStripePaymentIntentCreateResponse.md)
 - [PaymentStripeWebhookRequest](docs/PaymentStripeWebhookRequest.md)
 - [PaymentStripeWebhookRequestData](docs/PaymentStripeWebhookRequestData.md)
 - [PostCreateRequest](docs/PostCreateRequest.md)
 - [PostCreateResponse](docs/PostCreateResponse.md)
 - [PostPagedListReadPublicResponse](docs/PostPagedListReadPublicResponse.md)
 - [PostReadResponse](docs/PostReadResponse.md)
 - [PostTagsSearchPublicResponse](docs/PostTagsSearchPublicResponse.md)
 - [PostTagsSearchPublicResponseValue](docs/PostTagsSearchPublicResponseValue.md)
 - [PostUpdateRequest](docs/PostUpdateRequest.md)
 - [RatingUpdateRequest](docs/RatingUpdateRequest.md)
 - [RatingUpdateResponse](docs/RatingUpdateResponse.md)
 - [ReportUpdateRequest](docs/ReportUpdateRequest.md)
 - [ReportUpdateResponse](docs/ReportUpdateResponse.md)
 - [SyncContactsRequest](docs/SyncContactsRequest.md)
 - [SyncContactsRequestContacts](docs/SyncContactsRequestContacts.md)
 - [SyncContactsRequestPhones](docs/SyncContactsRequestPhones.md)
 - [SyncContactsRequestPostalAddresses](docs/SyncContactsRequestPostalAddresses.md)
 - [SyncContactsResponse](docs/SyncContactsResponse.md)
 - [Undefined](docs/Undefined.md)
 - [UploadRequest](docs/UploadRequest.md)
 - [UploadRequestGeneric](docs/UploadRequestGeneric.md)
 - [UploadResponse](docs/UploadResponse.md)
 - [UserAvailabilityResponse](docs/UserAvailabilityResponse.md)
 - [UserCreateRequest](docs/UserCreateRequest.md)
 - [UserDeleteRequest](docs/UserDeleteRequest.md)
 - [UserInviteRequest](docs/UserInviteRequest.md)
 - [UserPagedListReadPublicResponse](docs/UserPagedListReadPublicResponse.md)
 - [UserPreRegisterRequest](docs/UserPreRegisterRequest.md)
 - [UserReadPrivateResponse](docs/UserReadPrivateResponse.md)
 - [UserReadPublicResponse](docs/UserReadPublicResponse.md)
 - [UserStakeRequest](docs/UserStakeRequest.md)
 - [UserUpdateRequest](docs/UserUpdateRequest.md)
 - [UserUploadRequest](docs/UserUploadRequest.md)


## Documentation for Authorization

Authentication schemes defined for the API:
### newlife-creator-api-eu-dev

- **Type**: API key
- **API key parameter name**: Authorization
- **Location**: HTTP header


## Recommendation

It's recommended to create an instance of `ApiClient` per thread in a multithreaded environment to avoid any potential issues.

## Author



