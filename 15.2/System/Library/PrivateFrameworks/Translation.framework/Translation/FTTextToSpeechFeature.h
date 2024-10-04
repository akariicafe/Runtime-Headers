@class NSArray, NSMutableDictionary, NSData;

@interface FTTextToSpeechFeature : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechFeature { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *normalized_text;
@property (readonly, nonatomic) NSArray *phoneme_sequence;
@property (readonly, nonatomic) NSArray *prompts;
@property (readonly, nonatomic) NSArray *replacement;
@property (readonly, nonatomic) NSArray *neural_phoneme_sequence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechFeature { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::TextToSpeechFeature> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechFeature { unsigned char x0[1]; } *)a1;

@end
