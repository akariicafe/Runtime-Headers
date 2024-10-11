@class NSString;

@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor {
    NSString *_albumName;
    BOOL _albumNameValid;
}

@property (nonatomic) BOOL shouldFinalize;
@property (retain, nonatomic) NSString *albumIdentifier;
@property (readonly, nonatomic) NSString *albumName;

- (void).cxx_destruct;
- (void)generateGalleryPreviewResourceDirectoryWithCompletion:(id /* block */)a0;
- (void)finalizeWithCompletion:(id /* block */)a0;
- (id)initWithResourceDirectory:(id)a0 forDevice:(id)a1 shouldFinalize:(BOOL)a2;
- (id)optionsForSingleAsset;
- (id)_fetchSingleAsset;
- (id)_fetchAlbumName;
- (id)_createResourceDirectoryForSinglePHAssetWithPreviewOnly:(BOOL)a0;

@end
