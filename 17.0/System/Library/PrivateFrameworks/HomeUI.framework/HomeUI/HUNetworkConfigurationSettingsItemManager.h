@class HUNetworkConfigurationSettingsModule, HFNetworkConfigurationGroupItem;

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager

@property (readonly, nonatomic) HFNetworkConfigurationGroupItem *sourceNetworkConfigurationGroupItem;
@property (retain, nonatomic) HUNetworkConfigurationSettingsModule *networkConfigurationSettingsModule;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 networkConfigurationGroupItem:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
