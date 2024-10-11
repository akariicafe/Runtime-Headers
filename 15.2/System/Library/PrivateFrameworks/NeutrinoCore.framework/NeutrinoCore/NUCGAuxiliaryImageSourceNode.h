@class NUCGAuxiliaryImageProperties, NUCGImageSourceNode;

@interface NUCGAuxiliaryImageSourceNode : NUSourceNode {
    NUCGAuxiliaryImageProperties *_auxiliaryImageProperties;
}

@property (retain) NUCGImageSourceNode *sourceNode;
@property (readonly) long long auxiliaryImageType;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)a0 error:(out id *)a1;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)canPropagateOriginalAuxiliaryData;
- (long long)sourceOrientation;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (BOOL)supportsPipelineState:(id)a0 error:(out id *)a1;
- (id)_evaluateAuxiliaryImageForType:(long long)a0 error:(out id *)a1;
- (id)pipelineOptionsForPipelineState:(id)a0 error:(out id *)a1;
- (id)initWithSourceNode:(id)a0 auxiliaryImageProperties:(id)a1;

@end
