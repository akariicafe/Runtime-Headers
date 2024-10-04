@class NSMutableArray;

@interface VCDispatchQueue : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_rootQueues;
}

+ (id)defaultManager;

- (void)dealloc;
- (id)init;
- (id)getCustomRootQueueWithPriority:(int)a0 isFixedPriority:(BOOL)a1;

@end
