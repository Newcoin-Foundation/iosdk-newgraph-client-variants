/**
 * newlife-creator-api-eu-dev
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2022-05-20T13:39:48Z
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.27.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * DefaultApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_DefaultApi_H_
#define IO_SWAGGER_CLIENT_API_DefaultApi_H_


#include "../ApiClient.h"

#include "AnyResponse.h"
#include "BcAccCreateRequest.h"
#include "BcApproveDaoProposalRequest.h"
#include "BcAuthEthRequest.h"
#include "BcAuthEthResponse.h"
#include "BcCollectionCreateRequest.h"
#include "BcCreateDaoProposal.h"
#include "BcCreateDaoRequest.h"
#include "BcCreateDaoResponse.h"
#include "BcDaoProposalVoteRequest.h"
#include "BcDaoProposalVoteResponse.h"
#include "BcGetAccountInfo.h"
#include "BcGetInfoResp.h"
#include "BcGetPoolInfo.h"
#include "BcKeyPairCreateRequest.h"
#include "BcKeyPairCreateResponse.h"
#include "BcListDaoProposalsResponse.h"
#include "BcMintAssetRequest.h"
#include "BcPoolCreateRequest.h"
#include "BcStakeMainDAORequest.h"
#include "BcStakePoolRequest.h"
#include "BcTxResponse.h"
#include "CreativeSearchResponse.h"
#include "ErrorResponse.h"
#include "MoodAttachRequest.h"
#include "MoodCreateRequest.h"
#include "MoodCreateResponse.h"
#include "MoodListAttachedPostsResponse.h"
#include "MoodPagedListReadPublicResponse.h"
#include "MoodReadResponse.h"
#include "MoodUpdateRequest.h"
#include "OkResponse.h"
#include "PagedRatedResponsePost.h"
#include "PagedRatedResponseUser.h"
#include "PaymentStripePaymentIntentCreateRequest.h"
#include "PaymentStripePaymentIntentCreateResponse.h"
#include "PaymentStripeWebhookRequest.h"
#include "PostCreateRequest.h"
#include "PostCreateResponse.h"
#include "PostPagedListReadPublicResponse.h"
#include "PostReadResponse.h"
#include "PostTagsSearchPublicResponse.h"
#include "PostUpdateRequest.h"
#include "RatingUpdateRequest.h"
#include "RatingUpdateResponse.h"
#include "ReportUpdateRequest.h"
#include "ReportUpdateResponse.h"
#include "SyncContactsRequest.h"
#include "SyncContactsResponse.h"
#include "Undefined.h"
#include "UploadRequest.h"
#include "UploadRequestGeneric.h"
#include "UploadResponse.h"
#include "UserAvailabilityResponse.h"
#include "UserCreateRequest.h"
#include "UserDeleteRequest.h"
#include "UserInviteRequest.h"
#include "UserPagedListReadPublicResponse.h"
#include "UserPreRegisterRequest.h"
#include "UserReadPrivateResponse.h"
#include "UserReadPublicResponse.h"
#include "UserStakeRequest.h"
#include "UserUpdateRequest.h"
#include "UserUploadRequest.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  DefaultApi
{
public:
    DefaultApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~DefaultApi();
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    pplx::task<void> authCallbackPathGet(
        utility::string_t path
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    pplx::task<void> authCallbackPathOptions(
        utility::string_t path
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    pplx::task<void> authProviderPathGet(
        utility::string_t path
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="path"></param>
    pplx::task<void> authProviderPathOptions(
        utility::string_t path
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> bcmaindaodldunstakeOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcStakeMainDAORequest"></param>
    pplx::task<std::shared_ptr<BcTxResponse>> bcmaindaodldunstakePost(
        std::shared_ptr<BcStakeMainDAORequest> bcStakeMainDAORequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> bcmaindaoinstunstakeOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcStakePoolRequest"></param>
    pplx::task<std::shared_ptr<BcTxResponse>> bcmaindaoinstunstakePost(
        std::shared_ptr<BcStakePoolRequest> bcStakePoolRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> bcmaindaostakeOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcStakeMainDAORequest"></param>
    pplx::task<std::shared_ptr<BcTxResponse>> bcmaindaostakePost(
        std::shared_ptr<BcStakeMainDAORequest> bcStakeMainDAORequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"> (optional)</param>
    pplx::task<std::shared_ptr<MoodReadResponse>> folderGet(
        boost::optional<utility::string_t> id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> folderOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> infoAuthGet(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> infoAuthOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> infoGet(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> infoOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> moodAttachPostOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="moodAttachRequest"></param>
    pplx::task<std::shared_ptr<PostReadResponse>> moodAttachPostPut(
        std::shared_ptr<MoodAttachRequest> moodAttachRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"> (optional)</param>
    pplx::task<std::shared_ptr<MoodReadResponse>> moodGet(
        boost::optional<utility::string_t> id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="direction"> (optional)</param>
    /// <param name="contentType"> (optional)</param>
    /// <param name="page"> (optional)</param>
    /// <param name="orderBy"> (optional)</param>
    pplx::task<std::shared_ptr<MoodPagedListReadPublicResponse>> moodListTopGet(
        boost::optional<utility::string_t> direction,
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> page,
        boost::optional<utility::string_t> orderBy
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> moodListTopOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> moodOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="moodCreateRequest"></param>
    pplx::task<std::shared_ptr<MoodCreateResponse>> moodPost(
        std::shared_ptr<MoodCreateRequest> moodCreateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"> (optional)</param>
    /// <param name="page"> (optional)</param>
    pplx::task<std::shared_ptr<MoodListAttachedPostsResponse>> moodPostsGet(
        boost::optional<utility::string_t> id,
        boost::optional<utility::string_t> page
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> moodPostsOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="moodUpdateRequest"></param>
    pplx::task<std::shared_ptr<MoodReadResponse>> moodPut(
        std::shared_ptr<MoodUpdateRequest> moodUpdateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> moodRateOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ratingUpdateRequest"></param>
    pplx::task<std::shared_ptr<RatingUpdateResponse>> moodRatePost(
        std::shared_ptr<RatingUpdateRequest> ratingUpdateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> moodUploadOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uploadRequestGeneric"></param>
    pplx::task<std::shared_ptr<UploadResponse>> moodUploadPost(
        std::shared_ptr<UploadRequestGeneric> uploadRequestGeneric
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBcaccopenOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcAccCreateRequest"></param>
    pplx::task<std::shared_ptr<BcTxResponse>> newcoinBcaccopenPost(
        std::shared_ptr<BcAccCreateRequest> bcAccCreateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBcauthethOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcAuthEthRequest"></param>
    pplx::task<std::shared_ptr<BcAuthEthResponse>> newcoinBcauthethPost(
        std::shared_ptr<BcAuthEthRequest> bcAuthEthRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBccolcreateOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcCollectionCreateRequest"></param>
    pplx::task<std::shared_ptr<BcTxResponse>> newcoinBccolcreatePost(
        std::shared_ptr<BcCollectionCreateRequest> bcCollectionCreateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBcgetaccOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcGetAccountInfo"></param>
    pplx::task<std::shared_ptr<BcGetInfoResp>> newcoinBcgetaccPost(
        std::shared_ptr<BcGetAccountInfo> bcGetAccountInfo
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBcgetpoolOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcGetPoolInfo"></param>
    pplx::task<std::shared_ptr<BcGetInfoResp>> newcoinBcgetpoolPost(
        std::shared_ptr<BcGetPoolInfo> bcGetPoolInfo
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBckeypairOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcKeyPairCreateRequest"></param>
    pplx::task<std::shared_ptr<BcKeyPairCreateResponse>> newcoinBckeypairPost(
        std::shared_ptr<BcKeyPairCreateRequest> bcKeyPairCreateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBcmintassetOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcMintAssetRequest"></param>
    pplx::task<std::shared_ptr<BcTxResponse>> newcoinBcmintassetPost(
        std::shared_ptr<BcMintAssetRequest> bcMintAssetRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBcpoolcreateOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcPoolCreateRequest"></param>
    pplx::task<std::shared_ptr<BcTxResponse>> newcoinBcpoolcreatePost(
        std::shared_ptr<BcPoolCreateRequest> bcPoolCreateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinBcpoolstakeOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcStakePoolRequest"></param>
    pplx::task<std::shared_ptr<BcTxResponse>> newcoinBcpoolstakePost(
        std::shared_ptr<BcStakePoolRequest> bcStakePoolRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinDaoCreateOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcCreateDaoRequest"></param>
    pplx::task<std::shared_ptr<BcCreateDaoResponse>> newcoinDaoCreatePost(
        std::shared_ptr<BcCreateDaoRequest> bcCreateDaoRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinDaoProposalApproveOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcApproveDaoProposalRequest"></param>
    pplx::task<void> newcoinDaoProposalApprovePost(
        std::shared_ptr<BcApproveDaoProposalRequest> bcApproveDaoProposalRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="proposalAuthor"> (optional)</param>
    /// <param name="daoOwner"> (optional)</param>
    /// <param name="daoId"> (optional)</param>
    /// <param name="id"> (optional)</param>
    pplx::task<std::shared_ptr<BcListDaoProposalsResponse>> newcoinDaoProposalListGet(
        boost::optional<utility::string_t> proposalAuthor,
        boost::optional<utility::string_t> daoOwner,
        boost::optional<utility::string_t> daoId,
        boost::optional<utility::string_t> id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinDaoProposalListOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinDaoProposalOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcCreateDaoProposal"></param>
    pplx::task<void> newcoinDaoProposalPost(
        std::shared_ptr<BcCreateDaoProposal> bcCreateDaoProposal
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinDaoProposalVoteOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="bcDaoProposalVoteRequest"></param>
    pplx::task<std::shared_ptr<BcListDaoProposalsResponse>> newcoinDaoProposalVotePost(
        std::shared_ptr<BcDaoProposalVoteRequest> bcDaoProposalVoteRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="voter"> (optional)</param>
    /// <param name="voteId"> (optional)</param>
    pplx::task<std::shared_ptr<BcDaoProposalVoteResponse>> newcoinDaoProposalVotesGet(
        boost::optional<utility::string_t> voter,
        boost::optional<utility::string_t> voteId
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> newcoinDaoProposalVotesOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> paymentStripeIntentOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="paymentStripePaymentIntentCreateRequest"></param>
    pplx::task<std::shared_ptr<PaymentStripePaymentIntentCreateResponse>> paymentStripeIntentPost(
        std::shared_ptr<PaymentStripePaymentIntentCreateRequest> paymentStripePaymentIntentCreateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> paymentStripeSubscriptionPaymentOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> paymentStripeSubscriptionPaymentPost(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> paymentStripeWebhookOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="paymentStripeWebhookRequest"></param>
    pplx::task<void> paymentStripeWebhookPost(
        std::shared_ptr<PaymentStripeWebhookRequest> paymentStripeWebhookRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"> (optional)</param>
    pplx::task<std::shared_ptr<PostReadResponse>> postGet(
        boost::optional<utility::string_t> id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="direction"> (optional)</param>
    /// <param name="contentType"> (optional)</param>
    /// <param name="page"> (optional)</param>
    /// <param name="orderBy"> (optional)</param>
    /// <param name="q"> (optional)</param>
    pplx::task<std::shared_ptr<PostPagedListReadPublicResponse>> postListSearchGet(
        boost::optional<utility::string_t> direction,
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> page,
        boost::optional<utility::string_t> orderBy,
        boost::optional<utility::string_t> q
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> postListSearchOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="direction"> (optional)</param>
    /// <param name="contentType"> (optional)</param>
    /// <param name="page"> (optional)</param>
    /// <param name="orderBy"> (optional)</param>
    /// <param name="q"> (optional)</param>
    pplx::task<std::shared_ptr<PostTagsSearchPublicResponse>> postListTagsSearchGet(
        boost::optional<utility::string_t> direction,
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> page,
        boost::optional<utility::string_t> orderBy,
        boost::optional<utility::string_t> q
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> postListTagsSearchOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="direction"> (optional)</param>
    /// <param name="contentType"> (optional)</param>
    /// <param name="page"> (optional)</param>
    /// <param name="orderBy"> (optional)</param>
    pplx::task<std::shared_ptr<PostPagedListReadPublicResponse>> postListTopGet(
        boost::optional<utility::string_t> direction,
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> page,
        boost::optional<utility::string_t> orderBy
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> postListTopOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> postOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="postCreateRequest"></param>
    pplx::task<std::shared_ptr<PostCreateResponse>> postPost(
        std::shared_ptr<PostCreateRequest> postCreateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="postUpdateRequest"></param>
    pplx::task<std::shared_ptr<PostReadResponse>> postPut(
        std::shared_ptr<PostUpdateRequest> postUpdateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> postRateOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ratingUpdateRequest"></param>
    pplx::task<std::shared_ptr<RatingUpdateResponse>> postRatePost(
        std::shared_ptr<RatingUpdateRequest> ratingUpdateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> postReportOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="reportUpdateRequest"></param>
    pplx::task<std::shared_ptr<ReportUpdateResponse>> postReportPost(
        std::shared_ptr<ReportUpdateRequest> reportUpdateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> postUploadOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uploadRequestGeneric"></param>
    pplx::task<std::shared_ptr<UploadResponse>> postUploadPost(
        std::shared_ptr<UploadRequestGeneric> uploadRequestGeneric
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="aesthetics"> (optional)</param>
    /// <param name="tags"> (optional)</param>
    /// <param name="page"> (optional)</param>
    pplx::task<std::shared_ptr<CreativeSearchResponse>> searchCreativeGet(
        boost::optional<utility::string_t> aesthetics,
        boost::optional<utility::string_t> tags,
        boost::optional<utility::string_t> page
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> searchCreativeOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> uploadNodeOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uploadRequest"></param>
    pplx::task<std::shared_ptr<UploadResponse>> uploadNodePost(
        std::shared_ptr<UploadRequest> uploadRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="after"> (optional)</param>
    /// <param name="limit"> (optional)</param>
    pplx::task<std::shared_ptr<AnyResponse>> userActivityStreamGet(
        boost::optional<utility::string_t> after,
        boost::optional<utility::string_t> limit
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userActivityStreamOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"> (optional)</param>
    pplx::task<std::shared_ptr<UserAvailabilityResponse>> userAvailabilityGet(
        boost::optional<utility::string_t> username
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userAvailabilityOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<UserReadPrivateResponse>> userCurrentGet(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userCurrentOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userDeleteRequest"></param>
    pplx::task<std::shared_ptr<OkResponse>> userDelete(
        std::shared_ptr<UserDeleteRequest> userDeleteRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"> (optional)</param>
    /// <param name="id"> (optional)</param>
    pplx::task<std::shared_ptr<UserReadPublicResponse>> userGet(
        boost::optional<utility::string_t> username,
        boost::optional<utility::string_t> id
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userInviteOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userInviteRequest"></param>
    pplx::task<std::shared_ptr<OkResponse>> userInvitePost(
        std::shared_ptr<UserInviteRequest> userInviteRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="direction"> (optional)</param>
    /// <param name="contentType"> (optional)</param>
    /// <param name="page"> (optional)</param>
    /// <param name="orderBy"> (optional)</param>
    /// <param name="q"> (optional)</param>
    pplx::task<std::shared_ptr<UserPagedListReadPublicResponse>> userListSearchGet(
        boost::optional<utility::string_t> direction,
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> page,
        boost::optional<utility::string_t> orderBy,
        boost::optional<utility::string_t> q
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userListSearchOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="direction"> (optional)</param>
    /// <param name="contentType"> (optional)</param>
    /// <param name="page"> (optional)</param>
    /// <param name="orderBy"> (optional)</param>
    pplx::task<std::shared_ptr<UserPagedListReadPublicResponse>> userListTopGet(
        boost::optional<utility::string_t> direction,
        boost::optional<utility::string_t> contentType,
        boost::optional<utility::string_t> page,
        boost::optional<utility::string_t> orderBy
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userListTopOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"> (optional)</param>
    /// <param name="page"> (optional)</param>
    pplx::task<std::shared_ptr<MoodPagedListReadPublicResponse>> userMoodsGet(
        boost::optional<utility::string_t> id,
        boost::optional<utility::string_t> page
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userMoodsOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userCreateRequest"></param>
    pplx::task<std::shared_ptr<UserReadPrivateResponse>> userPost(
        std::shared_ptr<UserCreateRequest> userCreateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userPreregisterOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userPreRegisterRequest"></param>
    pplx::task<std::shared_ptr<UserReadPrivateResponse>> userPreregisterPost(
        std::shared_ptr<UserPreRegisterRequest> userPreRegisterRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userUpdateRequest"></param>
    pplx::task<std::shared_ptr<UserReadPrivateResponse>> userPut(
        std::shared_ptr<UserUpdateRequest> userUpdateRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"> (optional)</param>
    /// <param name="page"> (optional)</param>
    pplx::task<std::shared_ptr<PagedRatedResponseUser>> userRatedInGet(
        boost::optional<utility::string_t> id,
        boost::optional<utility::string_t> page
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userRatedInOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"> (optional)</param>
    /// <param name="page"> (optional)</param>
    pplx::task<std::shared_ptr<PagedRatedResponsePost>> userRatedOutPostsGet(
        boost::optional<utility::string_t> id,
        boost::optional<utility::string_t> page
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userRatedOutPostsOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"> (optional)</param>
    /// <param name="page"> (optional)</param>
    pplx::task<std::shared_ptr<PagedRatedResponseUser>> userRatedOutUsersGet(
        boost::optional<utility::string_t> id,
        boost::optional<utility::string_t> page
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userRatedOutUsersOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userStakeOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userStakeRequest"></param>
    pplx::task<std::shared_ptr<AnyResponse>> userStakePost(
        std::shared_ptr<UserStakeRequest> userStakeRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userSyncContactsOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="syncContactsRequest"></param>
    pplx::task<std::shared_ptr<SyncContactsResponse>> userSyncContactsPost(
        std::shared_ptr<SyncContactsRequest> syncContactsRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userUploadOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="userUploadRequest"></param>
    pplx::task<std::shared_ptr<UploadResponse>> userUploadPost(
        std::shared_ptr<UserUploadRequest> userUploadRequest
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<void> userUserRateOptions(
    );
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ratingUpdateRequest"></param>
    pplx::task<std::shared_ptr<RatingUpdateResponse>> userUserRatePost(
        std::shared_ptr<RatingUpdateRequest> ratingUpdateRequest
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_DefaultApi_H_ */
