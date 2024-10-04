@class NSString, DOCViewServiceErrorView;
@protocol DOCViewServiceErrorViewControllerDelegate;

@interface DOCViewServiceErrorViewController : UIViewController <DOCViewServiceErrorViewDelegate> {
    DOCViewServiceErrorView *_errorView;
}

@property (weak) id<DOCViewServiceErrorViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *errorTitle;
@property (retain, nonatomic) NSString *errorSubtitle;

- (void).cxx_destruct;
- (void)loadView;
- (void)didTapTryAgainInErrorView:(id)a0;

@end
