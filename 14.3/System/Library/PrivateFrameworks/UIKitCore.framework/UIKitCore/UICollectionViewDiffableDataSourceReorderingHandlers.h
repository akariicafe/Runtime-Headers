@interface UICollectionViewDiffableDataSourceReorderingHandlers : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ canReorderItemHandler;
@property (copy, nonatomic) id /* block */ willReorderHandler;
@property (copy, nonatomic) id /* block */ didReorderHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCanReorderItemHandler:(id /* block */)a0 willReorderItemHandler:(id /* block */)a1 didReorderItemHandler:(id /* block */)a2;

@end
