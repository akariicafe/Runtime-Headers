@class UIColor;

@interface STStorageProgressView : UIView {
    UIColor *_grayColor;
    UIColor *_blueColor;
    double _percent;
}

@property double percent;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateColors;

@end
