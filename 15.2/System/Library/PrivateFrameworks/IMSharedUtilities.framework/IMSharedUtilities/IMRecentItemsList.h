@class NSObject;
@protocol OS_dispatch_queue;

@interface IMRecentItemsList : NSObject {
    NSObject<OS_dispatch_queue> *_diskWritingQueue;
}

+ (id)sharedInstance;

- (id)init;
- (id)_guidForFileURL:(id)a0;
- (void)_removeRecentDataPayloadEntry:(id)a0 forDomain:(id)a1;
- (long long)cacheSizeForDomain:(id)a0;
- (void)dispatchCacheUpdateWithBlock:(id /* block */)a0;
- (void)_addRecentDataPayloadEntry:(id)a0 toDomain:(id)a1;
- (id)_recentsCacheForDomain:(id)a0;
- (id)_buildLRUCacheUsingArray:(id)a0 forDomain:(id)a1;
- (void)_removeRecentDataPayloadEntryFromDisk:(id)a0 forDomain:(id)a1;
- (void)_updateRecentsCache:(id)a0 forDomain:(id)a1;
- (void)_saveRecentDataPayloadEntryToDisk:(id)a0 forDomain:(id)a1;
- (void)deleteRecentItemWithFileURL:(id)a0 GUID:(id)a1 forDomain:(id)a2;
- (void)deleteRecentItemWithData:(id)a0 GUID:(id)a1 forDomain:(id)a2;
- (void)deleteAllRecentItemsForDomain:(id)a0;
- (void)deleteRecentsInFirstLaunch;
- (void)addRecentItemWithData:(id)a0 GUID:(id)a1 infoDictionary:(id)a2 forDomain:(id)a3;
- (void)fetchRecentStickersWithCompletion:(id /* block */)a0;
- (void)fetchRecentItemsForDomain:(id)a0 completion:(id /* block */)a1;
- (void)addRecentItemAtFileURL:(id)a0 GUID:(id)a1 infoDictionary:(id)a2 forDomain:(id)a3;
- (void)dealloc;

@end
