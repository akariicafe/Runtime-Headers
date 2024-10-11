@class NSString;

@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>

@property (readonly, getter=isCHIPFeatureEnabled) BOOL chipFeatureEnabled;
@property (readonly, getter=isSignificantEventNotificationsFeatureEnabled) BOOL significantEventNotificationsFeatureEnabled;
@property (readonly, getter=isPersistentBulletinRegistrationsFeatureEnabled) BOOL persistentBulletinRegistrationsFeatureEnabled;
@property (readonly, getter=isHH2AutoMigrationEnabled) BOOL hh2AutoMigrationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
