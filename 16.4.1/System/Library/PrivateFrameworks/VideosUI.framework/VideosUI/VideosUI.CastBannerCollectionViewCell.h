@interface VideosUI.CastBannerCollectionViewCell : VUIBaseCollectionViewCell {
    void /* unknown type, empty encoding */ castBannerLayout;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ attributionTextView;
    void /* unknown type, empty encoding */ descriptionView;
    void /* unknown type, empty encoding */ monogramView;
    void /* unknown type, empty encoding */ cachedSize;
}

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
