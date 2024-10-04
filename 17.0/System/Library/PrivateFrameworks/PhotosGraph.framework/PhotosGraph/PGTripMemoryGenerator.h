@class MABinaryAdjacency;

@interface PGTripMemoryGenerator : PGMemoryGenerator {
    MABinaryAdjacency *_featuredLocationOrAreaNodesByTripNode;
}

- (void).cxx_destruct;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (id)featuredLocationOrAreaNodesByTripNodeForTripNodes:(id)a0;
- (id)generateAllPotentialMemoriesWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)relevantKeyCurationFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end
