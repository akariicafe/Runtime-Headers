@class NSData, NSMutableDictionary, QSSLanguageDetectionResponse;

@interface QSSLanguageDetectionStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LanguageDetectionStreamingResponse { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) QSSLanguageDetectionResponse *contentAsQSSLanguageDetectionResponse;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LanguageDetectionStreamingResponse { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::qss_fb::LanguageDetectionStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LanguageDetectionStreamingResponse { unsigned char x0[1]; } *)a1;

@end
