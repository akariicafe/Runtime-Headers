@class NSString;

@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera> {
    unsigned long long _zoomLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)implicateTilesForCoordinate:(struct { double x0; double x1; })a0 route:(id)a1 nearestRoutePointIdx:(double)a2 stepNearManeuever:(BOOL)a3 into:(id)a4 stepSize:(double)a5 maneuverSize:(double)a6 tileSetStyles:(id)a7;
- (id)initWithZoomLevel:(unsigned long long)a0;
- (unsigned long long)zoomLevel;

@end
