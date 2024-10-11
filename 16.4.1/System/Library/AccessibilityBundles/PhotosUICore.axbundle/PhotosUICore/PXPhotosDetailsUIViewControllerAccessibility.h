@interface PXPhotosDetailsUIViewControllerAccessibility : __PXPhotosDetailsUIViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)_ensureScrollViewController;
- (void)_loadWidgets;
- (BOOL)widgetComposition:(id)a0 requestViewControllerDismissalAnimated:(BOOL)a1;
- (id /* block */)_axDetailsDismissedBlock;
- (void)_axSetDetailsDismissedBlock:(id /* block */)a0;
- (void)_setAXDetailsDismissedBlock:(id /* block */)a0;

@end
