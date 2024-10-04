@class PXCMMCloudView, NSString, PXGadgetSpec;
@protocol PXCMMCloudGadgetViewControllerDelegate;

@interface PXCMMCloudGadgetViewController : UIViewController <PXCMMCloudViewViewDelegate, PXGadget> {
    BOOL _isCPLOn;
}

@property (class, nonatomic) BOOL didDismissCloudGadget;

@property (retain, nonatomic) PXCMMCloudView *cloudView;
@property (weak, nonatomic) id<PXCMMCloudGadgetViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *gadgetTitle;
@property (nonatomic) BOOL disableDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

+ (id)_userDefaults;

- (id)initWithSourceType:(unsigned long long)a0;
- (void)_accountStoreDidChange:(id)a0;
- (void)_updateContentInsets;
- (void).cxx_destruct;
- (id)contentViewController;
- (void)completeMyMomentCloudPhotoViewLearnMoreTapped:(id)a0;
- (void)completeMyMomentCloudPhotoViewDismissTapped:(id)a0;
- (void)completeMyMomentCloudPhotoViewSizeThatFitsDidChange:(id)a0;
- (void)_updateCPLStatus;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidLoad;

@end
