@class UIView;

@interface SKUIIPhoneProductPageView : UIView

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *bannerView;
@property (nonatomic) double bannerOffset;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateYPosition:(double)a0;

@end
