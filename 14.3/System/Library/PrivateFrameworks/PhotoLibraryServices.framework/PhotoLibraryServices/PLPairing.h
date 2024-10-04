@class NSPredicate;

@interface PLPairing : NSObject {
    NSPredicate *_locatedInUsersPhotoLibrary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)getMetadataForAsset:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)processPairingForEntireLibraryInContext:(id)a0 error:(id *)a1;
- (BOOL)processPairingForGroupIDs:(id)a0 inContext:(id)a1 deferredProcessingNeeded:(BOOL *)a2 error:(id *)a3;

@end
