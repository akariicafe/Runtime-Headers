@class NSArray;

@interface WDChartExperimentsLineSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) NSArray *chartPoints;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (id)_chartPointsFromDataSpec:(id)a0;

@end
