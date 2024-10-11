@class NSString, NSArray, NSMutableDictionary, NSData;

@interface FTContextWithPronHints : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ContextWithPronHints { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *contextual_text;
@property (readonly, nonatomic) NSArray *pron_hints;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ContextWithPronHints { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::ContextWithPronHints> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ContextWithPronHints { unsigned char x0[1]; } *)a1;

@end
