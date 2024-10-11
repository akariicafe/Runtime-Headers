@class NSString, PETGoalConversionEventTracker;

@interface SBBreadcrumbMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETGoalConversionEventTracker *_leftTracker;
    PETGoalConversionEventTracker *_rightTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;

@end
