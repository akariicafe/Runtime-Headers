@class NSArray, NSString;
@protocol MTLTexture;

@interface RawDFBoundInferenceResults : NSObject

@property (retain, nonatomic) id<MTLTexture> skinMask;
@property (nonatomic) struct __CVBuffer { } *skinMaskPixelBuffer;
@property (retain, nonatomic) id<MTLTexture> skyMask;
@property (nonatomic) struct __CVBuffer { } *skyMaskPixelBuffer;
@property (retain, nonatomic) id<MTLTexture> personMask;
@property (retain, nonatomic) NSArray *faceLandmarks;
@property (retain, nonatomic) NSArray *skinToneClassification;
@property (retain, nonatomic) NSArray *maskConfidences;
@property (retain, nonatomic) NSArray *instanceMasks;
@property (retain, nonatomic) NSString *sceneType;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 andMetal:(id)a1;

@end
