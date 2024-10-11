@interface TPSKeyboardUtilities : NSObject

+ (id)enabledDictationLanguages;
+ (BOOL)isDictationEnabled;
+ (BOOL)isDictationSelectedForLanguage:(id)a0;
+ (id)_variantForInputMode:(id)a0;
+ (BOOL)hasCustomizedKeyboard;
+ (id)installedInputModes;
+ (BOOL)isAutoCorrectionEnabled;
+ (BOOL)isExtendedSuggestionSupportedForInputMode:(id)a0;
+ (BOOL)isHandwritingEnabledForInputMode:(id)a0;
+ (BOOL)isInputModeInstalledForLanguage:(id)a0;

@end
