@class CBBlueLightClient, CBAdaptationClient, BrightnessSystemClient;

@interface CBClient : NSObject {
    BrightnessSystemClient *bsc;
}

@property (readonly) CBBlueLightClient *blueLightClient;
@property (readonly) CBAdaptationClient *adaptationClient;

+ (BOOL)supportsBlueLightReduction;
+ (BOOL)supportsAdaptation;

- (void)dealloc;
- (id)init;

@end
