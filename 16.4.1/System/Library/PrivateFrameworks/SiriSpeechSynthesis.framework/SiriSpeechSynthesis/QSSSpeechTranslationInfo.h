@class NSArray, NSMutableDictionary, NSData, QSSRecognitionSausage;

@interface QSSSpeechTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SpeechTranslationInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) QSSRecognitionSausage *raw_sausage;
@property (readonly, nonatomic) NSArray *raw_nbest_choices;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SpeechTranslationInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
