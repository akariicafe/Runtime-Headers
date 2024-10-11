@class NSArray, UIImage;

@interface WBSBookmarkFolderTouchIconProviderInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *thumbnailImages;
@property (readonly, copy, nonatomic) NSArray *backgroundColors;
@property (readonly, nonatomic) UIImage *touchIcon;

+ (id)new;

- (id)initWithThumbnailImages:(id)a0 backgroundColors:(id)a1 touchIcon:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
