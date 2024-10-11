@class NSSet, NSString, NSNumber;

@interface CEMSystemMusicDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowMusicService;
@property (copy, nonatomic) NSNumber *payloadAllowRadioService;
@property (copy, nonatomic) NSNumber *payloadAllowMusicArtistActivity;
@property (copy, nonatomic) NSNumber *payloadAllowMusicVideos;
@property (copy, nonatomic) NSNumber *payloadAllowSharedLibraries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)restrictionPayloadKeys;
+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowMusicService:(id)a1 withAllowRadioService:(id)a2 withAllowMusicArtistActivity:(id)a3 withAllowMusicVideos:(id)a4 withAllowSharedLibraries:(id)a5;
+ (id)buildWithIdentifier:(id)a0 withAllowMusicService:(id)a1 withAllowRadioService:(id)a2 withAllowMusicArtistActivity:(id)a3 withAllowMusicVideos:(id)a4;

- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)multipleAllowed;

@end
