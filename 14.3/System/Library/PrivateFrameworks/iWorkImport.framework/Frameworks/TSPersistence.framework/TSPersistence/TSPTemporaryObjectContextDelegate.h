@class NSSet, NSDictionary, NSUUID, NSError, NSString, NSMutableSet;
@protocol NSFilePresenter;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPObjectContextDelegate> {
    NSMutableSet *_persistenceWarnings;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSSet *persistenceWarnings;
@property (nonatomic) BOOL ignoreDocumentSupport;
@property (readonly, nonatomic) id<NSFilePresenter> filePresenter;
@property (readonly, nonatomic) long long archiveValidationMode;
@property (readonly, nonatomic) BOOL isDocumentSupportTemporary;
@property (readonly, nonatomic) NSDictionary *additionalDocumentPropertiesForWrite;
@property (readonly, nonatomic) NSDictionary *additionalDocumentSupportPropertiesForWrite;
@property (readonly, nonatomic) BOOL areNewExternalReferencesToDataAllowed;
@property (readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)temporaryObjectContextDelegateWithPackageDataForWrite:(id)a0 additionalDocumentPropertiesForWrite:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addPersistenceWarnings:(id)a0;
- (void)presentPersistenceError:(id)a0;
- (id)persistenceWarningsForData:(id)a0 flags:(unsigned long long)a1;
- (BOOL)contextCanPerformUserActions:(id)a0;
- (void)context:(id)a0 canPerformUserActionUsingBlock:(id /* block */)a1;
- (void)suspendAutosaveWithReason:(id)a0;
- (void)resumeAutosaveWithReason:(id)a0;
- (void)suspendSaveAndAutosaveWithReason:(id)a0;
- (void)resumeSaveAndAutosaveWithReason:(id)a0;
- (void)requestAutosave;

@end
