@class NEPacketTunnelFlow, NSString;

@interface NEPacketTunnelProvider : NETunnelProvider <NSExtensionRequestHandling>

@property (retain) NEPacketTunnelFlow *packetFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVirtualInterfaceType:(long long)a0;
- (void)cancelTunnelWithError:(id)a0;
- (void)requestSocket:(BOOL)a0 interface:(id)a1 local:(id)a2 remote:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)startTunnelWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopTunnelWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (id)getTunnelInterface;
- (id)createTCPConnectionThroughTunnelToEndpoint:(id)a0 enableTLS:(BOOL)a1 TLSParameters:(id)a2 delegate:(id)a3;
- (id)createUDPSessionThroughTunnelToEndpoint:(id)a0 fromEndpoint:(id)a1;

@end
