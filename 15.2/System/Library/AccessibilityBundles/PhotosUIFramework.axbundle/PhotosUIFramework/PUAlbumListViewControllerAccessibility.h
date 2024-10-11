@interface PUAlbumListViewControllerAccessibility : __PUAlbumListViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAddCustomContentTypeToCell:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;

@end
