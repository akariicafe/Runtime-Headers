@class NSIndexSet, NSDictionary, PXMemoriesSpec;

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator {
    struct CGSize { double width; double height; } _size;
    PXMemoriesSpec *_spec;
    NSIndexSet *_geometryKinds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sectionHeaderRect;
    NSDictionary *_rectsByIndexByKind;
    BOOL _isPrepared;
}

@property (nonatomic) long long layoutAxis;

- (id)initWithMetrics:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (void)invalidate;
- (void).cxx_destruct;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (void)_prepareLayoutIfNeeded;
- (struct CGSize { double x0; double x1; })estimatedSize;
- (id)geometryKinds;
- (unsigned long long)numberOfGeometriesWithKind:(long long)a0;

@end
