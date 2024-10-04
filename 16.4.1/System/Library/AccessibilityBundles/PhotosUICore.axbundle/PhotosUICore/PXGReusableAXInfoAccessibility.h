@interface PXGReusableAXInfoAccessibility : __PXGReusableAXInfoAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)applyToInfo:(id)a0;
- (id)accessibilityContainer;
- (id)_axPXGScrollView;

@end
