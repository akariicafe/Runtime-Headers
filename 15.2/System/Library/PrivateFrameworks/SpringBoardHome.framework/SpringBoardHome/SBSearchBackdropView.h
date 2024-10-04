@class NSString, MTMaterialView;

@interface SBSearchBackdropView : UIView <SBHProgressiveBlur> {
    MTMaterialView *_materialView;
    BOOL _transitioningToBlur;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_recipeForStyle:(long long)a0;

- (void)setTransitionProgress:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)completeTransitionSuccessfully:(BOOL)a0;
- (void).cxx_destruct;
- (void)completeIncrementalTransitionSuccessfully:(BOOL)a0;
- (void)prepareForTransitionToBlurred:(BOOL)a0;

@end
