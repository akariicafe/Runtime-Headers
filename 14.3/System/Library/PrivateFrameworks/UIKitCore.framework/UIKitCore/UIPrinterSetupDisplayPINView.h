@class UILabel, UIButton;

@interface UIPrinterSetupDisplayPINView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *nextButton;

- (void).cxx_destruct;
- (void)setMessage:(id)a0 showButton:(BOOL)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
