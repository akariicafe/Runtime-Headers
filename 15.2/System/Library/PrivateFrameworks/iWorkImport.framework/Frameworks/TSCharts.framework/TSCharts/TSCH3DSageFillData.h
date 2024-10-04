@class NSArray, NSDictionary, TSCH3DFillSetIdentifier, NSObject;
@protocol TSCH3DSageFillImageDataSource;

@interface TSCH3DSageFillData : NSObject <TSCH3DSageFillData> {
    NSDictionary *_properties;
    NSArray *_layersProperties;
    TSCH3DFillSetIdentifier *_identifier;
    NSObject<TSCH3DSageFillImageDataSource> *_imageSource;
    BOOL _isLowRes;
}

+ (id)dataWithProperties:(id)a0 layersProperties:(id)a1 identifier:(id)a2 imageSource:(id)a3 isLowRes:(BOOL)a4;
+ (id)dataWithFillSetIdentifier:(id)a0 isLowRes:(BOOL)a1;
+ (id)textureWithImageData:(id)a0;
+ (id)TSPImageDataFromTexture:(id)a0;
+ (id)dataWithFillSetIdentifier:(id)a0;
+ (id)dataWithProperties:(id)a0 layersProperties:(id)a1 identifier:(id)a2 imageSource:(id)a3;

- (float)opacity;
- (void).cxx_destruct;
- (struct Color { float x0; float x1; float x2; float x3; })diffuse;
- (unsigned long long)layerCount;
- (float)shininess;
- (struct Color { float x0; float x1; float x2; float x3; })specular;
- (struct Color { float x0; float x1; float x2; float x3; })emissive;
- (id)initWithProperties:(id)a0 layersProperties:(id)a1 identifier:(id)a2 imageSource:(id)a3 isLowRes:(BOOL)a4;
- (struct ColorResult { BOOL x0; struct Color { float x0; float x1; float x2; float x3; } x1; })colorFromRedKey:(id)a0 greenKey:(id)a1 blueKey:(id)a2;
- (struct Color { float x0; float x1; float x2; float x3; })makeGray:(float)a0;
- (struct Color { float x0; float x1; float x2; float x3; })colorFromRedKey:(id)a0 greenKey:(id)a1 blueKey:(id)a2 defaultGray:(float)a3;
- (id)objectForKey:(id)a0 index:(unsigned long long)a1;
- (id)textureForIndex:(unsigned long long)a0;
- (BOOL)layerIsEnvironmentMapForIndex:(unsigned long long)a0;
- (long long)layerBlendModeForIndex:(unsigned long long)a0;
- (BOOL)isLayerEnabledForIndex:(unsigned long long)a0;
- (float)layerScaleForIndex:(unsigned long long)a0;
- (float)layerRotationForIndex:(unsigned long long)a0;
- (int)layerTilingModeForIndex:(unsigned long long)a0;
- (id)layerLightenPercentageForIndex:(unsigned long long)a0;
- (id)fillSetIdentifier;
- (id)initWithProperties:(id)a0 layersProperties:(id)a1 identifier:(id)a2 imageSource:(id)a3;

@end
