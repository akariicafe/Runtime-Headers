@class LAContext, PKExpressPassController, NSMutableDictionary, NSObject, PKPass;
@protocol OS_dispatch_queue, NPKExpressModeSettingsCoordinatorDelegate;

@interface NPKExpressModeSettingsCoordinator : NSObject

@property (retain, nonatomic) PKExpressPassController *expressPassController;
@property (retain, nonatomic) PKPass *currentPass;
@property (nonatomic) unsigned long long currentOperation;
@property (retain, nonatomic) LAContext *currentContext;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL expressStateUpdatePending;
@property (retain, nonatomic) NSMutableDictionary *previousPassStates;
@property (weak, nonatomic) id<NPKExpressModeSettingsCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (void)_handleExpressStateChange;
- (unsigned long long)_expressModeStateForPassWithUniqueID:(id)a0;
- (void)_checkForConflictsInEnablingExpressForPass:(id)a0;
- (void)_invokeCompletionHandlerWithSuccess:(BOOL)a0;
- (void)_requestUserAuthenticationForPass:(id)a0;
- (void)_handleUserCancelled;
- (void)_handleSuccessfulUserAuthenticationWithCredential:(id)a0 forPass:(id)a1;
- (void)_handleFailedUserAuthentication;
- (void)_upgradeExpressModeForPass:(id)a0 withCredential:(id)a1;
- (void)_enableExpressModeForPass:(id)a0 withCredential:(id)a1;
- (void)_handleSuccessForPass:(id)a0;
- (void)_handleFailedPassUpgrade;
- (void)_handleFailedEnableExpress;
- (unsigned long long)_expressModeStateForPassWithUniqueID:(id)a0 fromControllerState:(id)a1;
- (id)initWithExpressPassController:(id)a0 queue:(id)a1;
- (BOOL)isExpressModeSupportedForPass:(id)a0;
- (unsigned long long)expressModeStateForPass:(id)a0;
- (void)enableExpressModeForPass:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableExpressModeForPass:(id)a0 completionHandler:(id /* block */)a1;

@end
