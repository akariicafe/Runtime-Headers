@class NSString, NSMutableDictionary;

@interface SBSystemGestureUsageMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    NSMutableDictionary *_typeToMetric;
}

@property (nonatomic) unsigned long long currentLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
