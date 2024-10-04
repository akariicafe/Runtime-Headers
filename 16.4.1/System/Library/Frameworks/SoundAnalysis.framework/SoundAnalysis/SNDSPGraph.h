@interface SNDSPGraph : NSObject {
    struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } _graph;
}

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;

@end
