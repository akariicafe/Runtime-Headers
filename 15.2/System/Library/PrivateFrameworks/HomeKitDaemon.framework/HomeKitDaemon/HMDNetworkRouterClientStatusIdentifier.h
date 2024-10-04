@class NSString, NSData, HMDNetworkRouterIPAddress, HAPTLVUnsignedNumberValue;

@interface HMDNetworkRouterClientStatusIdentifier : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (retain, nonatomic) NSData *macAddress;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *ipAddress;
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
- (id)initWithClientIdentifier:(id)a0 macAddress:(id)a1 ipAddress:(id)a2;

@end
