@class HDCloudSyncZoneIdentifier, HDAssertion, HDCloudSyncRepository;

@interface HDCloudSyncCachedZone : NSObject {
    HDAssertion *_accessibilityAssertion;
}

@property (readonly, weak, nonatomic) HDCloudSyncRepository *repository;
@property (readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) long long zoneType;

- (long long)containsRecordsWithError:(id *)a0;
- (id)recordsForClass:(Class)a0 error:(id *)a1 filter:(id /* block */)a2;
- (long long)containsRecordWithRecordID:(id)a0 error:(id *)a1;
- (BOOL)deleteZoneWithError:(id *)a0;
- (void)handleCKError:(id)a0 operation:(id)a1 container:(id)a2 database:(id)a3;
- (id)initForZoneIdentifier:(id)a0 repository:(id)a1 accessibilityAssertion:(id)a2;
- (void).cxx_destruct;
- (BOOL)addRecord:(id)a0 error:(id *)a1;
- (long long)needsFetchWithError:(id *)a0;
- (BOOL)setServerChangeToken:(id)a0 fetchComplete:(BOOL)a1 error:(id *)a2;
- (BOOL)deleteRecordID:(id)a0 error:(id *)a1;
- (BOOL)resetZoneServerChangeTokenWithError:(id *)a0;
- (id)recordsForClass:(Class)a0 error:(id *)a1;
- (id)serverChangeTokenWithError:(id *)a0;
- (id)zoneShareWithError:(id *)a0;

@end
