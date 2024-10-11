@class NSData;

@interface NUImageExportJob : NUExportJob {
    NSData *_destinationData;
}

- (id)result;
- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)render:(out id *)a0;
- (id)prepareNodeWithPipelineState:(id)a0 error:(out id *)a1;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)_filterProperties:(id)a0;
- (struct CGImage { } *)copyCGImageWithIOSurface:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 colorSpace:(id)a2 error:(out id *)a3;
- (id)imageDestinationOptions;
- (id)imageExportRequest;
- (id)initWithExportRequest:(id)a0;
- (id)initWithImageExportRequest:(id)a0;

@end
