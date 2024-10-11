@interface AVTAvatarActionButton : UIButton

@property (nonatomic) BOOL isDestructive;

+ (id)destructiveButtonWithAction:(id)a0;
+ (id)defaultButtonWithAction:(id)a0;
+ (id)buttonWithAction:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
