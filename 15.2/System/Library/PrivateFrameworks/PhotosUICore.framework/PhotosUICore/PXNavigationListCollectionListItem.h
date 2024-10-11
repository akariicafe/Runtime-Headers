@class PHCollectionList;

@interface PXNavigationListCollectionListItem : PXNavigationListDisplayCollectionListItem

@property (readonly, nonatomic) PHCollectionList *collection;

- (id)cpAnalyticsEventName;
- (id)initWithCollectionList:(id)a0 itemCount:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)viewControllerForCollectionWithGridPresentation:(id)a0 existingAssetsFetchResult:(id)a1;

@end
