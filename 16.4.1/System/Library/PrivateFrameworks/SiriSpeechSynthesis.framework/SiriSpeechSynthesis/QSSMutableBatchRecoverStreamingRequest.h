@class QSSStartBatchRecoverRequest;

@interface QSSMutableBatchRecoverStreamingRequest : QSSBatchRecoverStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) QSSStartBatchRecoverRequest *contentAsQSSStartBatchRecoverRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
