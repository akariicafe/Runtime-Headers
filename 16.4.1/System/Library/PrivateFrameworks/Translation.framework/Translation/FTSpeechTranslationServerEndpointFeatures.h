@class NSString, FTServerEndpointFeatures, NSMutableDictionary, NSData;

@interface FTSpeechTranslationServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationServerEndpointFeatures { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSString *source_locale;
@property (readonly, nonatomic) FTServerEndpointFeatures *server_endpoint_features;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationServerEndpointFeatures> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationServerEndpointFeatures { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationServerEndpointFeatures { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
