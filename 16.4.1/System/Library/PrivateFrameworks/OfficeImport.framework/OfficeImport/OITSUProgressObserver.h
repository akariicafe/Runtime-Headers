@class NSObject;
@protocol OS_dispatch_queue;

@interface OITSUProgressObserver : NSObject {
    NSObject<OS_dispatch_queue> *mQueue;
    id /* block */ mHandler;
    double mLastHandledValue;
    BOOL mLastHandledIndeterminate;
}

@property (readonly, nonatomic) double valueInterval;

- (void)dealloc;
- (id)init;
- (void)handleValue:(double)a0 maxValue:(double)a1 isIndeterminate:(BOOL)a2;
- (id)initWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
