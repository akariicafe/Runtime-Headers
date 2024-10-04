@class NSDictionary;

@interface HDCloudSyncPipelineStageRegisterSubscriptions : HDCloudSyncPipelineStage

@property (readonly, copy, nonatomic) NSDictionary *subscriptions;
@property (nonatomic) BOOL includeSecondaryContainers;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 subscriptions:(id)a2;

@end
