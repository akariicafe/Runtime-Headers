@class PAImageConversionServiceClient, NSString, NSMutableDictionary, NSDate, AVCaptureDeferredPhotoProcessor;

@interface PLDeferredPhotoFinalizer : NSObject <AVCaptureDeferredPhotoProcessorDelegate> {
    NSMutableDictionary *_identifierToPendingRecords;
    AVCaptureDeferredPhotoProcessor *_finalizer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _identifierToPendingRecordsLock;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    long long _useCase;
    NSDate *_dateBeforeCallingDeferredmediad;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)errorIsRecoverable:(id)a0;

- (void).cxx_destruct;
- (id)initForUseCase:(long long)a0;
- (void)_callCompletionHandlersForPhotoProxy:(id)a0 processor:(id)a1 success:(BOOL)a2 error:(id)a3;
- (void)_copyFrameRecoveredVideoComplementToFinalSlot:(id)a0 libraryServicesManager:(id)a1 resultURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)_copyOriginalVideoComplementToDiagnosticPath:(id)a0;
- (id)_createAssetAdjustmentsForAsset:(id)a0 error:(id *)a1;
- (id)_imageConversionOptionsForAsset:(id)a0 adjustments:(id)a1 isBackgroundPriority:(BOOL)a2 reason:(id)a3;
- (void)_prepareFinalizedAssetForSemanticDevelopment:(id)a0 finalizedPhotoData:(id)a1;
- (void)_promoteProxyAndRecoverErrors:(id)a0 libraryServicesManager:(id)a1 inError:(id)a2 completionHandler:(id /* block */)a3;
- (void)_repushOriginalVideoComplementIfNeeded:(id)a0;
- (long long)_requestFrameDropRecoveryForAssetURL:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (void)_setupMediaConversionSourceCollections:(id)a0 destinationCollection:(id)a1 forAsset:(id)a2;
- (void)_transitionDeferredProcessingNeededToNextStateForAsset:(id)a0 originalHeight:(long long)a1 originalWidth:(long long)a2;
- (void)_writeDebugFileFromProxyMetadata:(id)a0 forAsset:(id)a1;
- (void)cancelOutstandingFrameDropRecoveryRequests;
- (int)deleteIntermediatesExcludingDeferredIdentifierRequestIdentifiers:(id)a0;
- (BOOL)isRenderFromMetadata:(id)a0;
- (void)performSemanticEnhanceForAsset:(id)a0 isBackgroundPriority:(BOOL)a1 reason:(id)a2 completionHandler:(id /* block */)a3;
- (void)processor:(id)a0 didFinishProcessingPhotoProxy:(id)a1 finalPhoto:(id)a2 error:(id)a3;
- (void)requestFinalizationOfAsset:(id)a0 isBackgroundPriority:(BOOL)a1 reason:(id)a2 completionHandler:(id /* block */)a3;
- (id)requestFrameDropRecoveryForAsset:(id)a0 completionHandler:(id /* block */)a1;

@end
