@class NSMutableDictionary;

@interface ATXAnchorModelEventFeaturizer : NSObject {
    NSMutableDictionary *_bundleIdToLaunchHistoryDict;
}

@property (nonatomic) BOOL shouldComputeLaunchHistoryForAppLaunches;
@property (nonatomic) BOOL shouldComputeLaunchHistoryForActionKeyLaunches;
@property (nonatomic) BOOL shouldComputeLaunchHistoryForActionUUIDLaunches;

+ (id)locationOfInterestForAnchorOccurrenceDate:(id)a0;
+ (void)setHourofDayAndDayOfWeekFromDate:(id)a0 anchorMetadata:(id)a1;
+ (void)setMonthAndDayOfMonthFromDate:(id)a0 anchorMetadata:(id)a1;
+ (void)setLocationAndLocationTypeOnDate:(id)a0 anchorMetadata:(id)a1;
+ (unsigned long long)getMinTemporalDistanceFromAnchorDate:(id)a0 toTimeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void).cxx_destruct;
- (id)init;
- (id)featurizeAnchorEvent:(id)a0 anchor:(id)a1;
- (id)featurizeAppLaunchEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)featurizeActionEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)numAppLaunchesForBundleIds:(id)a0 endDate:(id)a1 dateBuckets:(id)a2;
- (id)numAppLaunchesForBundleId:(id)a0 endDate:(id)a1 dateBuckets:(id)a2;
- (id)numModeChangesForModeCandidateId:(id)a0 endDate:(id)a1 dateBuckets:(id)a2;
- (id)earliestDate:(id)a0;
- (id)numEventsForEventIds:(id)a0 endDate:(id)a1 dateBuckets:(id)a2 biomePublisher:(id)a3;
- (id)numModeChangesForModeCandidateIds:(id)a0 endDate:(id)a1 dateBuckets:(id)a2;
- (id)historyForAppLaunchDuetEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)featurizeAppLaunchForActionEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)featurizeActionKeyForActionEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)featurizeActionUUIDForActionEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)historyForModeChangeEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)historyForActionUUIDWithAppIntentDuetEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (void)warmLaunchHistoryForAppEvents:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)recentHistoryForAppLaunchDuetEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)recentHistoryForModeWithModeEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)featurizeModeEvent:(id)a0 anchorOccurrenceDate:(id)a1;
- (id)recentHistoryForActionUUIDWithAppIntentDuetEvent:(id)a0 anchorOccurrenceDate:(id)a1;

@end
