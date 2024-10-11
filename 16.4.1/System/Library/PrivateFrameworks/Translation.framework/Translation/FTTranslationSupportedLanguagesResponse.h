@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTTranslationSupportedLanguagesResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationSupportedLanguagesResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_string;
@property (readonly, nonatomic) NSArray *language_pairs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationSupportedLanguagesResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationSupportedLanguagesResponse { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TranslationSupportedLanguagesResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)language_pairs_count;
- (void)language_pairs_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)language_pairs_objectAtIndex:(unsigned long long)a0;

@end
