@class NSArray, PXLayoutPerformerOutput;

@interface PXLeafLayoutPerformer : PXBaseLayoutPerformer {
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutRect; BOOL onlyCalculateSize; struct { long long contentSizeCategory; long long layoutDirection; long long layoutSizeClass; long long layoutOrientation; } layoutAttributes; } layoutInput;
}

- (void).cxx_destruct;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; })layoutInput;
- (void)setLayoutInput:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; })a0;
- (id)layoutOutput;
- (void)setLayoutOutput:(id)a0;
- (struct CGSize { double x0; double x1; })performLayout;
- (id)children;

@end
