@class NSArray, UIViewController, HFItem;
@protocol HFServiceLikeItem, HUPresentationDelegateHost, HFAccessoryRepresentableItem;

@interface HomeUI.ActionGridViewController : HUControllableItemCollectionViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ actionGridConfig;
    void /* unknown type, empty encoding */ actionGridModule;
    void /* unknown type, empty encoding */ actionGridModuleController;
    void /* unknown type, empty encoding */ accessoryControlDataModel;
    void /* unknown type, empty encoding */ dataModelObserverCancelable;
}

@property (nonatomic) BOOL allowsEditing;
@property (nonatomic, copy) NSArray *denylistedAccessories;
@property (nonatomic, copy) NSArray *allowlistedAccessories;
@property (nonatomic, readonly) BOOL controlsWantSystemPresentationAnimations;

+ (unsigned long long)updateMode;

- (void).cxx_destruct;
- (void)accessoryControlViewControllerFor:(HFItem<HFAccessoryRepresentableItem, HFServiceLikeItem> *)a0 tileItem:(HFItem *)a1 completionHandler:(void (^)(UIViewController<HUPresentationDelegateHost> *))a2;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)configureWithAccessoryControlViewController:(id)a0;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)initUsingCompositionalLayoutWithItemManager:(id)a0;
- (id)initWithItemManager:(id)a0 collectionViewLayout:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1 view:(id)a2;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginLongPressPresentationWithContext:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginPresentationWithContext:(id)a1;
- (id)tappableAreaForPoint:(struct CGPoint { double x0; double x1; })a0 inItem:(id)a1 atIndexPath:(id)a2;
- (void)willDismissWithViewController:(id)a0;

@end
