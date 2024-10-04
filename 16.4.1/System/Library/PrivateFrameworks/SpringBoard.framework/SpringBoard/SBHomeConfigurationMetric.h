@class NSString, PETScalarEventTracker;

@interface SBHomeConfigurationMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETScalarEventTracker *_homescreenDensityEventTracker;
    PETScalarEventTracker *_widgetIconConfigurationPresentationEventTracker;
    PETScalarEventTracker *_widgetIconStackConfigurationPresentationEventTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
