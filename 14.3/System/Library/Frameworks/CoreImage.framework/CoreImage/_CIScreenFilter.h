@class CIImage, CIVector, NSNumber;

@interface _CIScreenFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputSharpness;

+ (id)customAttributes;
+ (id)_kernel_code;
+ (id)_kernel;

- (id)outputImage;

@end
