@class UILabel;

@interface NCSchedulerViewHeader : UICollectionReusableView {
    UILabel *_label;
}

+ (id)reuseIdentifier;
+ (id)_font;
+ (id)_text;
+ (double)preferredHeightForWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
