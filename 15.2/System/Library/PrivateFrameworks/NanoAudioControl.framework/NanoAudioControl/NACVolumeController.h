@interface NACVolumeController : NSObject

+ (id)localVolumeControllerWithAudioCategory:(id)a0;
+ (id)localVolumeControllerWithRoute:(id)a0;
+ (id)proxyVolumeControllerWithAudioCategory:(id)a0;
+ (id)proxyVolumeControllerWithTarget:(id)a0;
+ (id)demoVolumeControllerWithAudioCategory:(id)a0;

@end
