@class BSAnimationSettings;

@interface SBWWallpaperWindowSceneTwoCurveTransitionContext : UIApplicationSceneTransitionContext

@property (copy, nonatomic) BSAnimationSettings *inAnimationSettings;
@property (copy, nonatomic) BSAnimationSettings *outAnimationSettings;

- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
