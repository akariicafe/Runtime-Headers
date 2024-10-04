@class NSMutableArray;

@interface OBAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property BOOL shouldStashMetrics;

+ (id)sharedManager;

- (void)addEvent:(id)a0;
- (void)commit;
- (id)init;
- (void).cxx_destruct;
- (void)addEvent:(id)a0 withPayload:(id)a1;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)a0;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)a0;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)a0;

@end
