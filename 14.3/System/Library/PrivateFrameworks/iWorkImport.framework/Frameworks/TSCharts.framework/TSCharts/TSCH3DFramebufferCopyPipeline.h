@class NSArray, TSCH3DResource;

@interface TSCH3DFramebufferCopyPipeline : TSCH3DFramebufferTransformPipeline

@property (copy, nonatomic) NSArray *effects;
@property (retain, nonatomic) TSCH3DResource *vertices;
@property (retain, nonatomic) TSCH3DResource *texcoords;
@property (nonatomic) struct RenderState { struct BlendState { BOOL mBlend; int mBlendMode; } blendState; struct DepthState { BOOL depthTest; BOOL depthMask; } depthState; BOOL culling; BOOL cullBack; BOOL polygonOffset; float polygonOffsetFactor; float polygonOffsetUnits; struct EnableClipDistances { struct array<bool, 8> { BOOL __elems_[8]; } states; } enableClipDistances; } renderState;
@property (nonatomic) struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } transform;
@property (nonatomic) struct box<glm::detail::tvec2<int> > { struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } mMin; struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } mMax; } targetViewport;
@property (nonatomic) BOOL wipeTarget;
@property (nonatomic) struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } wipeColor;
@property (copy, nonatomic) id /* block */ updateShaderEffectsStatesBlock;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithProcessor:(id)a0 session:(id)a1;
- (void)transformFramebuffer;
- (void)updateShaderEffectsStates;

@end
