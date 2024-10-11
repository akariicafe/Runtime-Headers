@class SKUIViewElementText;

@interface SKUIItemViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIViewElementText *itemText;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (id)applyUpdatesWithElement:(id)a0;

@end
