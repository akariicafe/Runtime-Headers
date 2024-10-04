@class CIImage, NSNumber;

@interface CIPortraitBlurDirectionalBlur : CIFilter

@property (retain) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputMaxBlur;
@property (copy, nonatomic) NSNumber *inputHorizontalBlur;
@property (copy, nonatomic) NSNumber *inputAntiAliasBlurStrength;
@property (copy, nonatomic) NSNumber *inputUseMetal;

- (id)_kernelMetal;
- (id)_kernel;
- (id)outputImage;

@end
