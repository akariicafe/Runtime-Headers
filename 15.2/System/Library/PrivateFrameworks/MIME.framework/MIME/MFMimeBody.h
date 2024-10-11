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

+ (id)versionString;
+ (id)copyNewMimeBoundary;

- (BOOL)isHTML;
- (long long)numberOfAlternatives;
- (BOOL)isRich;
- (id)attachments;
- (void).cxx_destruct;
- (id)init;
- (id)attachmentURLs;
- (id)textHtmlPart;
- (id)contentToOffset:(unsigned long long)a0 resultOffset:(unsigned long long *)a1 asHTML:(BOOL)a2 isComplete:(BOOL *)a3;
- (id)partWithNumber:(id)a0;
- (unsigned int)numberOfAttachmentsSigned:(BOOL *)a0 encrypted:(BOOL *)a1;
- (id)preferredBodyPart;
- (long long)preferredAlternative;
- (void)setPreferredAlternative:(long long)a0;

@end
