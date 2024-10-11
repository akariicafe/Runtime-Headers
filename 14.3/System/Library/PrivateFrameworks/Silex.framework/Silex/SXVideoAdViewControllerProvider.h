@class NSString, UIViewController;
@protocol SXVideoAdViewControllerProviding;

@interface SXVideoAdViewControllerProvider : NSObject <SXVideoAdViewControllerProviding>

@property (readonly, weak, nonatomic) id<SXVideoAdViewControllerProviding> viewControllerProvider;
@property (readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewControllerProvider:(id)a0;

@end
