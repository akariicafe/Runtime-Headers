@class NSString, PKEntitlementWhitelist;

@interface PKExtensionVendorContext : PKExtensionBaseContext <PKExtensionVendorContextProtocol> {
    PKEntitlementWhitelist *_whitelist;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleHostApplicationWillResignActive:(BOOL)a0;
- (void)handleHostApplicationDidBecomeActive;
- (void)authorizationDidRequestMerchantSessionCompleteWithUpdate:(id)a0;
- (void)authorizationDidAuthorizeContextCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)a0;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizeDisbursementWithResult:(id)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)a0 signatureRequest:(id)a1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)a0;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)a0;
- (void)authorizationDidChangeCouponCodeCompleteWithUpdate:(id)a0;
- (void)handleHostApplicationDidCancel;
- (void)handleDismissWithCompletion:(id /* block */)a0;
- (void)prepareWithPaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)a0;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)a0 paymentSummaryItems:(id)a1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)a0 shippingMethods:(id)a1 paymentSummaryItems:(id)a2;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)a0;
- (void).cxx_destruct;
- (id)hostContext;
- (id)entitlementWhitelist;
- (id)hostContextWithErrorHandler:(id /* block */)a0;

@end
