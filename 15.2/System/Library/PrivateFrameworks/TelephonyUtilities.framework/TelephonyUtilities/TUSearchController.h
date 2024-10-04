@class CNContactStore, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TUSearchController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _searchModulesLock;
    NSMutableSet *_idsDestinations;
}

@property (class, readonly, nonatomic) TUSearchController *sharedInstance;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSMutableDictionary *searchModules;
@property (retain, nonatomic) NSMutableArray *recentsModules;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;

- (void).cxx_destruct;
- (id)init;
- (void)searchForString:(id)a0 completion:(id /* block */)a1;
- (void)_cancelRecentSearches;
- (id /* block */)recentsModuleCompletionWithCompletion:(id /* block */)a0;
- (void)_cancelSearchsForSearchTerm:(id)a0;
- (id /* block */)searchModuleCompletionWithSearchTerm:(id)a0 completion:(id /* block */)a1;
- (void)_clearIdsDestinations;
- (id /* block */)_searchModuleCompletionWithModules:(id)a0 searchTerm:(id)a1 resultsClass:(Class)a2 completion:(id /* block */)a3;
- (void)_fetchIdsDestinationsIfNeeded:(id)a0 withReason:(int)a1;
- (void)recentsWithCompletion:(id /* block */)a0;

@end
