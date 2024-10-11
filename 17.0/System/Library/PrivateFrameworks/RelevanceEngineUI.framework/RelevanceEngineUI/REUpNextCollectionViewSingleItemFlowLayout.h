@class NSDictionary, NSIndexPath, REUpNextCollectionViewFlowLayoutAttributes;

@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout {
    REUpNextCollectionViewFlowLayoutAttributes *_preferedCellAttributes;
    NSDictionary *_allAttributes;
}

@property (retain, nonatomic) NSIndexPath *preferedIndexPath;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
