@class SASSystemState, SASSiriPocketStateManager, SASActivationRequest, NSDictionary, AFPreferences;

@interface SASActivationCondition : NSObject

@property (retain, nonatomic) SASActivationRequest *request;
@property (nonatomic) BOOL buttonTriggerStateActive;
@property (retain, nonatomic) SASSystemState *systemState;
@property (retain, nonatomic) SASSiriPocketStateManager *pocketStateManager;
@property (retain, nonatomic) AFPreferences *preferences;
@property (retain, nonatomic) NSDictionary *analyticsContext;
@property (nonatomic) long long requestState;

- (void).cxx_destruct;

@end
