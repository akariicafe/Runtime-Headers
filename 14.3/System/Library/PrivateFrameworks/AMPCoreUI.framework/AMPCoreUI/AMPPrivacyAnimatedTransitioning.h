@class NSString, UIViewController;

@interface AMPPrivacyAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>

@property (getter=isPresentation) BOOL presentation;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)_animateTransition:(id)a0 completionBlock:(id /* block */)a1;
- (id)_presentedViewControllerForContext:(id)a0;

@end
