@interface IMPassPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

+ (id)generateAndPersistMetadataFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (id)metadataExtension;
+ (BOOL)generatesPreview;
+ (BOOL)generatesMetadata;
+ (id)UTITypes;
+ (id)_dictionaryRepresentationForColor:(id)a0;
+ (id)previewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (id)_dictionaryRepresentationForPassText:(id)a0;
+ (id)temporaryDirectory;

@end
