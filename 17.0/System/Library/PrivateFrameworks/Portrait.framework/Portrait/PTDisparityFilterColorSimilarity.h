@class NSString;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTDisparityFilterColorSimilarity : NSObject <PTAbstractDisparityFilter> {
    int _frameIndex;
    id<MTLComputePipelineState> _temporalFilterExponentialMovingAverageColorSimilarities;
    id<MTLTexture> _inputRGB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)prepareFilter:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 disparityBias:(float)a5;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inStatePrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 outState:(id)a5;

@end
