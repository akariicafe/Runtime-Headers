@interface ASCredentialRequestButtonContinue : ASCredentialRequestButton

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setEnabled:(BOOL)a0;
- (id)_backgroundColorForCurrentControlState;

@end
