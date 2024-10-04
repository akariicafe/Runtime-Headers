@interface HUHomePodServiceDetails : NSObject

+ (id)_homePodDetailsViewControllerForHomePodWithUUID:(id)a0 inHomeWithUUID:(id)a1 fromHomes:(id)a2;
+ (id)_homePodSettingsViewControllerForHomePodWithUUID:(id)a0 inHomeWithUUID:(id)a1 fromHomes:(id)a2;
+ (id)_homePodDetailsViewControllerForMediaRoutingIdentifier:(id)a0 deviceName:(id)a1 mediaAccessoryItemType:(long long)a2;
+ (id)_homePodSettingsViewControllerForAccessory:(id)a0 inHome:(id)a1;
+ (id)_homePodDetailsViewControllerForAccessory:(id)a0 inHome:(id)a1;
+ (id)_homePodDetailsViewControllerForAccessoryWithMediaRoutingIdentifier:(id)a0 deviceName:(id)a1 mediaAccessoryItemType:(long long)a2;
+ (id)homePodCardWithQuickControlsForDeviceUUID:(id)a0 inHomeWithUUID:(id)a1;
+ (id)homePodCardForDeviceUUID:(id)a0 inHomeWithUUID:(id)a1;
+ (id)homePodCardForMediaRoutingIdentifier:(id)a0 deviceName:(id)a1 mediaAccessoryItemType:(long long)a2;

@end
