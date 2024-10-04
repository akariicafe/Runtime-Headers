@class HMDNetworkRouterClientIdentifierList, HMDNetworkRouterAccessViolationControlOperation, NSString;

@interface HMDNetworkRouterAccessViolationControl : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HMDNetworkRouterAccessViolationControlOperation *operation;
@property (retain, nonatomic) HMDNetworkRouterClientIdentifierList *clientIdentifierList;
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
- (id)initWithOperation:(id)a0 clientIdentifierList:(id)a1;

@end
