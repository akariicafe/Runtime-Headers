@class PUILocationUsageMixin;

@interface PUILocationServicesCell : PSSwitchTableCell

@property (readonly, nonatomic) PUILocationUsageMixin *location;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
