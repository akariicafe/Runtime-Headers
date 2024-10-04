@class NSString, HAPSecuritySession;

@interface HAP2AccessoryServerSecureTransportPairVerify : HAP2AccessoryServerSecureTransportBase <HAP2AccessoryServerTransportDelegate, HAPSecuritySessionDelegate>

@property (copy, nonatomic) id /* block */ stateChangeCompletion;
@property (retain, nonatomic) HAPSecuritySession *securitySession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_closeWithError:(id)a0;
- (void).cxx_destruct;
- (void)_openTransport;
- (void)securitySessionDidOpen:(id)a0;
- (void)securitySession:(id)a0 didCloseWithError:(id)a1;
- (id)securitySession:(id)a0 didReceiveLocalPairingIdentityRequestWithError:(id *)a1;
- (id)securitySession:(id)a0 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)a1 error:(id *)a2;
- (void)securitySession:(id)a0 didReceiveSetupExchangeData:(id)a1;
- (id)initWithTransport:(id)a0 operationQueue:(id)a1;
- (void)doOpenWithCompletion:(id /* block */)a0;
- (void)doCloseWithError:(id)a0 completion:(id /* block */)a1;
- (void)_secureTransport;
- (void)_sendSetupExchangeData:(id)a0;

@end
