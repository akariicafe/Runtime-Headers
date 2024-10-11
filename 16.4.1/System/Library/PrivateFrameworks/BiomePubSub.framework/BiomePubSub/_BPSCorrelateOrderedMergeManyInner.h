@interface _BPSCorrelateOrderedMergeManyInner : _BPSAbstractCorrelateOrderedMerge

@property (copy, nonatomic) id /* block */ comparator;

- (long long)compareFirst:(id)a0 withSecond:(id)a1;
- (id)initWithDownstream:(id)a0 upstreamCount:(unsigned long long)a1 comparator:(id /* block */)a2;
- (void).cxx_destruct;

@end
