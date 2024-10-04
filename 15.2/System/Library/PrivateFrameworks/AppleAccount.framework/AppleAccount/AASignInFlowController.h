@class CDPContext, CUMessageSession, ACAccountStore, NSDictionary;
@protocol CDPStateUIProvider, AASignInFlowControllerDelegate;

@interface AASignInFlowController : NSObject {
    ACAccountStore *_accountStore;
    CDPContext *_cdpContextForAccount;
    NSDictionary *_authResults;
    BOOL _pendingSignIn;
    BOOL _existingAccount;
}

@property (nonatomic) BOOL ignoreLockAssertErrors;
@property (retain, nonatomic) CUMessageSession *messageSession;
@property (weak, nonatomic) id<AASignInFlowControllerDelegate> delegate;
@property (weak, nonatomic) id<CDPStateUIProvider> cdpUIProvider;
@property (nonatomic) BOOL shouldAutomaticallySaveSignInResults;

- (BOOL)_shouldStashLoginResponse;
- (id)_updateOrCreateAppleAccountForAuthResults:(id)a0 accountCreationError:(id *)a1;
- (void)_delegate_presentAccountCreationError:(id)a0 completion:(id /* block */)a1;
- (void)_stashLoginResponseWithAuthenticationResults:(id)a0 appleAccount:(id)a1;
- (void)_enableFindMyIfPossibleWithAccount:(id)a0 completion:(id /* block */)a1;
- (BOOL)_delegateRequiresTerms;
- (void)_delegate_presentGenericTermsUIforAccount:(id)a0 serverError:(id)a1 completion:(id /* block */)a2;
- (void)_saveTermsWithAuthResults:(id)a0 account:(id)a1;
- (void)_registerAndVerifyLoginForiCloudAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)_prepareExistingAppleAccountForSignIn:(id)a0 withAuthResults:(id)a1 accountCreationError:(id *)a2;
- (id)_createNewAppleAccountWithAuthResults:(id)a0 accountCreationError:(id *)a1;
- (id)_userPersonaUniqueString;
- (void)_updateAppleAccount:(id)a0 withAuthenticationResults:(id)a1;
- (void)_createCDPContextForPrimaryAccount:(id)a0 withAuthResults:(id)a1;
- (void)_updateAppleAccountIfNecessary:(id)a0 withAltDSID:(id)a1 rawPassword:(id)a2;
- (id)_aaErrorForErrorCode:(long long)a0;
- (id)_nameForCloudService;
- (void)_verifyLoginResponseForiCloudAccount:(id)a0 withSuccess:(BOOL)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)_delegate_presentValidationAlertForError:(id)a0 forAccount:(id)a1 completion:(id /* block */)a2;
- (void)_saveAccount:(id)a0 withAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)a1;
- (void)_validateAndEnrollCDPStateForAccount:(id)a0 withCDPContext:(id)a1 completion:(id /* block */)a2;
- (void)_addKeysAndEnrollCDPStateForAccount:(id)a0 withCDPContext:(id)a1 completion:(id /* block */)a2;
- (void)_enrollCDPStateForAccount:(id)a0 withCDPContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldEnableDataclassesForAccount:(id)a0;
- (unsigned long long)_findMyActivationAction;
- (void)_delegate_enableFindMyWithCompletion:(id /* block */)a0;
- (BOOL)_delegateWantsToBackgroundDataclassEnablement;
- (void)_backgroundSaveAccount:(id)a0 withDataclassEnablement:(BOOL)a1 completion:(id /* block */)a2;
- (void)_delegate_saveAccount:(id)a0 withDataclassEnablement:(BOOL)a1 completion:(id /* block */)a2;
- (id)_titleForSignInFailureAlert;
- (void)_saveAccount:(id)a0 withDataclassEnablement:(BOOL)a1 completion:(id /* block */)a2;
- (id)_aaErrorForErrorCode:(long long)a0 withUnderlyingError:(id)a1;
- (id)_titleForVerificationFailureAlert;
- (id)_aaMessageForErrorCode:(long long)a0;
- (BOOL)_isDuplicateAccountError:(long long)a0;
- (BOOL)_delegateWantsToSkipDataclassEnablement;
- (void)signInWithIDMSAuthenticationResults:(id)a0 completion:(id /* block */)a1;
- (void)prewarmOperationsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
