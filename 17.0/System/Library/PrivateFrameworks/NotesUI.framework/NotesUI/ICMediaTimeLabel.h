@class ICMediaTimeFormatter, ICMediaTime;

@interface ICMediaTimeLabel : UILabel

@property (retain, nonatomic) ICMediaTimeFormatter *formatter;
@property (copy, nonatomic) ICMediaTime *mediaTimeValue;

- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityValue;

@end
