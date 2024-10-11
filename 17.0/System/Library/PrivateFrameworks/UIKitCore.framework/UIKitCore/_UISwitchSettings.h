@interface _UISwitchSettings : NSObject

@property (readonly, nonatomic) double trackBorderGoingOnAnimationDuration;
@property (readonly, nonatomic) double trackBorderGoingOffAnimationDuration;
@property (readonly, nonatomic) double trackBorderGoingOffAnimationBeginTimeOffset;
@property (readonly, nonatomic) double trackColorAnimationDuration;
@property (readonly, nonatomic) double knobSpringMassAnimationTouchDown;
@property (readonly, nonatomic) double knobSpringMassAnimationTouchUp;
@property (readonly, nonatomic) double knobSpringStiffnessAnimationTouchDown;
@property (readonly, nonatomic) double knobSpringStiffnessAnimationTouchUp;
@property (readonly, nonatomic) double knobSpringDampingAnimationTouchDown;
@property (readonly, nonatomic) double knobSpringDampingAnimationTouchUp;
@property (readonly, nonatomic) double knobSpringDurationAnimationTouchDown;
@property (readonly, nonatomic) double knobSpringDurationAnimationTouchUp;
@property (readonly, nonatomic) double knobSpringAnimationMass;
@property (readonly, nonatomic) double knobSpringAnimationStiffness;
@property (readonly, nonatomic) double knobSpringAnimationDamping;
@property (readonly, nonatomic) double knobSpringAnimationDuration;
@property (readonly, nonatomic) double knobTouchDownSpringAnimationMass;
@property (readonly, nonatomic) double knobTouchDownSpringAnimationStiffness;
@property (readonly, nonatomic) double knobTouchDownSpringAnimationDamping;
@property (readonly, nonatomic) double knobTouchDownSpringAnimationDuration;
@property (readonly, nonatomic) double trackGoingOnSpringAnimationMass;
@property (readonly, nonatomic) double trackGoingOnSpringAnimationStiffness;
@property (readonly, nonatomic) double trackGoingOnSpringAnimationDamping;
@property (readonly, nonatomic) double trackGoingOnSpringAnimationDuration;
@property (readonly, nonatomic) double trackGoingOffSpringAnimationMass;
@property (readonly, nonatomic) double trackGoingOffSpringAnimationStiffness;
@property (readonly, nonatomic) double trackGoingOffSpringAnimationDamping;
@property (readonly, nonatomic) double trackGoingOffSpringAnimationDuration;
@property (readonly, nonatomic) BOOL feedbackEnabled;
@property (readonly, nonatomic) double hapticDelay;
@property (readonly, nonatomic) double impactIntensity;

+ (id)sharedSettings;

@end
