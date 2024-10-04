@class AVMetadataMachineReadableCodeObject, VNBarcodeObservation;

@interface BCSDetectedCode : NSObject

@property (readonly, nonatomic) AVMetadataMachineReadableCodeObject *mrcObject;
@property (readonly, nonatomic) VNBarcodeObservation *observation;

+ (id)detectedCodeWithBarcodeObservation:(id)a0;
+ (id)detectedCodeWithMachineReadableObject:(id)a0;

- (void).cxx_destruct;
- (BOOL)isLikelyEqualToCode:(id)a0;
- (void)parseCodeWithCompletion:(id /* block */)a0;

@end
