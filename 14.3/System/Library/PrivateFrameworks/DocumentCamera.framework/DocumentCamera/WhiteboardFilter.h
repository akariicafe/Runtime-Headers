@class CIImage, NSNumber;

@interface WhiteboardFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *stride;

+ (id)customAttributes;

- (void).cxx_destruct;
- (id)outputImage;
- (id)whiteboardFilterKernel;

@end
