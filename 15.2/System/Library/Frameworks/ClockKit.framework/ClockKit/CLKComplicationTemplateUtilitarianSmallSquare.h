@class CLKImageProvider;

@interface CLKComplicationTemplateUtilitarianSmallSquare : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider;

+ (id)templateWithImageProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithImageProvider:(id)a0;
- (long long)compatibleFamily;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;

@end
