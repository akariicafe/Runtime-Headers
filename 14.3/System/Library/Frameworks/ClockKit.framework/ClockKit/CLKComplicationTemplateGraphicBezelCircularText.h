@class CLKComplicationTemplateGraphicCircular, CLKTextProvider;

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate

@property (copy, nonatomic) CLKComplicationTemplateGraphicCircular *circularTemplate;
@property (copy, nonatomic) CLKTextProvider *textProvider;

+ (id)templateWithCircularTemplate:(id)a0 textProvider:(id)a1;
+ (id)templateWithCircularTemplate:(id)a0;

- (void).cxx_destruct;
- (void)_enumerateEmbeddedTemplateKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)_validEmbeddedTemplateClassNamesForKey:(id)a0;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)a0;
- (id)initWithCircularTemplate:(id)a0 textProvider:(id)a1;
- (id)initWithCircularTemplate:(id)a0;

@end
