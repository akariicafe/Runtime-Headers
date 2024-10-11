@class TimeseriesInternal;

@interface Timeseries : NSObject

@property (readonly) TimeseriesInternal *underlyingObject;

- (void).cxx_destruct;
- (id)init;
- (id)runBinomialTestTimeseriesWithSamples:(id)a0 sampleTimestamps:(id)a1 chunkMethod:(id)a2 minimumSampleSize:(id)a3 lastTimestampPreviousTest:(id)a4 significanceLevel:(id)a5 pHypothesis:(id)a6 error:(id *)a7;
- (id)runZTestBinomialProportionsTimeseriesWithSamples:(id)a0 sampleTimestamps:(id)a1 chunkMethod:(id)a2 minimumSampleSize:(id)a3 lastTimestampPreviousTest:(id)a4 significanceLevel:(id)a5 error:(id *)a6;
- (id)runChangeDetectionWithEvents:(id)a0 test:(id)a1 lastRun:(id)a2;

@end
