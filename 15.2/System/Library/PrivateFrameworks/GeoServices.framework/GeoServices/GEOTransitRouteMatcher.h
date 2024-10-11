@class GEOMotionContext, NSArray;

@interface GEOTransitRouteMatcher : GEORouteMatcher {
    GEOMotionContext *_motionContext;
    NSArray *_stationsOnRoute;
    NSArray *_routeMatchUpdaters;
    NSArray *_stepRanges;
}

@property (readonly, nonatomic) double distanceToClosestWalkingSegment;

- (void).cxx_destruct;
- (void)_insertUpdater:(id)a0 into:(id)a1;
- (BOOL)_stepsInSameRange:(id)a0 nextStep:(id)a1;
- (id)motionContext;
- (id)initWithRoute:(id)a0 motionContext:(id)a1;
- (BOOL)isStationCoordinateOnRoute:(struct { double x0; double x1; })a0;
- (id)route;
- (void)_finishRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (void)_startRouteMatch;
- (void)_considerCandidateMatch:(id)a0;
- (id)_stepForPointIndex:(unsigned int)a0 previousStep:(id)a1;
- (BOOL)_shouldConsiderCourseForLocation:(id)a0;
- (double)_scoreModifierForStep:(id)a0 previousStep:(id)a1;

@end
