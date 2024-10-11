@class BCSFlagMeasurement, NSString, NSDictionary, BCSTimingMeasurement;
@protocol BCSItemIdentifying;

@interface BCSItemResolutionMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemIdentifierProviding, BCSResolutionMetricProtocol>

@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<BCSItemIdentifying> itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL errorEncountered;
@property (retain, nonatomic) BCSTimingMeasurement *timingMeasurement;
@property (retain, nonatomic) BCSFlagMeasurement *cacheHitMeasurement;

+ (id)metricForItemIdentifier:(id)a0 postProcessingMetricHandlers:(id)a1;

- (void).cxx_destruct;

@end
