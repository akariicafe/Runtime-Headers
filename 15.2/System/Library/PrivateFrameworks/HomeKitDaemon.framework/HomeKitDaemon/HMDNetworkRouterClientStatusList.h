@class NSString, NSMutableArray;

@interface HMDNetworkRouterClientStatusList : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSMutableArray *clientStatuses;
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
- (id)initWithClientStatuses:(id)a0;

@end
