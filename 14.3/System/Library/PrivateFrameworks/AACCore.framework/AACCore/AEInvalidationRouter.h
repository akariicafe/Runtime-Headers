@class NSError, NSObject;
@protocol OS_dispatch_queue, AEInvalidationRouterDelegate;

@interface AEInvalidationRouter : NSObject {
    BOOL _processedInvalidation;
    BOOL _forwardError;
    NSObject<OS_dispatch_queue> *_queue;
    id<AEInvalidationRouterDelegate> _delegate;
    long long _mode;
    NSError *_storedError;
}

@property (readonly, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void).cxx_destruct;
- (void)setRouterMode:(long long)a0;
- (void)fetchCapturedErrorWithCompletion:(id /* block */)a0;
- (void)setRouterDelegate:(id)a0;

@end
