@class QSSResetServerEndpointer, NSData, QSSSetEndpointerState, QSSFinishAudio, QSSAudioPacket, QSSLanguageDetected, NSMutableDictionary, QSSSpeechTranslationAudioPacket, QSSStartSpeechTranslationRequest, QSSStartSpeechTranslationLoggingRequest;

@interface QSSSpeechTranslationStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSStartSpeechTranslationRequest *contentAsQSSStartSpeechTranslationRequest;
@property (readonly, nonatomic) QSSLanguageDetected *contentAsQSSLanguageDetected;
@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSSpeechTranslationAudioPacket *contentAsQSSSpeechTranslationAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (readonly, nonatomic) QSSSetEndpointerState *contentAsQSSSetEndpointerState;
@property (readonly, nonatomic) QSSResetServerEndpointer *contentAsQSSResetServerEndpointer;
@property (readonly, nonatomic) QSSStartSpeechTranslationLoggingRequest *contentAsQSSStartSpeechTranslationLoggingRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::SpeechTranslationStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
