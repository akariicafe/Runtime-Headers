@protocol NUPurgeableSurfaceImage;

@interface NUTileLayer : CALayer

@property (readonly) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } imageRect;
@property (readonly) id<NUPurgeableSurfaceImage> image;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 tile:(id)a1;

@end
