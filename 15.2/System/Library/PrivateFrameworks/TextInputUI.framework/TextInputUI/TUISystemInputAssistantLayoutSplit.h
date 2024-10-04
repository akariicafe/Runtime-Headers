@interface TUISystemInputAssistantLayoutSplit : TUISystemInputAssistantLayout

@property (nonatomic) double leftSplitWidth;
@property (nonatomic) double rightSplitWidth;

- (BOOL)usesUnifiedButtonBar;
- (id)init;
- (void)layoutViewSet:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forAssistantView:(id)a2;
- (void)configureButtonBarsInViewSet:(id)a0 forApplicationAssistantItem:(id)a1 withSystemAssistantItem:(id)a2 withAssistantView:(id)a3;

@end
