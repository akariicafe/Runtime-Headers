@class NSString, NSMutableDictionary, NSData;

@interface QSSLmScorerToken : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LmScorerToken { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *token_str;
@property (readonly, nonatomic) double log10_score;
@property (readonly, nonatomic) int ngram_used;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LmScorerToken { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::LmScorerToken> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LmScorerToken { unsigned char x0[1]; } *)a1;

@end
