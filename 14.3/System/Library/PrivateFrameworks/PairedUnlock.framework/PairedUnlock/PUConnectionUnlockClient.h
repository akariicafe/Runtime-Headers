@class NSString, PUConnection;

@interface PUConnectionUnlockClient : NSObject <PUUnlockClient>

@property (weak, nonatomic) PUConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)didPairForUnlock:(BOOL)a0 error:(id)a1;
- (void)didUnpairForUnlock:(BOOL)a0 error:(id)a1;
- (void)didEnableOnlyRemoteUnlock:(BOOL)a0 error:(id)a1;
- (void)didDisableOnlyRemoteUnlock:(BOOL)a0 error:(id)a1;
- (void)remoteDeviceDidCompleteRemoteAction:(BOOL)a0 remoteDeviceState:(id)a1 error:(id)a2;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidRemoveLockout:(BOOL)a0 error:(id)a1;
- (void)didGetRemoteDeviceState:(id)a0 error:(id)a1;

@end
