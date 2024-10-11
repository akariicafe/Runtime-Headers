@class NSString, EDWorkbook, OIXMLDocument, OIXMLElement, NSMutableArray;

@interface EMWorkbookMapper : CMDocumentMapper <CMMapperRoot> {
    unsigned long long mRealSheetCount;
    int mWidth;
    int mHeight;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    unsigned int mSheetIndex;
    BOOL mIsFirstMappedSheet;
    BOOL mIsFrameset;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    double mTabPosition;
    unsigned long long mNumberOfMappedSheets;
    BOOL mHasPushedHeader;
    BOOL mHasPushedFirstSheet;
    BOOL mLoadingMessageVisible;
}

@property (retain) NSString *fileName;
@property (readonly) EDWorkbook *document;

+ (id)borderStyleCache;
+ (id)borderWidthCache;
+ (id)cssStyleCache;

- (id)archiver;
- (void).cxx_destruct;
- (id)documentTitle;
- (void)setElementCount:(unsigned long long)a0;
- (id)blipAtIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })pageSizeForDevice;
- (id)styleMatrix;
- (void)startMappingWithState:(id)a0;
- (void)mapElement:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 isLastElement:(BOOL)a3;
- (void)finishMappingWithState:(id)a0;
- (id)initWithDocument:(id)a0 archiver:(id)a1;
- (BOOL)hasMultipleSheets;
- (void)mapStylesheetData:(id)a0 name:(id)a1 atElement:(id)a2;
- (id)headElementForFrontPage;
- (id)tabTitleDrawingAttributes;
- (void)mapStylesheetNamed:(id)a0 atElement:(id)a1;
- (id)copySheetMapperWithEdSheet:(id)a0;
- (id)_copyStringForSheet:(id)a0 atIndex:(unsigned long long)a1 withState:(id)a2 andMapper:(id)a3;
- (id)_frontPageByCopyingMainPage;
- (void)_pushTabForSheet:(id)a0 atIndex:(unsigned long long)a1;
- (id)_mainPageBack;

@end
