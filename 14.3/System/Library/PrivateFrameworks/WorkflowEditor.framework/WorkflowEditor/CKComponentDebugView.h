@interface CKComponentDebugView : UIView {
    BOOL _selfDestructOnHiding;
}

- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)debugModeDidChange;

@end
