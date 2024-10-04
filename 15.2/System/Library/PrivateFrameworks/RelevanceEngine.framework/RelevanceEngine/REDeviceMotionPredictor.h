@class CMMotionActivityManager, CMMotionActivity, REUpNextScheduler;

@interface REDeviceMotionPredictor : REPredictor <REDeviceMotionPredictorProperties> {
    CMMotionActivityManager *_activityManager;
    REUpNextScheduler *_scheduler;
    CMMotionActivity *_lastActivity;
}

@property (getter=isStationary) BOOL stationary;
@property unsigned long long motionType;
@property (readonly, nonatomic) CMMotionActivityManager *activityManager;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)pause;
- (id)_init;
- (void)resume;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;
- (void)_updateWithActivity:(id)a0;

@end
