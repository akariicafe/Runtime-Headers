@class NSDateFormatter, NSString, OSLogEventStream, OSLogEventStore;

@interface _DASLogExtractor : NSObject

@property (retain, nonatomic) OSLogEventStore *logStore;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) OSLogEventStream *eventStream;
@property (retain, nonatomic) NSString *subsystem;
@property (retain, nonatomic) NSString *category;

+ (id)extractorForArchive:(id)a0;

- (void).cxx_destruct;
- (id)initWithArchive:(id)a0;
- (id)getDefaultFilterPredicate;
- (id)getPolicyDenialReasonsFromMessage:(id)a0;
- (id)getpolicyToIntervals:(id)a0;
- (id)summarizePolicyDenialsOverMessages:(id)a0 maxDuration:(double)a1;
- (id)descriptionOfPolicyToIntervalsMap:(id)a0;
- (id)getIncompatibilityReasons:(id)a0 forActivity:(id)a1;
- (id)descriptionOfIncompatibilityDenials:(id)a0;
- (id)getInstancesOfHigherThreshold:(id)a0 forActivity:(id)a1;
- (id)descriptionOfHigherThresholds:(id)a0;
- (id)getScheduledBlocksOfMessages:(id)a0 forActivity:(id)a1;
- (id)getMessagesBeforeRunning:(id)a0 forActivity:(id)a1;
- (id)summarizeAllDenialsOverMessages:(id)a0 forActivity:(id)a1 detail:(BOOL)a2;
- (id)getActivityStartBeforeDate:(id)a0 forActivity:(id)a1;
- (BOOL)didActivityRun:(id)a0 forActivity:(id)a1;
- (id)getMessagesAfterRunning:(id)a0 forActivity:(id)a1;
- (id)summarizeRuntimeOverMessages:(id)a0 forActivity:(id)a1;
- (BOOL)didActivityFinish:(id)a0 forActivity:(id)a1;
- (id)copyActivitySummary:(id)a0 startDate:(id)a1 endDate:(id)a2 detail:(BOOL)a3 error:(int *)a4;
- (int)handleLogEventsLogEvents:(id)a0 sinceDate:(id)a1 withHandler:(id /* block */)a2;
- (id)getSummaryFromLogs:(id)a0 forActivity:(id)a1 detail:(BOOL)a2;
- (id)objectForTrigger:(id)a0 fromCondition:(id)a1 compactRepresentation:(BOOL)a2;
- (void)addConditionToHistory:(id)a0 fromMessage:(id)a1 atTimestamp:(id)a2 compactRepresentation:(BOOL)a3;
- (int)summarizeActivity:(id)a0 startDate:(id)a1 endDate:(id)a2 detail:(BOOL)a3;
- (int)sysConditionsLog:(BOOL)a0 startDate:(id)a1 endDate:(id)a2;

@end
