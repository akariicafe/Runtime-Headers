@interface PHImageManagerRequestTracer : NSObject

+ (void)initialize;
+ (id)_currentTimestampString;
+ (void)_inq_recordRequestID:(long long)a0;
+ (void)_inq_trimToMostRecentImageManagerMessages;
+ (int)requestIDFromTaskIdentifier:(id)a0;
+ (void)registerRequestID:(int)a0 withAssetUUID:(id)a1;
+ (void)traceMessageForRequestID:(int)a0 message:(id)a1;
+ (id)recentMessagesSummaryForAssetUUID:(id)a0;
+ (void)setTracingDisabled:(BOOL)a0;

@end
