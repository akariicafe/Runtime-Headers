@interface PHImportLibraryAsset : PHImportAsset {
    BOOL _isPenultimate;
}

+ (BOOL)isValidAsSidecar:(id)a0;

- (BOOL)isBase;
- (BOOL)shouldPreserveUUID;
- (void)configureSidecarTypeForExtension:(id)a0;
- (id)initWithSource:(id)a0 url:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3 uuid:(id)a4;
- (id)makeImportIdentifier;
- (id)nameKey;
- (BOOL)canDelete;
- (BOOL)isRender;
- (BOOL)canReference;
- (BOOL)isSidecar;

@end
