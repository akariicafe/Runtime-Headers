@interface HKStateOfMindSeries : HKGraphSeries <HKAxisLabelDataSource> {
    void /* unknown type, empty encoding */ fixedAxisLabels;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientFillStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inactiveFillStyle;
}

+ (id)standardStateOfMindSeriesWithStateOfMindDisplayType:(id)a0 unitController:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blockCoordinate:(id)a1;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct HKGraphSeriesDataBlockPath { long long x0; long long x1; long long x2; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)cacheKeysForModelRange:(id)a0 zoomScale:(double)a1;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (struct CGPoint { double x0; double x1; })renderPositionForLabelLocation:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 constantOffset:(double)a4 isHorizontal:(BOOL)a5 optionalOffset:(struct CGPoint { double x0; double x1; })a6;

@end
