@class FTQssAckResponse, FTPartialTextToSpeechStreamingResponse, NSMutableDictionary, FTBeginTextToSpeechStreamingResponse, NSData, FTFinalTextToSpeechStreamingResponse;

@interface FTTextToSpeechStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechStreamingStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) FTQssAckResponse *contentAsFTQssAckResponse;
@property (readonly, nonatomic) FTBeginTextToSpeechStreamingResponse *contentAsFTBeginTextToSpeechStreamingResponse;
@property (readonly, nonatomic) FTPartialTextToSpeechStreamingResponse *contentAsFTPartialTextToSpeechStreamingResponse;
@property (readonly, nonatomic) FTFinalTextToSpeechStreamingResponse *contentAsFTFinalTextToSpeechStreamingResponse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechStreamingStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::qss_fb::TextToSpeechStreamingStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechStreamingStreamingResponse { unsigned char x0[1]; } *)a1;

@end
