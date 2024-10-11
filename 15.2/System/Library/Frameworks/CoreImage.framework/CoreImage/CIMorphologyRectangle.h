@class CIImage, NSNumber;

@interface CIMorphologyRectangle : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputHeight;

+ (id)customAttributes;

- (id)outputImage;
- (BOOL)_doMinimum;
- (BOOL)_isIdentity;

@end
