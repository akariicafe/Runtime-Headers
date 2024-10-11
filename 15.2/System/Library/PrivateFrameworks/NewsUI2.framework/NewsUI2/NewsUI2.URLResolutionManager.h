@interface NewsUI2.URLResolutionManager : NSObject <FCBundleSubscriptionChangeObserver>

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (id)init;

@end
