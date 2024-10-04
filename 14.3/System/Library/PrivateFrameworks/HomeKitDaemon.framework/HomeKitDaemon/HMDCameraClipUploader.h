@class NSDate, NSString, HMCameraClipEncryptionManager, NSUUID, NSMutableArray, NSObject, HMBLocalZone, NAFuture;
@protocol OS_dispatch_queue, HMDCameraClipUploaderFactory, HMDCameraClipUploaderDelegate;

@interface HMDCameraClipUploader : HMFObject <HMFLogging>

@property (readonly, copy) NSDate *startDate;
@property (readonly) double targetFragmentDuration;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *logIdentifier;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;
@property (readonly) id<HMDCameraClipUploaderFactory> factory;
@property (readonly) NSMutableArray *operations;
@property (retain) NAFuture *didCreateClipFuture;
@property (readonly, copy) NSUUID *clipUUID;
@property (weak) id<HMDCameraClipUploaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)finish;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithClipUUID:(id)a0 startDate:(id)a1 targetFragmentDuration:(double)a2 localZone:(id)a3 workQueue:(id)a4 logIdentifier:(id)a5;
- (id)addNotificationForSignificantEvent:(id)a0 homePresenceByPairingIdentity:(id)a1;
- (id)addVideoInitData:(id)a0;
- (id)addVideoSegmentData:(id)a0 duration:(double)a1 timeOffsetWithinClip:(double)a2 clipFinalizedBecauseMaxDurationExceeded:(BOOL)a3;
- (id)addPosterFrameData:(id)a0 timeOffsetWithinClip:(double)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (id)initWithClipUUID:(id)a0 startDate:(id)a1 targetFragmentDuration:(double)a2 localZone:(id)a3 workQueue:(id)a4 logIdentifier:(id)a5 encryptionManager:(id)a6 factory:(id)a7;
- (id)_createClipWithSignificantEvent:(id)a0 homePresenceByPairingIdentity:(id)a1;
- (BOOL)hasAddedCreateClipOperation;
- (id)_addOperation:(id)a0 finalizeClipOnError:(BOOL)a1;
- (void)_operationCompleted:(id)a0 finalizeOnError:(BOOL)a1 future:(id)a2;
- (void)_startNextOperation;
- (BOOL)_isCancelledError:(id)a0;
- (void)_handleFatalOperationFailure;

@end
