@class NSString;

@interface SBWallpaperStyleRecipe : NSObject <SBTestRecipe>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
