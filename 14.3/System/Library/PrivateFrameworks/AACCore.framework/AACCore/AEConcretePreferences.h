@class NSString;

@interface AEConcretePreferences : NSObject <AEPreferences>

@property (nonatomic, getter=shouldEnterSandbox) BOOL enterSandbox;
@property (nonatomic, getter=shouldPresentShields) BOOL presentShields;
@property (nonatomic, getter=shouldCreateAssessmentFile) BOOL createAssessmentFile;
@property (nonatomic, getter=shouldDisableSiri) BOOL disableSiri;
@property (nonatomic, getter=shouldDisableContinuity) BOOL disableContinuity;
@property (nonatomic, getter=shouldScrubPasteboard) BOOL scrubPasteboard;
@property (nonatomic, getter=shouldRestrictNetworkAccess) BOOL restrictNetworkAccess;
@property (nonatomic, getter=shouldStopAirplayBeforehand) BOOL stopAirPlayBeforehand;
@property (nonatomic, getter=shouldRestrictFrontmostApp) BOOL restrictFrontmostApp;
@property (nonatomic, getter=shouldPauseMedia) BOOL pauseMedia;
@property (nonatomic, getter=shouldRestrictContentCapture) BOOL restrictContentCapture;
@property (nonatomic, getter=shouldDisableTrackpadLookup) BOOL disableTrackpadLookup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
