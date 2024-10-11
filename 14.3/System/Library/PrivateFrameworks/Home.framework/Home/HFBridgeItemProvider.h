@class HMHome, NSMutableSet;

@interface HFBridgeItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *accessoryItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;

@end
