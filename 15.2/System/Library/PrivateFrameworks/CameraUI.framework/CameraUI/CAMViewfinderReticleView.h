@class UIImageView, UIView;

@interface CAMViewfinderReticleView : UIView

@property (readonly, nonatomic) UIView *_topMaskingView;
@property (readonly, nonatomic) UIView *_bottomMaskingView;
@property (readonly, nonatomic) UIImageView *_viewportBorderView;
@property (readonly, nonatomic) UIImageView *_topLeftCornerView;
@property (readonly, nonatomic) UIImageView *_topRightCornerView;
@property (readonly, nonatomic) UIImageView *_bottomLeftCornerView;
@property (readonly, nonatomic) UIImageView *_bottomRightCornerView;
@property (readonly, nonatomic) double viewportTopInset;
@property (readonly, nonatomic) double viewportBottomInset;
@property (nonatomic) long long material;
@property (nonatomic) BOOL cornersVisible;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setViewportTopInset:(double)a0 bottomInset:(double)a1 animated:(BOOL)a2;
- (void)setCornersVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setMaterial:(long long)a0 withDuration:(double)a1;
- (void)_updateMaterialOpacityWithDuration:(double)a0;
- (id)_newViewportTemplateImage;
- (id)_newViewportCornerImage;

@end
