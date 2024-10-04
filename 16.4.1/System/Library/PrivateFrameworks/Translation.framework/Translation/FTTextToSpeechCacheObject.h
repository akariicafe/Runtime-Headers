@class NSData, NSArray, NSMutableDictionary;

@interface FTTextToSpeechCacheObject : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechCacheObject { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSData *audio;
@property (readonly, nonatomic) NSArray *word_timing_info;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)word_timing_info_objectAtIndex:(unsigned long long)a0;
- (struct Offset<siri::speech::schema_fb::TextToSpeechCacheObject> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (void)audio:(id /* block */)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheObject { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct TextToSpeechCacheObject { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)word_timing_info_count;
- (void)word_timing_info_enumerateObjectsUsingBlock:(id /* block */)a0;

@end
