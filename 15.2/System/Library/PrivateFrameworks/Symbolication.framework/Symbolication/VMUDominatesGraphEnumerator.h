@class VMUDominatorGraph;

@interface VMUDominatesGraphEnumerator : VMUGraphEnumerator {
    VMUDominatorGraph *_dominatorGraph;
}

- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)statusDisplayDescription;
- (id)initWithGraph:(id)a0 dominatorGraph:(id)a1;

@end
