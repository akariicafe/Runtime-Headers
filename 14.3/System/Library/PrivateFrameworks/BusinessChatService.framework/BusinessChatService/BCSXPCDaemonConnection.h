@class NSString, NSXPCConnection;
@protocol BCSXPCDaemonProtocol;

@interface BCSXPCDaemonConnection : NSObject <BCSXPCDaemonConnectionProtocol>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, retain) id<BCSXPCDaemonProtocol> remoteObjectProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)resume;

@end
