@interface VCPImageAnalyzer : NSObject

- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)calculateTextureness:(float *)a0 height:(int)a1 width:(int)a2 sdof:(BOOL)a3 result:(char *)a4;
- (int)analyzePixelBufferInTiles:(struct __CVBuffer { } *)a0 results:(id)a1 cancel:(id /* block */)a2;
- (int)processTile:(struct __CVBuffer { } *)a0 results:(id)a1 cancel:(id /* block */)a2;
- (int)aggregateTileResults:(id)a0 tileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 landscape:(BOOL)a3 results:(id)a4;

@end
