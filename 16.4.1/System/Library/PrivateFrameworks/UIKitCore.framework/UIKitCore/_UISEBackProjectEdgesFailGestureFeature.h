@protocol _UISEGestureFeatureSettings;

@interface _UISEBackProjectEdgesFailGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider> {
    id<_UISEGestureFeatureSettings> _settings;
    BOOL _hasDoneTest;
    struct CGPoint { double x; double y; } _initialLocation;
    double _initialTimestamp;
}

@property (readonly, nonatomic) unsigned long long touchedEdges;

- (id)debugDictionary;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; double x6; } *)a0;
- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;

@end
