@class NSUUID, HKWorkoutConfiguration, NSString, HDHealthStoreClient;

@interface HDWorkoutSessionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *clientApplicationIdentifier;
@property (readonly, nonatomic) BOOL requiresCoreLocationAssertion;
@property (readonly, nonatomic) BOOL supportsAppRelaunchForRecovery;
@property (readonly, nonatomic) BOOL supports3rdPartyAOT;

- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 workoutConfiguration:(id)a1 client:(id)a2 processBundleIdentifier:(id)a3 applicationIdentifier:(id)a4 requiresCoreLocationAssertion:(BOOL)a5 supportsAppRelaunchForRecovery:(BOOL)a6 supports3rdPartyAOT:(BOOL)a7;

@end
