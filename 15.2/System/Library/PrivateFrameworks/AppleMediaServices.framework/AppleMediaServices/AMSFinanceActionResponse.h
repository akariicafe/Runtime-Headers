@class AMSURLTaskInfo, NSString, NSURL, ACAccount;

@interface AMSFinanceActionResponse : NSObject <AMSFinancePerformable>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *creditString;
@property (nonatomic) long long kind;
@property (nonatomic) BOOL shouldRetry;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo;
@property (nonatomic) BOOL tidContinue;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_presentEngagementForURL:(id)a0 taskInfo:(id)a1;
+ (id)_deepLinkForURL:(id)a0 taskInfo:(id)a1 gotoType:(long long)a2 isAccountURL:(BOOL)a3 tidContinue:(BOOL)a4;
+ (void)handleExternalGotoURL:(id)a0;
+ (id)_bodyObjectFromRequest:(id)a0;
+ (id)handleGotoURL:(id)a0 taskInfo:(id)a1 gotoType:(long long)a2 accountURL:(BOOL)a3 tidContinue:(BOOL)a4 retryOnSuccess:(BOOL)a5;
+ (id)_URLForCommerceUIFromURL:(id)a0 taskInfo:(id)a1 tidContinue:(BOOL)a2;
+ (id)actionWithActionDictionary:(id)a0 taskInfo:(id)a1;
+ (id)actionWithUpdatedCreditString:(id)a0 account:(id)a1 taskInfo:(id)a2;

- (void).cxx_destruct;
- (id)initWithTaskInfo:(id)a0;
- (id)_performCreditDisplayUpdate;
- (id)_handleGotoAction;
- (id)_performOpenStandardURL;
- (id)performWithTaskInfo:(id)a0;
- (id)_performGotoURL;

@end
