@class NSString, UIBezierPath;

@interface PodcastsUI.MacTextView : UITextView

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
