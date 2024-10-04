@class NSString, NSMutableDictionary, NSHashTable;

@interface PXPhotoKitImportStatusManager : NSObject <PXAssetImportStatusManager> {
    NSHashTable *_statusObservers;
    NSMutableDictionary *_simulatedStateByAssetID;
}

@property (readonly, nonatomic) BOOL supportsStateSimulation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAssetImportStatusObserver:(id)a0;
- (long long)importStateForAsset:(id)a0;
- (void)removeAssetImportStatusObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initAllowingSimulation:(BOOL)a0;
- (void)_notifySimulationObserversForAssetReference:(id)a0;
- (void)beginSimulatedImportForAssetReference:(id)a0;
- (void)completeSimulatedImportForAssetReference:(id)a0 withSuccess:(BOOL)a1;
- (long long)_simulatedStateForAsset:(id)a0;

@end
