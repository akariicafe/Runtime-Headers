@class NSString, EKEventStore;

@interface EKSharedEventStoreProvider : NSObject <EKEventStoreProvider>

@property (readonly, nonatomic) EKEventStore *sharedEventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventStore;
- (id)initWithEventStore:(id)a0;
- (void).cxx_destruct;

@end
