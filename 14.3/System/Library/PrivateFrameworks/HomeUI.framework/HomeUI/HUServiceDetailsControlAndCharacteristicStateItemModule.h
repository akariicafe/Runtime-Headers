@class NSSet, HFControlPanelItemProvider, HFCharacteristicStateItemProvider;
@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate;

@interface HUServiceDetailsControlAndCharacteristicStateItemModule : HUServiceDetailsItemModule {
    NSSet *_itemProviders;
}

@property (weak, nonatomic) id<HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate> delegate;
@property (readonly, nonatomic) HFCharacteristicStateItemProvider *characteristicStateItemProvider;
@property (readonly, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)itemProviders;
- (BOOL)isServiceGroup;
- (id)sourceServiceItem;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 sourceItem:(id)a2 delegate:(id)a3;
- (id)_createGroupCharacteristicSectionsForItems:(id)a0;
- (id)_createStandaloneCharacteristicSectionsForItems:(id)a0;
- (id)_allCharacteristicTypesForItem:(id)a0;
- (id /* block */)_characteristicStateItemComparator;

@end
