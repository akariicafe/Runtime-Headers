@class Protocol, NSUUID, NSString, NSDate, NSNumber, MKFEventDurationDatabaseID;
@protocol MKFHome, MKFTriggerEvent;

@interface _MKFEventDuration : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventDuration, MKFEventDurationPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *duration;
@property (readonly, copy, nonatomic) MKFEventDurationDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly, retain, nonatomic) id<MKFTriggerEvent> trigger;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfEventDuration;

@end
