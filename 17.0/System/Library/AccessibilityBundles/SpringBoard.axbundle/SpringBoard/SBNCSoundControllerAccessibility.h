@interface SBNCSoundControllerAccessibility : __SBNCSoundControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)playSoundForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (void)stopSoundForNotificationRequest:(id)a0;
- (void)_killSounds;
- (BOOL)_accessibilityIsAlarmRinging;

@end
