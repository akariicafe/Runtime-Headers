@class NSString, NSDictionary, NSNumber, WLKStoreOfferPeriod;

@interface WLKStoreOffer : NSObject

@property (readonly, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic) unsigned long long offerType;
@property (readonly, nonatomic) unsigned long long subscriptionType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) WLKStoreOfferPeriod *renewalPeriod;
@property (readonly, nonatomic) WLKStoreOfferPeriod *freeTrialPeriod;
@property (readonly, nonatomic) WLKStoreOfferPeriod *introOfferPeriod;

+ (id)offersWithSubscriptionDictionaries:(id)a0;
+ (id)offersWithMAPIDictionaries:(id)a0;

- (void).cxx_destruct;
- (id)sui_buttonTitle;
- (id)sui_buttonSubtitleWithServiceName:(id)a0;
- (BOOL)specialOfferEligible;
- (id)initWithSubscriptionDictionary:(id)a0;
- (id)initWithMAPIDictionary:(id)a0;

@end
