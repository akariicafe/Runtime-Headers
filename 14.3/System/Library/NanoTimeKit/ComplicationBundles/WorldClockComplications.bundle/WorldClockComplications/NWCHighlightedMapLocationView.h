@class UIColor;

@interface NWCHighlightedMapLocationView : NWCMapLocationView

@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *fillColor;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fillColor:(id)a1 andStrokeWidth:(double)a2;

@end
