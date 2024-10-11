@class NSString, LiveFSFPExtensionHelper;

@interface LiveFSClientServiceSource : NSObject <NSFileProviderServiceSource> {
    LiveFSFPExtensionHelper *ex;
    NSString *ident;
}

@property (readonly, copy, nonatomic) NSString *serviceName;

- (void).cxx_destruct;
- (id)makeListenerEndpointAndReturnError:(id *)a0;
- (id)initWithFileProviderExtension:(id)a0 itemIdentifier:(id)a1;

@end
