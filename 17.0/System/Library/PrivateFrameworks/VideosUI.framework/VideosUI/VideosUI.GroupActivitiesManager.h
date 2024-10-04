@class NSURL, VUIVideosPlayable, VUIGroupWatchActivityPreviewMetadata;

@interface VideosUI.GroupActivitiesManager : NSObject <VUIGroupActivitiesManagerDelegate> {
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ signpostState;
    void /* unknown type, empty encoding */ _session;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sessionStateObserver;
    void /* unknown type, empty encoding */ sessionActivityObserver;
    void /* unknown type, empty encoding */ sessionActivityParticipantsObserver;
    void /* unknown type, empty encoding */ dismissDelayTimer;
    void /* unknown type, empty encoding */ endSessionReason;
    void /* unknown type, empty encoding */ previousState;
    void /* unknown type, empty encoding */ modifyingActivityIdentifier;
    void /* unknown type, empty encoding */ _isSessionActive;
    void /* unknown type, empty encoding */ metricsDictionary;
    void /* unknown type, empty encoding */ participantsCountMax;
    void /* unknown type, empty encoding */ participantsCount;
    void /* unknown type, empty encoding */ playerObserver;
    void /* unknown type, empty encoding */ playingObserver;
    void /* unknown type, empty encoding */ sharedPlayer;
}

@property (nonatomic, readonly) BOOL isEligibleForSession;
@property (nonatomic) BOOL isSessionActive;

- (void)leaveSession;
- (void)playerDidStart:(id)a0;
- (void)endSessionWithReason:(unsigned long long)a0;
- (BOOL)handleCommerceSharedWatchUrl:(id)a0;
- (void)handleSharedPlayable:(VUIVideosPlayable *)a0 watchTogetherUrl:(NSURL *)a1 startupAction:(long long)a2 previewMetadata:(VUIGroupWatchActivityPreviewMetadata *)a3 completion:(void (^)(unsigned long long))a4;
- (BOOL)isSharedWatchIdValidForCurrentSession:(id)a0;
- (id)itemProviderForActivityWithAdamId:(id)a0 previewMetadata:(id)a1 existingItemProvider:(id)a2;
- (id)itemProviderForActivityWithSharedWatchId:(id)a0 sharedWatchUrl:(id)a1 previewMetadata:(id)a2 existingItemProvider:(id)a3;
- (void)requestPermissionToStartCowatchingForPlayable:(id)a0 completion:(id /* block */)a1;
- (void)startPlaybackFailed;
- (id)init;
- (void).cxx_destruct;
- (void)requestForegroundPresentation;

@end
