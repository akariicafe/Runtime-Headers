@interface CKDQueuedZoneFetch : CKDQueuedFetch

- (void)createFetchOperationForItemIDs:(id)a0 operationQueue:(id)a1 operationConfigurationBlock:(id /* block */)a2;
- (void)addRequestForZoneID:(id)a0 forOperation:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
