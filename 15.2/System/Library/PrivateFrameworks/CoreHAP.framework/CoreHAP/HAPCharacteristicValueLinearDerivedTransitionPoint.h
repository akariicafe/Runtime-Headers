@class HAPTLVFloatNumberValue, NSString, HAPTLVUnsignedNumberValue;

@interface HAPCharacteristicValueLinearDerivedTransitionPoint : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVFloatNumberValue *scale;
@property (retain, nonatomic) HAPTLVFloatNumberValue *offset;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *targetCompletionDuration;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *startDelayDuration;
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
- (id)initWithScale:(id)a0 offset:(id)a1 targetCompletionDuration:(id)a2 startDelayDuration:(id)a3;

@end
