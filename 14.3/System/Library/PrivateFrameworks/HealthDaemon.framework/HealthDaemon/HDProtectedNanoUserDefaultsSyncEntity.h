@class NSString, HDSyncEntityIdentifier;

@interface HDProtectedNanoUserDefaultsSyncEntity : HDNanoUserDefaultsSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (long long)category;
+ (id)_didReceiveKeysAndValuesNotificationName;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (int)nanoSyncObjectType;


@end
