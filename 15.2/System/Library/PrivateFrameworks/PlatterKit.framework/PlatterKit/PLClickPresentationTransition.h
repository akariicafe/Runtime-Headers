@class _PLViewControllerOneToOneTransitionContext, NSString, UIViewPropertyAnimator, PLViewControllerAnimator, UITargetedPreview, MTMaterialView;
@protocol UIViewControllerTransitioningDelegate;

@interface PLClickPresentationTransition : NSObject <_UIClickPresentationTransition> {
    id<UIViewControllerTransitioningDelegate> _transitionDelegate;
    _PLViewControllerOneToOneTransitionContext *_transitionContext;
    PLViewControllerAnimator *_animator;
    id /* block */ _completion;
}

@property (weak, nonatomic) MTMaterialView *backgroundView;
@property (nonatomic) BOOL propagatesPresentingViewTransform;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)transitionDidEnd:(BOOL)a0;
- (void).cxx_destruct;
- (id)_animator;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (id)initWithTransitionDelegate:(id)a0 presentingViewController:(id)a1 presentedViewController:(id)a2 completion:(id /* block */)a3;
- (void)_configureTransitionContextWithFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)updateBackgroundViewForTransition;
- (id)_newAnimator;

@end
