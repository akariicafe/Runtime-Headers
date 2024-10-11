@class NSArray, NSMutableDictionary, NSData;

@interface QSSSpeechTranslationAudioPacket : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationAudioPacket { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *audio_frames;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationAudioPacket { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationAudioPacket> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationAudioPacket { unsigned char x0[1]; } *)a1;

@end
