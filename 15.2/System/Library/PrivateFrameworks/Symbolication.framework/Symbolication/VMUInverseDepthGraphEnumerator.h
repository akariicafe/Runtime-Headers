@class VMUDepthGraph;

@interface VMUInverseDepthGraphEnumerator : VMUGraphEnumerator {
    VMUDepthGraph *_depthGraph;
}

- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)statusDisplayDescription;
- (id)initWithGraph:(id)a0 depthGraph:(id)a1;

@end
