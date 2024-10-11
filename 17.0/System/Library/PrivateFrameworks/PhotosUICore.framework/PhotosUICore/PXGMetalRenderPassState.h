@protocol MTLDevice, MTLBuffer;

@interface PXGMetalRenderPassState : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) long long capacity;
@property (readonly, nonatomic) unsigned int *spriteIndexes;
@property (readonly, nonatomic) struct { float x0; } *textureInfos;
@property (readonly, nonatomic) id<MTLBuffer> spriteIndexesMetalBuffer;
@property (readonly, nonatomic) id<MTLBuffer> spriteTextureInfosMetalBuffer;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 capacity:(long long)a1;

@end
