@class NSString, ACAccount;

@interface AMSBagActiveAccountProvider : NSObject <AMSBagAccountProvider>

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accountLock;
@property (retain, nonatomic) ACAccount *previouslyAccessedAccount;
@property (readonly, nonatomic) BOOL bagLoadShouldUpdateAccountProperties;
@property (readonly, nonatomic) NSString *identity;

+ (id)_bagStorefrontForAccountMediaType:(id)a0 account:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_bagAccountPromiseForAccountMediaType:(id)a0 mustContainStorefront:(BOOL)a1;
- (BOOL)associatedAccountIsEqualToAccount:(id)a0 forMediaType:(id)a1;
- (id)bagAccountForAccountMediaType:(id)a0;
- (id)bagAccountPromiseForAccountMediaType:(id)a0;
- (id)bagStorefrontForAccountMediaType:(id)a0;
- (id)bagStorefrontPromiseForAccountMediaType:(id)a0;

@end
