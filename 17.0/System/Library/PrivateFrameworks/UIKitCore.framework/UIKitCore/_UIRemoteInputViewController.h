@interface _UIRemoteInputViewController : _UIRemoteViewController

+ (BOOL)__shouldHostRemoteTextEffectsWindow;

- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForServiceSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidInvalidateIntrinsicContentSize;

@end
