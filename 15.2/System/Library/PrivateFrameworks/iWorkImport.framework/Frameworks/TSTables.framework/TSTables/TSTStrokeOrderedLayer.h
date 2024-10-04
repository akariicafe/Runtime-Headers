@class TSTStrokeLayer;

@interface TSTStrokeOrderedLayer : TSTStrokeLayer

@property (retain, nonatomic) TSTStrokeLayer *majorStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer *minorStrokeLayer;

- (void).cxx_destruct;
- (long long)startingIndex;
- (void)invalidate;
- (void)invalidateRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (id)findStrokeAndRangeAtIndex:(long long)a0;
- (id)initWithContext:(id)a0 majorStrokeLayer:(id)a1 minorStrokeLayer:(id)a2;
- (void)enumerateRawStrokesSegmentsUsingBlock:(id /* block */)a0;
- (id)nextStrokeAndRange:(id)a0;
- (id)p_findStrokeAndRangeAtIndex:(long long)a0 highOrderToken:(id)a1 updatingLowOrderToken:(id *)a2 lowOrderLayer:(id)a3;
- (void)enumerateStrokesUsingBlock:(id /* block */)a0;
- (void)appendStroke:(id)a0 inRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1 order:(int)a2;
- (void)insertStroke:(id)a0 inRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1 order:(int)a2;

@end
