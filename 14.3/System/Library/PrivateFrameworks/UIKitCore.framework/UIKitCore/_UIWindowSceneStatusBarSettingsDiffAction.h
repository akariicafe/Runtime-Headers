@class NSString, UIApplicationSceneSettingsDiffInspector;

@interface _UIWindowSceneStatusBarSettingsDiffAction : NSObject <_UISceneSettingsDiffAction>

@property (retain, nonatomic) UIApplicationSceneSettingsDiffInspector *sceneSettingsStatusBarDiffInspector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)_updateForcedStatusBarForegroundTransparentWithSceneSettings:(id)a0 transitionContext:(id)a1;

@end
