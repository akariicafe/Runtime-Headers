@class NSArray, VCPImageHandsAnalyzer;

@interface VCPHandPoseVideoRequest : VCPRequest {
    int _handID;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    VCPImageHandsAnalyzer *_analyzer;
    NSArray *_existingHands;
}

- (id)initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)associateHands:(id)a0 withExisingHands:(id)a1;
- (float)handDistance:(id)a0 withhandB:(id)a1;
- (unsigned int)preferredPixelFormat;
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 withOptions:(id)a1 error:(id *)a2;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (BOOL)cleanupWithOptions:(id)a0 error:(id *)a1;

@end
