@class NSSortDescriptor, NSFileProviderSearchQuery, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface LiveFSFPSearchEnumeratorHelper : LiveFSFPEnumeratorHelper {
    NSFileProviderSearchQuery *_ourSearchQuery;
    NSMutableArray *searchResults;
    NSObject<OS_dispatch_queue> *_searchWorkQueue;
    NSMutableArray *_pendingReaderBlocks;
}

@property (retain) NSSortDescriptor *sortD;

+ (id)criteriaForQuery:(id)a0;
+ (id)newForQuery:(id)a0 withExtension:(id)a1;

- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;
- (void).cxx_destruct;
- (void)start;
- (id)initForQuery:(id)a0 withExtension:(id)a1;
- (void)scheduleReaders;
- (id /* block */)copySearchResultBlock;
- (id /* block */)copySearchCompletionBlock;
- (void)finallyEnumerateItemsForObserver:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)waitForSearchResultsForObserver:(id)a0 startingAtPage:(id)a1;

@end
