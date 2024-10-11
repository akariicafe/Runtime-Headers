@class NSData, NSMutableDictionary;

@interface QSSTextToSpeechSpeechFeatureInputWave : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureInputWave { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int sample_rate;
@property (readonly, nonatomic) NSData *pcm_data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputWave> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureInputWave { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechSpeechFeatureInputWave { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (void)pcm_data:(id /* block */)a0;

@end
