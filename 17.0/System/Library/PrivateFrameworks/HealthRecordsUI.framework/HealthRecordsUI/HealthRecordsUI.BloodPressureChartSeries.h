@interface HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries

@property (nonatomic, readonly) struct { struct { struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; } x0; long long x1; } x0; struct { struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; } x0; long long x1; } x1; } selectedPathRange;

- (id)init;

@end
