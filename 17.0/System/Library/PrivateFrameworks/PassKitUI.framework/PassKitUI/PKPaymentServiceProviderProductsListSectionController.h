@class UIImage, NSArray, UICollectionViewCellRegistration;
@protocol PKPaymentServiceProviderProductsListSectionControllerDelegate;

@interface PKPaymentServiceProviderProductsListSectionController : PKDynamicListSectionController {
    NSArray *_serviceProviderProducts;
}

@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (weak, nonatomic) id<PKPaymentServiceProviderProductsListSectionControllerDelegate> delegate;
@property (retain, nonatomic) UIImage *cardImage;

- (void).cxx_destruct;
- (id)defaultListLayout;
- (void)didSelectItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)initWithIdentifier:(id)a0 image:(id)a1 serviceProviderProducts:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
