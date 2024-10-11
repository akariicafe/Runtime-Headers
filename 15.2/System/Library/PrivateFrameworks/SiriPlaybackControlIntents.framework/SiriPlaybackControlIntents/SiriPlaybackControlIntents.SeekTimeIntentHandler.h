@interface SiriPlaybackControlIntents.SeekTimeIntentHandler : NSObject <SeekTimeIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ aceServiceHelper;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleSeekTime:(id)a0 completion:(id /* block */)a1;
- (void)resolveDevicesForSeekTime:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolvePlayheadPositionForSeekTime:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmSeekTime:(id)a0 completion:(id /* block */)a1;

@end
