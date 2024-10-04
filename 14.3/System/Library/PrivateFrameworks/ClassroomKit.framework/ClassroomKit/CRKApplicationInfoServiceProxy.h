@class CRKValidXPCConnectionProvider;

@interface CRKApplicationInfoServiceProxy : NSObject <CRKApplicationInfoServiceInterface>

@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider;

- (id)init;
- (void).cxx_destruct;
- (void)fetchApplicationWithDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_fetchApplicationWithDescriptor:(id)a0 completion:(id /* block */)a1;

@end
