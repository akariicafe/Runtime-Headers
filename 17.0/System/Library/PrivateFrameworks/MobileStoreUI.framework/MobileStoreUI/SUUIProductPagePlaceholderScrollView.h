@class UIView;

@interface SUUIProductPagePlaceholderScrollView : UIScrollView

@property (nonatomic) BOOL isPad;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic) double offset;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
