@interface WKPDFConfiguration : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) BOOL allowTransparentBackground;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
