@class NSString;
@protocol BCSLinkItemCacheClearing, BCSShardCacheQueryable, BCSItemCaching;

@interface BCSCacheManager : NSObject <BCSCacheClearing, BCSConfigCaching, BCSConfigCacheSkipping, BCSShardCacheQueryable, BCSShardCacheSkipping, BCSItemCaching, BCSItemCacheSkipping, BCSBatchable>

@property (retain, nonatomic) id<BCSShardCacheQueryable> shardCache;
@property (retain, nonatomic) id<BCSItemCaching, BCSLinkItemCacheClearing> itemCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endBatch;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)updateConfigItem:(id)a0 withType:(long long)a1;
- (BOOL)shouldSkipCacheForConfigItemOfType:(long long)a0;
- (id)configItemForType:(long long)a0;
- (void)deleteShardItemsOfType:(long long)a0;
- (void)beginBatch;
- (void)updateShardItem:(id)a0 withShardIdentifier:(id)a1;
- (BOOL)shouldSkipCacheForShardItemOfType:(long long)a0;
- (long long)countOfShardsOfType:(long long)a0;
- (long long)countOfExpiredShardsOfType:(long long)a0;
- (BOOL)shouldSkipCacheForItemOfType:(long long)a0;
- (id)itemMatching:(id)a0;
- (void)deleteItemMatching:(id)a0;
- (void)updateItem:(id)a0 withItemIdentifier:(id)a1;
- (void)deleteItemsOfType:(long long)a0;
- (void)deleteExpiredItemsOfType:(long long)a0;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)deleteShardItemMatching:(id)a0;
- (id)shardItemMatching:(id)a0;
- (void)deleteExpiredShardItemsOfType:(long long)a0;
- (void)_clearExpiredCacheItemsForType:(long long)a0 completion:(id /* block */)a1;
- (void)deleteConfigItemForType:(long long)a0;
- (void)deleteExpiredConfigItemForType:(long long)a0;
- (id)initWithShardCache:(id)a0 itemCache:(id)a1;

@end
