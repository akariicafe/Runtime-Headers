@class NSString;

@interface AKAuthorizationContainerViewControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithPresenting:(BOOL)a0;
- (id)_viewControllerForTransitionContext:(id)a0;

@end
