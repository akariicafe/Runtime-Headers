@class NSArray, NSString, PXSectionedDataSource;

@interface PXCollectionsBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot> {
    NSArray *_indexPaths;
    PXSectionedDataSource *_dataSource;
    NSArray *_modelObjects;
}

@property (readonly, nonatomic) long long estimatedAssetCount;
@property (readonly, nonatomic) long long assetCount;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) long long estimatedModelObjectsCount;
@property (readonly, nonatomic) NSArray *modelObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIndexPaths:(id)a0 dataSource:(id)a1;
- (id)displayAssetAtIndex:(long long)a0;
- (id)assetReferenceAtIndex:(long long)a0;
- (long long)indexOfAssetReference:(id)a0;
- (void).cxx_destruct;

@end
