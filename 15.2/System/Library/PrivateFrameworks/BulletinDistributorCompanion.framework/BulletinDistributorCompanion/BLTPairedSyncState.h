@interface BLTPairedSyncState : NSObject

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic, getter=isTrafficRestricted) BOOL trafficRestricted;
@property (readonly, nonatomic, getter=isSyncRestricted) BOOL syncRestricted;
@property (readonly, nonatomic, getter=isInitialSyncComplete) BOOL initialSyncComplete;

+ (id)sharedInstance;

- (void)setInitialSyncComplete:(BOOL)a0;
- (void)leaveState:(unsigned long long)a0;
- (BOOL)becameTrafficUnrestricted:(id)a0;
- (BOOL)becameSyncUnrestricted:(id)a0;

@end
