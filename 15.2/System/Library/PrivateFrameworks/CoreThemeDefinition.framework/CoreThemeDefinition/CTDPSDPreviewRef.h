@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef {
    struct _PSDImageInfo { unsigned int width; unsigned int height; unsigned short mode; unsigned short bitsPerSample; unsigned short samplesPerPixel; int isDrawable; } _imageInfo;
    long long _layerCount;
    long long _sliceCount;
    long long _columnWidth;
    long long _rowHeight;
    NSArray *_layerIndexLayout;
    long long _sliceRowCount;
    long long _sliceColumnCount;
    NSArray *_sliceRects;
}

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (BOOL)hasGradient;
- (long long)sliceRowCount;
- (long long)sliceColumnCount;
- (void)evaluateSliceGrid;
- (BOOL)hasRegularSliceGrid;
- (long long)numberOfGradientLayers;
- (long long)numberOfAlphaChannels;
- (long long)indexOfDrawingLayerType:(long long)a0;

@end
