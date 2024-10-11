@class NSString, NSMutableSet, NSMutableArray;

@interface KSHTMLWriter : KSXMLWriter {
    BOOL _isXHTML;
    NSMutableSet *_IDs;
    NSMutableArray *_classNames;
}

@property (copy, nonatomic) NSString *docType;

+ (BOOL)isDocTypeXHTML:(id)a0;

- (void).cxx_destruct;
- (BOOL)isXHTML;
- (id)currentAttributes;
- (id)initWithOutputWriter:(id)a0;
- (id)initWithOutputWriter:(id)a0 docType:(id)a1 encoding:(unsigned long long)a2;
- (void)startDocumentWithDocType:(id)a0 encoding:(unsigned long long)a1;
- (id)currentElementClassName;
- (void)pushClassName:(id)a0;
- (void)pushAttribute:(id)a0 value:(id)a1;
- (BOOL)hasCurrentAttributes;
- (void)writeHTMLString:(id)a0;
- (void)writeHTMLFormat:(id)a0;
- (void)startElement:(id)a0 className:(id)a1;
- (void)startElement:(id)a0 idName:(id)a1 className:(id)a2;
- (BOOL)isIDValid:(id)a0;
- (void)writeLineBreak;
- (void)startAnchorElementWithHref:(id)a0 title:(id)a1 target:(id)a2 rel:(id)a3;
- (void)writeImageWithSrc:(id)a0 alt:(id)a1 width:(id)a2 height:(id)a3;
- (void)writeLinkWithHref:(id)a0 type:(id)a1 rel:(id)a2 title:(id)a3 media:(id)a4;
- (void)writeLinkToStylesheet:(id)a0 title:(id)a1 media:(id)a2;
- (void)writeJavascriptWithSrc:(id)a0 encoding:(unsigned long long)a1;
- (void)writeJavascriptWithSrc:(id)a0 charset:(id)a1;
- (void)writeJavascript:(id)a0 useCDATA:(BOOL)a1;
- (void)startJavascriptElementWithSrc:(id)a0;
- (void)startJavascriptCDATA;
- (void)endJavascriptCDATA;
- (void)writeParamElementWithName:(id)a0 value:(id)a1;
- (void)writeStyleElementWithCSSString:(id)a0;
- (void)startStyleElementWithType:(id)a0;
- (BOOL)topElementIsList;
- (BOOL)elementCanBeEmpty:(id)a0;
- (BOOL)canWriteElementInline:(id)a0;
- (BOOL)validateElement:(id)a0;
- (id)validateAttribute:(id)a0 value:(id)a1 ofElement:(id)a2;
- (void)startElement:(id)a0 writeInline:(BOOL)a1;
- (void)closeEmptyElementTag;

@end
