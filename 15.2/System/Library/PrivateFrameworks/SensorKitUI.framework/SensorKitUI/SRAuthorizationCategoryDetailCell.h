@class UIFont, NSArray, UIStackView, UIColor, UILabel;

@interface SRAuthorizationCategoryDetailCell : UITableViewCell

@property (retain, nonatomic) NSArray *collectedLabels;
@property (retain, nonatomic) NSArray *notCollectedLabels;
@property (retain, nonatomic) UIStackView *categoryStack;
@property (retain, nonatomic) UIStackView *appUsageStack;
@property (retain, nonatomic) UIStackView *stacks;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) BOOL OBKStyle;
@property (readonly, nonatomic) UILabel *categorySubTitleLabel;
@property (readonly, nonatomic) UILabel *categoryTitleLabel;
@property (readonly, nonatomic) UILabel *appUsageTitleLabel;
@property (readonly, nonatomic) UILabel *appUsageBodyLabel;
@property (readonly, nonatomic) UILabel *collectedTitleLabel;
@property (readonly, nonatomic) UILabel *notCollectedTitleLabel;
@property (nonatomic) BOOL showAppUsage;
@property (nonatomic) long long numberOfCollectedLabels;
@property (nonatomic) long long numberOfNotCollectedLabels;

+ (id)categoryDetailCellForAuthGroup:(id)a0 bundle:(id)a1 titleFont:(id)a2 bodyFont:(id)a3 textColor:(id)a4 OBKStyle:(BOOL)a5;

- (void)dealloc;
- (id)dynamicHeightLabel;
- (id)stackViewForSubviews:(id)a0 spacing:(double)a1;
- (void)addBulletStackViewForCollected:(BOOL)a0 count:(long long)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 titleFont:(id)a2 bodyFont:(id)a3 fontColor:(id)a4 OBKStyle:(BOOL)a5;

@end
