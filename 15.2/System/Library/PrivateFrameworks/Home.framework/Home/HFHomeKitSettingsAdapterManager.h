@class NSMutableDictionary;
@protocol HFHomeKitSettingsVendor;

@interface HFHomeKitSettingsAdapterManager : NSObject

@property (readonly, weak, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (readonly, nonatomic) NSMutableDictionary *adaptersByID;

- (void).cxx_destruct;
- (id)init;
- (id)adapterForIdentifier:(id)a0;
- (id)initWithHomeKitSettingsVendor:(id)a0;
- (id)_createAdapterForIdentifier:(id)a0;

@end
