@class UIViewController;

@interface _SBModalViewControllerStackTransition : NSObject {
    UIViewController *_viewController;
    unsigned long long _operation;
    BOOL _animated;
    id /* block */ _completion;
}

- (id)description;
- (void).cxx_destruct;

@end
