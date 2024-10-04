@class NSString;
@protocol TRITaskQueuing;

@interface TRIHotfixRolloutTargetingScheduler : NSObject <TRIHotfixRolloutTargetingSchedulerProtocol>

@property (readonly, nonatomic) id<TRITaskQueuing> queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_xpcActivityCriteriaWithRunDelay:(double)a0 allowAnyNetworkingAndBatteryUsage:(BOOL)a1;

@end
