@class NSSet, NSString, NSNumber;

@interface CEMMediaSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowBookstore;
@property (copy, nonatomic) NSNumber *payloadAllowBookstoreErotica;
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseBookBackup;
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseBookMetadataSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowBookstore:(id)a1 withAllowBookstoreErotica:(id)a2 withAllowEnterpriseBookBackup:(id)a3 withAllowEnterpriseBookMetadataSync:(id)a4;
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
