@class NSArray, PXLayoutPerformerOutput;

@interface PXSplitLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>

@property (nonatomic) long long layoutAxis;
@property (nonatomic) double layoutRatio;
@property (nonatomic) double interItemSpacing;
@property (retain, nonatomic) NSArray *children;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; } layoutInput;
@property (retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

+ (struct CGSize { double x0; double x1; })performLayoutWithLayoutInput:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; struct { long long x0; long long x1; long long x2; long long x3; } x2; })a0 layoutOutput:(id)a1 usingBlock:(id /* block */)a2;

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })performLayout;
- (void).cxx_destruct;

@end
