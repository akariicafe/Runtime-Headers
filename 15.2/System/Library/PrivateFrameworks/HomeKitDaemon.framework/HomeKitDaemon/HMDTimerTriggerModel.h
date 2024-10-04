@class NSString, NSData, NSDate;

@interface HMDTimerTriggerModel : HMDTriggerModel <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSData *fireDateTimeZone;
@property (copy, nonatomic) NSString *significantEvent;
@property (copy, nonatomic) NSData *significantEventOffset;
@property (copy, nonatomic) NSData *fireRepeatInterval;
@property (copy, nonatomic) NSData *recurrences;

+ (id)properties;

- (id)createPayload;

@end
