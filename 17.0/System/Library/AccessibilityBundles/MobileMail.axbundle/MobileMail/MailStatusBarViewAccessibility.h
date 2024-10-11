@interface MailStatusBarViewAccessibility : __MailStatusBarViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityOverridesInvalidFrames;

@end
