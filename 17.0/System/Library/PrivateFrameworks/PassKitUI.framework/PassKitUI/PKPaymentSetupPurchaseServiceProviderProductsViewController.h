@class NSString, PKPaymentProvisioningController, UIImage, PKPaymentProvisioningMethodMetadata, UIImageView, PKPaymentServiceProviderProductsListSectionController, PKPaymentSetupProduct, PKPaymentSetupCardImageHeaderView, UILabel;
@protocol PKPaymentSetupPurchaseServiceProviderProductsViewControllerFlowDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupPurchaseServiceProviderProductsViewController : PKDynamicCollectionViewController <PKPaymentServiceProviderProductsListSectionControllerDelegate, PKViewControllerPreflightable> {
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
    PKPaymentSetupCardImageHeaderView *_headerView;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    UIImageView *_passView;
    UILabel *_titleLabel;
    UIImage *_cardImage;
    PKPaymentServiceProviderProductsListSectionController *_listSectionController;
}

@property (readonly, nonatomic) PKPaymentSetupProduct *product;
@property (weak, nonatomic) id<PKPaymentSetupPurchaseServiceProviderProductsViewControllerFlowDelegate> flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)didSelectServiceProviderProduct:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 product:(id)a3;

@end
