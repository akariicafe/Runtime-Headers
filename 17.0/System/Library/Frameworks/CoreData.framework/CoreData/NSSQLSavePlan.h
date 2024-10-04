@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSSQLSaveChangesRequestContext;

@interface NSSQLSavePlan : NSObject {
    NSSQLSaveChangesRequestContext *_requestContext;
    struct __CFDictionary { } *_changeCache;
    struct __CFDictionary { } *_insertCache;
    struct __CFDictionary { } *_toManyCache;
    NSMutableArray *_rowsToDelete;
    NSMutableSet *_updatedByRequest;
    NSMutableSet *_updatedByForeignKey;
    NSMutableSet *_rowsToAddToRowCache;
    NSMutableSet *_objectIDsToRemoveFromRowCache;
    struct __CFDictionary { } *_updatedFOKRowsInCurrentSave;
    struct __CFDictionary { } *_deletedFOKRowsInCurrentSave;
    NSMutableArray *_externalDataReferencesToSave;
    NSMutableArray *_externalDataReferencesToDelete;
    NSMutableArray *_fileBackedFuturesToCopy;
    NSMutableArray *_fileBackedFuturesToDelete;
    NSMutableDictionary *_toManyRelationshipChanges;
    NSMutableDictionary *_usedIndexes;
    int _transactionInMemorySequence;
    struct _sqlSaveFlags { unsigned char notifyFOKChanges : 1; unsigned char hasChanges : 1; unsigned int reserved : 30; } _flags;
}

- (void)dealloc;
- (id)initForRequestContext:(id)a0;

@end
