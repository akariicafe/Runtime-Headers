@interface USKLayerOffset : NSObject {
    struct SdfLayerOffset { double _offset; double _scale; } _layerOffset;
}

@property (nonatomic) double offset;
@property (nonatomic) double scale;

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOffset:(double)a0 scale:(double)a1;
- (id)initWithSdfLayerOffset:(struct SdfLayerOffset { double x0; double x1; })a0;
- (struct SdfLayerOffset { double x0; double x1; })sdfLayerOffset;

@end
