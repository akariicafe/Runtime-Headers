@class NSString, SKUIContentUnavailableView;

@interface SKUIContentUnavailableCollectionViewCell : SKUICollectionViewCell <SKUIViewElementView> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    SKUIContentUnavailableView *_contentUnavailableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)setBackgroundColor:(id)a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
