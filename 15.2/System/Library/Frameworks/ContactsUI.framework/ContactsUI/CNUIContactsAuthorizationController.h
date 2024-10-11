@class CNUICoreContactsAuthorizationModel, NSString, NSArray, CNUIContactsAuthorizationStore;
@protocol CNUIContactsAuthorizationControllerDelegate;

@interface CNUIContactsAuthorizationController : NSObject

@property (class, readonly, nonatomic) NSString *authorizationPaneFooterLabel;
@property (class, readonly, nonatomic) NSString *authorizationPaneHeaderLabel;
@property (class, readonly, nonatomic) NSString *authorizationPaneContactsAppLabel;
@property (class, readonly, nonatomic) NSArray *validAuthorizationValues;
@property (class, readonly, nonatomic) NSArray *validAuthorizationLabelsForValues;

@property (readonly, nonatomic) CNUIContactsAuthorizationStore *store;
@property (retain, nonatomic) CNUICoreContactsAuthorizationModel *model;
@property (readonly, nonatomic) NSArray *bundleIdentifiersOfAppsWithContactsAccessInfo;
@property (readonly, nonatomic) BOOL foundAppsWithContactsAccessInfo;
@property (nonatomic) id<CNUIContactsAuthorizationControllerDelegate> delegate;

- (id)initWithBundleIdentifier:(id)a0;
- (void)saveModel;
- (id)createModel;
- (void)lazilyLoadIconsForRemoteItems;
- (id)nameOfAppWithBundleIdentifier:(id)a0;
- (id)iconOfAppWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setAuthorizationLevel:(id)a0 ofAppWithBundleIdentifier:(id)a1;
- (id)authorizationLevelOfAppWithBundleIdentifier:(id)a0;

@end
