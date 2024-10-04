@interface _HKQueryUtilities : NSObject

+ (id)coalesceTimePeriodsFromSamples:(id)a0 strictStartDate:(id)a1 strictEndDate:(id)a2;
+ (id)minimumFromQuantities:(id)a0 unit:(id)a1;
+ (id)averageSumFromQuantities:(id)a0 unit:(id)a1;
+ (id)sleepDateIntervalForThePastWeekWithCalendar:(id)a0;
+ (id)calculateTotalDurationsWithTimePeriods:(id)a0 startDate:(id)a1 endDate:(id)a2 intervalComponents:(id)a3 startOfDayTransform:(id /* block */)a4;
+ (id)coalesceTimePeriods:(id)a0 strictStartDate:(id)a1 strictEndDate:(id)a2;
+ (double)totalDurationFromCoalescedDateIntervals:(id)a0;
+ (id)maximumFromQuantities:(id)a0 unit:(id)a1;
+ (id)arrayByCoalescingObjects:(id)a0 startDate:(id)a1 intervalComponents:(id)a2 calendar:(id)a3 combiningBlock:(id /* block */)a4;
+ (id)countStatisticsQueryWithSampleType:(id)a0 startDate:(id)a1 endDate:(id)a2 intervalComponents:(id)a3 predicate:(id)a4 completion:(id /* block */)a5;
+ (id)averageSumFromStatistics:(id)a0 unit:(id)a1;
+ (id)_processSleepQueryResults:(id)a0 startDate:(id)a1 intervalComponents:(id)a2 sourceOrder:(id)a3 calendar:(id)a4;
+ (id)calculateCountStatisticsWithSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 intervalComponents:(id)a3;
+ (id)coalesceTotalDurations:(id)a0 startDate:(id)a1 intervalComponents:(id)a2 intervalRecordCountsOut:(id *)a3;
+ (void)_organizeSampleByStartDate:(id)a0 startDate:(id)a1 endDate:(id)a2 intervalComponents:(id)a3 callback:(id /* block */)a4;
+ (id)sleepQueryWithStartDate:(id)a0 endDate:(id)a1 intervalComponents:(id)a2 calendar:(id)a3 predicate:(id)a4 healthStore:(id)a5 completion:(id /* block */)a6;
+ (id)calculateIncludedValuesWithSamples:(id)a0 startDate:(id)a1 endDate:(id)a2 intervalComponents:(id)a3;
+ (BOOL)shouldUseDailyAverageWithDateComponents:(id)a0 sampleType:(id)a1;

@end
