@class CARenderer;
@protocol MTLTexture;

@interface NTKUpNextRenderer : NSObject {
    CARenderer *_renderer;
    struct __IOSurface { } *_ioSurface;
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void).cxx_destruct;
- (struct __IOSurface { } *)newSurfaceWithWidth:(double)a0 height:(double)a1;
- (id)renderView:(id)a0;

@end
