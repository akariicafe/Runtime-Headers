@class UIImageView, UIVisualEffectView, UIView;

@interface AFUISiriCarPlayFullScreenBackgroundView : UIView {
    UIView *_backgroundView;
    UIImageView *_auraView;
    UIVisualEffectView *_effectView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateVisibility:(BOOL)a0;
- (void)_setupAuraBackdropViews;

@end
