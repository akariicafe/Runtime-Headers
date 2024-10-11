@class UILabel, NSString;

@interface _SearchEntryWithMatchDisplay : UISearchBar

@property (readonly) UILabel *matchDisplayLabel;
@property (retain, nonatomic) NSString *matchDisplayString;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)matchDisplayVisible:(BOOL)a0;
- (id)_createMatchDisplayLabel;

@end
