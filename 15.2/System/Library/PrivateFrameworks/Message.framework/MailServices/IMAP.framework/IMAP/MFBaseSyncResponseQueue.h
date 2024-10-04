@class MFLibraryIMAPStore, NSString, NSArray, MFIMAPConnection, NSMutableArray;

@interface MFBaseSyncResponseQueue : MFBufferedQueue {
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    NSString *_url;
    unsigned long long _currentUID;
    NSMutableArray *_missingUIDs;
    NSArray *_serverMessages;
    BOOL _shouldCompact;
    BOOL _shouldFetch;
    BOOL _isSearching;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)handleItems:(id)a0;
- (unsigned long long)uidForItem:(id)a0;
- (BOOL)shouldSyncFlags;
- (unsigned long long)flagsForItem:(id)a0;
- (id)sequenceIdentifierForItem:(id)a0;

@end
