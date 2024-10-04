@class SKXPCConnection, SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequestInternal : NSObject {
    long long _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    SKXPCConnection *_connection;
    id<SKRequestDelegate> _delegate;
    long long _state;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
