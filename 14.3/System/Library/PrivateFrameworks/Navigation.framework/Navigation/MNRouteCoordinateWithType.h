@interface MNRouteCoordinateWithType : NSObject

@property (nonatomic) unsigned long long significanceType;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeCoordinate;

+ (id)divergenceCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;
+ (id)convergenceCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a0;

- (id)description;
- (id).cxx_construct;

@end
