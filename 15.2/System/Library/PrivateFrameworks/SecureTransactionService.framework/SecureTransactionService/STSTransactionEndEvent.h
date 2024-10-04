@class NSDictionary, NSString, STSCredential;

@interface STSTransactionEndEvent : NSObject

@property (retain, nonatomic) STSCredential *credential;
@property (retain, nonatomic) NSDictionary *parsedInfo;
@property (nonatomic) BOOL background;
@property (retain, nonatomic) NSString *readerIdentifier;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 andNearFieldEndEvent:(id)a1;

@end
