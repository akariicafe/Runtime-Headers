@class OADDrawingTheme, CHDChart;

@interface CHAutoStyling : NSObject {
    CHDChart *mChart;
    OADDrawingTheme *mDrawingTheme;
}

+ (id)autoStylingWithChart:(id)a0 drawingTheme:(id)a1;

- (void).cxx_destruct;
- (id)drawingTheme;
- (id)initWithChart:(id)a0 drawingTheme:(id)a1;
- (int)defaultMarkerStyleForSeriesIndex:(unsigned long long)a0;
- (void)replaceStrokeAndFillInEmptyMarker:(id)a0 withSeriesGraphicProperties:(id)a1;

@end
