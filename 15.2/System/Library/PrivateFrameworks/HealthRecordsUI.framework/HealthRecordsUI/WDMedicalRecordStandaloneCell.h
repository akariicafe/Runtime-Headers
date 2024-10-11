@class UILabel, NSString, UIView;

@interface WDMedicalRecordStandaloneCell : WDMedicalRecordGroupableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *chevronView;
@property (copy, nonatomic) NSString *title;

+ (id)_titleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;
+ (double)_titleLabelLastBaselineToBottom;

- (void).cxx_destruct;
- (void)setupSubviews;

@end
