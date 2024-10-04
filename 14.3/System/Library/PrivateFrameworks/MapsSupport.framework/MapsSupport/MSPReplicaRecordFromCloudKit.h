@class NSUUID, NSString, NSData, MSPVectorTimestamp, CKRecord;

@interface MSPReplicaRecordFromCloudKit : NSObject <MSPReplicaRecordFromCloud>

@property (retain, nonatomic) CKRecord *record;
@property (readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) BOOL tombstoneRepresentedByCloudRecord;
@property (readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier;
@property (readonly, copy, nonatomic) NSData *contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordType;
+ (id)tombstoneWithRecordIdentifier:(id)a0;
+ (id)recordFromInsertEdit:(id)a0;

- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0;
- (id)recordZoneName;
- (id)tombstoneRecordRepresentation;
- (id)recordRepresentation;
- (id)initWithReplicaRecord:(id)a0 recordID:(id)a1;
- (void)applyUpdateEdit:(id)a0;
- (id)recordRepresentationWithType:(id)a0 recordZoneID:(id)a1;
- (id)initWithContents:(id)a0 contentsTimestamp:(id)a1 identifier:(id)a2;

@end
