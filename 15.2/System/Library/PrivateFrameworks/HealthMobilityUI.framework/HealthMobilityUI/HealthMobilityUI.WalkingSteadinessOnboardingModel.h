@interface HealthMobilityUI.WalkingSteadinessOnboardingModel : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ onboardingFlowManager;
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ detailsProvider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_mostRecentNotificationStatus;
    void /* unknown type, empty encoding */ notificationsEnabled;
    void /* unknown type, empty encoding */ changedDetailItems;
    void /* unknown type, empty encoding */ shouldFavoriteByDefault;
}

- (void).cxx_destruct;
- (id)init;
- (void)featureStatusManager:(id)a0 didUpdateNotificationStatus:(id)a1;

@end
