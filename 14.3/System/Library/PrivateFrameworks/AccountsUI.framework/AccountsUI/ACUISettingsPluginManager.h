@class PSViewController, NSMutableDictionary;
@protocol ACUISettingsPluginParentProtocol;

@interface ACUISettingsPluginManager : NSObject {
    PSViewController<ACUISettingsPluginParentProtocol> *_parentViewController;
    NSMutableDictionary *_pluginCache;
}

- (void).cxx_destruct;
- (id)initWithParentViewController:(id)a0;
- (id)_settingsPluginFromBundleWithName:(id)a0;
- (id)_loadSettingsPluginFromBundleWithName:(id)a0;
- (void)parentViewControllerWillDisappear;
- (id)mailSettingsPlugin;
- (id)calendarSettingsPlugin;
- (id)contactsSettingsPlugin;

@end
