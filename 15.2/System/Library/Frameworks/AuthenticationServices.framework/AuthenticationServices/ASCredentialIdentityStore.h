@class SFCredentialProviderExtensionHelperProxy;

@interface ASCredentialIdentityStore : NSObject {
    SFCredentialProviderExtensionHelperProxy *_helperProxy;
}

@property (class, readonly, nonatomic) ASCredentialIdentityStore *sharedStore;

- (void).cxx_destruct;
- (void)saveCredentialIdentities:(id)a0 completion:(id /* block */)a1;
- (void)removeCredentialIdentities:(id)a0 completion:(id /* block */)a1;
- (void)removeAllCredentialIdentitiesWithCompletion:(id /* block */)a0;
- (void)replaceCredentialIdentitiesWithIdentities:(id)a0 completion:(id /* block */)a1;
- (id)_initCredentialIdentityStore;
- (void)getCredentialIdentityStoreStateWithCompletion:(id /* block */)a0;

@end
