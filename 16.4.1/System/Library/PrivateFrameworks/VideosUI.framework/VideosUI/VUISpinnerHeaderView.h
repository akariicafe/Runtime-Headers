@class UILabel, PSSpecifier, UIActivityIndicatorView;

@interface VUISpinnerHeaderView : UIView <PSHeaderFooterView> {
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
    PSSpecifier *_specifier;
}

- (void)hideText;
- (id)initWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)hideSpinner;
- (double)preferredHeightForWidth:(double)a0;
- (void)showSpinner;
- (void)showText;

@end
