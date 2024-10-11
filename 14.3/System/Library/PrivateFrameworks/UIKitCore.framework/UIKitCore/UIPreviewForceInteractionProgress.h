@class NSString, _UIForceLevelClassifier, NSObservation, _UITouchForceObservable;

@interface UIPreviewForceInteractionProgress : UIInteractionProgress <_UIForceLevelClassifierDelegate> {
    _UITouchForceObservable *_observable;
    long long _minimumState;
    BOOL _updateMinimumStateWithTargetState;
    _UIForceLevelClassifier *_classifier;
    NSObservation *_classifierObservation;
    BOOL _enteredMinimumState;
    BOOL _didEnd;
    NSObservation *_progressObservation;
    NSObservation *_targetStateUpdateObservation;
    NSObservation *_gestureBeganObservation;
}

@property (nonatomic, setter=_setTargetState:) long long _targetState;
@property (nonatomic, setter=_setClassifierShouldRespectSystemGestureTouchFiltering:) BOOL _classifierShouldRespectSystemGestureTouchFiltering;
@property (nonatomic) BOOL completesAtTargetState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)didEnd;
- (id)_initWithObservable:(id)a0 targetState:(long long)a1 minimumRequiredState:(long long)a2 useLinearClassifier:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 targetState:(long long)a1 minimumRequiredState:(long long)a2;
- (id)_initWithObservable:(id)a0 targetState:(long long)a1 minimumRequiredState:(long long)a2;
- (id)initWithGestureRecognizer:(id)a0 minimumRequiredState:(long long)a1;
- (void)_gestureRecognizerBegan:(BOOL)a0;
- (void)_installProgressObserver;
- (id)_initWithView:(id)a0 targetState:(long long)a1 minimumRequiredState:(long long)a2 useLinearClassifier:(BOOL)a3;
- (void)_setGestureBeginObservable:(id)a0;
- (id)initWithView:(id)a0 targetState:(long long)a1;
- (id)initWithGestureRecognizer:(id)a0;
- (BOOL)enteredMinimumState;
- (void)_forceLevelClassifierDidReset:(id)a0;
- (void)_forceLevelClassifier:(id)a0 currentForceLevelDidChange:(long long)a1;

@end
