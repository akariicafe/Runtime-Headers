@class NSArray;

@interface SKUIGalleryPageComponent : SKUIPageComponent

@property (readonly, nonatomic) NSArray *childComponents;
@property (nonatomic) double cycleInterval;
@property (nonatomic) BOOL hidesPageIndicator;

- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)a0;
- (id)metricsElementName;

@end
