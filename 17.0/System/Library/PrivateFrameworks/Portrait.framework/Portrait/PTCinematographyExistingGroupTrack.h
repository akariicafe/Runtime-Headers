@class NSArray;

@interface PTCinematographyExistingGroupTrack : PTCinematographyExistingTrack

@property (readonly, nonatomic) NSArray *trackDecisions;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_calculateTrackDecisions;
- (id)_initWithExistingGroupTrack:(id)a0;
- (id)detectionAtOrBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)detectionInFrame:(id)a0;
- (id)initWithDetectionType:(unsigned long long)a0 groupIdentifier:(long long)a1;
- (id)trackDecisionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
