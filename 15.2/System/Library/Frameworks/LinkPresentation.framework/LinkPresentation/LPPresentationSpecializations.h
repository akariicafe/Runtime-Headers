@interface LPPresentationSpecializations : NSObject

+ (BOOL)isYouTubeEmbedURL:(id)a0;
+ (BOOL)isiCloudURL:(id)a0;
+ (BOOL)isRedditPostURL:(id)a0;
+ (id)redditJSONURLForRedditPostURL:(id)a0;
+ (BOOL)isAppleNewsURL:(id)a0;
+ (id)youTubeVideoComponentsForEmbedURL:(id)a0;
+ (BOOL)isiTunesStoreOrAdjacentURL:(id)a0;
+ (BOOL)isiTunesStoreURLThatUsesWebMetadata:(id)a0;
+ (id)canonicalMetadataURLForURL:(id)a0;
+ (id)userAgentForURL:(id)a0;
+ (BOOL)shouldLoadInsteadOfUsingExistingWebViewForURL:(id)a0;
+ (BOOL)isTwitterProfileImageURL:(id)a0;
+ (BOOL)isRedditStaticImage:(id)a0;
+ (BOOL)isKnownBlankImageURL:(id)a0;
+ (id)articleTitleFromTitle:(id)a0 withURL:(id)a1;
+ (BOOL)isAppleTVURL:(id)a0;
+ (BOOL)isAppStoreStoryURL:(id)a0;
+ (BOOL)isMuninURL:(id)a0;
+ (BOOL)isAppleMapsURL:(id)a0;
+ (BOOL)isAppleMapsCollectionURL:(id)a0;
+ (BOOL)isGoogleSearchURL:(id)a0;
+ (BOOL)isGoogleURL:(id)a0;
+ (id)searchQueryForURL:(id)a0;
+ (id)URLToOpenForURL:(id)a0;
+ (id)youTubeVideoComponentsForVideoURL:(id)a0;
+ (BOOL)isAppleFitnessURL:(id)a0;
+ (BOOL)isMicroblogPost:(id)a0;
+ (BOOL)shouldPreferMiniStyleForURL:(id)a0;
+ (BOOL)isSinaWeiboURL:(id)a0;
+ (BOOL)isTweetURL:(id)a0;
+ (BOOL)isiCloudSharingURL:(id)a0;
+ (id)nonMobileTweetURLForTweetURL:(id)a0;
+ (id)nonMobileRedditURLForRedditURL:(id)a0;
+ (id)nonDirectURLForImgurURL:(id)a0;
+ (id)nonMobileYouTubeURLForURL:(id)a0;
+ (id)youTubeVideoURLForEmbedURL:(id)a0;
+ (id)destinationForGoogleRedirectURL:(id)a0;
+ (BOOL)isYouTubeURL:(id)a0;
+ (BOOL)isGitHubURL:(id)a0;
+ (BOOL)isTwitterShortenerURL:(id)a0;
+ (BOOL)isTikTokURL:(id)a0;
+ (BOOL)isInstagramURL:(id)a0;
+ (id)businessChatURLToOpenForURL:(id)a0;
+ (BOOL)isYouTubeVideoURL:(id)a0;

@end
