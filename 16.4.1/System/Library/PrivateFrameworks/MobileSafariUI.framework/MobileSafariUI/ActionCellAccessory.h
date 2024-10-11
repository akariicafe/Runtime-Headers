@class UIImageSymbolConfiguration;

@interface ActionCellAccessory : UICellAccessoryCustomView {
    id /* block */ _visibilityProvider;
}

@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (void)applyContentConfiguration:(id)a0 forState:(id)a1;
- (id)initWithAction:(id)a0 visibilityProvider:(id /* block */)a1;

@end
