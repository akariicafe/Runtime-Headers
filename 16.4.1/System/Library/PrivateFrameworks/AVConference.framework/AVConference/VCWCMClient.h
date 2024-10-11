@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, WCMClientDelegate;

@interface VCWCMClient : NSObject

@property (readonly) NSObject<OS_xpc_object> *connection;
@property (readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSObject<WCMClientDelegate> *wcmClientDelegate;

- (void)dealloc;
- (id)init;
- (void)startWCMClient;
- (void)stopWCMClient;

@end
