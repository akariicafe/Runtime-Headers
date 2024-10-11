@interface PBContext : NSObject

@property (nonatomic) struct _CAImageQueue { } *outputImageQueue;
@property (retain, nonatomic) struct __CVPixelBufferPool { } *smallPool;
@property (retain, nonatomic) struct __CVPixelBufferPool { } *largePool;

+ (id)openGLContext;
+ (id)openGLContext:(id)a0;
+ (id)openCLContext;

- (id)init;
- (struct __CVBuffer { } *)createCVPixelBufferForFilter:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 mirrored:(BOOL)a2;
- (void)applyFilter:(id)a0 toSurface:(struct __IOSurface { } *)a1 mirrored:(BOOL)a2 resultHandler:(id /* block */)a3;
- (void)applyFilter:(id)a0 toSurface:(struct __IOSurface { } *)a1 mirrored:(BOOL)a2 surfaceResultHandler:(id /* block */)a3;
- (void)renderFilter:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)renderFilter:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 mirrored:(BOOL)a2;
- (void)renderNineUp:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)renderNineUp:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 mirrored:(BOOL)a2;
- (struct __CVBuffer { } *)createCVPixelBufferForFilter:(id)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1;
- (struct _CAImageQueue { } *)outputImageQueue;
- (void)setOutputImageQueue:(struct _CAImageQueue { } *)a0;
- (struct __CVPixelBufferPool { } *)largePool;
- (void)setLargePool:(struct __CVPixelBufferPool { } *)a0;
- (struct __CVPixelBufferPool { } *)smallPool;
- (void)setSmallPool:(struct __CVPixelBufferPool { } *)a0;
- (void)preloadFilter:(id)a0;

@end
