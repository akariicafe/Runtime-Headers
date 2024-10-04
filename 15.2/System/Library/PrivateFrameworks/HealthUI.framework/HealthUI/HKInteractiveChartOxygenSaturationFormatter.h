@interface HKInteractiveChartOxygenSaturationFormatter : HKInteractiveChartGenericStatFormatter

@property (nonatomic) long long airPressureStatisticsType;

- (id)initWithStatisticsType:(long long)a0;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)a0 context:(long long)a1;

@end
