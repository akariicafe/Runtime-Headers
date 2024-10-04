@interface FPUIManager : NSObject

+ (id)uiExtensionPluginForProviderDomain:(id)a0;
+ (id)createFPUIActionWithIdentifier:(id)a0 uiActionProviderIdentifier:(id)a1 fileProviderIdentifier:(id)a2 displayName:(id)a3 predicate:(id)a4 displayInline:(BOOL)a5 isNonUIAction:(BOOL)a6 fpProviderDomain:(id)a7;
+ (id)actionsForProviderDomain:(id)a0;
+ (void)getUIExtensionPlugin:(id *)a0 nonUIExtensionPlugin:(id *)a1 forProviderDomain:(id)a2;
+ (id)extensionForPlugin:(id)a0;
+ (id)extensionMatchingDictionaryForItems:(id)a0 fpProviderDomain:(id)a1;
+ (id)authenticationActionForProviderDomain:(id)a0;
+ (id)uiActionsForProviderDomain:(id)a0;
+ (BOOL)isAction:(id)a0 eligibleForItems:(id)a1;

@end
