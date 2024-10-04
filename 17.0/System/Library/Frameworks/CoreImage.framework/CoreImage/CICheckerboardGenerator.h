@class CIVector, NSNumber, CIColor;

@interface CICheckerboardGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputSharpness;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
