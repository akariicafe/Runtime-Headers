@class FigMetalAllocator;

@interface FigMetalAllocatorMetadata : NSObject {
    int _refCount;
    FigMetalAllocator *_allocator;
}

- (void).cxx_destruct;
- (id)initWithFigMetalAllocator:(id)a0;

@end
