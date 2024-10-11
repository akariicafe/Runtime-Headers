@class UITextInputTraits, UIView;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {
    UIView *_springView;
    UIView *_springViewParent;
}

@property (readonly, weak, nonatomic) UITextInputTraits *textInputTraits;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_viewSize;
- (void).cxx_destruct;
- (void)_resetForFailedPasscode:(BOOL)a0;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)a0;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;
- (void)notePasscodeFieldTextDidChange;

@end
