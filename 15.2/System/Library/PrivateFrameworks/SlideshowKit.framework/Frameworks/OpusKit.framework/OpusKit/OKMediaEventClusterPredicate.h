@class NSString, NSDictionary;

@interface OKMediaEventClusterPredicate : OKMediaClusterPredicate

@property (retain) NSString *countryName;
@property (retain) NSDictionary *calendarEventsDictionary;
@property (readonly) unsigned long long type;

- (id)title;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (float)efficiencyForItems:(id)a0;
- (id)eventNameForDate:(id)a0;
- (double)maximumDistanceBetweenLocations:(id)a0;
- (double)floatingAverageTimeDeltaForItem:(id)a0 inArray:(id)a1;
- (id)barycenterOfLocations:(id)a0;
- (double)floatingAverageDistanceDeltaForItem:(id)a0 inArray:(id)a1;
- (id)clusterDateStringForPeriodFrom:(id)a0 to:(id)a1;
- (id)clusterLocationStringForLocations:(id)a0;

@end
