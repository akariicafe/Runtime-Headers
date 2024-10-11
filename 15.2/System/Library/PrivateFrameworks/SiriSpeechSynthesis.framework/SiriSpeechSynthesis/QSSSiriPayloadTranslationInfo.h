@class NSString, NSMutableDictionary, NSData, QSSRecognitionSausage;

@interface QSSSiriPayloadTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SiriPayloadTranslationInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *pre_itn_payload;
@property (readonly, nonatomic) NSString *post_itn_payload;
@property (readonly, nonatomic) QSSRecognitionSausage *pre_sausage_payload;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SiriPayloadTranslationInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (struct Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initWithFlatbuffData:(id)a0;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SiriPayloadTranslationInfo { unsigned char x0[1]; } *)a1;

@end
