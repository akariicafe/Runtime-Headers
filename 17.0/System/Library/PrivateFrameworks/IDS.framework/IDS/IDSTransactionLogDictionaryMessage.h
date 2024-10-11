@class NSDictionary;

@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage

@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 accountUniqueID:(id)a1 fromID:(id)a2 loginID:(id)a3 serviceName:(id)a4;

@end
