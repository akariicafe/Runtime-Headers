@class NSString, CNAutocompleteQueryCacheMissAuditor, CNCache, CNObservable;
@protocol CNSchedulerProvider;

@interface CNAutocompleteQueryCacheHelper : NSObject

@property (readonly, nonatomic) CNCache *cache;
@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, nonatomic) CNObservable *serverSearchObservable;
@property (readonly, nonatomic) CNAutocompleteQueryCacheMissAuditor *cacheMissAuditor;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;

+ (id)cache_os_log;
+ (id)stringByRemovingLastCharacterFromString:(id)a0;
+ (BOOL)shouldCacheResults:(id)a0;

- (void).cxx_destruct;
- (id)initWithCache:(id)a0 searchString:(id)a1 serverSearchObservable:(id)a2 cacheMissAuditor:(id)a3 schedulerProvider:(id)a4;
- (id)cachedFutureForSearchString:(id)a0;
- (id)remoteResultsForSearchString:(id)a0 andCompletePromise:(id)a1;
- (id)remoteResultsForSearchString:(id)a0;
- (id)initWithCache:(id)a0 searchString:(id)a1 serverSearchObservable:(id)a2;
- (id)cachedResultsObservable;
- (id)uncachedResultsObservable;
- (id)observablesForSearchString:(id)a0 withCachedResults:(id)a1;

@end
