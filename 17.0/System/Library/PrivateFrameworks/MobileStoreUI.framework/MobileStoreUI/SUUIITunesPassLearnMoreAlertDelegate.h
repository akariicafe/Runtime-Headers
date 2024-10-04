@class NSString, SUUIClientContext, SUUIRedeemConfiguration, UIViewController;

@interface SUUIITunesPassLearnMoreAlertDelegate : NSObject <UIAlertViewDelegate> {
    SUUIClientContext *_clientContext;
    SUUIRedeemConfiguration *_redeemConfiguration;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)beginThrottleInterval;
+ (BOOL)shouldShowAlertForRedeem:(id)a0 configuration:(id)a1;

@end
