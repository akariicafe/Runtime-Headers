@class NSString, WFContentAttributionSet;

@interface WFDropboxStorageService : NSObject <WFFileStorageService>

@property (readonly, nonatomic) Class objectRepresentationClass;
@property (readonly, nonatomic) Class accessResourceClass;
@property (readonly, nonatomic) NSString *storageLocationPrefix;
@property (readonly, nonatomic) BOOL hasPublicURLs;
@property (readonly, nonatomic) BOOL supportsJumpingToSubdirectoryInUI;
@property (readonly, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, nonatomic) WFContentAttributionSet *contentAttributionSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (Class)resultItemClass;

- (void)retrieveFilesAtPath:(id)a0 options:(unsigned long long)a1 progress:(id)a2 completionHandler:(id /* block */)a3;
- (id)saveFiles:(id)a0 withManagedLevel:(unsigned long long)a1 toPath:(id)a2 options:(unsigned long long)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (void)getSharingURLsForFiles:(id)a0 usePublicURLs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteFiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)createFolderAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)appendText:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)searchFiles:(id)a0 inPath:(id)a1 completionHandler:(id /* block */)a2;

@end
