@class CAMediaTimingFunction;

@interface PXStoryTransitionRotate : PXStoryConcreteTransition {
    double _angle;
    CAMediaTimingFunction *_transformAnimationCurve;
    CAMediaTimingFunction *_effectAnimationCurve;
}

- (void).cxx_destruct;
- (void)timeDidChange;
- (void)wasStopped;
- (double)clipAlphaForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)configureEffectForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithTransitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a0 event:(long long)a1 clipLayouts:(id)a2;
- (void)_configureWithTransitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a0;
- (id)initWithTransitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a0 effect:(id)a1 auxiliaryEffect:(id)a2;

@end
