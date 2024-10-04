@interface SeymourUI.PhoneSessionWatchDiscoveryView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ landscapeConstraints;
    void /* unknown type, empty encoding */ portraitConstraints;
    void /* unknown type, empty encoding */ previousBounds;
    void /* unknown type, empty encoding */ messageStackView;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ spinnerView;
    void /* unknown type, empty encoding */ lookingLabel;
    void /* unknown type, empty encoding */ checkLabel;
    void /* unknown type, empty encoding */ startStandaloneButton;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ connectingView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didTapStartStandaloneButton:(id)a0;

@end
