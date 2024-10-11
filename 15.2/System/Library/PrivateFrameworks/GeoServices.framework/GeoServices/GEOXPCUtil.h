@class NSObject;
@protocol OS_dispatch_queue;

@interface GEOXPCUtil : NSObject

@property (class, copy, nonatomic) id /* block */ daemonXPCConnectionCreationBlock;
@property (class, copy, nonatomic) NSObject<OS_dispatch_queue> *defaultXPCServerConnectionQueue;

+ (id)createServerConnectionWithPort:(const char *)a0 queue:(id)a1 debugIdentifier:(id)a2 eventHandler:(id /* block */)a3;
+ (id)createServerConnectionWithDebugIdentifier:(id)a0 eventHandler:(id /* block */)a1;
+ (id)createServerConnectionWithQueue:(id)a0 debugIdentifier:(id)a1 eventHandler:(id /* block */)a2;

@end
