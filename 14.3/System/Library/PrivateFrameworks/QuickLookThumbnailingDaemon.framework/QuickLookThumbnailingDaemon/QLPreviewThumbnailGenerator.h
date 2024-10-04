@class QLPlatformImage, NSDictionary, QLThumbnailItem, NSData, NSObject, QLThumbnailMetadata;
@protocol OS_dispatch_queue;

@interface QLPreviewThumbnailGenerator : NSObject {
    struct CGSize { double width; double height; } _size;
    unsigned long long _badgeType;
}

@property BOOL resultIsLowQuality;
@property BOOL wantsLowQuality;
@property double scale;
@property BOOL addDecorations;
@property (retain) QLThumbnailMetadata *generatedProperties;
@property BOOL wantsBaseline;
@property int status;
@property (retain) QLPlatformImage *thumbnailImage;
@property (retain) QLThumbnailItem *item;
@property double minSize;
@property BOOL resultHasIconModeApplied;
@property int interpolationQuality;
@property (retain) NSDictionary *externalThumbnailGeneratorData;
@property int flavor;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue;
@property BOOL wantsJPEGRepresentationInstead;
@property (readonly) NSData *jpegRepresentation;
@property unsigned long long sandboxExtension;

+ (id)generateIconDataFromThumbnailData:(id)a0 inputFormat:(id)a1 outputFormat:(id *)a2 outputContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 desiredSize:(struct CGSize { double x0; double x1; })a4 desiredScale:(double)a5 desiredFlavor:(int)a6 wantsLowQuality:(BOOL)a7 iconVariant:(long long)a8;
+ (BOOL)canGenerateThumbnailForURL:(id)a0;
+ (double)cornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)_textDocumentTypeFromUTI:(id)a0;
+ (id)readingOptionsFromUTI:(id)a0 encoding:(unsigned int)a1;
+ (id)mutableAttributedStringForThumbnailWithData:(id)a0 uti:(id)a1 encoding:(unsigned int)a2 documentAttributes:(id *)a3;
+ (id)mutableAttributedStringForThumbnailWithURL:(id)a0 documentAttributes:(id *)a1;
+ (id)generatorForThumbnailItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (id)generatorForThumbnailItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minSize:(double)a2 scale:(double)a3;
+ (id)generatorForURL:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 lowQuality:(BOOL)a3 decorations:(BOOL)a4 wantsBaseline:(BOOL)a5;
+ (id)generatorForURL:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 minSize:(double)a2 scale:(double)a3 lowQuality:(BOOL)a4 decorations:(BOOL)a5 wantsBaseline:(BOOL)a6;

- (void)cancel;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_pixelSize;
- (id)initWithThumbnailItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minSize:(double)a2 scale:(double)a3 lowQuality:(BOOL)a4 wantsBaseline:(BOOL)a5 decorations:(BOOL)a6 badgeType:(unsigned long long)a7 interpolationQuality:(int)a8 externalThumbnailGeneratorData:(id)a9;
- (void)generateWithWillStartBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)initWithThumbnailItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minSize:(double)a2 scale:(double)a3 lowQuality:(BOOL)a4 wantsBaseline:(BOOL)a5 decorations:(BOOL)a6 badgeType:(unsigned long long)a7 interpolationQuality:(int)a8;
- (struct CGImage { } *)_createThumbnailForImage;
- (struct CGImage { } *)_createThumbnailForLivePhoto;
- (struct CGImage { } *)_createThumbnailForText;
- (struct CGImage { } *)_createThumbnailForPDF;
- (struct CGImage { } *)_createThumbnailForMovie;
- (struct CGImage { } *)_createThumbnailForIWorkFile;
- (void)_generateThumbnailFromThirdPartyExtensionAndReplyWith:(id /* block */)a0;
- (void)_replyWithImage:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_generateThumbnailWithWillStartBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (struct CGContext { } *)_beginContextWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)_createThumbnailForImageSource:(struct CGImageSource { } *)a0 contentTypeIdentifier:(id)a1;
- (double)_minimumDimensionForPDFPage:(struct CGPDFPage { } *)a0 requestThumbnailSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (struct CGContext { } *)_beginContextWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)_drawRTFThumbnailFromAttributedString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (struct CGImage { } *)_drawTextThumbnailFromAttributedString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (id)initWithThumbnailItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minSize:(double)a2 scale:(double)a3 decorations:(BOOL)a4;
- (void)generateWithCompletionBlock:(id /* block */)a0;
- (struct CGContext { } *)_beginContext;

@end
