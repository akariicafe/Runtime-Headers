@class NSIndexSet, NSDictionary, NSSortDescriptor;

@interface PXAssetSortByDatesFetchResult : NSObject

@property (readonly, nonatomic) NSSortDescriptor *sortDescriptor;
@property (readonly, nonatomic) NSIndexSet *fetchedIndexes;
@property (readonly, nonatomic) NSDictionary *dateByIndex;

- (void).cxx_destruct;
- (id)initWithSortDescriptor:(id)a0 fetchedIndexes:(id)a1 dateByIndex:(id)a2;
- (void)enumerateFetchedItemsUsingBlock:(id /* block */)a0;

@end
