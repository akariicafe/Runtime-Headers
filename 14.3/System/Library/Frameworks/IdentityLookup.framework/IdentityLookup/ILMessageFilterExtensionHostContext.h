@class NSString;

@interface ILMessageFilterExtensionHostContext : NSExtensionContext <ILMessageFilterExtensionHostProtocol>

@property (copy, nonatomic) id /* block */ deferQueryRequestToNetwork;
@property (copy, nonatomic) id /* block */ deferReportRequestToNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)finish;
- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (oneway void)deferQueryRequestToNetworkWithReply:(id /* block */)a0;
- (oneway void)deferReportRequestToNetworkWithReply:(id /* block */)a0;
- (void)handleQueryRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleReportRequest:(id)a0 completion:(id /* block */)a1;

@end
