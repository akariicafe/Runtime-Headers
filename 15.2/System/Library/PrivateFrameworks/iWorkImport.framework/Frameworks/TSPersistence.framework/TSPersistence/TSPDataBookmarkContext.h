@class NSObject, TSUManagedTemporaryDirectory, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TSPDataBookmarkContext : NSObject {
    TSUManagedTemporaryDirectory *_temporaryDirectory;
    NSMutableDictionary *_bookmarkDataURLsForFilenames;
    NSMutableDictionary *_digestStringsForFilenames;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (id)makeBookmarkDataForData:(id)a0 filename:(id)a1 options:(unsigned long long)a2 error:(out id *)a3;
- (BOOL)bookmarkDataNeedsWriteForData:(id)a0;
- (BOOL)isEncryptedDataStorate:(id)a0;

@end
