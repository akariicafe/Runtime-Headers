@class NSLayoutConstraint, UITextView, NSMutableDictionary;

@interface QLDebugItemViewController : QLItemViewController {
    BOOL _constraintsSetUp;
    UITextView *_logTextView;
    NSMutableDictionary *_selectorToCount;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

- (void).cxx_destruct;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)_addLog:(id)a0 logLevel:(unsigned long long)a1;
- (void)_encounterMethodCall:(SEL)a0;
- (void)previewIsAppearingWithProgress:(double)a0;
- (void)previewWillFinishAppearing;
- (void)_encounterMethodCall:(SEL)a0 animatedValue:(unsigned long long)a1;
- (id)_attributesForLogLevel:(unsigned long long)a0;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewWillDisappear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;

@end
