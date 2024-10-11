@class UILabel, CNGeminiBadge;

@interface TSCellularPlanUsesTableViewCell : UITableViewCell

@property (retain) CNGeminiBadge *badge;
@property (retain) UILabel *titleLabel;
@property (retain) UILabel *descriptionLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setLabel:(id)a0 description:(id)a1 badge:(id)a2;

@end
