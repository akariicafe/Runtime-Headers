@interface NewsSubscription.UnselectableLinkEnabledTextView : UITextView <UIGestureRecognizerDelegate>

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (id)initWithCoder:(id)a0;

@end
