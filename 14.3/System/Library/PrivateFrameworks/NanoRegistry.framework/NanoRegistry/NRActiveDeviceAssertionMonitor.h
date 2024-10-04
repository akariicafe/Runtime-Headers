@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface NRActiveDeviceAssertionMonitor : NSObject {
    int _assertionToken;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, nonatomic) BOOL hasActiveAssertion;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
