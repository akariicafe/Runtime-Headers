@class TCMPSInstanceNormalizationDescriptor, TCMPSConvolutionDescriptor;

@interface TCMPSResidualDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv1;
@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv2;
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst1;
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst2;

- (void).cxx_destruct;
- (id)init;

@end
