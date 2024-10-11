@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureMSNExceptionMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_entityExceptions;
}

+ (void)initialize;
+ (id)sharedMonitor;

- (void)reset;
- (id)_init;
- (void).cxx_destruct;
- (void)decrementExceptionCountForEntity:(long long)a0;
- (void)incrementExceptionCountForEntity:(long long)a0;

@end
