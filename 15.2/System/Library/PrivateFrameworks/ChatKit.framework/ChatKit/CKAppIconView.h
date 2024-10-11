@class NSMutableArray, UIView;

@interface CKAppIconView : UIView

@property (nonatomic) long long appName;
@property (retain, nonatomic) UIView *activityItemView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (retain, nonatomic) UIView *contactItemView;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setUpSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAppName:(long long)a1;

@end
