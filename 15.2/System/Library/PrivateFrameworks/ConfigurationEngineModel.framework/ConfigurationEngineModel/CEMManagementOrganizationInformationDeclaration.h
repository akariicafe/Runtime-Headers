@class NSSet, NSString;

@interface CEMManagementOrganizationInformationDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadOrganizationName;
@property (copy, nonatomic) NSString *payloadOrganizationAddress;
@property (copy, nonatomic) NSString *payloadOrganizationPhone;
@property (copy, nonatomic) NSString *payloadOrganizationEmail;
@property (copy, nonatomic) NSString *payloadOrganizationMagic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)restrictionPayloadKeys;
+ (id)profileType;
+ (id)buildWithIdentifier:(id)a0 withOrganizationName:(id)a1 withOrganizationAddress:(id)a2 withOrganizationPhone:(id)a3 withOrganizationEmail:(id)a4 withOrganizationMagic:(id)a5;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withOrganizationName:(id)a1;

- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)multipleAllowed;

@end
