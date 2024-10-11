@class NSString, HDAudioAnalyticsManager, HDHeadphoneDoseManager;

@interface HDHearingProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider, HDProfileExtension> {
    HDAudioAnalyticsManager *_analyticsManager;
}

@property (readonly, nonatomic) HDHeadphoneDoseManager *headphoneDoseManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;

@end
