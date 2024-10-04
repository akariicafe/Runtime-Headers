@class NSSet, NSString, NSNumber;

@interface CEMAccountCalDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadCalDAVAccountDescription;
@property (copy, nonatomic) NSString *payloadCalDAVHostName;
@property (copy, nonatomic) NSString *payloadCalDAVPrincipalURL;
@property (copy, nonatomic) NSNumber *payloadCalDAVUseSSL;
@property (copy, nonatomic) NSNumber *payloadCalDAVPort;
@property (copy, nonatomic) NSString *payloadCalDAVCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withCalDAVHostName:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withCalDAVAccountDescription:(id)a1 withCalDAVHostName:(id)a2 withCalDAVPrincipalURL:(id)a3 withCalDAVUseSSL:(id)a4 withCalDAVPort:(id)a5 withCalDAVCredentials:(id)a6;
+ (id)restrictionPayloadKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
