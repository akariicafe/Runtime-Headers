@class NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NRFMonitor : NSObject {
    unsigned int _instanceCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _instanceCountlock;
    id /* block */ _currentBlock;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _NRFSingletonsAllocated;
    NSObject<OS_os_transaction> *_NRFSingletonsOSTransaction;
}

+ (id)sharedInstance;

- (void)removeInstance;
- (void).cxx_destruct;
- (id)init;
- (void)releaseAllNRFSingletons;
- (void)addInstance;

@end
