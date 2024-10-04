@class NSString, CTXPCServiceSubscriptionContext, CTXPCContexts, CTXPCServiceSubscriptionInfo;

@interface FTSelectedPNRSubscriptionCache : NSObject

@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) CTXPCContexts *activeSubscriptionInfo;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *selectedContext;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic) long long dualSIMCapability;

- (id)debugDescription;
- (void).cxx_destruct;

@end
