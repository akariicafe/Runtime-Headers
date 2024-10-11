@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPConnectionMetrics : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportLock;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSObject<OS_dispatch_source> *_reportTimer;
    BOOL _sendReport;
    unsigned long long _eventCount;
}

@property (retain, nonatomic) NSMutableDictionary *metrics;

+ (id)sharedMetrics;

- (void).cxx_destruct;
- (id)init;
- (void)logRequestOnLinkType:(int)a0 length:(unsigned long long)a1 rtt:(unsigned long long)a2;
- (void)reportMetrics;
- (unsigned char)linkTypeToBucketIndex:(int)a0;
- (unsigned char)lengthToBucketIndex:(unsigned long long)a0;
- (unsigned char)rttToBucketIndex:(unsigned long long)a0;

@end
