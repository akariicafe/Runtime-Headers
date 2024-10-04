@class TSCH3DLabelResources, TSCH3DArray2D, TSCH3DTransform;

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties

@property (retain, nonatomic) TSCH3DArray2D *lightingModels;
@property (retain, nonatomic) TSCH3DLabelResources *labels;
@property (retain, nonatomic) TSCH3DTransform *chartTransform;
@property (retain, nonatomic) TSCH3DTransform *elementsTransform;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)renderingLightingModelForSeries:(id)a0;

@end
