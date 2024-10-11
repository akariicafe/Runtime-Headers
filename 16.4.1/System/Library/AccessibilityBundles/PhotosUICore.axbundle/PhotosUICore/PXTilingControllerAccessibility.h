@interface PXTilingControllerAccessibility : __PXTilingControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_updateTilesIfNeeded;
- (void)_axUpdateImageViewTile:(id)a0 withIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;

@end
