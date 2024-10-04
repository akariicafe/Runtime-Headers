@interface TSCHChartSeriesTypeStackedArea : TSCHChartSeriesTypeArea

- (id)init;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsSymbolDrawing;
- (double)beginDataValueForSeries:(id)a0 valueIndex:(unsigned long long)a1 valueAxisID:(id)a2;
- (double)beginDataValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 valueAxisID:(id)a2;
- (id)userInterfaceName;
- (id)g_genericToSpecificPropertyMapStackedArea;

@end
