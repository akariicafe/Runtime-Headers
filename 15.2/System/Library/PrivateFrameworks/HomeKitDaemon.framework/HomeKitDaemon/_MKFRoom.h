@class NSUUID, NSString, _MKFApplicationData, NSPredicate, NSSet, NSArray, NSDate, Protocol, _MKFHome, MKFRoomDatabaseID;
@protocol MKFHome, MKFApplicationData;

@interface _MKFRoom : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFRoom, MKFRoomPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *accessories_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) NSSet *zones_;
@property (copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSArray *accessories;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, retain, nonatomic) NSArray *zones;
@property (readonly, copy, nonatomic) MKFRoomDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfRoom;
- (id)materializeOrCreateApplicationDataRelation:(BOOL *)a0;

@end
