@class NSString;

@interface HMDNetworkRouterControlOperation : NSObject <NSCopying, HAPTLVProtocol>

@property (nonatomic) long long operation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithOperation:(long long)a0;
- (id)serializeWithError:(id *)a0;

@end
