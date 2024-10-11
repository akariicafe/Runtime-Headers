@class NSSet, CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountLDAPDeclaration_CommunicationServiceRules : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) CEMAccountLDAPDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers;

+ (id)buildRequiredOnly;
+ (id)buildWithDefaultServiceHandlers:(id)a0;

- (id)serializePayloadWithAssetProviders:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;

@end
