@class NSString;

@interface SUScriptAccountPageViewController : SUScriptStorePageViewController

@property (retain) NSString *style;
@property (readonly) NSString *styleNameDefault;
@property (readonly) NSString *styleNameSignUp;
@property (readonly) NSString *styleNameViewAccount;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)newNativeViewController;

@end
