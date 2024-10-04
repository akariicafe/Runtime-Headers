@interface ISDeviceInfo : NSObject {
    unsigned long long _screenClass;
    unsigned long long _deviceClass;
}

@property (readonly) int screenClass;
@property (readonly) double screenScale;
@property (readonly) struct CGSize { double x0; double x1; } homeScreenIconSize;
@property (readonly) struct CGSize { double x0; double x1; } largeHomeScreenIconSize;
@property (readonly) struct CGSize { double x0; double x1; } messagesLauncherIconSize;
@property (readonly) unsigned long long ideom;
@property (readonly) long long rawDeviceIdiom;
@property (readonly) unsigned long long deviceSubtype;
@property (readonly) int deviceClass;

+ (id)sharedInstance;

- (id)init;

@end
