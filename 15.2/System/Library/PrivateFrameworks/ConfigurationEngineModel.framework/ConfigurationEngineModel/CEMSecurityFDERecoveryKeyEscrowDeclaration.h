@class NSSet, NSString;

@interface CEMSecurityFDERecoveryKeyEscrowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadLocation;
@property (copy, nonatomic) NSString *payloadEncryptCertPayloadUUID;
@property (copy, nonatomic) NSString *payloadDeviceKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)restrictionPayloadKeys;
+ (id)profileType;
+ (id)buildWithIdentifier:(id)a0 withLocation:(id)a1 withEncryptCertPayloadUUID:(id)a2 withDeviceKey:(id)a3;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withLocation:(id)a1 withEncryptCertPayloadUUID:(id)a2;

- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)multipleAllowed;

@end
