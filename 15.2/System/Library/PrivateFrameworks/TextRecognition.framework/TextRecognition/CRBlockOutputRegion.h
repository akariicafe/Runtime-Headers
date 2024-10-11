@interface CRBlockOutputRegion : CRCompositeOutputRegion

+ (id)blockWithTextFeature:(id)a0 children:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 confidenceThresholdProvider:(id)a3;
+ (id)blockWithBlock:(id)a0 children:(id)a1;
+ (id)blockWithLines:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;

- (unsigned long long)type;
- (id)joiningDelimeter;
- (id)regionsSuitableForDataDetectorOutput;

@end
