@class NSString, HAP2TLVParamAccessoryList;

@interface HAP2TLVAccessorySignatureReadRequest : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAP2TLVParamAccessoryList *accessoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithAccessoryList:(id)a0;

@end
