@class NSString, PKPassGroupView, UIImageView;

@interface PKDashboardPassGroupItemPresenter : NSObject <PKDashboardItemPresenter> {
    PKPassGroupView *_groupView;
    UIImageView *_snapshotView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPassGroupView:(id)a0;
- (Class)itemClass;
- (void)_configureCell:(id)a0 forItem:(id)a1;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;

@end
