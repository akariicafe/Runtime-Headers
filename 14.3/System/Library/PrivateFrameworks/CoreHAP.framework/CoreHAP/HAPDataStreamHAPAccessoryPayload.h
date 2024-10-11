@class NSData, NSString, HAPTLVUnsignedNumberValue;

@interface HAPDataStreamHAPAccessoryPayload : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *forceClose;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *accessoryRequestToSend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithPayload:(id)a0 forceClose:(id)a1 accessoryRequestToSend:(id)a2;

@end
