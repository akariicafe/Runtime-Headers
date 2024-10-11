@class TCMPSPoolingDescriptor, TCMPSConvolutionDescriptor;

@interface TCMPSVgg16Block2Descriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv1;
@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv2;
@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv3;
@property (retain, nonatomic) TCMPSPoolingDescriptor *pooling;

- (void).cxx_destruct;
- (id)init;

@end
