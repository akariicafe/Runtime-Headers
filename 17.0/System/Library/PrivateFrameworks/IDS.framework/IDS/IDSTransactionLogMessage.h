@class NSString;

@interface IDSTransactionLogMessage : NSObject

@property (readonly, nonatomic) NSString *fromID;
@property (readonly, nonatomic) NSString *loginID;
@property (readonly, nonatomic) NSString *accountUniqueID;
@property (readonly, nonatomic) NSString *serviceName;

+ (id)transactionLogMessageFromDictionaryRepresentation:(id)a0;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)_initWithAccountUniqueID:(id)a0 fromID:(id)a1 loginID:(id)a2 serviceName:(id)a3;

@end
