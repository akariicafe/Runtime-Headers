@class NSArray, DCPresentmentClient, DCPresentmentSessionOptions;

@interface DCPresentmentSession : NSObject

@property (retain, nonatomic) DCPresentmentClient *client;
@property (retain, nonatomic) NSArray *partitions;
@property (nonatomic) unsigned long long presentmentType;
@property (retain, nonatomic) DCPresentmentSessionOptions *options;
@property (nonatomic) BOOL hasBeenConfigured;

- (void).cxx_destruct;
- (void)buildCredentialResponseForSelection:(id)a0 completion:(id /* block */)a1;
- (void)buildErrorResponseWithStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)buildResponseForSelection:(id)a0 completion:(id /* block */)a1;
- (void)configureIfNeededWithContinuation:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)generateTransportKeyForSpecification:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithPartitions:(id)a0 presentmentType:(unsigned long long)a1;
- (id)initWithPartitions:(id)a0 presentmentType:(unsigned long long)a1 options:(id)a2;
- (void)interpretRequest:(id)a0 completion:(id /* block */)a1;

@end
