@interface HealthExperienceUI.MessageWithActionTileView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ bodyLabel;
    void /* unknown type, empty encoding */ actionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separator;
    void /* unknown type, empty encoding */ separatorTopConstraint;
    void /* unknown type, empty encoding */ actionButtonTopConstraint;
    void /* unknown type, empty encoding */ bottomConstraint;
    void /* unknown type, empty encoding */ didTapActionButton;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)didTapAction:(id)a0;

@end
