@class PLClientServerTransaction, NSXPCConnection;

@interface PHAssetCreationRequestPlaceholderSupport : PHAssetCreationRequest {
    PLClientServerTransaction *_serverTransaction;
    long long _placeholderCreationMode;
    BOOL _downloadSourceMode_shouldBakeInAdjustments;
    BOOL _downloadSourceMode_shouldFlattenLivePhoto;
}

@property (readonly, weak, nonatomic) NSXPCConnection *clientConnection;

- (void)_updateManagedAssetAfterResourceDownload:(id)a0;
- (id)_fetchOptionsForDuplicateAssetPhotoLibraryType:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (unsigned short)_bundleScopeForPlaceholderAsset;
- (id)_createPlaceholderManagedAssetFromSourceManagedAsset:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (id)initForNewObjectWithUUID:(id)a0;
- (void)changeFailedOnDaemonWithLibrary:(id)a0 error:(id)a1;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (void)changeFailedOnClientWithLibrary:(id)a0 error:(id)a1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end
