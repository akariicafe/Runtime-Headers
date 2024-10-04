@class HAP2TLVPairingStateWrapper, HAP2TLVErrorsWrapper, NSString;

@interface HAP2TLVAddOrRemovePairingResponse : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAP2TLVPairingStateWrapper *state;
@property (retain, nonatomic) HAP2TLVErrorsWrapper *responseError;
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
- (id)initWithState:(id)a0 responseError:(id)a1;

@end
