@class PVImageBuffer;

@interface PVInstructionGraphImageBufferSourceNode : PVInstructionGraphSourceNode {
    PVImageBuffer *_imageBuffer;
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } _renderManager;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPVImageBuffer:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const struct PVInputHGNodeMap<PVInstructionGraphSourceNode *> { } *)a1 renderer:(const struct HGRef<HGRenderer> { struct HGRenderer *x0; } *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (id)instructionGraphNodeDescription;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransformForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;

@end
