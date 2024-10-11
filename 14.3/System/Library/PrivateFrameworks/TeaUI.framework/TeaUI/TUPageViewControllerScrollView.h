@protocol TUPageViewControllerScrollViewAccessibilityDelegate;

@interface TUPageViewControllerScrollView : UIScrollView

@property (weak, nonatomic) id<TUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate;

- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (BOOL)accessibilityScroll:(long long)a0;

@end
