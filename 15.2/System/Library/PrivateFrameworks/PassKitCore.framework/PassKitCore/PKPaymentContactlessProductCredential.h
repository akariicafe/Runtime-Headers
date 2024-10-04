@class NSString, NSDictionary, PKPaymentSetupProduct;

@interface PKPaymentContactlessProductCredential : PKPaymentCredential

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSDictionary *readerModeMetadata;
@property (copy, nonatomic) NSString *cardSessionToken;

- (void).cxx_destruct;
- (id)init;
- (void)setRequirementsResponse:(id)a0;
- (id)initWithPaymentSetupProduct:(id)a0;
- (long long)_cardTypeFromSetupProductType:(unsigned long long)a0;
- (id)initWithPaymentSetupProduct:(id)a0 cardSessionToken:(id)a1;

@end
