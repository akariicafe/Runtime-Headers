@class NSString, NSMutableDictionary, NSData;

@interface FTShortcutFuzzyMatchResponse_ShortcutScorePair : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ShortcutScorePair { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *shortcut;
@property (readonly, nonatomic) double similarity_score;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ShortcutScorePair { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::ShortcutFuzzyMatchResponse_::ShortcutScorePair> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ShortcutScorePair { unsigned char x0[1]; } *)a1;

@end
