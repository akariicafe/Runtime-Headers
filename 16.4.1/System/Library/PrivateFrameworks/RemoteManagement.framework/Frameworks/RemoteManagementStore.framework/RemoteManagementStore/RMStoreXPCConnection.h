@class NSXPCConnection;

@interface RMStoreXPCConnection : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)storeXPCConnection:(id)a0;

- (id)initWithXPCConnection:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
