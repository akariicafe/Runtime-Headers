@class UIColor, OFUIView;

@interface OKTransitionFadeThruColor : OKTransition {
    OFUIView *_colorView;
}

@property (retain) UIColor *color;

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (void)setSettingColor:(id)a0;
- (void)_transitionInView:(id)a0 fromSubview:(id)a1 toSubview:(id)a2 wasInteractive:(BOOL)a3 duration:(double)a4 doEaseIn:(BOOL)a5 doEaseOut:(BOOL)a6 isCompleting:(BOOL)a7 wasCancelled:(BOOL)a8 fromProgress:(double)a9 completionHandler:(id /* block */)a10;
- (void)makeCurrentTransitionInteractiveWithContext:(id)a0 andProgress:(double)a1;
- (void)startInteractiveTransitionWithContext:(id)a0;
- (void)updateInteractiveTransitionWithContext:(id)a0 andProgress:(double)a1;

@end
