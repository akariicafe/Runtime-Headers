@class PKPaymentPass, NSString, NSArray, PKPaymentWebService, UIViewController;
@protocol PKPaymentDataProvider;

@interface PKPaymentPassActionGroupDataController : NSObject <PKRemoteActionGroupViewControllerDelegate, PKSelectActionGroupViewControllerDelegate> {
    PKPaymentPass *_pass;
    NSArray *_actionGroups;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPass:(id)a0 actionGroups:(id)a1 paymentDataProvider:(id)a2 webService:(id)a3;
- (void)remoteGroupActionsViewControllerDidCancel:(id)a0;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)a0;
- (void)selectActionGroupViewControllerDidCancel:(id)a0;
- (void)selectActionGroupViewControllerDidPerformFetchActionGroup:(id)a0;

@end
