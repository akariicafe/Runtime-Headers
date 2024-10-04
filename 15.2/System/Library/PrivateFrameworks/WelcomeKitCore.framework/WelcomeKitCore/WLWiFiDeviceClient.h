@interface WLWiFiDeviceClient : NSObject

@property (nonatomic) struct __WiFiDeviceClient { } *ref;

- (void)dealloc;
- (id)hostedNetworkMatchingSSID:(id)a0;
- (void)startNetworkWithHostRole:(int)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)stopNetwork:(id)a0 completion:(id /* block */)a1;
- (id)_hostedNetworks;
- (int)_startNetworkWithRole:(int)a0 request:(id)a1 session:(id)a2;
- (int)_stopNetwork:(id)a0 session:(id)a1;
- (id)initWithWiFiDeviceClientRef:(struct __WiFiDeviceClient { } *)a0;
- (id)_initWithoutWiFiDeviceClientRef;
- (void)disassociate;
- (BOOL)_completionMapsAreEmpty;

@end
