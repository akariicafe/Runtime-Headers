@class TSCH3DLabelResources, TSCH3DChartTitlePositioner, TSCHChartInfo;

@interface TSCH3DChartTitleProperties : NSObject

@property (readonly, nonatomic) TSCH3DLabelResources *labels;
@property (readonly, nonatomic) TSCHChartInfo *chartInfo;
@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) TSCH3DChartTitlePositioner *cachedPositioner;

+ (id)propertiesWithInfo:(id)a0 styleIndex:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithInfo:(id)a0 styleIndex:(unsigned long long)a1;

@end
