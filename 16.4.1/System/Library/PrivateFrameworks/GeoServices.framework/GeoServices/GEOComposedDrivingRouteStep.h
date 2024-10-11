@class GEOComposedRouteEVStepInfo;

@interface GEOComposedDrivingRouteStep : GEOComposedRouteStep {
    GEOComposedRouteEVStepInfo *_evInfo;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)evInfo;
- (id)initWithComposedRoute:(id)a0 geoRouteLeg:(id)a1 geoStep:(id)a2 stepIndex:(unsigned long long)a3 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 maneuverPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (id)initWithComposedRoute:(id)a0 geoRouteLeg:(id)a1 geoStep:(id)a2 stepIndex:(unsigned long long)a3 startRouteCoordinate:(struct { unsigned int x0; float x1; })a4 endRouteCoordinate:(struct { unsigned int x0; float x1; })a5 maneuverStartRouteCoordinate:(struct { unsigned int x0; float x1; })a6;

@end
