@class RMSDAAPRequestManager, RMSFairPlaySession;

@interface RMSDAAPLoginManager : NSObject {
    RMSDAAPRequestManager *_requestManager;
    RMSFairPlaySession *_fairPlaySession;
    BOOL _isFairPlayRequired;
}

- (void).cxx_destruct;
- (void)_requestControlInterfaceWithCompletionHandler:(id /* block */)a0;
- (void)_requestFairPlayHandshake:(id /* block */)a0;
- (void)_requestLoginWithCompletionHandler:(id /* block */)a0;
- (void)_requestServerInfoWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isFairplayRequiredForServerInfo:(id)a0;
- (void)_continueFairPlayHandshakeWithData:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithRequestManager:(id)a0;
- (void)loginWithCompletionHandler:(id /* block */)a0;

@end
