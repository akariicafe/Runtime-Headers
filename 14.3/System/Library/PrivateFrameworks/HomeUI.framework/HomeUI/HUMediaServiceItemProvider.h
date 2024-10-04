@class HMHome, NSMutableSet, NSString;
@protocol HUMediaServiceItemProviderDelegate;

@interface HUMediaServiceItemProvider : HFItemProvider <HFMediaServiceManagerObserver>

@property (class, readonly, copy, nonatomic) id /* block */ itemComparator;

@property (readonly, nonatomic) NSMutableSet *items;
@property (readonly, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HUMediaServiceItemProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (id)reloadItems;
- (void)mediaServicesDidUpdate:(id)a0;
- (void)mediaServiceRemoved:(id)a0;
- (void)defaultMediaServiceDidUpdate:(id)a0;
- (void)mediaServiceDidUpdate:(id)a0;
- (id)initWithHome:(id)a0 delegate:(id)a1;
- (id)_fetchMediaServicesFuture;
- (void)_notifyMediaServicesUpdated;

@end
