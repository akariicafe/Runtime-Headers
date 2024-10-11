@class HDFeatureAvailabilityManager, NSString, HDMobilityWalkingSteadinessAnalyticsDailyEventActivity, HDMobilityNotificationManager, HDBackgroundFeatureDeliveryManager, HDMobilityWalkingSteadinessFeatureAvailabilityManager;

@interface HDMobilityProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider> {
    HDMobilityNotificationManager *_notificationManager;
    HDFeatureAvailabilityManager *_walkingSteadinessClassificationsAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_walkingSteadinessClassificationsBackgroundFeatureDeliveryManager;
    HDMobilityWalkingSteadinessFeatureAvailabilityManager *_walkingSteadinessNotificationsAvailabilityManager;
    HDMobilityWalkingSteadinessAnalyticsDailyEventActivity *_walkingSteadinessAnalyticsDailyEventActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;

@end
