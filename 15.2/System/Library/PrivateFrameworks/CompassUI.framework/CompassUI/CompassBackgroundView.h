@class CALayer, CAReplicatorLayer, CAShapeLayer;

@interface CompassBackgroundView : CompassRotatingView {
    struct CGPoint { double x; double y; } _compassCenter;
    CALayer *_staticLayer;
    CALayer *_rotatingLayer;
    CAReplicatorLayer *_smallCompassTicLayers;
    CAReplicatorLayer *_largeCompassTicLayers;
    CALayer *_prototypeSmallTicLayer;
    CALayer *_prototypeLargeTicLayer;
    CALayer *_bearingLayer;
    CALayer *_currentHeadingLayer;
    CAShapeLayer *_crosshairLayer;
    CALayer *_bubbleLayer;
    double _bearingLength;
    double _currentHeadingLength;
    BOOL _shownInCompass;
    struct CGPoint { double x; double y; } _currentOffset;
}

@property (nonatomic) double ticRadius;
@property (readonly, nonatomic) double ticLength;
@property (nonatomic) double bearing;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCompass:(BOOL)a1;
- (id)smallCompassTicLayers;
- (id)rotatingLayer;
- (id)largeCompassTicLayers;
- (id)staticLayer;
- (id)_crosshairLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_crosshairPathInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)prototypeSmallTicLayer;
- (id)prototypeLargeTicLayer;
- (id)currentHeadingLayer;
- (id)bearingLayer;
- (id)bubbleLayer;
- (id)crosshairLayer;
- (void)setCompassHeading:(double)a0;
- (BOOL)setCrosshairOffset:(struct CGSize { double x0; double x1; })a0;

@end
