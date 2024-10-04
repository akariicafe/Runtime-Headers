@class NSString;
@protocol HMDActiveSiriSessionInfoDelegate, HMDDataStreamBulkSendSession;

@interface HMDActiveSiriSessionInfo : NSObject <HMFLogging>

@property (weak, nonatomic) id<HMDActiveSiriSessionInfoDelegate> delegate;
@property (nonatomic) BOOL didBulkSendSessionFail;
@property (nonatomic) BOOL didBulkSendSessionComplete;
@property (nonatomic) BOOL didSiriSessionStart;
@property (nonatomic) BOOL didSiriSessionStop;
@property (retain, nonatomic) id<HMDDataStreamBulkSendSession> bulkSendSession;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isBulkSendActive;
- (BOOL)_handleFrame:(id)a0;
- (void)_bulkSendDidFail;
- (void)_bulkSendDidComplete;
- (BOOL)isSiriSessionActive;
- (void)markSiriPluginReady;
- (void)markSiriPluginStopped;
- (void)setActiveBulkSendSession:(id)a0;
- (void)readFirstFrame;
- (BOOL)_maybeHandleFrame:(id)a0 error:(id)a1;
- (void)_doReadAudioFrames;

@end
