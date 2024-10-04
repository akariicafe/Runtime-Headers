@class NSData, NSString;

@interface HMDNetworkRouterCredential : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *macAddress;
@property (retain, nonatomic) NSData *psk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)serializeWithError:(id *)a0;
- (id)initWithMacAddress:(id)a0 psk:(id)a1;

@end
