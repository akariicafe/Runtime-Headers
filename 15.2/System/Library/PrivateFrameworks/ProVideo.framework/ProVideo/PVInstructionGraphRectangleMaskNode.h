@class PVInstructionGraphNode;

@interface PVInstructionGraphRectangleMaskNode : PVInstructionGraphNode

@property (retain, nonatomic) PVInstructionGraphNode *inputNode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedMaskRect;
@property (nonatomic) BOOL isInverted;

+ (id)newMaskNode:(id)a0 normalizedMaskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;
- (id)requiredSourceTrackIDs;
- (id)getAllSourceNodes;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0 returnLoadedEffects:(id)a1;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (void)unloadIGNode;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransformForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (id)initWithInputNode:(id)a0 normalizedMaskRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })denormalizedMaskRectInSize:(struct CGSize { double x0; double x1; })a0;

@end
