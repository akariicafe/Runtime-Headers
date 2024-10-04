@class NSString;

@interface DummyRemoteDeviceSecretValidator : CDPRemoteDeviceSecretValidator {
    NSString *_expectedString;
    unsigned long long _failedAttempts;
}

- (void).cxx_destruct;
- (unsigned long long)supportedEscapeOfferMask;
- (void)approveFromAnotherDeviceWithCompletion:(id /* block */)a0;
- (void)supportedEscapeOfferMaskCompletion:(id /* block */)a0;
- (void)validateSecret:(id)a0 devices:(id)a1 type:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)validateRecoveryKey:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithExpectedSecret:(id)a0;

@end
