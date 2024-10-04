@class QSSFinishAudio, NSMutableDictionary, NSData, QSSAudioPacket, QSSStartLanguageDetectionRequest;

@interface QSSLanguageDetectionStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LanguageDetectionStreamingRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSStartLanguageDetectionRequest *contentAsQSSStartLanguageDetectionRequest;
@property (readonly, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (readonly, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::LanguageDetectionStreamingRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LanguageDetectionStreamingRequest { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LanguageDetectionStreamingRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
