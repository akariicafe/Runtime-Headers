@class NSMutableSet;

@interface WebBookmarkCollectionSyncFlags : NSObject

@property (readonly, nonatomic) BOOL syncAllowed;
@property (nonatomic) int syncLockFileDescriptor;
@property (nonatomic) long long syncNotificationType;
@property (nonatomic) BOOL postSyncNotificationWhenUnlocking;
@property (readonly, nonatomic) NSMutableSet *lockSyncHoldRequestorPointers;
@property (nonatomic) BOOL unlockSyncRequested;

- (void).cxx_destruct;
- (id)initWithSyncAllowed:(BOOL)a0;

@end
