@class UIImageView, UIImage, UILabel, UIButton;

@interface STDatePickerBar : UIView

@property (readonly) UILabel *dateLabel;
@property (readonly) UIButton *leftArrowButton;
@property (readonly) UIButton *rightArrowButton;
@property (readonly) UIImageView *bottomBorderLine;
@property (readonly) UIImage *horizontalLineImage;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_stDatePickerBarCommonInit;

@end
