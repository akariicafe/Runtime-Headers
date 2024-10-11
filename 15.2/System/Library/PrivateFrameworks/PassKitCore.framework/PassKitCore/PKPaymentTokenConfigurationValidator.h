@class PKPaymentTokenConfiguration, NSString;

@interface PKPaymentTokenConfigurationValidator : NSObject <PKPaymentValidating>

@property (readonly, nonatomic) PKPaymentTokenConfiguration *tokenConfiguration;
@property (copy, nonatomic) NSString *tokenContextCurrencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)a0;

@end
