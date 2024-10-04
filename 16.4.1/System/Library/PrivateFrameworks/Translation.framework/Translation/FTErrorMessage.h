@class NSString, NSMutableDictionary, NSData;

@interface FTErrorMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ErrorMessage { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) unsigned int error_code;
@property (readonly, nonatomic) NSString *reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::ErrorMessage> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ErrorMessage { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct ErrorMessage { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end
