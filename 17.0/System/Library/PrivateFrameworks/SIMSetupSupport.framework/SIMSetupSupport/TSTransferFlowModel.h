@class NSString, NSDictionary, NSMutableArray, CTDisplayPlanList;

@interface TSTransferFlowModel : NSObject {
    BOOL _areTransferPlansReady;
    BOOL _hasPendingInstallPlansQueried;
    BOOL _isBootstrapTriggerred;
    BOOL _isBootstrapComplete;
    BOOL _isProximityFlow;
    BOOL _hasCarrierSetupItemsQueried;
}

@property (retain, nonatomic) NSMutableArray *transferItems;
@property (retain, nonatomic) CTDisplayPlanList *pendingInstallItems;
@property (retain, nonatomic) CTDisplayPlanList *carrierSetupItems;
@property (nonatomic) BOOL isActivationPolicyMismatch;
@property (nonatomic) BOOL isDualeSIMCapablityLoss;
@property (nonatomic) BOOL isStandaloneProximityTransfer;
@property (nonatomic) BOOL showTransferredPane;
@property (nonatomic) BOOL isTransferNotSupportedFromiPhone;
@property (retain, nonatomic) NSString *websheetUrl;
@property (retain, nonatomic) NSDictionary *postdata;
@property (retain) id transferBackPlan;
@property (copy) id /* block */ requestCompletion;

+ (id)sharedInstance;

- (void)clearCache;
- (void).cxx_destruct;
- (void)requestPlans:(id)a0 transferablePlanOnSource:(BOOL)a1 bootstrapOnly:(BOOL)a2 completion:(id /* block */)a3;
- (void)arePlansAvailable:(id)a0 transferablePlanOnSource:(BOOL)a1 bootstrapOnly:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)arePlansRequested;
- (void)bootstrap:(id)a0 completion:(id /* block */)a1;
- (void)filterCarrierSetupItems:(id)a0;
- (void)filterTransferPlans:(id)a0;
- (void)forceRecheckTransferableAndPendingInstallPlans;
- (void)getWebsheetInfo:(id)a0 completion:(id /* block */)a1;
- (id)initWithIsStandaloneProximityTransfer:(BOOL)a0 transferBackPlan:(id)a1;
- (void)requestCarrierSetups:(id /* block */)a0;
- (void)requestPendingInstallPlans:(id /* block */)a0;
- (void)requestTransferPlans:(id /* block */)a0;
- (BOOL)shouldShowCarrierSetupPane;
- (BOOL)shouldShowTransferredPane;

@end
