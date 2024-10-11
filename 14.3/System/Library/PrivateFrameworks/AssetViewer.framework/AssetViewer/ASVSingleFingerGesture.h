@protocol ASVTouch, ASVSingleFingerGestureDelegate;

@interface ASVSingleFingerGesture : ASVGesture

@property (retain, nonatomic) id<ASVTouch> touch;
@property (nonatomic) double touchStartTime;
@property (nonatomic) BOOL panThresholdPassed;
@property (nonatomic) void /* unknown type, empty encoding */ initialTouchLocation;
@property (nonatomic) void /* unknown type, empty encoding */ latestTouchLocation;
@property (weak, nonatomic) id<ASVSingleFingerGestureDelegate> delegate;
@property (readonly, nonatomic) unsigned long long enabledGestureTypes;

- (void).cxx_destruct;
- (void)updateGesture;
- (BOOL)gestureTypeIsEnabled:(unsigned long long)a0;
- (BOOL)generatesTaps;
- (BOOL)generatesTransforms;
- (void)finishGesture;
- (id)initWithTouch:(id)a0 dataSource:(id)a1 delegate:(id)a2 enabledGestureTypes:(unsigned long long)a3;

@end
