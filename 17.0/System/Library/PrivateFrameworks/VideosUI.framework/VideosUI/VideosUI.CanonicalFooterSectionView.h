@class VUILabel;

@interface VideosUI.CanonicalFooterSectionView : VUIBaseView {
    void /* unknown type, empty encoding */ sectionLayout;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ footerView;
    void /* unknown type, empty encoding */ itemViews;
    void /* unknown type, empty encoding */ prototypeItemHeaderLabel;
    void /* unknown type, empty encoding */ focusableTextViews;
}

@property (nonatomic, readonly) VUILabel *accessibilityHeaderView;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
