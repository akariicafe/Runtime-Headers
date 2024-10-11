@class NSObject;
@protocol OS_dispatch_source;

@interface WBSMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_source> *_memoryPressureSource;
}

@property BOOL pressured;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
