@interface PXGPPTRowStackLayout : PXGStackLayout <PXGSublayoutProvider> {
    double _rowHeight;
    long long _numberOfItemsPerRow;
}

- (id)layout:(id)a0 navigationObjectReferenceForSublayoutAtIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (id)initWithSettings:(id)a0;

@end
