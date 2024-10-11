@class SURotationController, UIViewController;

@interface SUSplitViewRotationController : SURotationController {
    SURotationController *_firstRotationController;
    UIViewController *_firstViewController;
    SURotationController *_secondRotationController;
    UIViewController *_secondViewController;
}

- (void)finishRotationFromInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)animateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)prepareToRotateToInterfaceOrientation:(long long)a0;
- (id)_firstRotationController;
- (id)_secondRotationController;

@end
