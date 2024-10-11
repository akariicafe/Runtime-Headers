@class NSString, SBUIBiometricResource, FBServiceClientAuthenticator;

@interface SBBiometricsService : NSObject <SBSystemServiceServerBiometricsDelegate> {
    SBUIBiometricResource *_biometricResource;
    FBServiceClientAuthenticator *_unlockCredentialAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)systemServiceServer:(id)a0 client:(id)a1 fetchUnlockCredentialSet:(id /* block */)a2;

@end
