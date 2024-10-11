@class CAMSpring;

@interface CAMTrackingSpring : CAMSpring

@property (retain, nonatomic, setter=_setSettlingSpring:) CAMSpring *_settleProgressSpring;
@property (nonatomic, setter=_setSecondaryTarget:) struct { double value; double strength; } _secondaryTarget;
@property (nonatomic, setter=_convergenceStartValue:) double _convergenceStartValue;
@property (readonly, nonatomic) double convergenceProgress;
@property (readonly, nonatomic) BOOL hasSecondaryTarget;

- (void).cxx_destruct;
- (void)resetToValue:(double)a0;
- (BOOL)isConverged;
- (id)initWithTension:(double)a0 friction:(double)a1 epsilon:(double)a2;
- (void)updateForTimestamp:(double)a0;
- (void)_beginConverging;
- (void)setSecondaryTarget:(double)a0 withStrength:(double)a1 animated:(BOOL)a2;
- (void)resetToValue:(double)a0 animated:(BOOL)a1;
- (void)removeSecondaryTargetAnimated:(BOOL)a0;
- (void)setTarget:(double)a0 animated:(BOOL)a1;

@end
