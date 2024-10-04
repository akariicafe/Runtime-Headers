@class NSNumber, NSMutableDictionary, NSString;

@interface BRRTCPairingMetric : NSObject <BRRTCMetric>

@property (nonatomic) unsigned long long pairingBeginsType;
@property (nonatomic) unsigned short rtcType;
@property (nonatomic) NSNumber *subreasonCode;
@property (retain, nonatomic) NSMutableDictionary *metricDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPairingBeginsType:(unsigned long long)a0;
- (void)addPairingTimeEventToMetricDict:(id)a0 withValue:(id)a1;
- (void)addPairingTimePerformanceEventToMetricDict:(id)a0 withTime:(id)a1;

@end
