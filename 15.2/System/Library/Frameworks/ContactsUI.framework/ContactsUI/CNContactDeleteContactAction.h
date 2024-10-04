@class CNUICoreRecentsManager, CNUIExternalComponentsFactory;

@interface CNContactDeleteContactAction : CNContactAction

@property (readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory;
@property (readonly, nonatomic) CNUICoreRecentsManager *recentsManager;

- (void)performActionWithSender:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteContact;
- (void)showDeleteFailureAlert;
- (id)initWithContact:(id)a0 recentsManager:(id)a1 componentsFactory:(id)a2;

@end
