@class BMComputeXPCPublisherClient, NSString;

@interface _BMCancellableClientSubscriber : NSObject <BPSCancellable>

@property (retain, nonatomic) BMComputeXPCPublisherClient *client;
@property (copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithClient:(id)a0 identifier:(id)a1;

@end
