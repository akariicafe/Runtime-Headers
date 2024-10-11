@interface CloudPhotoServicesUtilities : NSObject

+ (void)getDimensionsFromImageProperties:(id)a0 orientationOut:(int *)a1 widthOut:(int *)a2 heightOut:(int *)a3;
+ (struct CGSize { double x0; double x1; })dimensionsForAVAsset:(id)a0;
+ (struct CGImageSource { } *)newImageSourceFromImageAtURL:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeOfImageAtURL:(id)a0 orientationOut:(int *)a1;

@end
