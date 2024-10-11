@class UIImage, AKAuthorizationLoginChoice;

@interface AKAuthorizationLoginChoiceCell : UITableViewCell

@property (copy, nonatomic) AKAuthorizationLoginChoice *loginChoice;
@property (retain, nonatomic) UIImage *iconImage;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setupContent;
- (void)_setupFormat;
- (id)initWithLoginChoice:(id)a0 reuseIdentifier:(id)a1;

@end
