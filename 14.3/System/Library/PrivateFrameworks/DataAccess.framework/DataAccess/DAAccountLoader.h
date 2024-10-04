@class NSMutableDictionary;

@interface DAAccountLoader : NSObject

@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountFrameworkSubpath;
@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToAccountDaemonBundleSubpath;
@property (retain, nonatomic) NSMutableDictionary *acAccountTypeToClassNames;
@property (retain, nonatomic) NSMutableDictionary *acParentAccountTypeToChildAccountTypes;

+ (id)sharedInstance;
+ (void)_findPrivateFrameworks;

- (id)init;
- (void).cxx_destruct;
- (Class)daemonAppropriateAccountClassForACAccount:(id)a0;
- (void)_addAccountInfo:(id)a0 forFrameworkNamed:(id)a1;
- (BOOL)_loadFrameworkAtSubpath:(id)a0;
- (void)loadFrameworkForACAccountType:(id)a0;
- (void)loadDaemonBundleForACAccountType:(id)a0;
- (Class)daemonAccountClassForACAccount:(id)a0;
- (Class)clientAccountClassForACAccount:(id)a0;
- (Class)accountClassForACAccount:(id)a0;
- (Class)agentClassForACAccount:(id)a0;

@end
