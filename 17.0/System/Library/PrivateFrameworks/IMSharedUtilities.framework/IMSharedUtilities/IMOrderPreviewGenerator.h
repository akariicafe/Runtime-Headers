@interface IMOrderPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;

+ (id)temporaryDirectory;
+ (id)UTITypes;
+ (id)_dictionaryRepresentationForColor:(id)a0;
+ (id)_dictionaryRepresentationForOrderText:(id)a0;
+ (id)generateAndPersistMetadataFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;
+ (BOOL)generatesMetadata;
+ (BOOL)generatesPreview;
+ (id)metadataExtension;
+ (id)previewFromSourceURL:(id)a0 senderContext:(id)a1 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a2 error:(id *)a3;

@end
