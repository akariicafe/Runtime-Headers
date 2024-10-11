@interface TSDPartitionedPartialRep : TSDRep

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } p_edgeInsetsForClipping;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } p_clipRect;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)willBeRemoved;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameInScaledCanvas;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (struct CGImage { } *)p_newImageForCachingBaseRep;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_convertBaseToPartialNaturalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
