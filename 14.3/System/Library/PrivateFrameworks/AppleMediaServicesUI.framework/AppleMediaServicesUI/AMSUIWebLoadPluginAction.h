@class NSString, AMSUIWebClientContext;

@interface AMSUIWebLoadPluginAction : NSObject <AMSUIWebActionRunnable>

@property (readonly, nonatomic) AMSUIWebClientContext *context;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;

@end
