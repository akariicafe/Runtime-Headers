@class NSArray, HKValueRange;

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList {
    NSArray *_subCoordinates;
    HKValueRange *_chartableValueRange;
}

- (void).cxx_destruct;
- (id)coordinates;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1 block:(id /* block */)a2;
- (long long)numCoordinates;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 chartableValueRange:(id)a1 roundToViewScale:(BOOL)a2 block:(id /* block */)a3;
- (id)_coordinatesInChartableRange:(id)a0;
- (long long)_numCoordinatesInChartableRange:(id)a0;
- (struct { long long x0; long long x1; })blockPathStart;
- (struct { long long x0; long long x1; })blockPathEnd;
- (id)initWithSubCoordinates:(id)a0 chartableValueRange:(id)a1;

@end
