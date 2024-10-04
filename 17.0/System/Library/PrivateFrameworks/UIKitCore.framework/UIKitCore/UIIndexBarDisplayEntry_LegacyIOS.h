@class UIImage;

@interface UIIndexBarDisplayEntry_LegacyIOS : UIIndexBarDisplayEntry

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id line;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } typeBounds;
@property (nonatomic) struct CGPoint { double x; double y; } baselinePoint;

- (id)description;
- (void).cxx_destruct;

@end
