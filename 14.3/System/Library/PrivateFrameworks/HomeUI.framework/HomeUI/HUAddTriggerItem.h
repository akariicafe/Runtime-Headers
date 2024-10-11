@class HMHome;

@interface HUAddTriggerItem : HFItem <HUItemMapsToView>

@property (retain, nonatomic) HMHome *home;
@property (nonatomic) unsigned long long mode;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (Class)mapsToViewClass;
- (id)initWithHome:(id)a0 mode:(unsigned long long)a1;
- (BOOL)_itemisHidden;

@end
