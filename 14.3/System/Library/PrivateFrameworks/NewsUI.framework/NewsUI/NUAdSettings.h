@class NSString;
@protocol SXAdvertisingSettings;

@interface NUAdSettings : NSObject <NUAdSettings>

@property (readonly, nonatomic) BOOL debugAdSlotsEnabled;
@property (readonly, nonatomic) id<SXAdvertisingSettings> debugAdvertisementSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDebugAdSlotsEnabled:(BOOL)a0 debugAdvertisementSettings:(id)a1;

@end
