@class NSSet, NSString, NSArray, NSNumber;

@interface CEMSecurityFirewallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadEnableFirewall;
@property (copy, nonatomic) NSNumber *payloadBlockAllIncoming;
@property (copy, nonatomic) NSNumber *payloadEnableStealthMode;
@property (copy, nonatomic) NSArray *payloadApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)restrictionPayloadKeys;
+ (id)profileType;
+ (id)buildWithIdentifier:(id)a0 withEnableFirewall:(id)a1 withBlockAllIncoming:(id)a2 withEnableStealthMode:(id)a3 withApplications:(id)a4;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withEnableFirewall:(id)a1;

- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)multipleAllowed;

@end
