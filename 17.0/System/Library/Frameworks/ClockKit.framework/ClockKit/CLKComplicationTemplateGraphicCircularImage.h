@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCircularImage : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

+ (id)templateWithImageProvider:(id)a0;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (id)initWithImageProvider:(id)a0;

@end
