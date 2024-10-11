@class UIStackView, NSString, UIImageView, WFIconHostingViewController, UILabel, UISwitch, WFParameterValuePickerTableViewCellConfiguration;

@interface WFParameterValuePickerTableViewCellContentView : UIView <UIContentView>

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) WFIconHostingViewController *iconViewController;
@property (readonly, nonatomic) UISwitch *selectedSwitch;
@property (readonly, nonatomic) UIStackView *contentStackView;
@property (readonly, nonatomic) UIStackView *labelsStackView;
@property (copy, nonatomic) WFParameterValuePickerTableViewCellConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
