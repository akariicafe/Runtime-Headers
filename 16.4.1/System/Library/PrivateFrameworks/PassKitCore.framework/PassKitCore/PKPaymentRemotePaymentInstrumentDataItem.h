@class PKRemotePaymentInstrument, PKRemoteDevice, CNContact, PKPaymentApplication;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKRemoteDevice *remoteDevice;
@property (readonly, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) BOOL requiresBillingAddress;
@property (readonly, nonatomic) CNContact *billingAddress;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (id)errors;
- (long long)context;
- (BOOL)hasAssociatedPeerPaymentAccount;
- (id)paymentContactFormatErrors;
- (id)peerPaymentAccountBalance;
- (unsigned long long)peerPaymentAccountState;

@end
