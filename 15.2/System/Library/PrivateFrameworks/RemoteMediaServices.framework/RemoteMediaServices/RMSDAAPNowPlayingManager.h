@class NSString, NSArray, RMSDAAPRequestManager, RMSNowPlayingInfo, RMSControlInterface, NSObject, NSURLSessionDataTask, NSNumber;
@protocol OS_dispatch_source, RMSDAAPNowPlayingManagerDelegate;

@interface RMSDAAPNowPlayingManager : NSObject {
    RMSDAAPRequestManager *_requestManager;
    RMSNowPlayingInfo *_currentNowPlayingInfo;
    NSURLSessionDataTask *_nowPlayingInfoRequest;
    NSURLSessionDataTask *_artworkRequest;
    NSURLSessionDataTask *_audioRoutesRequest;
    NSURLSessionDataTask *_volumeRequest;
    NSObject<OS_dispatch_source> *_artworkRetryTimer;
    long long _requestBackoffInterval;
    long long _artworkRequestBackoffInterval;
    NSString *_currentArtworkIdentifier;
    NSArray *_currentAudioRoutes;
    NSNumber *_lastVolume;
    BOOL _isObserving;
}

@property (weak, nonatomic) id<RMSDAAPNowPlayingManagerDelegate> delegate;
@property (retain, nonatomic) RMSControlInterface *controlInterface;
@property (readonly, nonatomic, getter=isObserving) BOOL observing;

- (void).cxx_destruct;
- (id)initWithRequestManager:(id)a0;
- (void)_requestArtworkDataIfNecessaryForNowPlayingInfo:(id)a0;
- (void)_requestAudioRoutes;
- (void)_requestVolume;
- (void)_refreshNowPlayingInfoRequest;
- (void)_requestNowPlayingInfoWithCompletionHandler:(id /* block */)a0;
- (void)_cancelArtworkRetryTimer;
- (void)beginObservingNowPlaying;
- (void)_scheduleArtworkRetryForNowPlayingInfo:(id)a0 delay:(double)a1;
- (BOOL)_audioRoutes:(id)a0 equalAudioRoutes:(id)a1;
- (void)endObservingNowPlaying;

@end
