@class NSArray, NSString;
@protocol BCSMeasurementFactoryProtocol;

@interface BCSMetricFactory : NSObject <BCSMetricFactoryProtocol>

@property (readonly, nonatomic) NSArray *postProcessingMetricHandlers;
@property (readonly, nonatomic) id<BCSMeasurementFactoryProtocol> measurementFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)megashardPrefetchMetricForType:(long long)a0;
- (id)configResolutionMetricForConfigType:(long long)a0;
- (id)shardResolutionMetricForShardIdentifier:(id)a0;
- (id)itemResolutionMetricForItemIdentifier:(id)a0;
- (id)businessLinkRegisteredMetricForItemIdentifier:(id)a0;
- (id)businessLinkFetchMetricForItemIdentifier:(id)a0;
- (id)businessLinkHashFetchMetricForItemIdentifier:(id)a0;
- (id)chatSuggestRegisteredMetricForItemIdentifier:(id)a0;
- (id)chatSuggestFetchMetricForItemIdentifier:(id)a0;
- (id)configPrefetchMetricForConfigType:(long long)a0;
- (id)initWithMeasurementFactory:(id)a0;

@end
