@class NSData, NSMutableDictionary;

@interface FTItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ItnAlignment { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int first_pre_itn_token_index;
@property (readonly, nonatomic) int last_pre_itn_token_index;
@property (readonly, nonatomic) int first_post_itn_char_pos;
@property (readonly, nonatomic) int last_post_itn_char_pos;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ItnAlignment { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::ItnAlignment> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ItnAlignment { unsigned char x0[1]; } *)a1;

@end
