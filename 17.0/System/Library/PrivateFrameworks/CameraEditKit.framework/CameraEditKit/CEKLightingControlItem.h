@class NSString, UIImage;

@interface CEKLightingControlItem : NSObject

@property (readonly, nonatomic) long long lightingType;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) UIImage *displayImage;
@property (readonly, nonatomic) UIImage *displayShadowImage;
@property (readonly, nonatomic) UIImage *displayOutlineImage;
@property (readonly, nonatomic) UIImage *selectionBackgroundImage;

+ (id)_defaultOutlineImage;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
