@class VCPImageHumanPoseAnalyzer;

@interface VCPHumanPoseImageRequest : VCPRequest {
    VCPImageHumanPoseAnalyzer *_analyzer;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
}

+ (int)parseResults:(id)a0 observations:(id)a1;

- (id)initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)updateWithOptions:(id)a0 error:(id *)a1;
- (id)processImage:(struct __CVBuffer { } *)a0 withOptions:(id)a1 error:(id *)a2;
- (unsigned int)preferredPixelFormat;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (BOOL)cleanupWithOptions:(id)a0 error:(id *)a1;

@end
