@class NSString, NSMutableDictionary, NSData;

@interface QSSTextToSpeechRequestDevConfig : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRequestDevConfig { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) BOOL return_log;
@property (readonly, nonatomic) NSString *voice_asset_path;
@property (readonly, nonatomic) NSString *resource_asset_path;
@property (readonly, nonatomic) BOOL return_server_info;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequestDevConfig> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequestDevConfig { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechRequestDevConfig { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
