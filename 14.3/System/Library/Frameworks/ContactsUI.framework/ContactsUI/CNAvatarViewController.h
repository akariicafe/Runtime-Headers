@class CNContactStore, NSString, NSArray, PRPersonaStore, UIView;
@protocol CNAvatarViewControllerDelegate, CNUIObjectViewControllerDelegate, CNUIPRLikenessResolver;

@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController>

@property (readonly, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) PRPersonaStore *personaStore;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;
@property (weak, nonatomic) id<CNAvatarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;

+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)a0;
+ (Class)defaultImplementation;

- (id)initWithSettings:(id)a0;
- (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
