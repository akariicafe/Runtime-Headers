@protocol NUBufferImage;

@interface _NUImageCIProvider : NSObject {
    id<NUBufferImage> _image;
}

- (id)initWithImage:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;

@end
