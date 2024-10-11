@class PGGraphMomentNodeCollection, PGGraphFeatureNodeCollection, PGGraphAddressNodeCollection, NSString;

@interface PGGraphFrequentLocationNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *preciseAddressNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;

- (void)enumerateNodesAsCollectionsSortedByUniversalEndDateWithOrderAscending:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)enumerateUniversalEndDatesUsingBlock:(id /* block */)a0;

@end
