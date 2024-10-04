@class NSObject;
@protocol OS_dispatch_queue;

@interface _MFNetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

- (void)execute;
- (id)initWithBlock:(id /* block */)a0 queue:(id)a1;
- (void).cxx_destruct;

@end
