@class UIImage, NSString, NSBundle;

@interface PSLazyImagePromise : NSObject {
    NSString *_imagePath;
    NSString *_imageName;
    NSBundle *_imageBundle;
    id /* block */ _loadBlock;
    UIImage *_image;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic, getter=isImageLoaded) BOOL imageLoaded;

+ (id)imagePromiseWithImagePath:(id)a0;
+ (id)imagePromiseWithLoadBlock:(id /* block */)a0;
+ (id)imagePromiseWithImageNamed:(id)a0 inBundle:(id)a1;

- (void).cxx_destruct;
- (void)loadImage;

@end
