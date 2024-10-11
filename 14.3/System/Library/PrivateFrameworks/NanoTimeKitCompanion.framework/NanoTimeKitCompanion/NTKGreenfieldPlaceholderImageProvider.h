@class UIImage;

@interface NTKGreenfieldPlaceholderImageProvider : CLKImageProvider

@property (nonatomic) double progress;
@property (retain, nonatomic) UIImage *appIcon;

+ (id)provider;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
