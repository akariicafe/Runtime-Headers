@class TUIPredictionViewCell;

@interface TUIPredictionCellButton : UIButton

@property (readonly, nonatomic) TUIPredictionViewCell *cellView;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
