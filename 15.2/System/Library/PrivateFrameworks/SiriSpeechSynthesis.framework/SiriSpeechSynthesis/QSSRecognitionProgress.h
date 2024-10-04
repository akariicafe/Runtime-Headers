@class NSString, NSMutableDictionary, NSData;

@interface QSSRecognitionProgress : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionProgress { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) int processed_audio_duration_ms;
@property (readonly, nonatomic) NSString *speech_id;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionProgress { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::RecognitionProgress> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionProgress { unsigned char x0[1]; } *)a1;

@end
