@class NUGeometryTransform;

@interface NUSlowMotionNode : NUTransformNode

@property (readonly) NUGeometryTransform *geomTransform;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (readonly) float rate;

- (void).cxx_destruct;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)_evaluateVideo:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (BOOL)requiresAudioMix;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)_evaluateImage:(out id *)a0;
- (id)_transformWithError:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rate:(float)a1 input:(id)a2;
- (id)_evaluateAudioMix:(out id *)a0;

@end
