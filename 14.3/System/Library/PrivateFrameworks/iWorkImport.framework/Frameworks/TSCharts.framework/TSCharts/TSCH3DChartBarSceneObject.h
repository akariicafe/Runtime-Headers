@interface TSCH3DChartBarSceneObject : TSCH3DChartColumnSceneObject

+ (BOOL)isHorizontalChart;
+ (id)chartSeriesType;
+ (void)updateLightingEffectsState:(id)a0 scene:(id)a1;
+ (id)partWithEnumerator:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; long long x7; unsigned long long x8; })a1;
+ (BOOL)isStacked;
+ (void)addHorizontalTransformToProperties:(id)a0;

- (void)updateLightingEffectsState:(id)a0 scene:(id)a1;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })labelObjectSpacePosition:(unsigned int)a0 axisValue:(double)a1 intercept:(double)a2;

@end
