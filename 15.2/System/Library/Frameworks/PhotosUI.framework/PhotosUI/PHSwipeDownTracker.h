@class PXSwipeDownTracker;

@interface PHSwipeDownTracker : NSObject

@property (readonly, nonatomic) PXSwipeDownTracker *impl;
@property (readonly, nonatomic) double dismissalProgress;
@property (readonly, nonatomic) BOOL shouldFinishDismissal;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } trackedCenter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackedBounds;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } trackedTransform;
@property (readonly, nonatomic) struct PHDisplayVelocity { double x0; double x1; double x2; double x3; } trackedVelocity;
@property (readonly, nonatomic) double finalAnimationDuration;
@property (readonly, nonatomic) double finalAnimationSpringDamping;

- (void).cxx_destruct;
- (id)init;
- (void)startTrackingCenter:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 withInitialGestureLocation:(struct CGPoint { double x0; double x1; })a3;
- (void)trackGestureTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;

@end
