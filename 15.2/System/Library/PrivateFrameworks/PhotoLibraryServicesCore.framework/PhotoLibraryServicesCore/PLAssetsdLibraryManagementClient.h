@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient

- (void)getPhotoLibraryURLsWithLibraryURL:(id)a0 reply:(id /* block */)a1;
- (BOOL)setSystemPhotoLibraryURL:(id)a0 error:(id *)a1;
- (BOOL)removePhotoLibraryURL:(id)a0 error:(id *)a1;
- (BOOL)closeAndDeletePhotoLibraryAtURL:(id)a0 error:(id *)a1;
- (BOOL)closePhotoLibraryAtURL:(id)a0 error:(id *)a1;
- (BOOL)overrideSystemPhotoLibraryURL:(id)a0 error:(id *)a1;
- (id)activePhotoLibraries:(id *)a0;
- (BOOL)resetSyndicationLibrary:(id *)a0;

@end
