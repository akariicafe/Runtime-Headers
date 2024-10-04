@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, ConnectionProtocol;

@interface APConnectionNotifier : NSObject

@property (class, readonly, nonatomic) APConnectionNotifier *sharedNotifier;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSXPCConnection *underlyingRemoteConnection;
@property (readonly, nonatomic) id<ConnectionProtocol> remoteObjectProxy;

- (id)init;
- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (id)_remoteConnection;

@end
