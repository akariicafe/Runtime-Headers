@class NSLayoutConstraint;

@interface _MKStackingPlaceholderView : UIView {
    NSLayoutConstraint *_contentHeightConstraint;
}

@property (nonatomic) double contentHeight;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithHeight:(double)a0;

@end
