@class NSDictionary;

@interface MFMessageWriter : NSObject {
    Class _messageClassToInstantiate;
    unsigned char _allows8BitMimeParts : 1;
    unsigned char _allowsBinaryMimeParts : 1;
    unsigned char _writeSizeDispositionParameter : 1;
    unsigned char _allowsQuotedPrintable : 1;
}

@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) NSDictionary *compositionSpecification;
@property (nonatomic) BOOL shouldWriteAttachmentPlaceholders;

- (id)init;
- (void).cxx_destruct;
- (id)_mimePartWithType:(id)a0 subtype:(id)a1 bodyData:(id)a2 partMap:(struct __CFDictionary { } *)a3 subparts:(id)a4;
- (id)_newDataForMimePart:(id)a0 withPartData:(id)a1 andHeaders:(id)a2;
- (BOOL)allows8BitMimeParts;
- (BOOL)allowsBinaryMimeParts;
- (BOOL)allowsQuotedPrintable;
- (void)appendDataForMimePart:(id)a0 toData:(id)a1 withPartData:(id)a2;
- (void)appendHeadersForMimePart:(id)a0 toHeaders:(id)a1;
- (id)createMessageWithHTMLStringAndMIMECharset:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 headers:(id)a3;
- (id)createMessageWithHtmlString:(id)a0 attachments:(id)a1 headers:(id)a2;
- (id)createMessageWithHtmlString:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 headers:(id)a3;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)a0 headers:(id)a1;
- (id)createMessageWithString:(id)a0 headers:(id)a1;
- (id)initWithCompositionSpecification:(id)a0;
- (id)newDataForMimePart:(id)a0 withPartData:(id)a1;
- (void)setAllows8BitMimeParts:(BOOL)a0;
- (void)setAllowsBinaryMimeParts:(BOOL)a0;
- (void)setAllowsQuotedPrintable:(BOOL)a0;
- (void)setMessageClassToInstantiate:(Class)a0;
- (void)setWriteSizeDispositionParameter:(BOOL)a0;

@end
