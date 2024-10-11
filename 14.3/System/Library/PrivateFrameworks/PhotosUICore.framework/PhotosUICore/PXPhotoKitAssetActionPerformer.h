@class NSString, NSArray, PXSectionedObjectReference, PHPerson, PXPhotosDataSource, NSDictionary, PXPhotoKitAssetsDataSourceManager, PXPhotoKitImportStatusManager;

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer

@property (readonly, nonatomic) PXPhotosDataSource *photosDataSourceSnapshot;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *photoKitDataSourceManager;
@property (retain, nonatomic) PHPerson *person;
@property (retain, nonatomic) PXSectionedObjectReference *objectReference;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSDictionary *assetsByAssetCollection;
@property (nonatomic) BOOL shouldSkipUserConfirmation;
@property (retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager;
@property (retain, nonatomic) NSString *importSessionID;

+ (BOOL)canPerformWithActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;
+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;
+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)createActivityWithActionManager:(id)a0;
+ (id)createAlertActionWithTitle:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)forceIncludeAssetsInDataSource;
- (id)_indexPathsInPhotosDataSource:(id)a0;
- (void)stopExcludingAssetsFromDataSource;
- (void)instantlyExcludeAssetsFromDataSource;
- (id)createPerformerWithClass:(Class)a0 actionType:(id)a1;

@end
