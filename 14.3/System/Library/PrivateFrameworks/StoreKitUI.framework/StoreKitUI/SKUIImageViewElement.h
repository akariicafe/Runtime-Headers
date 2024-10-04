@class UIColor, NSString, SKUIImageViewElementCacheKey, NSURL;

@interface SKUIImageViewElement : SKUIViewElement {
    NSString *_alt;
    NSString *_entityResourceName;
    NSURL *_entityURL;
    char _enabled;
    BOOL _hasValidEntityValues;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    struct CGSize { double width; double height; } _size;
}

@property (nonatomic) float layerShadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } layerShadowOffset;
@property (nonatomic) double layerShadowRadius;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (readonly, nonatomic) id resourceCacheKey;
@property (readonly, nonatomic) SKUIImageViewElementCacheKey *transientResourceCacheKey;
@property (readonly, nonatomic) NSString *resourceName;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)accessibilityText;
- (BOOL)isEnabled;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (BOOL)rendersWithParallax;
- (BOOL)rendersWithPerspective;
- (id)applyUpdatesWithElement:(id)a0;
- (long long)pageComponentType;
- (void)entityValueProviderDidChange;
- (void)_loadEntityValuesIfNeeded;
- (id)uniquingMapKey;
- (id)entityValueProperties;

@end
