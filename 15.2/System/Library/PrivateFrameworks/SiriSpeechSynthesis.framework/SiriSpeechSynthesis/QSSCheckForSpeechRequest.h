@class NSData, NSMutableDictionary;

@interface QSSCheckForSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct CheckForSpeechRequest { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long start_speech_time;
@property (readonly, nonatomic) long long end_speech_time;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CheckForSpeechRequest { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::CheckForSpeechRequest> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct CheckForSpeechRequest { unsigned char x0[1]; } *)a1;

@end
