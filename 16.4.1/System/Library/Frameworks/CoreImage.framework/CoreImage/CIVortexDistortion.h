@class CIImage, CIVector, NSNumber;

@interface CIVortexDistortion : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (BOOL)_isIdentity;

@end
