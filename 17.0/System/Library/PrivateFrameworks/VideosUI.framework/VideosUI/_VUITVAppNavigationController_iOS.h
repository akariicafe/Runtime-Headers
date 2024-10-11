@interface _VUITVAppNavigationController_iOS : _VUITVAppNavigationController

@property (nonatomic) BOOL shouldFakeStatusBarVisible;
@property (nonatomic) BOOL shouldPreventContentFromShiftingVertically;
@property (nonatomic) BOOL originalValueForNavigationBarForceFullHeightInLandscape;

- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)didPresentTraitsOverridingViewController;
- (void)willPresentTraitsOverridingViewController;

@end
