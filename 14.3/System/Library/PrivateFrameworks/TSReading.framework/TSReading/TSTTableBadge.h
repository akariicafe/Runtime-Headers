@class TSUColor;

@interface TSTTableBadge : NSObject

@property (nonatomic) int badgeType;
@property (retain, nonatomic) TSUColor *color;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

+ (id)badgeWithType:(int)a0 color:(id)a1 viewScale:(double)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
