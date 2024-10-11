@class NSMutableSet;

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep {
    NSMutableSet *_alreadySeenMasterScopedIdentifiers;
}

@property (readonly, nonatomic) unsigned long long maximumCount;

- (id)shortDescription;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0 scopeIdentifier:(id)a1 maximumCount:(unsigned long long)a2;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)a0;
- (void)reset;
- (BOOL)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;

@end
