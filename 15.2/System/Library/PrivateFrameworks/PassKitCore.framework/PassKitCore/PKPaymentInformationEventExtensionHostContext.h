@class NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)replyQueue;
- (void).cxx_destruct;
- (void)handleSignatureRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleConfigurationRequest:(id)a0 completion:(id /* block */)a1;
- (id)vendorContext;
- (id)vendorContextWithErrorHandler:(id /* block */)a0;
- (void)handleInformationRequest:(id)a0 completion:(id /* block */)a1;

@end
