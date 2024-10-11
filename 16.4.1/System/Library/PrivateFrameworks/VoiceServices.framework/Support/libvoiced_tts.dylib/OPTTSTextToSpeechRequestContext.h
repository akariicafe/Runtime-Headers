@class NSArray, NSString, NSMutableDictionary, NSData;

@interface OPTTSTextToSpeechRequestContext : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRequestContext { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) NSString *dialog_identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestContext> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (unsigned long long)context_info_count;
- (void)context_info_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)context_info_objectAtIndex:(unsigned long long)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequestContext { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequestContext { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
