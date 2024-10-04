@class NSString;

@interface SSRMobileAssetProvider : NSObject <SSRAssetProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_findLatestInstalledAsset:(id)a0;
- (unsigned long long)getAssetProviderType;
- (id)installedAssetOfType:(unsigned long long)a0 forLanguageCode:(id)a1;
- (id)allInstalledAssetsOfType:(unsigned long long)a0 forLanguage:(id)a1;
- (id)_installedMobileAssetOfType:(unsigned long long)a0 forLanguage:(id)a1;
- (id)_buildAssetQueryForAssetType:(unsigned long long)a0;
- (id)_filteredAssets:(id)a0 forLanguage:(id)a1;
- (id)_getSSRAssetTypeString;
- (unsigned long long)_getSSRAssetCurrentCompatibilityVersion;
- (id)_getVoiceTriggerAssetTypeString;
- (unsigned long long)_getVoiceTriggerAssetCurrentCompatibilityVersion;
- (id)_getEndpointAssetTypeString;
- (unsigned long long)_getEndpointAssetCurrentCompatibilityVersion;

@end
