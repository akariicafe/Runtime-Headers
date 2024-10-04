@class NSArray, NSMutableArray;
@protocol PLVideoChoosingAssetInformation, PLVideoChoosingOptions, PLVideoResourceContext;

@interface PLVideoChoosingAndAvailabilitySupport : NSObject {
    NSMutableArray *_resourcesNeedingRepair;
}

@property (readonly, nonatomic) id<PLVideoResourceContext> context;
@property (readonly, nonatomic) id<PLVideoChoosingAssetInformation> assetInformation;
@property (readonly, nonatomic) id<PLVideoChoosingOptions> options;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) NSArray *resourcesNeedingRepair;

- (id)chooseResourceWithLoadingMode:(long long *)a0 needsAdjustmentData:(BOOL *)a1 error:(id *)a2;
- (unsigned int)_videoQualityLevelForRequestFallbackToMediumPolicy:(long long *)a0;
- (id)initWithContext:(id)a0 assetInformation:(id)a1 options:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
- (id)_acceptableResourceVersions;
- (void).cxx_destruct;
- (BOOL)_checkIsReallyLocallyAvailableAndAddToRepairListIfNeeded:(id)a0;
- (id)_ensureOriginalsAreHighestQuality:(id)a0;
- (long long)_optimalLoadingModeForResource:(id)a0;

@end
