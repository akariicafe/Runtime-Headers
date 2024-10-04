@class MTLResourceListPool;

@interface MTLResourceList : NSObject {
    struct { unsigned short buckets[64]; unsigned int numEntries; unsigned int capacity; struct MTLResourceListEntry *entries; MTLResourceListPool *pool; struct { MTLResourceList *tqe_next; id *tqe_prev; } entry; unsigned long long time_added; } _listPriv;
}

- (void)dealloc;
- (void)releaseAllObjectsAndReset;
- (id)initWithCapacity:(int)a0;

@end
