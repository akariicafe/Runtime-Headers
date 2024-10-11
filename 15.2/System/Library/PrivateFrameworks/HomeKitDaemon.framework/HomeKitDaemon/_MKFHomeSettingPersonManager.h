@class Protocol, NSUUID, NSString, MKFHomeSettingPersonManagerDatabaseID, NSDate;
@protocol MKFHome;

@interface _MKFHomeSettingPersonManager : _MKFHomeSetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeSettingPersonManager, MKFHomeSettingPersonManagerPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *zoneUUID;
@property (copy, nonatomic) NSUUID *zoneUUID;
@property (readonly, copy, nonatomic) MKFHomeSettingPersonManagerDatabaseID *databaseID;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfHomeSettingPersonManager;

@end
