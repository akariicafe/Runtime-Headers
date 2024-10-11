@class NSArray, NSMutableDictionary, NSData;

@interface FTRepeatedSpan : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RepeatedSpan { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *span;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RepeatedSpan> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RepeatedSpan { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RepeatedSpan { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)span_count;
- (void)span_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)span_objectAtIndex:(unsigned long long)a0;

@end
