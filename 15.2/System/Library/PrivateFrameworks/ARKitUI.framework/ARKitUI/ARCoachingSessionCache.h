@interface ARCoachingSessionCache : NSObject {
    long long _planeCount;
    long long _horizontalPlaneCount;
    long long _verticalPlaneCount;
    BOOL _planeCacheInitialized;
}

- (void)clear;
- (id)init;
- (void)sessionChanged;
- (void)updatePlaneCache:(id)a0;
- (void)removeFromPlaneCache:(id)a0;
- (void)initializePlaneCache:(id)a0;
- (void)anchorsAdded:(id)a0;
- (void)anchorsRemoved:(id)a0;
- (BOOL)hasAnyPlane:(id)a0;
- (BOOL)hasHorizontalPlane:(id)a0;
- (BOOL)hasVerticalPlane:(id)a0;

@end
