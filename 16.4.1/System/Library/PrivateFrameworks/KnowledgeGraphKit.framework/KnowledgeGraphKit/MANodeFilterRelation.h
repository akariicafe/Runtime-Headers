@class MANodeFilter;

@interface MANodeFilterRelation : MARelation

@property (readonly, copy, nonatomic) MANodeFilter *nodeFilter;

+ (id)scanRelationWithScanner:(id)a0;

- (id)inverse;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 graph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)initWithNodeFilter:(id)a0;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;
- (id)visualString;

@end
