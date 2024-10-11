@class NSArray;

@interface MRUpdateEndpointsMessage : MRProtocolMessage {
    NSArray *_endpoints;
}

@property (readonly, nonatomic) NSArray *externalEndpoints;
@property (readonly, nonatomic) NSArray *externalOutputDevices;
@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) unsigned int features;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithEndpoints:(id)a0 endpointFeature:(unsigned int)a1;

@end
