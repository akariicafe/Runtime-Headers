@class NSString;

@interface PKDemoTransactionGeneratorConfiguration : NSObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long demoMerchant;
@property (nonatomic) long long demoPerson;
@property (nonatomic) long long transactionCount;

- (void).cxx_destruct;
- (id)init;

@end
