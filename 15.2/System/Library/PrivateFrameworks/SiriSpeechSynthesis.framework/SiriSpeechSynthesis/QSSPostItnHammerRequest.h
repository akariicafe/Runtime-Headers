@class NSString, NSArray, NSMutableDictionary, NSData;

@interface QSSPostItnHammerRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct PostItnHammerRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *post_itn_string;
@property (readonly, nonatomic) NSArray *tokens;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PostItnHammerRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::PostItnHammerRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct PostItnHammerRequest { unsigned char x0[1]; } *)a1;

@end
