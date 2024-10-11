@class NSString, NSMutableDictionary, NSData, QSSTextToSpeechMeta, QSSAudioDescription;

@interface QSSTextToSpeechCacheMetaInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechCacheMetaInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) QSSTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) long long audio_type;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) QSSAudioDescription *decoder_description;
@property (readonly, nonatomic) QSSAudioDescription *playback_description;
@property (readonly, nonatomic) int audio_length;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *original_session_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheMetaInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheMetaInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheMetaInfo { unsigned char x0[1]; } *)a1;

@end
