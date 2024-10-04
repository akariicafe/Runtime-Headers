@class NSString, NSDictionary, PHAsset, PHAssetExportRequestOptions;

@interface PUActivityItemSourceConfiguration : NSObject

@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSDictionary *sharingVariants;
@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) struct { BOOL excludeLiveness; BOOL excludeLocation; BOOL excludeCaption; BOOL excludeAccessibilityDescription; BOOL includeAllOriginalResources; } sharingPreferences;
@property (readonly, nonatomic) unsigned long long maxFileSizeLimit;
@property (readonly, nonatomic) long long outputType;
@property (readonly, nonatomic) BOOL requiresAssetExport;
@property (readonly, nonatomic) long long assetExportKind;
@property (readonly, nonatomic) PHAssetExportRequestOptions *assetExportRequestOptions;

+ (BOOL)shouldExcludeAlternateVariantForActivityType:(id)a0;
+ (BOOL)supportsAssetLocalIdentifierForActivityType:(id)a0;
+ (id)descriptionForAssetExportKind:(long long)a0;
+ (id)descriptionForOutputType:(long long)a0;
+ (BOOL)shouldProvideAlternateVariantForActivityType:(id)a0 forAsset:(id)a1 withAvailableSharingVariants:(id)a2;
+ (BOOL)shouldProvideCompatibleFormatForActivityType:(id)a0 andAvailableSharingVariants:(id)a1;
+ (BOOL)isIndividualItemPreparationSupportedByActivityType:(id)a0;
+ (BOOL)isAssetBundleSupportedByActivityType:(id)a0;
+ (BOOL)isLivePhotoBundleSupportedByActivityType:(id)a0;
+ (id)_activitiesThatDontRequireAssetExport;
+ (id)_activitiesThatSupportAssetBundles;
+ (unsigned long long)maxFileSizeLimitForActivityType:(id)a0 asset:(id)a1;
+ (id)_activitiesThatSupportLivePhotoBundles;
+ (id)_photosInternalActivities;
+ (id)_photosActionSheetActivities;
+ (id)_systemActivitiesThatDontSupportMomentShareLinks;
+ (id)_activitiesThatDontSupportMomentShareLinks;
+ (id)_activitiesThatOnlySupportMomentShareLinks;
+ (id)_activitiesThatSupportHEIFHEVC;
+ (BOOL)isMomentShareLinkSupportedByActivityType:(id)a0;

- (void)_configure;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 availableSharingVariants:(id)a1 activityType:(id)a2 preferences:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a3;
- (BOOL)_requiresAssetsLibraryURLForAsset:(id)a0 forActivityType:(id)a1;
- (id)_customAccessibilityLabel;
- (BOOL)_requiresAssetExportForAsset:(id)a0 forActivityType:(id)a1;
- (BOOL)_shouldFlattenSlomoVideoForActivityType:(id)a0;
- (id)_videoExportPresetForActivityType:(id)a0;
- (id)_videoExportFileTypeForActivityType:(id)a0;
- (BOOL)_wantsLivePhotoBundleForActivityType:(id)a0;
- (BOOL)_wantsAssetBundleForActivityType:(id)a0;

@end
