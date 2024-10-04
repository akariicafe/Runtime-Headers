@class NSString, NSMutableDictionary, QSSQSSVersionInfo, NSData;

@interface QSSTextToSpeechResponseDevData : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechResponseDevData { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *log;
@property (readonly, nonatomic) QSSQSSVersionInfo *server_info;
@property (readonly, nonatomic) BOOL has_click;
@property (readonly, nonatomic) NSString *worker_process_type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechResponseDevData> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechResponseDevData { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechResponseDevData { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
