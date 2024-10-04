@class NSArray, MFMimePart, NSString;

@interface MFMimeBody : MFMessageBody <ECMimePart> {
    MFMimePart *_topLevelPart;
    unsigned short _preferredAlternative : 16;
    unsigned short _numAlternatives : 16;
    long long _encryptedDescendantState;
}

@property (retain, nonatomic) NSArray *signers;
@property (nonatomic) BOOL isEncrypted;
@property (retain, nonatomic) MFMimePart *topLevelPart;
@property (readonly, nonatomic) BOOL hasEncryptedDescendantPart;
@property (readonly, copy, nonatomic) NSString *mimeSubtype;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) unsigned long long totalTextSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyNewMimeBoundary;
+ (id)versionString;

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfAlternatives;
- (id)attachments;
- (BOOL)isHTML;
- (id)partWithNumber:(id)a0;
- (BOOL)isRich;
- (id)preferredBodyPart;
- (id)attachmentURLs;
- (unsigned int)numberOfAttachmentsSigned:(BOOL *)a0 encrypted:(BOOL *)a1;
- (id)textHtmlPart;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 asHTML:(BOOL)a2 isComplete:(BOOL *)a3;
- (long long)preferredAlternative;
- (void)setPreferredAlternative:(long long)a0;

@end
