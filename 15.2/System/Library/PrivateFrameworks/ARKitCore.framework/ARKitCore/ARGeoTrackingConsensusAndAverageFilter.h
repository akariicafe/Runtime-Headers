@interface ARGeoTrackingConsensusAndAverageFilter : NSObject {
    void *_impl;
}

- (double)score;
- (void)dealloc;
- (id)initWithENUFromECEF:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 maxHistory:(int)a1 minInlierScore:(double)a2;
- (BOOL)getCurrentENUFromVIO:(double)a0 ENUFromVIO:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1;
- (void)updateWithVIOPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 VLPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
