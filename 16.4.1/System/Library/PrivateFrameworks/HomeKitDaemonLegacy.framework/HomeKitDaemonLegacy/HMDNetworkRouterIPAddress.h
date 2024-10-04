@class NSData, NSString;

@interface HMDNetworkRouterIPAddress : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *v4;
@property (retain, nonatomic) NSData *v6;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;
+ (id)ipAddressFromNetAddress:(id)a0 error:(id *)a1;
+ (id)ipAddressFromRuleAddress:(id)a0 allowWildcard:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)serializeWithError:(id *)a0;
- (id)initWithV4:(id)a0 v6:(id)a1;

@end
