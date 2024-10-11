@class NSObject;
@protocol OS_dispatch_queue;

@interface SLDTaskManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)initWithSerialQueue:(id)a0;
- (void).cxx_destruct;
- (id)startAggregateTask:(id /* block */)a0 withTimeout:(double)a1 cancellationHandler:(id /* block */)a2;
- (void)startSubtask:(id /* block */)a0 withProgress:(id)a1 timer:(id)a2;

@end
