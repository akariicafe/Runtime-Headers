@class NSString, NSUserDefaults;

@interface WAProviderAttributionManager : NSObject

@property (class, readonly, nonatomic) WAProviderAttributionManager *sharedManager;

@property (readonly, nonatomic) NSUserDefaults *weatherUserDefaults;
@property (readonly, nonatomic) NSString *providerName;

- (void).cxx_destruct;
- (id)init;

@end
