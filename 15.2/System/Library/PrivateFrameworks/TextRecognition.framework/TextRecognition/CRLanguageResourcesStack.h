@class NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface CRLanguageResourcesStack : NSObject

@property long long totalResources;
@property (retain) NSMutableArray *availableResources;
@property (retain) NSString *localeIdentifier;
@property (retain) NSObject<OS_dispatch_semaphore> *resourceCountSemaphore;
@property (retain) NSMutableSet *subscribers;
@property long long resourceType;

- (void)addSubscriber:(id)a0;
- (id)initWithLocaleIdentifier:(id)a0 resourceType:(long long)a1;
- (long long)subscriberCount;
- (void).cxx_destruct;
- (id)popResource;
- (void)removeSubscriber:(id)a0;
- (BOOL)hasSubscriber:(id)a0;
- (void)pushResource:(id)a0;

@end
