@class NSString, FTContextWithPronHints, NSMutableDictionary, NSData;

@interface FTGraphemeToPhonemeRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct GraphemeToPhonemeRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) FTContextWithPronHints *context_with_pron_hints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::GraphemeToPhonemeRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct GraphemeToPhonemeRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct GraphemeToPhonemeRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
