@interface LPPlayButtonControlAccessibility : __LPPlayButtonControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityCustomActions;
- (void)_showPlayIndicator:(BOOL)a0;
- (BOOL)_axIsPlaying;
- (void)_axSetIsPlaying:(BOOL)a0;

@end
