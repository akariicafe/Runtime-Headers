@class NSArray;

@interface _UIKBCompositeImageView : UIView

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) NSArray *imageViews;

- (void)layoutSubviews;
- (void).cxx_destruct;

@end
