@protocol NURAWNoiseReductionProperties;

@interface NUJSRAWNoiseReductionProperties : NUJSProxy <NUJSRAWNoiseReductionImagePropertiesExport>

@property (readonly) id<NURAWNoiseReductionProperties> rawNoiseReductionProperties;
@property (readonly) double luminance;
@property (readonly) double color;

- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)initWithRAWNoiseReductionProperties:(id)a0 context:(id)a1;

@end
