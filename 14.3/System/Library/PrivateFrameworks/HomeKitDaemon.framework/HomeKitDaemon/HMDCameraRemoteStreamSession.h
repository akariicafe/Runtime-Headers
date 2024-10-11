@class NSString;
@protocol HMDCameraRemoteStreamSenderProtocol, HMDCameraRemoteStreamReceiverProtocol;

@interface HMDCameraRemoteStreamSession : HMDCameraStreamSession <HMFLogging>

@property (readonly, nonatomic) id<HMDCameraRemoteStreamSenderProtocol> streamSender;
@property (readonly, nonatomic) id<HMDCameraRemoteStreamReceiverProtocol> streamReceiver;
@property (nonatomic) unsigned long long streamState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)logIdentifier;
- (id)stateAsString;
- (id)initWithSessionID:(id)a0 reachabilityPath:(unsigned long long)a1 streamSender:(id)a2 streamReceiver:(id)a3 remoteCapabilities:(id)a4 streamPreference:(id)a5;
- (BOOL)containsState:(long long)a0;

@end
