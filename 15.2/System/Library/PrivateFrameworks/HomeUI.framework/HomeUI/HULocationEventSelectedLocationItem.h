@class HMHome, HFEventBuilder;
@protocol HFLocationEventBuilder;

@interface HULocationEventSelectedLocationItem : HFItem

@property (readonly, nonatomic) HMHome *home;
@property (retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *eventBuilder;
@property (nonatomic) BOOL locationCanBeEdited;

- (id)_locationTitle;
- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithEvent:(id)a0 inHome:(id)a1;
- (BOOL)_locationIsHome;

@end
