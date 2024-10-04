@interface RTLocationSmoother : NSObject

- (id)estimateLocationWithLocations:(id)a0 timestamp:(double)a1;
- (id)smoothLocations:(id)a0 timestamp:(double)a1 parameters:(id)a2;
- (double)getRefAlt:(id)a0;
- (id)estimateVehicleLocationWithLocations:(id)a0 parkingTimestamp:(double)a1;
- (id)interpolateLocation1:(id)a0 location2:(id)a1 weigth:(double)a2 speed:(double)a3 timestamp:(double)a4;
- (id)estimateLocationWithLocations:(id)a0 timestamp:(double)a1 parameters:(id)a2 meta:(id)a3;
- (id)snapToBestLocationWithLocations:(id)a0 timestamp:(double)a1 parameters:(id)a2;
- (id)inflateHorizontalAccuracyWithLocation:(id)a0 speed:(double)a1 timestamp:(double)a2;
- (id)estimateLocationFromFallbackModelWithLocations:(id)a0 timestamp:(double)a1 parameters:(id)a2;

@end
