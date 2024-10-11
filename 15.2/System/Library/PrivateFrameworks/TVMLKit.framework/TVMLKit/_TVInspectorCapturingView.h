@class UILabel;
@protocol _TVInspectorCapturingViewDelegate;

@interface _TVInspectorCapturingView : UIView

@property (readonly, nonatomic, getter=isTestingHits) BOOL testingHits;
@property (readonly, weak, nonatomic) UILabel *descriptionLabel;
@property (weak, nonatomic) id<_TVInspectorCapturingViewDelegate> delegate;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)didTapView:(id)a0;

@end
