@class NSString, NSMutableDictionary, NSData;

@interface FTSpan : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct Span { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int start_index;
@property (readonly, nonatomic) int end_index;
@property (readonly, nonatomic) BOOL do_not_translate;
@property (readonly, nonatomic) NSString *meta_info;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Span { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::Span> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct Span { unsigned char x0[1]; } *)a1;

@end
