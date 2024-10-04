@class NSSet, NSString, NSNumber;

@interface CEMApplicationStoreMacOSDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadRestrictStoreRequireAdminToInstall;
@property (copy, nonatomic) NSNumber *payloadRestrictStoreSoftwareupdateOnly;
@property (copy, nonatomic) NSNumber *payloadRestrictStoreDisableAppAdoption;
@property (copy, nonatomic) NSNumber *payloadDisableSoftwareUpdateNotifications;
@property (copy, nonatomic) NSNumber *payloadRestrictStoreMdmInstallSoftwareupdateOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)profileType;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)a0 withRestrictStoreRequireAdminToInstall:(id)a1 withRestrictStoreSoftwareupdateOnly:(id)a2 withRestrictStoreDisableAppAdoption:(id)a3 withDisableSoftwareUpdateNotifications:(id)a4 withRestrictStoreMdmInstallSoftwareupdateOnly:(id)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
