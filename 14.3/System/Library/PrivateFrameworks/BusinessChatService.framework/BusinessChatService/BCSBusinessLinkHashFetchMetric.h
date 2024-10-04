@class NSString, NSDictionary, BCSTimingMeasurement;

@interface BCSBusinessLinkHashFetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol>

@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL errorEncountered;
@property (retain, nonatomic) BCSTimingMeasurement *timingMeasurement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricWithPostProcessingMetricHandlers:(id)a0;

- (void).cxx_destruct;

@end
