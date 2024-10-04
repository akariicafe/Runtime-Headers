@class PXSearchActiveSearch, PXSearchQuery;

@interface PXSearchAnalyticsSession : NSObject

@property (nonatomic) unsigned long long beginType;
@property (nonatomic) double startTime;
@property (nonatomic) double timeIntervalSuccess;
@property (nonatomic) double timeIntervalFirstAssetAction;
@property (nonatomic) double timeIntervalFirstOneUpInTopAssets;
@property (nonatomic) double timeIntervalFirstEnteredCollection;
@property (nonatomic) unsigned long long numberOfSearches;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstSuccess;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstAssetAction;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstOneUpInTopAssets;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstEnteredCollection;
@property (nonatomic) unsigned long long numberOfSearchesWithNoResults;
@property (nonatomic) unsigned long long numberOfSearchesWithWordEmbeddings;
@property (nonatomic) unsigned long long numberOfWordEmbeddingSelections;
@property (nonatomic) unsigned long long numberOfNextTokenSelections;
@property (nonatomic) unsigned long long numberOfCompletionSelections;
@property (nonatomic) unsigned long long firstAssetActionType;
@property (nonatomic) unsigned long long firstAssetActionResultType;
@property (nonatomic) unsigned long long firstEnteredCollectionResultType;
@property (nonatomic) BOOL successful;
@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) PXSearchQuery *lastSearch;
@property (retain, nonatomic) PXSearchActiveSearch *lastActiveSearch;
@property (nonatomic) BOOL userInteractedWithCurrentSearch;

+ (void)logNoSearchResultsFoundSiriSearch;
+ (id)_bucketedTimeInterval:(double)a0;
+ (id)_cappedSearchCount:(unsigned long long)a0;
+ (id)_stringForResultType:(unsigned long long)a0;
+ (id)_stringForSessionBeginType:(unsigned long long)a0;
+ (id)_stringForActionType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithBeginType:(unsigned long long)a0;
- (void)endAndInvalidateSession;
- (void)logSearch:(id)a0;
- (void)logActiveSearch:(id)a0;
- (void)logAssetAction:(unsigned long long)a0 inResult:(unsigned long long)a1;
- (void)logOneUpInTopAssets;
- (void)logEnteredCollectionResult:(unsigned long long)a0;
- (void)logNoSearchResultsFound;
- (void)logSearchWordEmbeddingsPresented;
- (void)logSearchWordEmbeddingSelected;
- (void)logSearchNextTokenSuggestionTapped;
- (void)logSearchWordCompletionTapped;
- (void)_logSuccess;

@end
