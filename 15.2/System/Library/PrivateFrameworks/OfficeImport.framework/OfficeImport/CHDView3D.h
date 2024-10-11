@interface CHDView3D : NSObject {
    int mRotationX;
    int mRotationY;
    int mDepthPercent;
    int mGapDepthPercent;
    int mHeightPercent;
    int mPerspective;
    BOOL mRightAngleAxes;
    BOOL mCluster;
    BOOL mAutoscale;
}

- (id)description;
- (id)init;
- (BOOL)isCluster;
- (int)rotationX;
- (int)rotationY;
- (void)setRotationX:(int)a0;
- (void)setRotationY:(int)a0;
- (void)setPerspective:(int)a0;
- (void)setRightAngleAxes:(BOOL)a0;
- (void)setDepthPercent:(int)a0;
- (void)setGapDepthPercent:(int)a0;
- (void)setHeightPercent:(int)a0;
- (void)setAutoscale:(BOOL)a0;
- (void)setCluster:(BOOL)a0;
- (int)depthPercent;
- (int)gapDepthPercent;
- (int)perspective;
- (int)heightPercent;
- (BOOL)isAutoscale;
- (BOOL)isRightAngleAxes;

@end
