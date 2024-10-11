@interface VKDebugTreeDataNode : VKDebugTreeNode {
    const void *_node;
}

- (BOOL)isExpandable;
- (id)name;
- (long long)propertyCount;
- (void)buildChildren;
- (id)initWithDebugTreeNode:(const void *)a0 withParent:(id)a1;
- (id)propertyColumn;
- (void)searchNodes:(id)a0 withParameter:(id)a1;
- (id)tagsColumn;
- (id)valueColumn;

@end
