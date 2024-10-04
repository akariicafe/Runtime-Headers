@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction

@property (weak, nonatomic) BCCloudKitController *cloudKitController;

+ (id)transactionNameForEntityName:(id)a0;

- (void).cxx_destruct;
- (double)coalescingDelay;
- (id)initWithCloudKitController:(id)a0 delegate:(id)a1;
- (void)performWorkWithCompletion:(id /* block */)a0;
- (double)transactionLifetimeTimout;

@end
