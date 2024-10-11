@class CNMutableContact, CNContactContentViewController;
@protocol CNContactContentViewControllerDelegate;

@interface CNPropertyLinkedCardsAction : CNPropertyAction

@property (retain) CNContactContentViewController *contactController;
@property (retain) CNMutableContact *linkedContact;
@property (weak) id<CNContactContentViewControllerDelegate> contactDelegate;

- (id)initWithContact:(id)a0;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPreferredForImage;
- (void)setPreferredForName;

@end
