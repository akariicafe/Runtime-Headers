@class NSMapTable;

@interface SNLockedMLModelFactory : NSObject {
    NSMapTable *_vendedModels;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;

@end
