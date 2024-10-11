@class NSArray, NSMutableDictionary, NSData;

@interface QSSRepeatedItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RepeatedItnAlignment { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *itn_alignment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RepeatedItnAlignment> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RepeatedItnAlignment { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RepeatedItnAlignment { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
