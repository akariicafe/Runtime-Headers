@class NSObject;
@protocol OS_dispatch_source;

@interface WFAutoIncrementingProgress : NSProgress

@property (readonly, nonatomic) unsigned long long increments;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly, nonatomic) double duration;

- (void)cancel;
- (void)finish;
- (void).cxx_destruct;
- (void)start;
- (id)initWithParent:(id)a0 pendingUnitCount:(unsigned long long)a1 duration:(double)a2;

@end
