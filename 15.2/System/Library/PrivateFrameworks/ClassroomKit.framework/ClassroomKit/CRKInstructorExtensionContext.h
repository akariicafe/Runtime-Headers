@class NSString, NSXPCListener;

@interface CRKInstructorExtensionContext : NSExtensionContext <NSXPCListenerDelegate, CRKInstructorExtensionVendor> {
    NSXPCListener *mListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)listenerEndpointWithCompletion:(id /* block */)a0;

@end
