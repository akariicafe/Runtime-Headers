@interface PUParallaxedTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) struct CGPoint { double x; double y; } parallaxOffset;

- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 coordinateSystem:(id)a6;
- (BOOL)isGeometryEqualToLayoutInfo:(id)a0;
- (id)clone;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 parallaxOffset:(struct CGPoint { double x0; double x1; })a6 coordinateSystem:(id)a7;

@end
