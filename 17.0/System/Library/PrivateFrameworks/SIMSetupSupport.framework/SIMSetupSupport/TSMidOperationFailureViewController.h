@class UIBarButtonItem, NSString, NSDictionary, NSError, CoreTelephonyClient, CTCellularPlanItem;
@protocol TSSIMSetupFlowDelegate;

@interface TSMidOperationFailureViewController : TSOBWelcomeController <UINavigationControllerDelegate, TSSIMSetupDelegate, TSSetupFlowItem> {
    BOOL _withBackButton;
    CoreTelephonyClient *_client;
    CTCellularPlanItem *_updatePlanItem;
    NSError *_planItemError;
    NSString *_carrierName;
    NSDictionary *_errorHeaderDetail;
    UIBarButtonItem *_cancelButton;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) BOOL isContinueByUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_buttonAction;
- (void)_doneButtonTapped;
- (void)_disableMismatchedPlan;
- (void)_locationServiceButtonAction;
- (void)_userDidTapCancel;
- (id)initWithPlanItemError:(id)a0 updatePlanItem:(id)a1 withBackButton:(BOOL)a2 forCarrier:(id)a3 withCarrierErrorCode:(id)a4;
- (BOOL)isStartOverRequiredOnBackButtonTapped;
- (void)setDefaultNavigationItems:(id)a0;

@end
