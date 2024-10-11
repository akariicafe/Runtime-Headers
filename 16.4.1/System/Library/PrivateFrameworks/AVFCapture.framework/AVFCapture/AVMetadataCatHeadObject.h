@interface AVMetadataCatHeadObject : AVMetadataObject <NSCopying>

+ (id)catHeadObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 input:(id)a1 timeStamp:(id)a2 type:(id)a3;

@end
