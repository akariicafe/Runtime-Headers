@interface FPUIManager : NSObject

+ (id)actionsForProviderDomain:(id)a0;
+ (id)authenticationActionForProviderDomain:(id)a0;
+ (id)createFPUIActionWithIdentifier:(id)a0 uiActionProviderIdentifier:(id)a1 fileProviderIdentifier:(id)a2 displayName:(id)a3 predicate:(id)a4 displayInline:(BOOL)a5 isNonUIAction:(BOOL)a6 fpProviderDomain:(id)a7;
+ (id)extensionMatchingDictionaryForItems:(id)a0 fpProviderDomain:(id)a1;
+ (void)getExtensionRecordsForUseCase:(unsigned long long)a0 uiExtensionRecord:(id *)a1 nonUIExtensionRecord:(id *)a2 forProviderDomain:(id)a3;
+ (BOOL)isAction:(id)a0 eligibleForItems:(id)a1;
+ (id)uiActionsForProviderDomain:(id)a0;

@end
