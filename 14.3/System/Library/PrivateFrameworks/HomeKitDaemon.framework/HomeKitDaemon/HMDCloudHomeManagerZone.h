@interface HMDCloudHomeManagerZone : HMDCloudZone

+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)a0;
+ (void)createHomeManagerZoneWithName:(id)a0 owner:(id)a1 cacheZone:(id)a2 cloudCache:(id)a3 completion:(id /* block */)a4;

- (void)setServerChangeToken:(id)a0;
- (id)createCloudZoneChangeTemporaryCache:(BOOL)a0;

@end
