@interface GEOSearchAutoRedoThreshold : NSObject

@property (readonly, nonatomic) unsigned long long numberOfVisiblePoisThreshold;
@property (readonly, nonatomic) double zoomInPercentThreshold;
@property (readonly, nonatomic) double zoomOutPercentThreshold;
@property (readonly, nonatomic) double panDeltaThresholdInMeters;

- (id)init;
- (id)initWithNumberOfVisiblePOIsThreshold:(unsigned long long)a0 zoomInPercentThreshold:(double)a1 zoomOutPercentThreshold:(double)a2 panDeltaThresholdInMeters:(double)a3;
- (id)initWithSearchAutoRedoThreshold:(id)a0;

@end
